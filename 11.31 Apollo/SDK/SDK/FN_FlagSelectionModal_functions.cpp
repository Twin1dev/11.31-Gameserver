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


// Function FlagSelectionModal.FlagSelectionModal_C.BndEvt__Button_Change_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlagSelectionModal_C::BndEvt__Button_Change_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FlagSelectionModal_C", "BndEvt__Button_Change_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UFlagSelectionModal_C_BndEvt__Button_Change_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FlagSelectionModal.FlagSelectionModal_C.BndEvt__Button_ConfirmationCancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlagSelectionModal_C::BndEvt__Button_ConfirmationCancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("FlagSelectionModal_C", "BndEvt__Button_ConfirmationCancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UFlagSelectionModal_C_BndEvt__Button_ConfirmationCancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FlagSelectionModal.FlagSelectionModal_C.ExecuteUbergraph_FlagSelectionModal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlagSelectionModal_C::ExecuteUbergraph_FlagSelectionModal(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_IsValid_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("FlagSelectionModal_C", "ExecuteUbergraph_FlagSelectionModal");

	Params::UFlagSelectionModal_C_ExecuteUbergraph_FlagSelectionModal_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
