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


// Function ActivityDetailsSetting.ActivityDetailsSetting_C.OnSettingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UActivityDetailsSetting_C::OnSettingChanged(bool NewValue)
{
	static auto Func = Class->GetFunction("ActivityDetailsSetting_C", "OnSettingChanged");

	Params::UActivityDetailsSetting_C_OnSettingChanged_Params Parms;

	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActivityDetailsSetting.ActivityDetailsSetting_C.BndEvt__Button_ToggleSetting_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivityDetailsSetting_C::BndEvt__Button_ToggleSetting_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ActivityDetailsSetting_C", "BndEvt__Button_ToggleSetting_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UActivityDetailsSetting_C_BndEvt__Button_ToggleSetting_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActivityDetailsSetting.ActivityDetailsSetting_C.BndEvt__Button_ToggleSetting_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivityDetailsSetting_C::BndEvt__Button_ToggleSetting_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("ActivityDetailsSetting_C", "BndEvt__Button_ToggleSetting_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UActivityDetailsSetting_C_BndEvt__Button_ToggleSetting_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActivityDetailsSetting.ActivityDetailsSetting_C.ExecuteUbergraph_ActivityDetailsSetting
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_NewValue                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActivityDetailsSetting_C::ExecuteUbergraph_ActivityDetailsSetting(int32 EntryPoint, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool K2Node_Event_NewValue, int32 CallFunc_SelectInt_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1)
{
	static auto Func = Class->GetFunction("ActivityDetailsSetting_C", "ExecuteUbergraph_ActivityDetailsSetting");

	Params::UActivityDetailsSetting_C_ExecuteUbergraph_ActivityDetailsSetting_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_Event_NewValue = K2Node_Event_NewValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
