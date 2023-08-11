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


// Function GAT_Creative_ActiveAbility.GAT_Creative_ActiveAbility_C.IsPropertyOverridden
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class FName                        PropertyName                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bResult                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGAT_Creative_ActiveAbility_C::IsPropertyOverridden(class FName PropertyName, bool* bResult, bool CallFunc_Array_Contains_ReturnValue)
{
	static auto Func = Class->GetFunction("GAT_Creative_ActiveAbility_C", "IsPropertyOverridden");

	Params::UGAT_Creative_ActiveAbility_C_IsPropertyOverridden_Params Parms;

	Parms.PropertyName = PropertyName;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bResult != nullptr)
		*bResult = Parms.bResult;

}


// Function GAT_Creative_ActiveAbility.GAT_Creative_ActiveAbility_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGAT_Creative_ActiveAbility_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GAT_Creative_ActiveAbility_C", "K2_ActivateAbility");

	Params::UGAT_Creative_ActiveAbility_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_Creative_ActiveAbility.GAT_Creative_ActiveAbility_C.SetupAbilityFailsafeTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Duration                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAT_Creative_ActiveAbility_C::SetupAbilityFailsafeTimer(float Duration)
{
	static auto Func = Class->GetFunction("GAT_Creative_ActiveAbility_C", "SetupAbilityFailsafeTimer");

	Params::UGAT_Creative_ActiveAbility_C_SetupAbilityFailsafeTimer_Params Parms;

	Parms.Duration = Duration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_Creative_ActiveAbility.GAT_Creative_ActiveAbility_C.AbilityTimeout
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAT_Creative_ActiveAbility_C::AbilityTimeout()
{
	static auto Func = Class->GetFunction("GAT_Creative_ActiveAbility_C", "AbilityTimeout");

	Params::UGAT_Creative_ActiveAbility_C_AbilityTimeout_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAT_Creative_ActiveAbility.GAT_Creative_ActiveAbility_C.ExecuteUbergraph_GAT_Creative_ActiveAbility
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetDisplayName_ReturnValue                              (ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_ApplySourcePropertyOverrides_OverriddenPropertyNames    (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_ApplySourcePropertyOverrides_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Duration                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UGAT_Creative_ActiveAbility_C::ExecuteUbergraph_GAT_Creative_ActiveAbility(int32 EntryPoint, const class FString& CallFunc_GetDisplayName_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TArray<class FName>& CallFunc_ApplySourcePropertyOverrides_OverriddenPropertyNames, bool CallFunc_ApplySourcePropertyOverrides_ReturnValue, float K2Node_CustomEvent_Duration, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static auto Func = Class->GetFunction("GAT_Creative_ActiveAbility_C", "ExecuteUbergraph_GAT_Creative_ActiveAbility");

	Params::UGAT_Creative_ActiveAbility_C_ExecuteUbergraph_GAT_Creative_ActiveAbility_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_ApplySourcePropertyOverrides_OverriddenPropertyNames = CallFunc_ApplySourcePropertyOverrides_OverriddenPropertyNames;
	Parms.CallFunc_ApplySourcePropertyOverrides_ReturnValue = CallFunc_ApplySourcePropertyOverrides_ReturnValue;
	Parms.K2Node_CustomEvent_Duration = K2Node_CustomEvent_Duration;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
