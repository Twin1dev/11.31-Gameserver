#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_PlayerCameraModeBucketNice.Athena_PlayerCameraModeBucketNice_C
// (None)

class UClass* UAthena_PlayerCameraModeBucketNice_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_PlayerCameraModeBucketNice_C");

	return Clss;
}


// Athena_PlayerCameraModeBucketNice_C Athena_PlayerCameraModeBucketNice.Default__Athena_PlayerCameraModeBucketNice_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_PlayerCameraModeBucketNice_C* UAthena_PlayerCameraModeBucketNice_C::GetDefaultObj()
{
	static class UAthena_PlayerCameraModeBucketNice_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_PlayerCameraModeBucketNice_C*>(UAthena_PlayerCameraModeBucketNice_C::StaticClass()->DefaultObject);

	return Default;
}

}


