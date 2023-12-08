#pragma once

static bool bRTSM = false;
bool (*ReadyToStartMatch)(AFortGameModeAthena* GameMode);
bool ReadyToStartMatchHook(AFortGameModeAthena* GameMode)
{

	TArray<AActor*> WarmupActors;
	GetDefaultObject<UGameplayStatics>()->GetAllActorsOfClass(GetWorld(), AFortPlayerStartWarmup::StaticClass(), &WarmupActors);

	int WarmupSpots = WarmupActors.Num();

	WarmupActors.Free();

	if (WarmupSpots == 0)
		return false;

	if (!bRTSM)
	{
		bRTSM = true;

		UFortPlaylistAthena* Playlist = StaticFindObject<UFortPlaylistAthena>("/Game/Athena/Playlists/Playlist_DefaultSolo.Playlist_DefaultSolo");

		GetGameState()->CurrentPlaylistInfo.BasePlaylist = Playlist;
		GetGameState()->CurrentPlaylistInfo.OverridePlaylist = Playlist;
		GetGameState()->CurrentPlaylistInfo.PlaylistReplicationKey++;
		GetGameState()->CurrentPlaylistInfo.MarkArrayDirty();
		GetGameState()->OnRep_CurrentPlaylistInfo();

		GetWorld()->NetDriver = CreateNetDriver(GetEngine(), GetWorld(), GetDefaultObject<UKismetStringLibrary>()->Conv_StringToName(L"GameNetDriver"));

		if (GetWorld()->NetDriver)
		{
			GetWorld()->NetDriver->World = GetWorld();
			GetWorld()->NetDriver->NetDriverName = GetDefaultObject<UKismetStringLibrary>()->Conv_StringToName(L"GameNetDriver");

			FString Err;
			auto URL = FURL();
			URL.Port = 7777;

			InitListen(GetWorld()->NetDriver, GetWorld(), URL, true, Err);
			SetWorld(GetWorld()->NetDriver, GetWorld());

			GetGameMode()->GameSession->MaxPlayers = 100;

			GetWorld()->LevelCollections[0].NetDriver = GetWorld()->NetDriver;
			GetWorld()->LevelCollections[1].NetDriver = GetWorld()->NetDriver;

			LOG("Listening on Port 7777");
		}

		GetGameState()->PlayersLeft--;
		GetGameState()->OnRep_PlayersLeft();
		GetGameMode()->bWorldIsReady = true;

		auto BRIsland_FloorLoot = StaticFindObject<UBlueprintGeneratedClass>("/Game/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_01.Tiered_Athena_FloorLoot_01_C");
		auto SpawnIsland_FloorLoot = StaticFindObject<UBlueprintGeneratedClass>("/Game/Athena/Environments/Blueprints/Tiered_Athena_FloorLoot_Warmup.Tiered_Athena_FloorLoot_Warmup_C");

		TArray<AActor*> SpawnIslandActors;
		TArray<AActor*> BRIslandActors;

		GetDefaultObject<UGameplayStatics>()->GetAllActorsOfClass(GetWorld(), SpawnIsland_FloorLoot, &SpawnIslandActors);
		GetDefaultObject<UGameplayStatics>()->GetAllActorsOfClass(GetWorld(), BRIsland_FloorLoot, &BRIslandActors);

		GetGameMode()->WarmupRequiredPlayerCount = 1;
	}

	bool ret = true;
	return ret;
}

static void (*HandleStartingNewPlayer)(AFortGameModeAthena*, AFortPlayerControllerAthena*);
static bool bFirstPlayer = false;
void HandleStartingNewPlayerHook(AFortGameModeAthena* GameMode, AFortPlayerControllerAthena* NewPlayer)
{
	auto PlayerState = (AFortPlayerStateAthena*)NewPlayer->PlayerState;

	NewPlayer->bHasServerFinishedLoading = true;
	NewPlayer->bHasClientFinishedLoading = true;
	NewPlayer->OnRep_bHasServerFinishedLoading();

	PlayerState->bHasStartedPlaying = true;
	PlayerState->bHasFinishedLoading = true;
	PlayerState->OnRep_bHasStartedPlaying();

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