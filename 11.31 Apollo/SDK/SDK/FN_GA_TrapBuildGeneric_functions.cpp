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


// Function GA_TrapBuildGeneric.GA_TrapBuildGeneric_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_TrapBuildGeneric_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_TrapBuildGeneric_C", "K2_ActivateAbility");

	Params::UGA_TrapBuildGeneric_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_TrapBuildGeneric.GA_TrapBuildGeneric_C.ExecuteUbergraph_GA_TrapBuildGeneric
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_ApplyGameplayEffectContainer_ReturnValue                (ConstParm, ZeroConstructor, ReferenceParm)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)

void UGA_TrapBuildGeneric_C::ExecuteUbergraph_GA_TrapBuildGeneric(int32 EntryPoint, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_TrapBuildGeneric_C", "ExecuteUbergraph_GA_TrapBuildGeneric");

	Params::UGA_TrapBuildGeneric_C_ExecuteUbergraph_GA_TrapBuildGeneric_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_ApplyGameplayEffectContainer_ReturnValue = CallFunc_ApplyGameplayEffectContainer_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
