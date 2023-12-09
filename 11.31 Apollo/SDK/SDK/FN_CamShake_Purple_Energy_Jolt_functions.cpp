#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamShake_Purple_Energy_Jolt.CamShake_Purple_Energy_Jolt_C
// (None)

class UClass* UCamShake_Purple_Energy_Jolt_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamShake_Purple_Energy_Jolt_C");

	return Clss;
}


// CamShake_Purple_Energy_Jolt_C CamShake_Purple_Energy_Jolt.Default__CamShake_Purple_Energy_Jolt_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamShake_Purple_Energy_Jolt_C* UCamShake_Purple_Energy_Jolt_C::GetDefaultObj()
{
	static class UCamShake_Purple_Energy_Jolt_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamShake_Purple_Energy_Jolt_C*>(UCamShake_Purple_Energy_Jolt_C::StaticClass()->DefaultObject);

	return Default;
}

}


