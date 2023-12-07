#pragma once
// ok i will use same code i use on reboot v3 to add snow map lmao


static inline void EnableFog()
{
	auto SnowSetup = GetSnowSetup();

	if (SnowSetup)
	{
		static auto Onready1 = FindObject<UFunction>(L"/Game/Athena/Apollo/Environments/Blueprints/CalendarEvents/BP_ApolloSnowSetup.BP_ApolloSnowSetup_C.OnReady_E426AA7F4F2319EA06FBA2B9905F0B24");
		static auto Onready2 = FindObject<UFunction>(L"/Game/Athena/Apollo/Environments/Blueprints/CalendarEvents/BP_ApolloSnowSetup.BP_ApolloSnowSetup_C.OnReady_0A511B314AE165C51798519FB84738B8");
		static auto refrehsdmap = FindObject<UFunction>(L"/Game/Athena/Apollo/Environments/Blueprints/CalendarEvents/BP_ApolloSnowSetup.BP_ApolloSnowSetup_C:RefreshMapLocations");

		auto GameState = (AFortGameStateAthena*)GetWorld()->GetGameState();

		GET_PLAYLIST(GameState)

			struct { UObject* GameState; UObject* Playlist; FGameplayTagContainer PlaylistContextTags; } OnReadyParams{ GameState, CurrentPlaylist, FGameplayTagContainer() };

		SnowSetup->ProcessEvent(Onready1, &OnReadyParams);
		SnowSetup->ProcessEvent(Onready2, &OnReadyParams);
		SnowSetup->ProcessEvent(refrehsdmap); // needed?
	}
}

static inline void SetSnowfall(float NewValue) // idk bruh i think setsnow also does this math things who knows
{
	static auto SetSnowfallFn = FindObject<UFunction>(L"/Game/Athena/Apollo/Environments/Blueprints/CalendarEvents/BP_ApolloSnowSetup.BP_ApolloSnowSetup_C.SetSnowFall");
	auto SnowSetup = GetSnowSetup();

	if (SetSnowfallFn && SnowSetup)
	{
		SnowSetup->ProcessEvent(SetSnowfallFn, &NewValue);
	}
}

static inline void SetSnow(float NewValue)
{
	static auto SetSnowFn = FindObject<UFunction>(L"/Game/Athena/Apollo/Environments/Blueprints/CalendarEvents/BP_ApolloSnowSetup.BP_ApolloSnowSetup_C.SetSnow") ? FindObject<UFunction>(L"/Game/Athena/Apollo/Environments/Blueprints/CalendarEvents/BP_ApolloSnowSetup.BP_ApolloSnowSetup_C.SetSnow") :
		FindObject<UFunction>(L"/Game/Athena/Environments/Landscape/Blueprints/BP_SnowSetup.BP_SnowSetup_C.SetSnow");
	auto SnowSetup = GetSnowSetup();

}
		else
		{
			LOG_INFO(LogDev, "Failed TO FIND!");
		}
	}