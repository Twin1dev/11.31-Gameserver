#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GalileoPlayerController.BP_GalileoPlayerController_C
// (Actor)

class UClass* ABP_GalileoPlayerController_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GalileoPlayerController_C");

	return Clss;
}


// BP_GalileoPlayerController_C BP_GalileoPlayerController.Default__BP_GalileoPlayerController_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_GalileoPlayerController_C* ABP_GalileoPlayerController_C::GetDefaultObj()
{
	static class ABP_GalileoPlayerController_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_GalileoPlayerController_C*>(ABP_GalileoPlayerController_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_GalileoPlayerController.BP_GalileoPlayerController_C.SetBlackboardValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_GalileoPlayerController_C::SetBlackboardValues(class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GalileoPlayerController_C", "SetBlackboardValues");

	Params::ABP_GalileoPlayerController_C_SetBlackboardValues_Params Parms{};

	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_GalileoPlayerController.BP_GalileoPlayerController_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_GalileoPlayerController_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GalileoPlayerController_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GalileoPlayerController.BP_GalileoPlayerController_C.BlueprintOnBehaviorTreeStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void ABP_GalileoPlayerController_C::BlueprintOnBehaviorTreeStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GalileoPlayerController_C", "BlueprintOnBehaviorTreeStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GalileoPlayerController.BP_GalileoPlayerController_C.BndEvt__FortAthenaNpcGalileo_K2Node_ComponentBoundEvent_0_GalileoComponentOnPatrollingStart__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_GalileoPlayerController_C::BndEvt__FortAthenaNpcGalileo_K2Node_ComponentBoundEvent_0_GalileoComponentOnPatrollingStart__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GalileoPlayerController_C", "BndEvt__FortAthenaNpcGalileo_K2Node_ComponentBoundEvent_0_GalileoComponentOnPatrollingStart__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GalileoPlayerController.BP_GalileoPlayerController_C.BndEvt__FortAthenaNpcGalileo_K2Node_ComponentBoundEvent_1_GalileoComponentOnPatrollingStop__DelegateSignature
// (BlueprintEvent)
// Parameters:

void ABP_GalileoPlayerController_C::BndEvt__FortAthenaNpcGalileo_K2Node_ComponentBoundEvent_1_GalileoComponentOnPatrollingStop__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GalileoPlayerController_C", "BndEvt__FortAthenaNpcGalileo_K2Node_ComponentBoundEvent_1_GalileoComponentOnPatrollingStop__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_GalileoPlayerController.BP_GalileoPlayerController_C.ExecuteUbergraph_BP_GalileoPlayerController
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PlayerPawn_Athena_Galileo_C*K2Node_DynamicCast_AsBP_Player_Pawn_Athena_Galileo               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABP_PlayerPawn_Athena_Galileo_C*K2Node_DynamicCast_AsBP_Player_Pawn_Athena_Galileo_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue_1                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_GalileoPlayerController_C::ExecuteUbergraph_BP_GalileoPlayerController(int32 EntryPoint, class ABP_PlayerPawn_Athena_Galileo_C* K2Node_DynamicCast_AsBP_Player_Pawn_Athena_Galileo, bool K2Node_DynamicCast_bSuccess, class ABP_PlayerPawn_Athena_Galileo_C* K2Node_DynamicCast_AsBP_Player_Pawn_Athena_Galileo_1, bool K2Node_DynamicCast_bSuccess_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, bool CallFunc_HasAuthority_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_GalileoPlayerController_C", "ExecuteUbergraph_BP_GalileoPlayerController");

	Params::ABP_GalileoPlayerController_C_ExecuteUbergraph_BP_GalileoPlayerController_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBP_Player_Pawn_Athena_Galileo = K2Node_DynamicCast_AsBP_Player_Pawn_Athena_Galileo;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBP_Player_Pawn_Athena_Galileo_1 = K2Node_DynamicCast_AsBP_Player_Pawn_Athena_Galileo_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue_1 = CallFunc_GetAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue = CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


