#pragma once

// temp

static bool RTSM = false;
static bool afterPre = false;
void (*ProcessEvent)(UObject*, UFunction*, void*);
void ProcessEventHook(UObject* pObject, UFunction* pFunction, void* pParams)
{
	auto FuncName = pFunction->GetName();
	auto FullName = pFunction->GetFullName();


	if (FuncName == "ServerExecuteInventoryItem")
	{
		auto Params = (AFortPlayerController_ServerExecuteInventoryItem_Params*)pParams;
		auto PC = (AFortPlayerControllerAthena*)pObject;
		auto Pawn = (AFortPlayerPawnAthena*)PC->Pawn;

		if (!Pawn)
			return ProcessEvent(pObject, pFunction, pParams);

		auto ItemDef = FindItemDefFromGuid(PC, Params->ItemGuid);
		if (!ItemDef)
			return ProcessEvent(pObject, pFunction, pParams);

		Pawn->EquipWeaponDefinition((UFortWeaponItemDefinition*)ItemDef, Params->ItemGuid);
	}

	if (FuncName == "ServerAcknowledgePossession")
	{
		auto Params = (APlayerController_ServerAcknowledgePossession_Params*)pParams;
		auto PC = (AFortPlayerControllerAthena*)pObject;
		auto Pawn = (AFortPlayerPawnAthena*)PC->Pawn;
		auto PlayerState = (AFortPlayerStateAthena*)PC->PlayerState;

		PC->AcknowledgedPawn = Params->P;

		Pawn->CosmeticLoadout = PC->CosmeticLoadoutPC;
		Pawn->OnRep_CosmeticLoadout();
	}

	if (FuncName == "ServerAttemptAircraftJump") //jump bus YAY!!! credits jyzo i love u thx all
	{
		auto PC = Cast<AController>(((UActorComponent*)pObject)->GetOwner()); //jump bus YAY!!! credits jyzo i love u thx all
		if (PC)
			GetGameMode()->RestartPlayer(PC); //jump bus YAY!!! credits jyzo i love u thx all
	}

	//if (FuncName == "OnBuildingActorInitialized")
	//{
	//	auto Params = (ABuildingActor_OnBuildingActorInitialized_Params*)pParams;
	//	auto BuildingActor = (ABuildingActor*)pObject;

	//	

	//	if (BuildingActor->GetFullName().contains("FloorLoot"))
	//	{
	//		auto BuildingContainer = (ABuildingContainer*)BuildingActor;

	//		std::vector<FFortItemEntry> LootDrops = PickLootDrops(BuildingContainer->SearchLootTierGroup);

	//		auto Location = BuildingContainer->K2_GetActorLocation();
	//		Location.Z += 50;

	//		if (LootDrops.size())
	//		{
	//			for (auto& LootDrop : LootDrops)
	//				SpawnPickup(LootDrop.ItemDefinition, Location, LootDrop.Count, 0, EFortPickupSourceTypeFlag::FloorLoot);
	//		}
	//	}
	//}


	if (FuncName == "ServerLoadingScreenDropped")
	{
		auto PC = (AFortPlayerControllerAthena*)pObject;
		auto PlayerState = (AFortPlayerStateAthena*)PC->PlayerState;
		auto Pawn = (AFortPlayerPawnAthena*)PC->Pawn;

		GetDefaultObject<UFortKismetLibrary>()->UpdatePlayerCustomCharacterPartsVisualization(PlayerState);

		PlayerState->ForceNetUpdate();
		Pawn->ForceNetUpdate();
		PC->ForceNetUpdate();

		GivePCItem(PC, StaticFindObject<UAthenaPickaxeItemDefinition>("/Game/Athena/Items/Cosmetics/Pickaxes/DefaultPickaxe.DefaultPickaxe")->WeaponDefinition, 1);

		Update(PC);
	}
	return ProcessEvent(pObject, pFunction, pParams);
}


static __int64 (*DispatchRequest)(__int64 a1, __int64* a2, int a3);

static __int64 DispatchRequestHook(__int64 a1, __int64* a2, int a3)
{
	return DispatchRequest(a1, a2, 3);
}


void GameSessionDetour()
{

}

static inline void (*KickPlayer)(AGameSession*, AController*);
static void KickPlayerHook(AGameSession*, AController*) { return; }

static char(__fastcall* ValidationFailure)(__int64* a1, __int64 a2);

char __fastcall ValidationDetour(__int64* a1, __int64 a2)
{
	LOG("Validation");
	return 0;
}

static bool nomcphook() { return true; }
bool cghook() { return true; }