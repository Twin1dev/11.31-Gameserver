#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Creative_EnergyComponent_PassiveRechargeEffect.GE_Creative_EnergyComponent_PassiveRechargeEffect_C
// (None)

class UClass* UGE_Creative_EnergyComponent_PassiveRechargeEffect_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Creative_EnergyComponent_PassiveRechargeEffect_C");

	return Clss;
}


// GE_Creative_EnergyComponent_PassiveRechargeEffect_C GE_Creative_EnergyComponent_PassiveRechargeEffect.Default__GE_Creative_EnergyComponent_PassiveRechargeEffect_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Creative_EnergyComponent_PassiveRechargeEffect_C* UGE_Creative_EnergyComponent_PassiveRechargeEffect_C::GetDefaultObj()
{
	static class UGE_Creative_EnergyComponent_PassiveRechargeEffect_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Creative_EnergyComponent_PassiveRechargeEffect_C*>(UGE_Creative_EnergyComponent_PassiveRechargeEffect_C::StaticClass()->DefaultObject);

	return Default;
}

}


