#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GA_Creative_EnergyComponent_PassiveRecharge.GA_Creative_EnergyComponent_PassiveRecharge_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Creative_EnergyComponent_PassiveRecharge_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Creative_EnergyComponent_PassiveRecharge_C", "K2_ActivateAbility");

	Params::UGA_Creative_EnergyComponent_PassiveRecharge_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Creative_EnergyComponent_PassiveRecharge.GA_Creative_EnergyComponent_PassiveRecharge_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Creative_EnergyComponent_PassiveRecharge_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GA_Creative_EnergyComponent_PassiveRecharge_C", "K2_OnEndAbility");

	Params::UGA_Creative_EnergyComponent_PassiveRecharge_C_K2_OnEndAbility_Params Parms;

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
	static auto Func = Class->GetFunction("GA_Creative_EnergyComponent_PassiveRecharge_C", "ExecuteUbergraph_GA_Creative_EnergyComponent_PassiveRecharge");

	Params::UGA_Creative_EnergyComponent_PassiveRecharge_C_ExecuteUbergraph_GA_Creative_EnergyComponent_PassiveRecharge_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
