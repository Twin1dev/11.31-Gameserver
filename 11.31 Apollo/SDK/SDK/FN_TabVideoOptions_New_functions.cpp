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


// Function TabVideoOptions_New.TabVideoOptions_New_C.OnComplete_7E19F26B42A808FDADDB569CFB68CCB7
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_New_C::OnComplete_7E19F26B42A808FDADDB569CFB68CCB7(class UUserWidget* UserWidget)
{
	static auto Func = Class->GetFunction("TabVideoOptions_New_C", "OnComplete_7E19F26B42A808FDADDB569CFB68CCB7");

	Params::UTabVideoOptions_New_C_OnComplete_7E19F26B42A808FDADDB569CFB68CCB7_Params Parms;

	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions_New.TabVideoOptions_New_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabVideoOptions_New_C::CenterOnTab()
{
	static auto Func = Class->GetFunction("TabVideoOptions_New_C", "CenterOnTab");

	Params::UTabVideoOptions_New_C_CenterOnTab_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions_New.TabVideoOptions_New_C.SettingValueChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_New_C::SettingValueChanged(float Value)
{
	static auto Func = Class->GetFunction("TabVideoOptions_New_C", "SettingValueChanged");

	Params::UTabVideoOptions_New_C_SettingValueChanged_Params Parms;

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions_New.TabVideoOptions_New_C.BndEvt__Settings_Panel_K2Node_ComponentBoundEvent_1_OnExecuteNamedActionBP__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortSetting*                Setting                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Action                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabVideoOptions_New_C::BndEvt__Settings_Panel_K2Node_ComponentBoundEvent_1_OnExecuteNamedActionBP__DelegateSignature(class UFortSetting* Setting, class FName Action)
{
	static auto Func = Class->GetFunction("TabVideoOptions_New_C", "BndEvt__Settings_Panel_K2Node_ComponentBoundEvent_1_OnExecuteNamedActionBP__DelegateSignature");

	Params::UTabVideoOptions_New_C_BndEvt__Settings_Panel_K2Node_ComponentBoundEvent_1_OnExecuteNamedActionBP__DelegateSignature_Params Parms;

	Parms.Setting = Setting;
	Parms.Action = Action;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabVideoOptions_New.TabVideoOptions_New_C.ExecuteUbergraph_TabVideoOptions_New
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_CustomEvent_UserWidget                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USafeZoneEditor_C*           K2Node_DynamicCast_AsSafe_Zone_Editor                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Value                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSetting*                K2Node_ComponentBoundEvent_Setting                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_ComponentBoundEvent_Action                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CreateWidgetAsync*CallFunc_CreateWidgetAsync_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabVideoOptions_New_C::ExecuteUbergraph_TabVideoOptions_New(int32 EntryPoint, class UUserWidget* K2Node_CustomEvent_UserWidget, class UUserWidget* Temp_object_Variable, class USafeZoneEditor_C* K2Node_DynamicCast_AsSafe_Zone_Editor, bool K2Node_DynamicCast_bSuccess, float K2Node_CustomEvent_Value, class UFortSetting* K2Node_ComponentBoundEvent_Setting, class FName K2Node_ComponentBoundEvent_Action, bool K2Node_SwitchName_CmpSuccess, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("TabVideoOptions_New_C", "ExecuteUbergraph_TabVideoOptions_New");

	Params::UTabVideoOptions_New_C_ExecuteUbergraph_TabVideoOptions_New_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_UserWidget = K2Node_CustomEvent_UserWidget;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsSafe_Zone_Editor = K2Node_DynamicCast_AsSafe_Zone_Editor;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Value = K2Node_CustomEvent_Value;
	Parms.K2Node_ComponentBoundEvent_Setting = K2Node_ComponentBoundEvent_Setting;
	Parms.K2Node_ComponentBoundEvent_Action = K2Node_ComponentBoundEvent_Action;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_CreateWidgetAsync_ReturnValue = CallFunc_CreateWidgetAsync_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
