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


// Function GA_Athena_RemoveIceFeetOnWater.GA_Athena_RemoveIceFeetOnWater_C.Added_ABAD1DEE46A337533ED461815C2B7BED
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_RemoveIceFeetOnWater_C::Added_ABAD1DEE46A337533ED461815C2B7BED()
{
	static auto Func = Class->GetFunction("GA_Athena_RemoveIceFeetOnWater_C", "Added_ABAD1DEE46A337533ED461815C2B7BED");

	Params::UGA_Athena_RemoveIceFeetOnWater_C_Added_ABAD1DEE46A337533ED461815C2B7BED_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_RemoveIceFeetOnWater.GA_Athena_RemoveIceFeetOnWater_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_RemoveIceFeetOnWater_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Athena_RemoveIceFeetOnWater_C", "K2_ActivateAbility");

	Params::UGA_Athena_RemoveIceFeetOnWater_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_RemoveIceFeetOnWater.GA_Athena_RemoveIceFeetOnWater_C.ExecuteUbergraph_GA_Athena_RemoveIceFeetOnWater
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_RemoveIceFeetOnWater_C::ExecuteUbergraph_GA_Athena_RemoveIceFeetOnWater(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_RemoveIceFeetOnWater_C", "ExecuteUbergraph_GA_Athena_RemoveIceFeetOnWater");

	Params::UGA_Athena_RemoveIceFeetOnWater_C_ExecuteUbergraph_GA_Athena_RemoveIceFeetOnWater_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue = CallFunc_WaitGameplayTagAdd_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
