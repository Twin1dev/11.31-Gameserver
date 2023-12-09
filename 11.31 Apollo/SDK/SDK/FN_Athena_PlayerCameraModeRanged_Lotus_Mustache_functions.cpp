#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeRanged_Lotus_Mustache.Athena_PlayerCameraModeRanged_Lotus_Mustache_C
// (None)

class UClass* UAthena_PlayerCameraModeRanged_Lotus_Mustache_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeRanged_Lotus_Mustache_C");

	return Clss;
}


// Athena_PlayerCameraModeRanged_Lotus_Mustache_C Athena_PlayerCameraModeRanged_Lotus_Mustache.Default__Athena_PlayerCameraModeRanged_Lotus_Mustache_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeRanged_Lotus_Mustache_C* UAthena_PlayerCameraModeRanged_Lotus_Mustache_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeRanged_Lotus_Mustache_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeRanged_Lotus_Mustache_C*>(UAthena_PlayerCameraModeRanged_Lotus_Mustache_C::StaticClass()->DefaultObject);

	return Default;
}

}


