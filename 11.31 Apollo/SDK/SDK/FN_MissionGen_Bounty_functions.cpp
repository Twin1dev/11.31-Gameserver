#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Bounty.MissionGen_Bounty_C
// (None)

class UClass* UMissionGen_Bounty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Bounty_C");

	return Clss;
}


// MissionGen_Bounty_C MissionGen_Bounty.Default__MissionGen_Bounty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Bounty_C* UMissionGen_Bounty_C::GetDefaultObj()
{
	static class UMissionGen_Bounty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Bounty_C*>(UMissionGen_Bounty_C::StaticClass()->DefaultObject);

	return Default;
}

}


