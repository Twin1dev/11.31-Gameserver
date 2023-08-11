#pragma once
#include "Includes.h"
#define CREATEHOOK(Address, Hook, Og) \
MH_CreateHook((void*)(Address), Hook, (void**)(Og)); \
MH_EnableHook((void*)(Address));
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
		if (Driver && Driver->ClientConnections.Num() > 0)
			ServerReplicateActors(Driver->ReplicationDriver);

			TickFlush(Driver);
	}


	inline void Init()
	{
		CREATEHOOK(BaseAddress() + 0x3b76fe0, GetNetMode, nullptr);

		CREATEHOOK(BaseAddress() + 0x34af6c0, GetNetModeActor, nullptr);
	}
}