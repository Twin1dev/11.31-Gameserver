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


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.StreamedVideoOnMediaPlayerEndReached
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonAboutWidget_C::StreamedVideoOnMediaPlayerEndReached(class APlayerController* CallFunc_GetPlayerController_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "StreamedVideoOnMediaPlayerEndReached");

	Params::UAthenaSeasonAboutWidget_C_StreamedVideoOnMediaPlayerEndReached_Params Parms;

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.StreamedVideoOpeningTimedOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_LoadVideo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonAboutWidget_C::StreamedVideoOpeningTimedOut(class APlayerController* CallFunc_GetPlayerController_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_LoadVideo_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "StreamedVideoOpeningTimedOut");

	Params::UAthenaSeasonAboutWidget_C_StreamedVideoOpeningTimedOut_Params Parms;

	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_LoadVideo_ReturnValue = CallFunc_LoadVideo_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.StreamedVideoOnMediaOpened
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      OpenedUrl                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)

void UAthenaSeasonAboutWidget_C::StreamedVideoOnMediaOpened(const class FString& OpenedUrl, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static auto Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "StreamedVideoOnMediaOpened");

	Params::UAthenaSeasonAboutWidget_C_StreamedVideoOnMediaOpened_Params Parms;

	Parms.OpenedUrl = OpenedUrl;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.StreamedVideoOnSkipButtonClicked
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonAboutWidget_C::StreamedVideoOnSkipButtonClicked(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "StreamedVideoOnSkipButtonClicked");

	Params::UAthenaSeasonAboutWidget_C_StreamedVideoOnSkipButtonClicked_Params Parms;

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.StreamedVideoOnUrlFailure
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      URL                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadVideo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)

void UAthenaSeasonAboutWidget_C::StreamedVideoOnUrlFailure(const class FString& URL, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_LoadVideo_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static auto Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "StreamedVideoOnUrlFailure");

	Params::UAthenaSeasonAboutWidget_C_StreamedVideoOnUrlFailure_Params Parms;

	Parms.URL = URL;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_LoadVideo_ReturnValue = CallFunc_LoadVideo_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.StreamedVideoOnUrlSuccess
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      URL                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_GetTimeLimitForWatchBattlePassMovie_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadVideo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)

void UAthenaSeasonAboutWidget_C::StreamedVideoOnUrlSuccess(const class FString& URL, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_GetTimeLimitForWatchBattlePassMovie_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_LoadVideo_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5)
{
	static auto Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "StreamedVideoOnUrlSuccess");

	Params::UAthenaSeasonAboutWidget_C_StreamedVideoOnUrlSuccess_Params Parms;

	Parms.URL = URL;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetTimeLimitForWatchBattlePassMovie_ReturnValue = CallFunc_GetTimeLimitForWatchBattlePassMovie_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_LoadVideo_ReturnValue = CallFunc_LoadVideo_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.StreamedVideoOnSkipBeforeVideoURLReceived
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)

