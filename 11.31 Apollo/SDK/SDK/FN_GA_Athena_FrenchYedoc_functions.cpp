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


// Function GA_Athena_FrenchYedoc.GA_Athena_FrenchYedoc_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayTagContainer       RelevantTags                                                     (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FGameplayTagContainer       CallFunc_K2_CanActivateAbility_RelevantTags                      ()
// bool                               CallFunc_K2_CanActivateAbility_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetAvatarActorFromActorInfo_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AAthena_GameState_C*         K2Node_DynamicCast_AsAthena_Game_State                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEvaluationResult           CallFunc_CanSpawnActorOfClass_ReturnValue                        ()

bool UGA_Athena_FrenchYedoc_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags, const struct FGameplayTagContainer& CallFunc_K2_CanActivateAbility_RelevantTags, bool CallFunc_K2_CanActivateAbility_ReturnValue, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FEvaluationResult& CallFunc_CanSpawnActorOfClass_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_FrenchYedoc_C", "K2_CanActivateAbility");

	Params::UGA_Athena_FrenchYedoc_C_K2_CanActivateAbility_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.CallFunc_K2_CanActivateAbility_RelevantTags = CallFunc_K2_CanActivateAbility_RelevantTags;
	Parms.CallFunc_K2_CanActivateAbility_ReturnValue = CallFunc_K2_CanActivateAbility_ReturnValue;
	Parms.CallFunc_GetAvatarActorFromActorInfo_ReturnValue = CallFunc_GetAvatarActorFromActorInfo_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Game_State = K2Node_DynamicCast_AsAthena_Game_State;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_CanSpawnActorOfClass_ReturnValue = CallFunc_CanSpawnActorOfClass_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = Parms.RelevantTags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
