#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SpectateAFriendPC.BP_SpectateAFriendPC_C
// (Actor, PlayerController)

class UClass* ABP_SpectateAFriendPC_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SpectateAFriendPC_C");

	return Clss;
}


// BP_SpectateAFriendPC_C BP_SpectateAFriendPC.Default__BP_SpectateAFriendPC_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SpectateAFriendPC_C* ABP_SpectateAFriendPC_C::GetDefaultObj()
{
	static class ABP_SpectateAFriendPC_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SpectateAFriendPC_C*>(ABP_SpectateAFriendPC_C::StaticClass()->DefaultObject);

	return Default;
}

}


