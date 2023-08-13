#pragma once
#include "Includes.h"
namespace NetHooks
{
	__int64 GetNetMode(UWorld* a1)
	{
		return 1;
	}

	__int64 GetNetModeActor(AActor* a1)
	{
		return 1;
	}

	inline void (*ServerReplicateActors)(UReplicationDriver*);


	inline void (*TickFlush)(UNetDriver*);
	inline void TickFlushHook(UNetDriver* Driver)
	{
		auto NetDriver = GetWorld()->NetDriver;
		if (NetDriver->ReplicationDriver)
			reinterpret_cast<void(*)(UReplicationDriver*)>(NetDriver->ReplicationDriver->Vft[0x59])(NetDriver->ReplicationDriver);
		
		if (GetAsyncKeyState(VK_F6) & 1)
		{
			auto GameMode = (AFortGameModeAthena*)GetWorld()->AuthorityGameMode;
			static void (*StartAircraft)(AFortGameModeAthena*, bool) = decltype(StartAircraft)(BaseAddress() + 0x154e080);
			StartAircraft(GameMode, false);
			//GetDefaultObject<UKismetSystemLibrary>()->ExecuteConsoleCommand(GetWorld(), L"startaircraft", nullptr);
		}

		return TickFlush(NetDriver);
	}


	inline void Init()
	{

	}
}