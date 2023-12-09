#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeSneakySnowman.Athena_PlayerCameraModeSneakySnowman_C
// (None)

class UClass* UAthena_PlayerCameraModeSneakySnowman_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeSneakySnowman_C");

	return Clss;
}


// Athena_PlayerCameraModeSneakySnowman_C Athena_PlayerCameraModeSneakySnowman.Default__Athena_PlayerCameraModeSneakySnowman_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeSneakySnowman_C* UAthena_PlayerCameraModeSneakySnowman_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeSneakySnowman_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeSneakySnowman_C*>(UAthena_PlayerCameraModeSneakySnowman_C::StaticClass()->DefaultObject);

	return Default;
}

}


