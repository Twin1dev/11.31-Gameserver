#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ImpactImmunity.GE_ImpactImmunity_C
// (None)

class UClass* UGE_ImpactImmunity_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ImpactImmunity_C");

	return Clss;
}


// GE_ImpactImmunity_C GE_ImpactImmunity.Default__GE_ImpactImmunity_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ImpactImmunity_C* UGE_ImpactImmunity_C::GetDefaultObj()
{
	static class UGE_ImpactImmunity_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ImpactImmunity_C*>(UGE_ImpactImmunity_C::StaticClass()->DefaultObject);

	return Default;
}

}


