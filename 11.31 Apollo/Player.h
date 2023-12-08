#pragma once

static inline void (*ServerCreateBuildingActor)(UObject* Context, FFrame* Stack);
void ServerCreateBuildingActorHook(UObject* Context, FFrame* Stack)
{
	auto PC = (AFortPlayerControllerAthena*)Context;

	if (!PC)
		return ServerCreateBuildingActor(Context, Stack);

	auto CreateBuildingData = (FCreateBuildingActorData*)Stack->Locals;

	AFortBroadcastRemoteClientInfo* BroadcastRemoteClientInfo = *(AFortBroadcastRemoteClientInfo**)(__int64(PC) + 0x2ED0);
	if (!BroadcastRemoteClientInfo->RemoteBuildableClass.Get())
		return ServerCreateBuildingActor(Context, Stack);

	static __int64 (*CantBuild)(UObject*, UObject*, FVector, FRotator, char, TArray<ABuildingSMActor*>*, char*) = decltype(CantBuild)(BaseAddress() + 0x19ee0e0);

	TArray<ABuildingSMActor*> ExistingBuildings;
	char Gangster;

	bool bCanBuild = !CantBuild(GetWorld(), BroadcastRemoteClientInfo->RemoteBuildableClass.Get(), CreateBuildingData->BuildLoc, CreateBuildingData->BuildRot, CreateBuildingData->bMirrored, &ExistingBuildings, &Gangster);

	if (bCanBuild)
	{
		for (int i = 0; i < ExistingBuildings.Num(); i++)
		{
			auto ExistingBuilding = ExistingBuildings[i];

			ExistingBuilding->K2_DestroyActor();
		}

		auto NewBuilding = SpawnActor<ABuildingSMActor>(CreateBuildingData->BuildLoc, CreateBuildingData->BuildRot, BroadcastRemoteClientInfo->RemoteBuildableClass.Get());

		if (NewBuilding)
		{

			NewBuilding->bPlayerPlaced = true;
			NewBuilding->SetTeam(((AFortPlayerStateAthena*)PC->PlayerState)->TeamIndex);
			NewBuilding->OnRep_Team();

			NewBuilding->InitializeKismetSpawnedBuildingActor(NewBuilding, PC, true);
		}

	}
	else {
		return ServerCreateBuildingActor(Context, Stack);
	}
	ExistingBuildings.Free();


	return ServerCreateBuildingActor(Context, Stack);
}

// add my code becouse twin dev one is ass

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
		LOG("");
		return;
	}

	EditTool->EditActor = BuildingActorToEdit;
	EditTool->OnRep_EditActor();
	if (Pawn && BuildingActorToEdit)
	{
		static auto EditToolDef = StaticFindObject<UFortItemDefinition>("/Game/Items/Weapons/BuildingTools/EditTool.EditTool");
		if (Pawn->CurrentWeapon->WeaponData != EditToolDef)
		{
			auto EditTool = (AFortWeap_EditingTool*)Pawn->CurrentWeapon;			EditTool->EditActor = BuildingActorToEdit;
			EditTool->EditActor = BuildingActorToEdit;
			EditTool->OnRep_EditActor();
			BuildingActorToEdit->EditingPlayer = (AFortPlayerStateAthena*)PlayerState;
			BuildingActorToEdit->OnRep_EditingPlayer();
		}

		auto EditTool = (AFortWeap_EditingTool*)Pawn->CurrentWeapon;
		EditTool->EditActor = BuildingActorToEdit;
		EditTool->OnRep_EditActor();
		BuildingActorToEdit->EditingPlayer = (AFortPlayerStateAthena*)PlayerState;
		BuildingActorToEdit->OnRep_EditingPlayer();
	}
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
	BuildingActorToStopEditing->OnRep_EditingPlayer();

	if (EditTool)
	{
		EditTool->EditActor = nullptr;
		EditTool->OnRep_EditActor();
	}


}

//equiping code prob worst code recode later
void ServerExecuteInventoryItem(AFortPlayerController* PC, FGuid& ItemGuid)
{
	if (auto Pawn = (AFortPlayerPawn*)PC->Pawn)
	{
		if (auto ItemEntry = Inventory::FindItemEntry(PC, ItemGuid))
		{
			Pawn->EquipWeaponDefinition((UFortWeaponItemDefinition*)ItemEntry->ItemDefinition, ItemEntry->ItemGuid);
		}
	}
}