#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_BattleLab.MissionGen_BattleLab_C
// (None)

class UClass* UMissionGen_BattleLab_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_BattleLab_C");

	return Clss;
}


// MissionGen_BattleLab_C MissionGen_BattleLab.Default__MissionGen_BattleLab_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_BattleLab_C* UMissionGen_BattleLab_C::GetDefaultObj()
{
	static class UMissionGen_BattleLab_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_BattleLab_C*>(UMissionGen_BattleLab_C::StaticClass()->DefaultObject);

	return Default;
}

}


