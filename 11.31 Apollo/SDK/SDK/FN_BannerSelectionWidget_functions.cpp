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


// Function BannerSelectionWidget.BannerSelectionWidget_C.BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FName                        IconId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ColorId                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBannerSelectionWidget_C::BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature(class FName IconId, class FName ColorId)
{
	static auto Func = Class->GetFunction("BannerSelectionWidget_C", "BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature");

	Params::UBannerSelectionWidget_C_BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_105_CloseBannerEditor__DelegateSignature_Params Parms;

	Parms.IconId = IconId;
	Parms.ColorId = ColorId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BannerSelectionWidget.BannerSelectionWidget_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBannerSelectionWidget_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("BannerSelectionWidget_C", "BP_OnActivated");

	Params::UBannerSelectionWidget_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BannerSelectionWidget.BannerSelectionWidget_C.BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBannerSelectionWidget_C::BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BannerSelectionWidget_C", "BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature");

	Params::UBannerSelectionWidget_C_BndEvt__ConfirmHomebaseNameButton_K2Node_ComponentBoundEvent_80_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BannerSelectionWidget.BannerSelectionWidget_C.OnHomebaseNameCommitFailed
// (Event, Public, BlueprintEvent)
// Parameters:

void UBannerSelectionWidget_C::OnHomebaseNameCommitFailed()
{
	static auto Func = Class->GetFunction("BannerSelectionWidget_C", "OnHomebaseNameCommitFailed");

	Params::UBannerSelectionWidget_C_OnHomebaseNameCommitFailed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BannerSelectionWidget.BannerSelectionWidget_C.OnHomebaseNameCommitSucceeded
// (Event, Public, BlueprintEvent)
// Parameters:

void UBannerSelectionWidget_C::OnHomebaseNameCommitSucceeded()
{
	static auto Func = Class->GetFunction("BannerSelectionWidget_C", "OnHomebaseNameCommitSucceeded");

	Params::UBannerSelectionWidget_C_OnHomebaseNameCommitSucceeded_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BannerSelectionWidget.BannerSelectionWidget_C.GainFocusOfTextBox
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBannerSelectionWidget_C::GainFocusOfTextBox()
{
	static auto Func = Class->GetFunction("BannerSelectionWidget_C", "GainFocusOfTextBox");

	Params::UBannerSelectionWidget_C_GainFocusOfTextBox_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BannerSelectionWidget.BannerSelectionWidget_C.InitFromObject
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     InitObject                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBannerSelectionWidget_C::InitFromObject(class UObject* InitObject)
{
	static auto Func = Class->GetFunction("BannerSelectionWidget_C", "InitFromObject");

	Params::UBannerSelectionWidget_C_InitFromObject_Params Parms;

	Parms.InitObject = InitObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BannerSelectionWidget.BannerSelectionWidget_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBannerSelectionWidget_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("BannerSelectionWidget_C", "OnInputModeChanged");

	Params::UBannerSelectionWidget_C_OnInputModeChanged_Params Parms;

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BannerSelectionWidget.BannerSelectionWidget_C.ExecuteUbergraph_BannerSelectionWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_IconId                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_ColorId                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller_3                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetAtNameHomeBaseScreen_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller_4                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// class UCommonInputSubsystem*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayerNameValid_OutIsValid                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_IsPlayerNameValid_OutErrorText                          ()
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_InitObject                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBannerSelectionWidget_C::ExecuteUbergraph_BannerSelectionWidget(int32 EntryPoint, class FName K2Node_ComponentBoundEvent_IconId, class FName K2Node_ComponentBoundEvent_ColorId, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_BooleanAND_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller_1, bool K2Node_DynamicCast_bSuccess_1, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_3, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller_2, bool K2Node_DynamicCast_bSuccess_2, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_GetAtNameHomeBaseScreen_ReturnValue, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_4, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller_4, bool K2Node_DynamicCast_bSuccess_4, class FText CallFunc_GetText_ReturnValue, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, bool CallFunc_IsPlayerNameValid_OutIsValid, class FText CallFunc_IsPlayerNameValid_OutErrorText, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, class UObject* K2Node_Event_InitObject, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, bool K2Node_Event_bUsingGamepad, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_2)
{
	static auto Func = Class->GetFunction("BannerSelectionWidget_C", "ExecuteUbergraph_BannerSelectionWidget");

	Params::UBannerSelectionWidget_C_ExecuteUbergraph_BannerSelectionWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_IconId = K2Node_ComponentBoundEvent_IconId;
	Parms.K2Node_ComponentBoundEvent_ColorId = K2Node_ComponentBoundEvent_ColorId;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_1 = K2Node_DynamicCast_AsFort_Player_Controller_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetUINavigationManager_ReturnValue_1 = CallFunc_GetUINavigationManager_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_3 = CallFunc_GetOwningPlayer_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_2 = K2Node_DynamicCast_AsFort_Player_Controller_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_3 = K2Node_DynamicCast_AsFort_Player_Controller_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetAtNameHomeBaseScreen_ReturnValue = CallFunc_GetAtNameHomeBaseScreen_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_4 = CallFunc_GetOwningPlayer_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_4 = K2Node_DynamicCast_AsFort_Player_Controller_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsPlayerNameValid_OutIsValid = CallFunc_IsPlayerNameValid_OutIsValid;
	Parms.CallFunc_IsPlayerNameValid_OutErrorText = CallFunc_IsPlayerNameValid_OutErrorText;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.K2Node_Event_InitObject = K2Node_Event_InitObject;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.CallFunc_GetUINavigationManager_ReturnValue_2 = CallFunc_GetUINavigationManager_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
