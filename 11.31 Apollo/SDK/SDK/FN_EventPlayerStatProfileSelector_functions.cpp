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


// Function EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C.BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventPlayerStatProfileSelector_C::BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("EventPlayerStatProfileSelector_C", "BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UEventPlayerStatProfileSelector_C_BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEventPlayerStatProfileSelector_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("EventPlayerStatProfileSelector_C", "BP_OnActivated");

	Params::UEventPlayerStatProfileSelector_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventPlayerStatProfileSelector.EventPlayerStatProfileSelector_C.ExecuteUbergraph_EventPlayerStatProfileSelector
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventPlayerStatProfileSelector_C::ExecuteUbergraph_EventPlayerStatProfileSelector(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("EventPlayerStatProfileSelector_C", "ExecuteUbergraph_EventPlayerStatProfileSelector");

	Params::UEventPlayerStatProfileSelector_C_ExecuteUbergraph_EventPlayerStatProfileSelector_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
