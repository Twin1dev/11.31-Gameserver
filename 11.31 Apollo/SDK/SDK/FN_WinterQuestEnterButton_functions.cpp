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


// Function WinterQuestEnterButton.WinterQuestEnterButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuestEnterButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("WinterQuestEnterButton_C", "BP_OnHovered");

	Params::UWinterQuestEnterButton_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuestEnterButton.WinterQuestEnterButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWinterQuestEnterButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("WinterQuestEnterButton_C", "BP_OnUnhovered");

	Params::UWinterQuestEnterButton_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuestEnterButton.WinterQuestEnterButton_C.ExecuteUbergraph_WinterQuestEnterButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuestEnterButton_C::ExecuteUbergraph_WinterQuestEnterButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("WinterQuestEnterButton_C", "ExecuteUbergraph_WinterQuestEnterButton");

	Params::UWinterQuestEnterButton_C_ExecuteUbergraph_WinterQuestEnterButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
