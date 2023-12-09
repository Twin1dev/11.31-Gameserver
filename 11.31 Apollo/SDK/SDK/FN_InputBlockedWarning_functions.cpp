#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InputBlockedWarning.InputBlockedWarning_C
// (None)

class UClass* UInputBlockedWarning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InputBlockedWarning_C");

	return Clss;
}


// InputBlockedWarning_C InputBlockedWarning.Default__InputBlockedWarning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInputBlockedWarning_C* UInputBlockedWarning_C::GetDefaultObj()
{
	static class UInputBlockedWarning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInputBlockedWarning_C*>(UInputBlockedWarning_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InputBlockedWarning.InputBlockedWarning_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInputBlockedWarning_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputBlockedWarning_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputBlockedWarning.InputBlockedWarning_C.InputFiltered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        AttemptedInput                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UInputBlockedWarning_C::InputFiltered(enum class ECommonInputType AttemptedInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputBlockedWarning_C", "InputFiltered");

	Params::UInputBlockedWarning_C_InputFiltered_Params Parms{};

	Parms.AttemptedInput = AttemptedInput;

	UObject::ProcessEvent(Func, &Parms);

}


// Function InputBlockedWarning.InputBlockedWarning_C.WarningFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UInputBlockedWarning_C::WarningFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputBlockedWarning_C", "WarningFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InputBlockedWarning.InputBlockedWarning_C.ExecuteUbergraph_InputBlockedWarning
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ECommonInputType        K2Node_CustomEvent_AttemptedInput                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  CallFunc_GetInputTypeIcon_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)

void UInputBlockedWarning_C::ExecuteUbergraph_InputBlockedWarning(int32 EntryPoint, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, enum class ECommonInputType K2Node_CustomEvent_AttemptedInput, class UTexture2D* CallFunc_GetInputTypeIcon_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InputBlockedWarning_C", "ExecuteUbergraph_InputBlockedWarning");

	Params::UInputBlockedWarning_C_ExecuteUbergraph_InputBlockedWarning_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_AttemptedInput = K2Node_CustomEvent_AttemptedInput;
	Parms.CallFunc_GetInputTypeIcon_ReturnValue = CallFunc_GetInputTypeIcon_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


