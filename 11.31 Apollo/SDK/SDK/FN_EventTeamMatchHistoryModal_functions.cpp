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


// Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEventTeamMatchHistoryModal_C::BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("EventTeamMatchHistoryModal_C", "BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UEventTeamMatchHistoryModal_C_BndEvt__CloseMainPanel_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEventTeamMatchHistoryModal_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("EventTeamMatchHistoryModal_C", "BP_OnActivated");

	Params::UEventTeamMatchHistoryModal_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EventTeamMatchHistoryModal.EventTeamMatchHistoryModal_C.ExecuteUbergraph_EventTeamMatchHistoryModal
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEventWindowId_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEventId_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)

void UEventTeamMatchHistoryModal_C::ExecuteUbergraph_EventTeamMatchHistoryModal(int32 EntryPoint, const class FString& CallFunc_GetEventWindowId_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, const class FString& CallFunc_GetEventId_ReturnValue)
{
	static auto Func = Class->GetFunction("EventTeamMatchHistoryModal_C", "ExecuteUbergraph_EventTeamMatchHistoryModal");

	Params::UEventTeamMatchHistoryModal_C_ExecuteUbergraph_EventTeamMatchHistoryModal_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEventWindowId_ReturnValue = CallFunc_GetEventWindowId_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_GetEventId_ReturnValue = CallFunc_GetEventId_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
