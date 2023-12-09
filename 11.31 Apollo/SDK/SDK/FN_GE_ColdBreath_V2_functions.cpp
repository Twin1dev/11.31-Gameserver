#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ColdBreath_V2.GE_ColdBreath_V2_C
// (None)

class UClass* UGE_ColdBreath_V2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ColdBreath_V2_C");

	return Clss;
}


// GE_ColdBreath_V2_C GE_ColdBreath_V2.Default__GE_ColdBreath_V2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ColdBreath_V2_C* UGE_ColdBreath_V2_C::GetDefaultObj()
{
	static class UGE_ColdBreath_V2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ColdBreath_V2_C*>(UGE_ColdBreath_V2_C::StaticClass()->DefaultObject);

	return Default;
}

}


