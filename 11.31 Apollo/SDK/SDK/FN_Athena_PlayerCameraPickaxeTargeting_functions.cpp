#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraPickaxeTargeting.Athena_PlayerCameraPickaxeTargeting_C
// (None)

class UClass* UAthena_PlayerCameraPickaxeTargeting_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraPickaxeTargeting_C");

	return Clss;
}


// Athena_PlayerCameraPickaxeTargeting_C Athena_PlayerCameraPickaxeTargeting.Default__Athena_PlayerCameraPickaxeTargeting_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraPickaxeTargeting_C* UAthena_PlayerCameraPickaxeTargeting_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraPickaxeTargeting_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraPickaxeTargeting_C*>(UAthena_PlayerCameraPickaxeTargeting_C::StaticClass()->DefaultObject);

	return Default;
}

}


