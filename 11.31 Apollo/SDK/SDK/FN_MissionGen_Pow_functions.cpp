#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MissionGen_Pow.MissionGen_Pow_C
// (None)

class UClass* UMissionGen_Pow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MissionGen_Pow_C");

	return Clss;
}


// MissionGen_Pow_C MissionGen_Pow.Default__MissionGen_Pow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMissionGen_Pow_C* UMissionGen_Pow_C::GetDefaultObj()
{
	static class UMissionGen_Pow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMissionGen_Pow_C*>(UMissionGen_Pow_C::StaticClass()->DefaultObject);

	return Default;
}

}


