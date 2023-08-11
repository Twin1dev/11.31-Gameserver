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


// Function WinterQuest_MoreInfo_DetailsScreen.WinterQuest_MoreInfo_DetailsScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuest_MoreInfo_DetailsScreen_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("WinterQuest_MoreInfo_DetailsScreen_C", "BP_OnActivated");

	Params::UWinterQuest_MoreInfo_DetailsScreen_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuest_MoreInfo_DetailsScreen.WinterQuest_MoreInfo_DetailsScreen_C.BndEvt__SoloButton_WinterFest_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuest_MoreInfo_DetailsScreen_C::BndEvt__SoloButton_WinterFest_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("WinterQuest_MoreInfo_DetailsScreen_C", "BndEvt__SoloButton_WinterFest_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UWinterQuest_MoreInfo_DetailsScreen_C_BndEvt__SoloButton_WinterFest_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuest_MoreInfo_DetailsScreen.WinterQuest_MoreInfo_DetailsScreen_C.ExecuteUbergraph_WinterQuest_MoreInfo_DetailsScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuest_MoreInfo_DetailsScreen_C::ExecuteUbergraph_WinterQuest_MoreInfo_DetailsScreen(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("WinterQuest_MoreInfo_DetailsScreen_C", "ExecuteUbergraph_WinterQuest_MoreInfo_DetailsScreen");

	Params::UWinterQuest_MoreInfo_DetailsScreen_C_ExecuteUbergraph_WinterQuest_MoreInfo_DetailsScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
