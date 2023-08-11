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


// Function GA_Lotus_Athena_ApplyHeal.GA_Lotus_Athena_ApplyHeal_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Lotus_Athena_ApplyHeal_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_Lotus_Athena_ApplyHeal_C", "K2_ActivateAbility");

	Params::UGA_Lotus_Athena_ApplyHeal_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Lotus_Athena_ApplyHeal.GA_Lotus_Athena_ApplyHeal_C.ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandleCallFunc_GetGrantedByEffectContext_ReturnValue                   ()
// float                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_EffectContextGetInstigatorActor_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_1             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue          (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Lotus_Athena_ApplyHeal_C::ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal(int32 EntryPoint, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, class AActor* CallFunc_EffectContextGetInstigatorActor_ReturnValue, float CallFunc_GetHealth_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Lotus_Athena_ApplyHeal_C", "ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal");

	Params::UGA_Lotus_Athena_ApplyHeal_C_ExecuteUbergraph_GA_Lotus_Athena_ApplyHeal_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue = CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1 = CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGrantedByEffectContext_ReturnValue = CallFunc_GetGrantedByEffectContext_ReturnValue;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_EffectContextGetInstigatorActor_ReturnValue = CallFunc_EffectContextGetInstigatorActor_ReturnValue;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue_1 = CallFunc_GetFortAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_FortApplyGameplayEffectToTarget_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
