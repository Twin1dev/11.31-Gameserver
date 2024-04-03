#pragma once

static bool bRTSM = false;
bool (*ReadyToStartMatch)(AFortGameModeAthena* GameMode);
bool ReadyToStartMatchHook(AFortGameModeAthena* GameMode)
{
	
	TArray<AActor*> WarmupActors;
	GetDefaultObject<UGameplayStatics>()->GetAllActorsOfClass(UWorld::GetWorld(), AFortPlayerStartWarmup::StaticClass(), &WarmupActors);

	int WarmupSpots = WarmupActors.Num();

	WarmupActors.Free();

	if (WarmupSpots == 0)
		return false;

	if (!bRTSM)
	{
		bRTSM = true;

		UFortPlaylistAthena* Playlist = StaticFindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo");
		
		GameMode->WarmupRequiredPlayerCount = 1;

		GetGameState()->CurrentPlaylistInfo.BasePlaylist = Playlist;
		GetGameState()->CurrentPlaylistInfo.OverridePlaylist = Playlist;
		GetGameState()->CurrentPlaylistInfo.PlaylistReplicationKey++;
		GetGameState()->CurrentPlaylistInfo.MarkArrayDirty();
		GetGameState()->OnRep_CurrentPlaylistInfo();

		UWorld::GetWorld()->NetDriver = CreateNetDriver(UFortEngine::GetEngine(), UWorld::GetWorld(), GetDefaultObject<UKismetStringLibrary>()->Conv_StringToName(L"GameNetDriver"));

		if (UWorld::GetWorld()->NetDriver)
		{
			UWorld::GetWorld()->NetDriver->World = UWorld::GetWorld();
			UWorld::GetWorld()->NetDriver->NetDriverName = GetDefaultObject<UKismetStringLibrary>()->Conv_StringToName(L"GameNetDriver");

			FString Err;
			auto URL = FURL();
			URL.Port = 7777;

			InitListen(UWorld::GetWorld()->NetDriver, UWorld::GetWorld(), URL, true, Err);
			SetWorld(UWorld::GetWorld()->NetDriver, UWorld::GetWorld());

			ServerReplicateActors = decltype(ServerReplicateActors)(UWorld::GetWorld()->NetDriver->ReplicationDriver->Vft[0x59]);

			GetGameMode()->GameSession->MaxPlayers = 100;

			UWorld::GetWorld()->LevelCollections[0].NetDriver = UWorld::GetWorld()->NetDriver;
			UWorld::GetWorld()->LevelCollections[1].NetDriver = UWorld::GetWorld()->NetDriver;

			LOG("Listening on Port 7777");
		}

		GetGameState()->PlayersLeft--;
		GetGameState()->OnRep_PlayersLeft();
		GetGameMode()->bWorldIsReady = true;
	}

	bool ret = true;
	return ret;
}

static void (*HandleStartingNewPlayer)(AFortGameModeAthena*, AFortPlayerControllerAthena*);
static bool bFirstPlayer = false;
void HandleStartingNewPlayerHook(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* NewPlayer)
{
	if (!bFirstPlayer)
	{
		bFirstPlayer = true;

		// prolly should be uclass!!
		auto SnowSetup = StaticFindObject<UObject>("/Game/Athena/Apollo/Maps/Apollo_POI_Foundations.Apollo_POI_Foundations:PersistentLevel.BP_ApolloSnowSetup_2");

		if (SnowSetup)
		{
			auto SnowAmount = StaticFindObject<UFloatProperty>("/Game/Athena/Apollo/Environments/Blueprints/CalendarEvents/BP_ApolloSnowSetup.BP_ApolloSnowSetup_C:SnowAmount");
			auto SnowFalling = StaticFindObject<UFloatProperty>("/Game/Athena/Apollo/Environments/Blueprints/CalendarEvents/BP_ApolloSnowSetup.BP_ApolloSnowSetup_C:SnowFalling");

			if (SnowAmount && SnowFalling)
			{
				*(float*)(__int64(SnowSetup) + SnowAmount->Offset) = 100.f;
				*(float*)(__int64(SnowSetup) + SnowFalling->Offset) = 69.f;

				auto OnRep_Snow_Amount = SnowSetup->Class->GetFunction("BP_ApolloSnowSetup_C", "OnRep_Snow_Amount");
				auto OnRep_SnowFalling = SnowSetup->Class->GetFunction("BP_ApolloSnowSetup_C", "OnRep_SnowFalling");

				if (OnRep_Snow_Amount)
				{
					bool bHasAuth = true;
					SnowSetup->ProcessEvent(OnRep_Snow_Amount, &bHasAuth);
					SnowSetup->ProcessEvent(OnRep_SnowFalling, &bHasAuth);
				}
			}
		}
	}

	return HandleStartingNewPlayer(GameMode, NewPlayer);
}


