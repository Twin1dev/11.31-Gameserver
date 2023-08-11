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


// Function GiftReceivedPrompt.GiftReceivedPrompt_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGiftReceivedPrompt_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("GiftReceivedPrompt_C", "BP_OnActivated");

	Params::UGiftReceivedPrompt_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftReceivedPrompt.GiftReceivedPrompt_C.OnGiftInfoPopulated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGiftReceivedPrompt_C::OnGiftInfoPopulated()
{
	static auto Func = Class->GetFunction("GiftReceivedPrompt_C", "OnGiftInfoPopulated");

	Params::UGiftReceivedPrompt_C_OnGiftInfoPopulated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftReceivedPrompt.GiftReceivedPrompt_C.OnCloseButtonClicked
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGiftReceivedPrompt_C::OnCloseButtonClicked()
{
	static auto Func = Class->GetFunction("GiftReceivedPrompt_C", "OnCloseButtonClicked");

	Params::UGiftReceivedPrompt_C_OnCloseButtonClicked_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GiftReceivedPrompt.GiftReceivedPrompt_C.ExecuteUbergraph_GiftReceivedPrompt
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGiftReceivedPrompt_C::ExecuteUbergraph_GiftReceivedPrompt(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3)
{
	static auto Func = Class->GetFunction("GiftReceivedPrompt_C", "ExecuteUbergraph_GiftReceivedPrompt");

	Params::UGiftReceivedPrompt_C_ExecuteUbergraph_GiftReceivedPrompt_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
