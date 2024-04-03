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


static inline void (*ClientOnPawnDied)(AFortPlayerController*, FFortPlayerDeathReport);
void ClientOnPawnDiedHook(AFortPlayerController* DeadPlayerController, FFortPlayerDeathReport DeathReport)
{
	auto DeadPawn = (AFortPlayerPawnAthena*)(DeadPlayerController->Pawn);
	auto DeadPlayerState = (AFortPlayerStateAthena*)(DeadPlayerController->PlayerState);

	static bool bFirstDeath = false;

	if (!DeadPawn || !DeadPlayerState || !DeadPlayerController->WorldInventory)
		return ClientOnPawnDied(DeadPlayerController, DeathReport);

	auto CorrectTags = *(FGameplayTagContainer*)(__int64(DeadPawn) + 0x1530);

	FGameplayTagContainer Tags;

	for (int i = 0; i < CorrectTags.GameplayTags.Num(); ++i)
	{
		Tags.GameplayTags.Add(CorrectTags.GameplayTags[i]);
	}

	for (int i = 0; i < CorrectTags.ParentTags.Num(); ++i)
	{
		Tags.ParentTags.Add(CorrectTags.ParentTags[i]);
	}

	FDeathInfo DeathInfo;
	DeathInfo.bDBNO = DeadPawn->bIsDBNO;
	DeathInfo.DeathLocation = DeadPawn->K2_GetActorLocation();
	DeathInfo.DeathTags = Tags;
	DeathInfo.bInitialized = true;
	DeathInfo.DeathCause = AFortPlayerStateAthena::GetDefaultObj()->ToDeathCause(CorrectTags, false);
	DeathInfo.FinisherOrDowner = DeathReport.KillerPlayerState ? DeathReport.KillerPlayerState : DeadPlayerState;
	DeathInfo.Distance = DeathInfo.DeathCause == EDeathCause::FallDamage ? DeadPawn->LastFallDistance : (DeathReport.KillerPawn ? DeathReport.KillerPawn->GetDistanceTo(DeadPawn) : 0);

	DeadPlayerState->PawnDeathLocation = DeathInfo.DeathLocation;
	DeadPlayerState->DeathInfo = DeathInfo;
	DeadPlayerState->OnRep_DeathInfo();

	if (DeathReport.KillerPlayerState && DeathReport.KillerPlayerState != DeadPlayerState)
	{
		((AFortPlayerStateAthena*)DeathReport.KillerPlayerState)->KillScore++;
		((AFortPlayerStateAthena*)DeathReport.KillerPlayerState)->TeamKillScore++;

		((AFortPlayerStateAthena*)DeathReport.KillerPlayerState)->ClientReportKill(DeadPlayerState);
		((AFortPlayerStateAthena*)DeathReport.KillerPlayerState)->OnRep_Kills();
	}

	for (int i = 0; i < DeadPlayerController->WorldInventory->Inventory.ItemInstances.Num(); i++)
	{
		auto CurrentInstance = DeadPlayerController->WorldInventory->Inventory.ItemInstances[i];

		if (!CurrentInstance)
			continue;

		if (!CurrentInstance->ItemEntry.ItemDefinition)
			continue;

		if (((UFortWorldItemDefinition*)CurrentInstance->ItemEntry.ItemDefinition)->bCanBeDropped)
		{
			SpawnPickup(CurrentInstance->ItemEntry.ItemDefinition, DeathInfo.DeathLocation, CurrentInstance->ItemEntry.Count, 0, EFortPickupSourceTypeFlag::Player, EFortPickupSpawnSource::PlayerElimination);

			if (CurrentInstance->ItemEntry.Count != 0)
			{
				RemoveItemFromPC(DeadPlayerController, CurrentInstance->ItemEntry.ItemGuid, CurrentInstance->ItemEntry.Count);
			}
		}
	}

	Update(DeadPlayerController);

	if (!DeadPawn->bIsDBNO)
	{
		static void (*removeFromAlivePlayers)(AFortGameModeAthena * GameMode, AFortPlayerControllerAthena * PlayerController, APlayerState * PlayerState, APawn * FinisherPawn,
			UFortWeaponItemDefinition * FinishingWeapon, EDeathCause DeathCause, char a7)
			= decltype(removeFromAlivePlayers)(BaseAddress() + 0x15413f0);

		AActor* DamageCauser = DeathReport.DamageCauser;
		UFortWeaponItemDefinition* KillerWeaponDef = nullptr;

		if (auto ProjectileBase = Cast<AFortProjectileBase>(DamageCauser))
			KillerWeaponDef = ((AFortWeapon*)ProjectileBase->GetOwner())->WeaponData;
		if (auto Weapon = Cast<AFortWeapon>(DamageCauser))
			KillerWeaponDef = Weapon->WeaponData;

		removeFromAlivePlayers(GetGameMode(), (AFortPlayerControllerAthena*)DeadPlayerController, ((AFortPlayerStateAthena*)DeathReport.KillerPlayerState) == DeadPlayerState ? nullptr : ((AFortPlayerStateAthena*)DeathReport.KillerPlayerState), DeathReport.KillerPawn, KillerWeaponDef, DeathInfo.DeathCause, 0);
	}

	return ClientOnPawnDied(DeadPlayerController, DeathReport);
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
namespace Player
{
	void InitHooks()
	{
		auto DefaultFortPlayerController = StaticFindObject<AFortPlayerController>("/Script/FortniteGame.Default__FortPlayerControllerAthena");

		VirtualHook(DefaultFortPlayerController->Vft, 617, ServerReadyToStartMatchHook, (PVOID*)&ServerReadyToStartMatch);
		VirtualHook(GetDefaultObject<UFortControllerComponent_Aircraft>()->Vft, 130, ServerAttemptAircraftJumpHook);

		auto ServerCreateBuildingActorFn = StaticFindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerCreateBuildingActor");
		HookExec(ServerCreateBuildingActorFn, ServerCreateBuildingActorHook, (PVOID*)&ServerCreateBuildingActor);

		VirtualHook(DefaultFortPlayerController->Vft, 567, ServerBeginEditingBuildingActorHook);

		auto ServerEditBuildingActorFn = StaticFindObject<UFunction>("/Script/FortniteGame.FortPlayerController.ServerEditBuildingActor");
		HookExec(ServerEditBuildingActorFn, ServerEditBuildingActorHook, (PVOID*)&ServerEditBuildingActor);

		CREATEHOOK(BaseAddress() + 0x2446300, ClientOnPawnDiedHook, &ClientOnPawnDied);

		VirtualHook(DefaultFortPlayerController->Vft, 565, ServerEndEditingBuildingActor);
	}
}