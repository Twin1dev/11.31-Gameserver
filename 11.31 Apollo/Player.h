#pragma once

static inline void (*ServerCreateBuildingActor)(UObject* Context, FFrame* Stack, void* Ret);
void ServerCreateBuildingActorHook(UObject* Context, FFrame* Stack, void* Ret)
{
	auto PC = (AFortPlayerControllerAthena*)Context;

	if (!PC)
		return ServerCreateBuildingActor(Context, Stack, Ret);

	auto CreateBuildingData = (FCreateBuildingActorData*)Stack->Locals; 

	
	if (!PC->BroadcastRemoteClientInfo->RemoteBuildableClass)
		return ServerCreateBuildingActor(Context, Stack, Ret);

	static __int64 (*CantBuild)(UObject*, UObject*, FVector, FRotator, char, TArray<ABuildingSMActor*>*, char*) = decltype(CantBuild)(BaseAddress() + 0x19ee0e0);

	TArray<ABuildingSMActor*> ExistingBuildings;
	char Gangster;

	bool bCanBuild = !CantBuild(UWorld::GetWorld(), PC->BroadcastRemoteClientInfo->RemoteBuildableClass, CreateBuildingData->BuildLoc, CreateBuildingData->BuildRot, CreateBuildingData->bMirrored, &ExistingBuildings, &Gangster);

	if (bCanBuild)
	{
		for (int i = 0; i < ExistingBuildings.Num(); i++)
		{
			auto ExistingBuilding = ExistingBuildings[i];

			ExistingBuilding->K2_DestroyActor();
		}

		auto NewBuilding = SpawnActor<ABuildingSMActor>(CreateBuildingData->BuildLoc, CreateBuildingData->BuildRot, PC->BroadcastRemoteClientInfo->RemoteBuildableClass);

		if (NewBuilding)
		{
			ExistingBuildings.Free();

			NewBuilding->bPlayerPlaced = true;
			NewBuilding->SetTeam(((AFortPlayerStateAthena*)PC->PlayerState)->TeamIndex);
			NewBuilding->OnRep_Team();

			NewBuilding->InitializeKismetSpawnedBuildingActor(NewBuilding, PC, true);
		}

	}
	else {
		ExistingBuildings.Free();
		return ServerCreateBuildingActor(Context, Stack, Ret);
	}


	return ServerCreateBuildingActor(Context, Stack, Ret);
}


void ServerAttemptAircraftJumpHook(UFortControllerComponent_Aircraft* Comp, FRotator ClientRotation)
{
	AFortPlayerControllerAthena* PC = (AFortPlayerControllerAthena*)Comp->GetOwner();

	GetGameMode()->RestartPlayer(PC);

	if (PC->MyFortPawn)
	{
		PC->MyFortPawn->BeginSkydiving(true);
		PC->MyFortPawn->SetHealth(100);
	}
}

void (*ServerReadyToStartMatch)(AFortPlayerControllerAthena*);
void ServerReadyToStartMatchHook(AFortPlayerControllerAthena* PlayerController)
{
	return ServerReadyToStartMatch(PlayerController);
}

