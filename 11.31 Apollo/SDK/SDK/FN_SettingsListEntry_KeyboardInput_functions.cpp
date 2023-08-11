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


// Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnUpdateKeyText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        PrimaryKeyText                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        SecondaryKeyText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_KeyboardInput_C::OnUpdateKeyText(class FText& PrimaryKeyText, class FText& SecondaryKeyText)
{
	static auto Func = Class->GetFunction("SettingsListEntry_KeyboardInput_C", "OnUpdateKeyText");

	Params::USettingsListEntry_KeyboardInput_C_OnUpdateKeyText_Params Parms;

	Parms.PrimaryKeyText = PrimaryKeyText;
	Parms.SecondaryKeyText = SecondaryKeyText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_KeyboardInput_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("SettingsListEntry_KeyboardInput_C", "OnMouseEnter");

	Params::USettingsListEntry_KeyboardInput_C_OnMouseEnter_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void USettingsListEntry_KeyboardInput_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("SettingsListEntry_KeyboardInput_C", "OnMouseLeave");

	Params::USettingsListEntry_KeyboardInput_C_OnMouseLeave_Params Parms;

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C.ExecuteUbergraph_SettingsListEntry_KeyboardInput
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// class FText                        K2Node_Event_PrimaryKeyText                                      (ConstParm)
// class FText                        K2Node_Event_SecondaryKeyText                                    (ConstParm)
// class UScrollingTextButton_C*      K2Node_DynamicCast_AsScrolling_Text_Button                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UScrollingTextButton_C*      K2Node_DynamicCast_AsScrolling_Text_Button_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USettingsListEntry_KeyboardInput_C::ExecuteUbergraph_SettingsListEntry_KeyboardInput(int32 EntryPoint, const struct FPointerEvent& K2Node_Event_MouseEvent, class FText K2Node_Event_PrimaryKeyText, class FText K2Node_Event_SecondaryKeyText, class UScrollingTextButton_C* K2Node_DynamicCast_AsScrolling_Text_Button, bool K2Node_DynamicCast_bSuccess, class UScrollingTextButton_C* K2Node_DynamicCast_AsScrolling_Text_Button_1, bool K2Node_DynamicCast_bSuccess_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("SettingsListEntry_KeyboardInput_C", "ExecuteUbergraph_SettingsListEntry_KeyboardInput");

	Params::USettingsListEntry_KeyboardInput_C_ExecuteUbergraph_SettingsListEntry_KeyboardInput_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_Event_PrimaryKeyText = K2Node_Event_PrimaryKeyText;
	Parms.K2Node_Event_SecondaryKeyText = K2Node_Event_SecondaryKeyText;
	Parms.K2Node_DynamicCast_AsScrolling_Text_Button = K2Node_DynamicCast_AsScrolling_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsScrolling_Text_Button_1 = K2Node_DynamicCast_AsScrolling_Text_Button_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
