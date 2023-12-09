#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Athena_Tutorial.MissionGen_Athena_Tutorial_C
// (None)

class UClass* UMissionGen_Athena_Tutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Athena_Tutorial_C");

	return Clss;
}


// MissionGen_Athena_Tutorial_C MissionGen_Athena_Tutorial.Default__MissionGen_Athena_Tutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Athena_Tutorial_C* UMissionGen_Athena_Tutorial_C::GetDefaultObj()
{
	static class UMissionGen_Athena_Tutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Athena_Tutorial_C*>(UMissionGen_Athena_Tutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