// holy frickin proper!
static void ServerBeginEditingBuildingActorHook(AFortPlayerController* PlayerController, ABuildingSMActor* BuildingActorToEdit)
{
	// for some reason this happens where i cant edit the building anymore
	if (!BuildingActorToEdit || !BuildingActorToEdit->bPlayerPlaced)
	{
		LOG("buh??");
		return;
	}

	auto Pawn = PlayerController->MyFortPawn;

	if (!Pawn)
	{
		LOG("no pawn???????");
		return;
	}

	auto PlayerState = Cast<AFortPlayerStateZone>(Pawn->PlayerState);

	if (!PlayerState)
	{
		LOG("no playerstaet");
		return;
	}

	if (!BuildingActorToEdit->EditingPlayer)
	{
		BuildingActorToEdit->SetNetDormancy((ENetDormancy)(2 - (PlayerState != 0)));
		BuildingActorToEdit->EditingPlayer = PlayerState;
	}

	static auto EditToolDef = StaticFindObject<UFortWeaponItemDefinition>("/Game/Items/Weapons/BuildingTools/EditTool.EditTool");

	auto ToolInstance = FindItemInstanceByDef(PlayerController, EditToolDef);

	if (!ToolInstance)
	{
		LOG("No ToolInstance");
		return;
	}

	Pawn->EquipWeaponDefinition(EditToolDef, ToolInstance->ItemEntry.ItemGuid);

	auto EditTool = Cast<AFortWeap_EditingTool>(Pawn->CurrentWeapon);

	if (!EditTool)
	{
		LOG("No EditTool");
		return;
	}

	EditTool->EditActor = BuildingActorToEdit;
	EditTool->OnRep_EditActor();
}

static inline void (*ServerEditBuildingActor)(UObject*, FFrame&, void*);
static void ServerEditBuildingActorHook(UObject* Context, FFrame& Stack, void* Ret)
{
	auto PC = (AFortPlayerController*)Context;

	auto PlayerState = (AFortPlayerStateAthena*)PC->PlayerState;

	auto Params = (AFortPlayerController_ServerEditBuildingActor_Params*)Stack.Locals;

	if (!Params->BuildingActorToEdit || !Params->NewBuildingClass.Get() || Params->BuildingActorToEdit->bDestroyed || Params->BuildingActorToEdit->EditingPlayer != PlayerState)
	{
		LOG("shaboing!");
		return ServerEditBuildingActor(Context, Stack, Ret);
	}


	Params->BuildingActorToEdit->EditingPlayer = nullptr;


	static ABuildingSMActor* (*BuildingSMActorReplaceBuildingActor)(ABuildingSMActor*, __int64, UClass*, int, int, uint8_t, AFortPlayerController*) =
		decltype(BuildingSMActorReplaceBuildingActor)(BaseAddress() + 0x1782040);

	if (auto BuildingActor = BuildingSMActorReplaceBuildingActor(Params->BuildingActorToEdit, 1, Params->NewBuildingClass.Get(), Params->BuildingActorToEdit->CurrentBuildingLevel, Params->RotationIterations, Params->bMirrored, PC))
	{
		BuildingActor->bPlayerPlaced = true;

		BuildingActor->SetTeam(PlayerState->TeamIndex);
		BuildingActor->OnRep_Team();
	}

	return ServerEditBuildingActor(Context, Stack, Ret);
}

static void ServerEndEditingBuildingActor(AFortPlayerController* PlayerController, ABuildingSMActor* BuildingActorToStopEditing)
{
	auto Pawn = PlayerController->MyFortPawn;
	if (!BuildingActorToStopEditing || !Pawn || BuildingActorToStopEditing->EditingPlayer != (AFortPlayerStateZone*)PlayerController->PlayerState || BuildingActorToStopEditing->bDestroyed)
	{
		LOG("boing");
		return;
	}

	static auto EditToolDef = StaticFindObject<UFortWeaponItemDefinition>("/Game/Items/Weapons/BuildingTools/EditTool.EditTool");

	auto ToolInstance = FindItemInstanceByDef(PlayerController, EditToolDef);

	if (!ToolInstance)
	{
		LOG("no toolinstanceend");
		return;
	}

	Pawn->EquipWeaponDefinition(EditToolDef, ToolInstance->ItemEntry.ItemGuid);

	// smart guy!
	auto EditTool = Cast<AFortWeap_EditingTool>(Pawn->CurrentWeapon);

	BuildingActorToStopEditing->EditingPlayer = nullptr;
	//BuildingActorToStopEditing->OnRep_EditingPlayer();

	if (EditTool)
	{
		EditTool->EditActor = nullptr;
		EditTool->OnRep_EditActor();
	}


}