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


// Function JoinVoiceChannelButton.JoinVoiceChannelButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UJoinVoiceChannelButton_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("JoinVoiceChannelButton_C", "BP_OnHovered");

	Params::UJoinVoiceChannelButton_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function JoinVoiceChannelButton.JoinVoiceChannelButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UJoinVoiceChannelButton_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("JoinVoiceChannelButton_C", "BP_OnUnhovered");

	Params::UJoinVoiceChannelButton_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function JoinVoiceChannelButton.JoinVoiceChannelButton_C.ExecuteUbergraph_JoinVoiceChannelButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinVoiceChannelButton_C::ExecuteUbergraph_JoinVoiceChannelButton(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static auto Func = Class->GetFunction("JoinVoiceChannelButton_C", "ExecuteUbergraph_JoinVoiceChannelButton");

	Params::UJoinVoiceChannelButton_C_ExecuteUbergraph_JoinVoiceChannelButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
