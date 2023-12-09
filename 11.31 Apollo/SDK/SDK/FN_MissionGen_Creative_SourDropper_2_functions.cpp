#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Creative_SourDropper_2.MissionGen_Creative_SourDropper_2_C
// (None)

class UClass* UMissionGen_Creative_SourDropper_2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Creative_SourDropper_2_C");

	return Clss;
}


// MissionGen_Creative_SourDropper_2_C MissionGen_Creative_SourDropper_2.Default__MissionGen_Creative_SourDropper_2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Creative_SourDropper_2_C* UMissionGen_Creative_SourDropper_2_C::GetDefaultObj()
{
	static class UMissionGen_Creative_SourDropper_2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Creative_SourDropper_2_C*>(UMissionGen_Creative_SourDropper_2_C::StaticClass()->DefaultObject);

	return Default;
}

}


