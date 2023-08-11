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


// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.DoStartSurveyIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerSurveyPanelBase*  Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UPlayerSurveyPanel_C*        K2Node_DynamicCast_AsPlayer_Survey_Panel                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerSurveyDispatcher_C::DoStartSurveyIntro(class UFortPlayerSurveyPanelBase* Widget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPlayerSurveyPanel_C* K2Node_DynamicCast_AsPlayer_Survey_Panel, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("PlayerSurveyDispatcher_C", "DoStartSurveyIntro");

	Params::UPlayerSurveyDispatcher_C_DoStartSurveyIntro_Params Parms;

	Parms.Widget = Widget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_DynamicCast_AsPlayer_Survey_Panel = K2Node_DynamicCast_AsPlayer_Survey_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.DisplaySurveyWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerSurveyPanelBase*  Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyDispatcher_C::DisplaySurveyWidget(class UFortPlayerSurveyPanelBase* Widget)
{
	static auto Func = Class->GetFunction("PlayerSurveyDispatcher_C", "DisplaySurveyWidget");

	Params::UPlayerSurveyDispatcher_C_DisplaySurveyWidget_Params Parms;

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.StartSurveyIntro
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerSurveyPanelBase*  Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyDispatcher_C::StartSurveyIntro(class UFortPlayerSurveyPanelBase* Widget)
{
	static auto Func = Class->GetFunction("PlayerSurveyDispatcher_C", "StartSurveyIntro");

	Params::UPlayerSurveyDispatcher_C_StartSurveyIntro_Params Parms;

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.HandleFirstActivation
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*     Panel                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerSurveyDispatcher_C::HandleFirstActivation(class UCommonActivatablePanel* Panel)
{
	static auto Func = Class->GetFunction("PlayerSurveyDispatcher_C", "HandleFirstActivation");

	Params::UPlayerSurveyDispatcher_C_HandleFirstActivation_Params Parms;

	Parms.Panel = Panel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerSurveyDispatcher.PlayerSurveyDispatcher_C.ExecuteUbergraph_PlayerSurveyDispatcher
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonActivatablePanel*     K2Node_CustomEvent_Panel                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlayerSurveyPanelBase*  K2Node_DynamicCast_AsFort_Player_Survey_Panel_Base               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlayerSurveyPanelBase*  K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerSurveyPanelBase*  K2Node_Event_Widget_1                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UPlayerSurveyDispatcher_C::ExecuteUbergraph_PlayerSurveyDispatcher(int32 EntryPoint, class UCommonActivatablePanel* K2Node_CustomEvent_Panel, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortPlayerSurveyPanelBase* K2Node_DynamicCast_AsFort_Player_Survey_Panel_Base, bool K2Node_DynamicCast_bSuccess_1, class UFortPlayerSurveyPanelBase* K2Node_Event_Widget, class UFortPlayerSurveyPanelBase* K2Node_Event_Widget_1, bool CallFunc_IsActivated_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("PlayerSurveyDispatcher_C", "ExecuteUbergraph_PlayerSurveyDispatcher");

	Params::UPlayerSurveyDispatcher_C_ExecuteUbergraph_PlayerSurveyDispatcher_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Panel = K2Node_CustomEvent_Panel;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsFort_Player_Survey_Panel_Base = K2Node_DynamicCast_AsFort_Player_Survey_Panel_Base;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_Event_Widget_1 = K2Node_Event_Widget_1;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