APawn* SpawnDefaultPawnForHook(AGameModeBase* GameMode, AController* NewPlayer, AActor* StartSpot)
{
	auto Transform = StartSpot->GetTransform();

	auto NewPawn = GameMode->SpawnDefaultPawnAtTransform(NewPlayer, Transform);

	for (int i = 0; i < GetGameMode()->StartingItems.Num(); i++)
	{
		auto NewItem = GetGameMode()->StartingItems[i];

		if (!NewItem.Item)
			continue;

		GivePCItem((AFortPlayerController*)NewPlayer, NewItem.Item, NewItem.Count);
	}

	Update((AFortPlayerController*)NewPlayer);

	// prolly should check and cast
	auto PS = (AFortPlayerStateAthena*)NewPlayer->PlayerState;

	GivePlayerStateAbilitySet(PS);



	return NewPawn;
}


static inline void (*OnDamageServer)(ABuildingActor* BuildingActor, float Damage, FGameplayTagContainer DamageTags, FVector Momentum, __int64 HitInfo, APlayerController* InstigatedBy, AActor* DamageCauser, __int64 EffectContext);
void OnDamageServerHook(ABuildingActor* BuildingActor, float Damage, FGameplayTagContainer DamageTags, FVector Momentum, __int64 HitInfo, APlayerController* InstigatedBy, AActor* DamageCauser, __int64 EffectContext)
{
	auto BuildingSMActor = Cast<ABuildingSMActor>(BuildingActor);
	auto PlayerController = Cast<AFortPlayerControllerAthena>(InstigatedBy);
	auto Weapon = Cast<AFortWeapon>(DamageCauser);

	if (!BuildingSMActor)
		return OnDamageServer(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

	if (BuildingSMActor->bDestroyed)
		return OnDamageServer(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

	if (!PlayerController || !Weapon)
		return OnDamageServer(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

	auto WeaponData = Cast<UFortWeaponMeleeItemDefinition>(Weapon->WeaponData);

	if (!WeaponData)
		return OnDamageServer(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

	auto ResourceItemDefinition = GetDefaultObject<UFortKismetLibrary>()->K2_GetResourceItemDefinition(BuildingSMActor->ResourceType);

	if (!ResourceItemDefinition)
		return OnDamageServer(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

	int ResourceCount = 0;

	if (BuildingSMActor->BuildingResourceAmountOverride.RowName.ComparisonIndex > 0)
	{
		static UCurveTable* AthenaResourceRates = StaticFindObject<UCurveTable>("/Game/Athena/Balance/DataTables/AthenaResourceRates.AthenaResourceRates");

		EEvaluateCurveTableResult shutthefuckup{};
		float OutXY{};

		GetDefaultObject<UDataTableFunctionLibrary>()->EvaluateCurveTableRow(AthenaResourceRates, BuildingSMActor->BuildingResourceAmountOverride.RowName, 0.f, &shutthefuckup, &OutXY, FString());

		float ResourceCountNotRounded = OutXY / (BuildingActor->GetMaxHealth() / Damage);

		ResourceCount = round(ResourceCountNotRounded);
	}

	if (ResourceCount <= 0)
		return OnDamageServer(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);

	bool bIsWeakspot = Damage == 100.0f;

	PlayerController->ClientReportDamagedResourceBuilding(BuildingSMActor, BuildingSMActor->ResourceType, ResourceCount, false, bIsWeakspot);

	GivePCItem(PlayerController, ResourceItemDefinition, ResourceCount);

	Update(PlayerController);

	return OnDamageServer(BuildingActor, Damage, DamageTags, Momentum, HitInfo, InstigatedBy, DamageCauser, EffectContext);
}

namespace GameMode
{
	void InitHooks()
	{
		auto DefaultGameMode = StaticFindObject<AFortGameModeAthena>("/Script/FortniteGame.Default__FortGameModeAthena");

		VirtualHook(DefaultGameMode->Vft, 254, ReadyToStartMatchHook, (PVOID*)&ReadyToStartMatch);
		VirtualHook(DefaultGameMode->Vft, 197, SpawnDefaultPawnForHook);
		VirtualHook(DefaultGameMode->Vft, 203, HandleStartingNewPlayerHook, (PVOID*)&HandleStartingNewPlayer);

		CREATEHOOK(BaseAddress() + 0x2176a20, OnDamageServerHook, &OnDamageServer);
	}
}
