#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraFocalPoint.Athena_PlayerCameraFocalPoint_C
// (None)

class UClass* UAthena_PlayerCameraFocalPoint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraFocalPoint_C");

	return Clss;
}


// Athena_PlayerCameraFocalPoint_C Athena_PlayerCameraFocalPoint.Default__Athena_PlayerCameraFocalPoint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraFocalPoint_C* UAthena_PlayerCameraFocalPoint_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraFocalPoint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraFocalPoint_C*>(UAthena_PlayerCameraFocalPoint_C::StaticClass()->DefaultObject);

	return Default;
}

}


