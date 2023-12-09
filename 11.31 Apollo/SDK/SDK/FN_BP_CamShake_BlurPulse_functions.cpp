#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_CamShake_BlurPulse.BP_CamShake_BlurPulse_C
// (None)

class UClass* UBP_CamShake_BlurPulse_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_CamShake_BlurPulse_C");

	return Clss;
}


// BP_CamShake_BlurPulse_C BP_CamShake_BlurPulse.Default__BP_CamShake_BlurPulse_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_CamShake_BlurPulse_C* UBP_CamShake_BlurPulse_C::GetDefaultObj()
{
	static class UBP_CamShake_BlurPulse_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_CamShake_BlurPulse_C*>(UBP_CamShake_BlurPulse_C::StaticClass()->DefaultObject);

	return Default;
}

}


