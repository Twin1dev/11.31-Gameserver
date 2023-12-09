#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraHoisted.Athena_PlayerCameraHoisted_C
// (None)

class UClass* UAthena_PlayerCameraHoisted_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraHoisted_C");

	return Clss;
}


// Athena_PlayerCameraHoisted_C Athena_PlayerCameraHoisted.Default__Athena_PlayerCameraHoisted_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraHoisted_C* UAthena_PlayerCameraHoisted_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraHoisted_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraHoisted_C*>(UAthena_PlayerCameraHoisted_C::StaticClass()->DefaultObject);

	return Default;
}

}


