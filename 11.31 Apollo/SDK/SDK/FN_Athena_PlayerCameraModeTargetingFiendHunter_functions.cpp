#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeTargetingFiendHunter.Athena_PlayerCameraModeTargetingFiendHunter_C
// (None)

class UClass* UAthena_PlayerCameraModeTargetingFiendHunter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeTargetingFiendHunter_C");

	return Clss;
}


// Athena_PlayerCameraModeTargetingFiendHunter_C Athena_PlayerCameraModeTargetingFiendHunter.Default__Athena_PlayerCameraModeTargetingFiendHunter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeTargetingFiendHunter_C* UAthena_PlayerCameraModeTargetingFiendHunter_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeTargetingFiendHunter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeTargetingFiendHunter_C*>(UAthena_PlayerCameraModeTargetingFiendHunter_C::StaticClass()->DefaultObject);

	return Default;
}

}


