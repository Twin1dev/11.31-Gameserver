#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C
// (None)

class UClass* UEnableMultiFactorAuthModalBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnableMultiFactorAuthModalBP_C");

	return Clss;
}


// EnableMultiFactorAuthModalBP_C EnableMultiFactorAuthModalBP.Default__EnableMultiFactorAuthModalBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnableMultiFactorAuthModalBP_C* UEnableMultiFactorAuthModalBP_C::GetDefaultObj()
{
	static class UEnableMultiFactorAuthModalBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnableMultiFactorAuthModalBP_C*>(UEnableMultiFactorAuthModalBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.ScaleTitleForCulture
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ScaleCharThreshold                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxCharCountForScale                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StartScaleAfterCharCount                                         (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnableMultiFactorAuthModalBP_C::ScaleTitleForCulture(float ScaleCharThreshold, float MaxCharCountForScale, int32 StartScaleAfterCharCount, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Len_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "ScaleTitleForCulture");

	Params::UEnableMultiFactorAuthModalBP_C_ScaleTitleForCulture_Params Parms{};

	Parms.ScaleCharThreshold = ScaleCharThreshold;
	Parms.MaxCharCountForScale = MaxCharCountForScale;
	Parms.StartScaleAfterCharCount = StartScaleAfterCharCount;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.AnimationFullyCompleteBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEnableMultiFactorAuthModalBP_C::AnimationFullyCompleteBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "AnimationFullyCompleteBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.HandleSetScreenMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEnableMultiFactorAuthModalBP_C::HandleSetScreenMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "HandleSetScreenMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.NavUp
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_GetActiveWidgetIndex_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsEnabled_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnableMultiFactorAuthModalBP_C::NavUp(int32 CallFunc_GetActiveWidgetIndex_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "NavUp");

	Params::UEnableMultiFactorAuthModalBP_C_NavUp_Params Parms{};

	Parms.CallFunc_GetActiveWidgetIndex_ReturnValue = CallFunc_GetActiveWidgetIndex_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue_1 = CallFunc_GetIsEnabled_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.NavRight
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAnyUserFocus_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsEnabled_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnableMultiFactorAuthModalBP_C::NavRight(bool CallFunc_HasAnyUserFocus_ReturnValue, bool CallFunc_GetIsEnabled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "NavRight");

	Params::UEnableMultiFactorAuthModalBP_C_NavRight_Params Parms{};

	Parms.CallFunc_HasAnyUserFocus_ReturnValue = CallFunc_HasAnyUserFocus_ReturnValue;
	Parms.CallFunc_GetIsEnabled_ReturnValue = CallFunc_GetIsEnabled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEnableMultiFactorAuthModalBP_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnableMultiFactorAuthModalBP_C::BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature");

	Params::UEnableMultiFactorAuthModalBP_C_BndEvt__Button_RemindMeLater_K2Node_ComponentBoundEvent_796_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.HandleHeaderText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UEnableMultiFactorAuthModalBP_C::HandleHeaderText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "HandleHeaderText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnableMultiFactorAuthModalBP_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "PreConstruct");

	Params::UEnableMultiFactorAuthModalBP_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnPanelTypeSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESocialImportPanelType  NewType                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEnableMultiFactorAuthModalBP_C::OnPanelTypeSet(enum class ESocialImportPanelType NewType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "OnPanelTypeSet");

	Params::UEnableMultiFactorAuthModalBP_C_OnPanelTypeSet_Params Parms{};

	Parms.NewType = NewType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnIncentivizedSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIncentivized                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnableMultiFactorAuthModalBP_C::OnIncentivizedSet(bool bIncentivized)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "OnIncentivizedSet");

	Params::UEnableMultiFactorAuthModalBP_C_OnIncentivizedSet_Params Parms{};

	Parms.bIncentivized = bIncentivized;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnSetExitButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        NewButtonText                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEnableMultiFactorAuthModalBP_C::OnSetExitButtonText(class FText& NewButtonText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "OnSetExitButtonText");

	Params::UEnableMultiFactorAuthModalBP_C_OnSetExitButtonText_Params Parms{};

	Parms.NewButtonText = NewButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnConsoleDisplayURLProvided
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        UniquePlayerURLText                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UEnableMultiFactorAuthModalBP_C::OnConsoleDisplayURLProvided(class FText& UniquePlayerURLText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "OnConsoleDisplayURLProvided");

	Params::UEnableMultiFactorAuthModalBP_C_OnConsoleDisplayURLProvided_Params Parms{};

	Parms.UniquePlayerURLText = UniquePlayerURLText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.OnSetScreenConfiguration
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsConsole                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnableMultiFactorAuthModalBP_C::OnSetScreenConfiguration(bool bIsConsole)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "OnSetScreenConfiguration");

	Params::UEnableMultiFactorAuthModalBP_C_OnSetScreenConfiguration_Params Parms{};

	Parms.bIsConsole = bIsConsole;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UEnableMultiFactorAuthModalBP_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EnableMultiFactorAuthModalBP.EnableMultiFactorAuthModalBP_C.ExecuteUbergraph_EnableMultiFactorAuthModalBP
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESocialImportPanelType  K2Node_Event_NewType                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIncentivized                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_NewButtonText                                       (ConstParm)
// class FText                        K2Node_Event_UniquePlayerURLText                                 (ConstParm)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsConsole                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UEnableMultiFactorAuthModalBP_C::ExecuteUbergraph_EnableMultiFactorAuthModalBP(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_IsDesignTime, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESocialImportPanelType K2Node_Event_NewType, float CallFunc_GetEndTime_ReturnValue, bool K2Node_Event_bIncentivized, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class FText K2Node_Event_NewButtonText, class FText K2Node_Event_UniquePlayerURLText, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, bool K2Node_Event_bIsConsole, bool CallFunc_IsMobileGame_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EnableMultiFactorAuthModalBP_C", "ExecuteUbergraph_EnableMultiFactorAuthModalBP");

	Params::UEnableMultiFactorAuthModalBP_C_ExecuteUbergraph_EnableMultiFactorAuthModalBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_NewType = K2Node_Event_NewType;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.K2Node_Event_bIncentivized = K2Node_Event_bIncentivized;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_NewButtonText = K2Node_Event_NewButtonText;
	Parms.K2Node_Event_UniquePlayerURLText = K2Node_Event_UniquePlayerURLText;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Event_bIsConsole = K2Node_Event_bIsConsole;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


