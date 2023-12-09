#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Race.MissionGen_Race_C
// (None)

class UClass* UMissionGen_Race_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Race_C");

	return Clss;
}


// MissionGen_Race_C MissionGen_Race.Default__MissionGen_Race_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Race_C* UMissionGen_Race_C::GetDefaultObj()
{
	static class UMissionGen_Race_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Race_C*>(UMissionGen_Race_C::StaticClass()->DefaultObject);

	return Default;
}

}


