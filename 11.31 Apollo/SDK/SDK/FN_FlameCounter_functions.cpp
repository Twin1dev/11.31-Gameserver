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


// Function FlameCounter.FlameCounter_C.PlayIncreaseVote
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFlameCounter_C::PlayIncreaseVote()
{
	static auto Func = Class->GetFunction("FlameCounter_C", "PlayIncreaseVote");

	Params::UFlameCounter_C_PlayIncreaseVote_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FlameCounter.FlameCounter_C.PlayIdle
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFlameCounter_C::PlayIdle()
{
	static auto Func = Class->GetFunction("FlameCounter_C", "PlayIdle");

	Params::UFlameCounter_C_PlayIdle_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FlameCounter.FlameCounter_C.PlayFadeOut
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFlameCounter_C::PlayFadeOut()
{
	static auto Func = Class->GetFunction("FlameCounter_C", "PlayFadeOut");

	Params::UFlameCounter_C_PlayFadeOut_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FlameCounter.FlameCounter_C.PlayFadeIn
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFlameCounter_C::PlayFadeIn()
{
	static auto Func = Class->GetFunction("FlameCounter_C", "PlayFadeIn");

	Params::UFlameCounter_C_PlayFadeIn_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FlameCounter.FlameCounter_C.ExecuteUbergraph_FlameCounter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlameCounter_C::ExecuteUbergraph_FlameCounter(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3)
{
	static auto Func = Class->GetFunction("FlameCounter_C", "ExecuteUbergraph_FlameCounter");

	Params::UFlameCounter_C_ExecuteUbergraph_FlameCounter_Params Parms;

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
