#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Creative_EnergyComponent_PassiveRecharge.GA_Creative_EnergyComponent_PassiveRecharge_C
// (None)

class UClass* UGA_Creative_EnergyComponent_PassiveRecharge_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Creative_EnergyComponent_PassiveRecharge_C");

	return Clss;
}


// GA_Creative_EnergyComponent_PassiveRecharge_C GA_Creative_EnergyComponent_PassiveRecharge.Default__GA_Creative_EnergyComponent_PassiveRecharge_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Creative_EnergyComponent_PassiveRecharge_C* UGA_Creative_EnergyComponent_PassiveRecharge_C::GetDefaultObj()
{
	static class UGA_Creative_EnergyComponent_PassiveRecharge_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Creative_EnergyComponent_PassiveRecharge_C*>(UGA_Creative_EnergyComponent_PassiveRecharge_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Creative_EnergyComponent_PassiveRecharge.GA_Creative_EnergyComponent_PassiveRecharge_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Creative_EnergyComponent_PassiveRecharge_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Creative_EnergyComponent_PassiveRecharge_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Creative_EnergyComponent_PassiveRecharge.GA_Creative_EnergyComponent_PassiveRecharge_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Creative_EnergyComponent_PassiveRecharge_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Creative_EnergyComponent_PassiveRecharge_C", "K2_OnEndAbility");

	Params::UGA_Creative_EnergyComponent_PassiveRecharge_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Creative_EnergyComponent_PassiveRecharge.GA_Creative_EnergyComponent_PassiveRecharge_C.ExecuteUbergraph_GA_Creative_EnergyComponent_PassiveRecharge
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Creative_EnergyComponent_PassiveRecharge_C::ExecuteUbergraph_GA_Creative_EnergyComponent_PassiveRecharge(int32 EntryPoint, bool K2Node_Event_bWasCancelled, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Creative_EnergyComponent_PassiveRecharge_C", "ExecuteUbergraph_GA_Creative_EnergyComponent_PassiveRecharge");

	Params::UGA_Creative_EnergyComponent_PassiveRecharge_C_ExecuteUbergraph_GA_Creative_EnergyComponent_PassiveRecharge_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


