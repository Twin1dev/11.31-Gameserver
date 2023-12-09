#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Crucible.MissionGen_Crucible_C
// (None)

class UClass* UMissionGen_Crucible_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Crucible_C");

	return Clss;
}


// MissionGen_Crucible_C MissionGen_Crucible.Default__MissionGen_Crucible_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Crucible_C* UMissionGen_Crucible_C::GetDefaultObj()
{
	static class UMissionGen_Crucible_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Crucible_C*>(UMissionGen_Crucible_C::StaticClass()->DefaultObject);

	return Default;
}

}


