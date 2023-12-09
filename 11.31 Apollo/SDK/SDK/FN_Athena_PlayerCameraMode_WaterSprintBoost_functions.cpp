#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraMode_WaterSprintBoost.Athena_PlayerCameraMode_WaterSprintBoost_C
// (None)

class UClass* UAthena_PlayerCameraMode_WaterSprintBoost_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraMode_WaterSprintBoost_C");

	return Clss;
}


// Athena_PlayerCameraMode_WaterSprintBoost_C Athena_PlayerCameraMode_WaterSprintBoost.Default__Athena_PlayerCameraMode_WaterSprintBoost_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraMode_WaterSprintBoost_C* UAthena_PlayerCameraMode_WaterSprintBoost_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraMode_WaterSprintBoost_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraMode_WaterSprintBoost_C*>(UAthena_PlayerCameraMode_WaterSprintBoost_C::StaticClass()->DefaultObject);

	return Default;
}

}


