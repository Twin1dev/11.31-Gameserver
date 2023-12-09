#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_DADBRO.MissionGen_DADBRO_C
// (None)

class UClass* UMissionGen_DADBRO_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_DADBRO_C");

	return Clss;
}


// MissionGen_DADBRO_C MissionGen_DADBRO.Default__MissionGen_DADBRO_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_DADBRO_C* UMissionGen_DADBRO_C::GetDefaultObj()
{
	static class UMissionGen_DADBRO_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_DADBRO_C*>(UMissionGen_DADBRO_C::StaticClass()->DefaultObject);

	return Default;
}

}


