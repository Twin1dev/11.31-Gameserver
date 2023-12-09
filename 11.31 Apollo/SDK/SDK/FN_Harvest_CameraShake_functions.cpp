#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Harvest_CameraShake.Harvest_CameraShake_C
// (None)

class UClass* UHarvest_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Harvest_CameraShake_C");

	return Clss;
}


// Harvest_CameraShake_C Harvest_CameraShake.Default__Harvest_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHarvest_CameraShake_C* UHarvest_CameraShake_C::GetDefaultObj()
{
	static class UHarvest_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHarvest_CameraShake_C*>(UHarvest_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