void UAthenaSeasonAboutWidget_C::StreamedVideoOnSkipBeforeVideoURLReceived(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2)
{
	static auto Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "StreamedVideoOnSkipBeforeVideoURLReceived");

	Params::UAthenaSeasonAboutWidget_C_StreamedVideoOnSkipBeforeVideoURLReceived_Params Parms;

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.HandlePageLeft
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonAboutWidget_C::HandlePageLeft(bool* bPassThrough)
{
	static auto Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "HandlePageLeft");

	Params::UAthenaSeasonAboutWidget_C_HandlePageLeft_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.HandlePageRight
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bPassThrough                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaSeasonAboutWidget_C::HandlePageRight(bool* bPassThrough)
{
	static auto Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "HandlePageRight");

	Params::UAthenaSeasonAboutWidget_C_HandlePageRight_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (bPassThrough != nullptr)
		*bPassThrough = Parms.bPassThrough;

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSeasonAboutWidget_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "BP_OnActivated");

	Params::UAthenaSeasonAboutWidget_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSeasonAboutWidget_C::BP_OnDeactivated()
{
	static auto Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "BP_OnDeactivated");

	Params::UAthenaSeasonAboutWidget_C_BP_OnDeactivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSeasonAboutWidget_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "Construct");

	Params::UAthenaSeasonAboutWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.HandleWidgetCreated
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonAboutWidget_C::HandleWidgetCreated(class UWidget* Widget, class UFortItem* Item)
{
	static auto Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "HandleWidgetCreated");

	Params::UAthenaSeasonAboutWidget_C_HandleWidgetCreated_Params Parms;

	Parms.Widget = Widget;
	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_23_OnFortSwipeEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaSeasonAboutWidget_C::BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_23_OnFortSwipeEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_23_OnFortSwipeEvent__DelegateSignature");

	Params::UAthenaSeasonAboutWidget_C_BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_23_OnFortSwipeEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_33_OnFortSwipeEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaSeasonAboutWidget_C::BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_33_OnFortSwipeEvent__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_33_OnFortSwipeEvent__DelegateSignature");

	Params::UAthenaSeasonAboutWidget_C_BndEvt__FortSwipePanel_0_K2Node_ComponentBoundEvent_33_OnFortSwipeEvent__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonAboutWidget_C::BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UAthenaSeasonAboutWidget_C_BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__BackButton_1_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonAboutWidget_C::BndEvt__BackButton_1_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "BndEvt__BackButton_1_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UAthenaSeasonAboutWidget_C_BndEvt__BackButton_1_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__BattlePassOverviewVideo_K2Node_ComponentBoundEvent_2_OnWidgetActivationChangedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*     Panel                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonAboutWidget_C::BndEvt__BattlePassOverviewVideo_K2Node_ComponentBoundEvent_2_OnWidgetActivationChangedDynamic__DelegateSignature(class UCommonActivatablePanel* Panel)
{
	static auto Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "BndEvt__BattlePassOverviewVideo_K2Node_ComponentBoundEvent_2_OnWidgetActivationChangedDynamic__DelegateSignature");

	Params::UAthenaSeasonAboutWidget_C_BndEvt__BattlePassOverviewVideo_K2Node_ComponentBoundEvent_2_OnWidgetActivationChangedDynamic__DelegateSignature_Params Parms;

	Parms.Panel = Panel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__IconTextButton_49_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonAboutWidget_C::BndEvt__IconTextButton_49_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "BndEvt__IconTextButton_49_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature");

	Params::UAthenaSeasonAboutWidget_C_BndEvt__IconTextButton_49_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonAboutWidget_C::BndEvt__IconTextButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "BndEvt__IconTextButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature");

	Params::UAthenaSeasonAboutWidget_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonAboutWidget.AthenaSeasonAboutWidget_C.ExecuteUbergraph_AthenaSeasonAboutWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonUISubsystem*          CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputManager*         CallFunc_GetInputManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHelpPanel_C*                CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_CustomEvent_Widget                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_CustomEvent_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSeasonReward_C*       K2Node_DynamicCast_AsAthena_Season_Reward                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandlePageRight_bPassThrough                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HandlePageLeft_bPassThrough                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingTouch_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatablePanel*     K2Node_ComponentBoundEvent_Panel                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadVideo_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               (ConstParm)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseElectraForWatchBattlePassMovie_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShowExtendedBattlePassMovie_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)

void UAthenaSeasonAboutWidget_C::ExecuteUbergraph_AthenaSeasonAboutWidget(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, class UCommonUISubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UCommonInputManager* CallFunc_GetInputManager_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHelpPanel_C* CallFunc_Create_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class UWidget* K2Node_CustomEvent_Widget, class UFortItem* K2Node_CustomEvent_Item, class UAthenaSeasonReward_C* K2Node_DynamicCast_AsAthena_Season_Reward, bool K2Node_DynamicCast_bSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, bool CallFunc_HandlePageRight_bPassThrough, bool CallFunc_HandlePageLeft_bPassThrough, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, bool CallFunc_IsUsingTouch_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UCommonActivatablePanel* K2Node_ComponentBoundEvent_Panel, bool CallFunc_LoadVideo_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 CallFunc_Conv_ByteToInt_ReturnValue, class FText Temp_text_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_UseElectraForWatchBattlePassMovie_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_ShowExtendedBattlePassMovie_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5)
{
	static auto Func = Class->GetFunction("AthenaSeasonAboutWidget_C", "ExecuteUbergraph_AthenaSeasonAboutWidget");

	Params::UAthenaSeasonAboutWidget_C_ExecuteUbergraph_AthenaSeasonAboutWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetInputManager_ReturnValue = CallFunc_GetInputManager_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_CustomEvent_Widget = K2Node_CustomEvent_Widget;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.K2Node_DynamicCast_AsAthena_Season_Reward = K2Node_DynamicCast_AsAthena_Season_Reward;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_CreateSound2D_ReturnValue = CallFunc_CreateSound2D_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_HandlePageRight_bPassThrough = CallFunc_HandlePageRight_bPassThrough;
	Parms.CallFunc_HandlePageLeft_bPassThrough = CallFunc_HandlePageLeft_bPassThrough;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.CallFunc_IsUsingTouch_ReturnValue = CallFunc_IsUsingTouch_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Panel = K2Node_ComponentBoundEvent_Panel;
	Parms.CallFunc_LoadVideo_ReturnValue = CallFunc_LoadVideo_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_UseElectraForWatchBattlePassMovie_ReturnValue = CallFunc_UseElectraForWatchBattlePassMovie_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_ShowExtendedBattlePassMovie_ReturnValue = CallFunc_ShowExtendedBattlePassMovie_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
