#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Shudder_Vertical_Jolt_Big_CameraShake.B_Shudder_Vertical_Jolt_Big_CameraShake_C
// (None)

class UClass* UB_Shudder_Vertical_Jolt_Big_CameraShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Shudder_Vertical_Jolt_Big_CameraShake_C");

	return Clss;
}


// B_Shudder_Vertical_Jolt_Big_CameraShake_C B_Shudder_Vertical_Jolt_Big_CameraShake.Default__B_Shudder_Vertical_Jolt_Big_CameraShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_Shudder_Vertical_Jolt_Big_CameraShake_C* UB_Shudder_Vertical_Jolt_Big_CameraShake_C::GetDefaultObj()
{
	static class UB_Shudder_Vertical_Jolt_Big_CameraShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_Shudder_Vertical_Jolt_Big_CameraShake_C*>(UB_Shudder_Vertical_Jolt_Big_CameraShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


