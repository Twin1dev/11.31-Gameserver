#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass SkydiveCamShake.SkydiveCamShake_C
// (None)

class UClass* USkydiveCamShake_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SkydiveCamShake_C");

	return Clss;
}


// SkydiveCamShake_C SkydiveCamShake.Default__SkydiveCamShake_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USkydiveCamShake_C* USkydiveCamShake_C::GetDefaultObj()
{
	static class USkydiveCamShake_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USkydiveCamShake_C*>(USkydiveCamShake_C::StaticClass()->DefaultObject);

	return Default;
}

}


