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


// Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingKnobsModal_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingKnobsModal_C", "BP_OnActivated");

	Params::UAthenaMatchmakingKnobsModal_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.OnInputModeChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bUsingGamepad                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingKnobsModal_C::OnInputModeChanged(bool bUsingGamepad)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingKnobsModal_C", "OnInputModeChanged");

	Params::UAthenaMatchmakingKnobsModal_C_OnInputModeChanged_Params Parms;

	Parms.bUsingGamepad = bUsingGamepad;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingKnobsModal_C::BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingKnobsModal_C", "BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingKnobsModal_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingKnobsModal_C::BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingKnobsModal_C", "BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingKnobsModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.WidgetAnimationEvt_OutIn_K2Node_WidgetAnimationEvent_1
// (BlueprintEvent)
// Parameters:

void UAthenaMatchmakingKnobsModal_C::WidgetAnimationEvt_OutIn_K2Node_WidgetAnimationEvent_1()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingKnobsModal_C", "WidgetAnimationEvt_OutIn_K2Node_WidgetAnimationEvent_1");

	Params::UAthenaMatchmakingKnobsModal_C_WidgetAnimationEvt_OutIn_K2Node_WidgetAnimationEvent_1_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.WidgetAnimationEvt_OutIn_K2Node_WidgetAnimationEvent_0
// (BlueprintEvent)
// Parameters:

void UAthenaMatchmakingKnobsModal_C::WidgetAnimationEvt_OutIn_K2Node_WidgetAnimationEvent_0()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingKnobsModal_C", "WidgetAnimationEvt_OutIn_K2Node_WidgetAnimationEvent_0");

	Params::UAthenaMatchmakingKnobsModal_C_WidgetAnimationEvt_OutIn_K2Node_WidgetAnimationEvent_0_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.ExecuteUbergraph_AthenaMatchmakingKnobsModal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bUsingGamepad                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingKnobsModal_C::ExecuteUbergraph_AthenaMatchmakingKnobsModal(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_bUsingGamepad, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsMobileGame_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingKnobsModal_C", "ExecuteUbergraph_AthenaMatchmakingKnobsModal");

	Params::UAthenaMatchmakingKnobsModal_C_ExecuteUbergraph_AthenaMatchmakingKnobsModal_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_bUsingGamepad = K2Node_Event_bUsingGamepad;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
