#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaSpectatorRebootWidget.AthenaSpectatorRebootWidget_C
// (None)

class UClass* UAthenaSpectatorRebootWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaSpectatorRebootWidget_C");

	return Clss;
}


// AthenaSpectatorRebootWidget_C AthenaSpectatorRebootWidget.Default__AthenaSpectatorRebootWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaSpectatorRebootWidget_C* UAthenaSpectatorRebootWidget_C::GetDefaultObj()
{
	static class UAthenaSpectatorRebootWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaSpectatorRebootWidget_C*>(UAthenaSpectatorRebootWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaSpectatorRebootWidget.AthenaSpectatorRebootWidget_C.HandleOnResurrectionStateChanged
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsResurrectingNow_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanBeResurrected_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsResurrectionChipAvailable_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)

void UAthenaSpectatorRebootWidget_C::HandleOnResurrectionStateChanged(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsResurrectingNow_ReturnValue, bool CallFunc_CanBeResurrected_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsResurrectionChipAvailable_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorRebootWidget_C", "HandleOnResurrectionStateChanged");

	Params::UAthenaSpectatorRebootWidget_C_HandleOnResurrectionStateChanged_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsResurrectingNow_ReturnValue = CallFunc_IsResurrectingNow_ReturnValue;
	Parms.CallFunc_CanBeResurrected_ReturnValue = CallFunc_CanBeResurrected_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsResurrectionChipAvailable_ReturnValue = CallFunc_IsResurrectionChipAvailable_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorRebootWidget.AthenaSpectatorRebootWidget_C.DisplayChipAvailableMessage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorRebootWidget_C::DisplayChipAvailableMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorRebootWidget_C", "DisplayChipAvailableMessage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSpectatorRebootWidget.AthenaSpectatorRebootWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSpectatorRebootWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorRebootWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSpectatorRebootWidget.AthenaSpectatorRebootWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSpectatorRebootWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorRebootWidget_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSpectatorRebootWidget.AthenaSpectatorRebootWidget_C.HandleCardAvailableTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorRebootWidget_C::HandleCardAvailableTimer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorRebootWidget_C", "HandleCardAvailableTimer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSpectatorRebootWidget.AthenaSpectatorRebootWidget_C.OnResurrectionStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSpectatorRebootWidget_C::OnResurrectionStateChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorRebootWidget_C", "OnResurrectionStateChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSpectatorRebootWidget.AthenaSpectatorRebootWidget_C.HandleOnLoadScreenChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerControllerAthena* PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bEnableLoadScreen                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        HUDReasonText                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaSpectatorRebootWidget_C::HandleOnLoadScreenChanged(class AFortPlayerControllerAthena* PlayerController, bool bEnableLoadScreen, class FText HUDReasonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorRebootWidget_C", "HandleOnLoadScreenChanged");

	Params::UAthenaSpectatorRebootWidget_C_HandleOnLoadScreenChanged_Params Parms{};

	Parms.PlayerController = PlayerController;
	Parms.bEnableLoadScreen = bEnableLoadScreen;
	Parms.HUDReasonText = HUDReasonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSpectatorRebootWidget.AthenaSpectatorRebootWidget_C.PlayRebootProgress
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorRebootWidget_C::PlayRebootProgress()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorRebootWidget_C", "PlayRebootProgress");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSpectatorRebootWidget.AthenaSpectatorRebootWidget_C.OnFillComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorRebootWidget_C::OnFillComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorRebootWidget_C", "OnFillComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSpectatorRebootWidget.AthenaSpectatorRebootWidget_C.ResetProgressBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaSpectatorRebootWidget_C::ResetProgressBar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorRebootWidget_C", "ResetProgressBar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSpectatorRebootWidget.AthenaSpectatorRebootWidget_C.ExecuteUbergraph_AthenaSpectatorRebootWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRemainingResurrectionChipExpirationTime_ReturnValue  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class AFortPlayerControllerAthena* K2Node_CustomEvent_PlayerController                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bEnableLoadScreen                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_CustomEvent_HUDReasonText                                 (None)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSpectatorRebootWidget_C::ExecuteUbergraph_AthenaSpectatorRebootWidget(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsAnimationPlaying_ReturnValue, float Temp_float_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FText CallFunc_TextToUpper_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetRemainingResurrectionChipExpirationTime_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AFortPlayerControllerAthena* K2Node_CustomEvent_PlayerController, bool K2Node_CustomEvent_bEnableLoadScreen, class FText K2Node_CustomEvent_HUDReasonText, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSpectatorRebootWidget_C", "ExecuteUbergraph_AthenaSpectatorRebootWidget");

	Params::UAthenaSpectatorRebootWidget_C_ExecuteUbergraph_AthenaSpectatorRebootWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetRemainingResurrectionChipExpirationTime_ReturnValue = CallFunc_GetRemainingResurrectionChipExpirationTime_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_PlayerController = K2Node_CustomEvent_PlayerController;
	Parms.K2Node_CustomEvent_bEnableLoadScreen = K2Node_CustomEvent_bEnableLoadScreen;
	Parms.K2Node_CustomEvent_HUDReasonText = K2Node_CustomEvent_HUDReasonText;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


