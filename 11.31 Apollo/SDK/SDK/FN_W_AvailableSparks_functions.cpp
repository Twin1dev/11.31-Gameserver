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


// Function W_AvailableSparks.W_AvailableSparks_C.PlayIncreaseVote
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_AvailableSparks_C::PlayIncreaseVote()
{
	static auto Func = Class->GetFunction("W_AvailableSparks_C", "PlayIncreaseVote");

	Params::UW_AvailableSparks_C_PlayIncreaseVote_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AvailableSparks.W_AvailableSparks_C.PlayDecreaseVote
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_AvailableSparks_C::PlayDecreaseVote()
{
	static auto Func = Class->GetFunction("W_AvailableSparks_C", "PlayDecreaseVote");

	Params::UW_AvailableSparks_C_PlayDecreaseVote_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AvailableSparks.W_AvailableSparks_C.PlayCountdown
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              StartValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AvailableSparks_C::PlayCountdown(float StartValue)
{
	static auto Func = Class->GetFunction("W_AvailableSparks_C", "PlayCountdown");

	Params::UW_AvailableSparks_C_PlayCountdown_Params Parms;

	Parms.StartValue = StartValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AvailableSparks.W_AvailableSparks_C.PlayEventOver
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              StartValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AvailableSparks_C::PlayEventOver(float StartValue)
{
	static auto Func = Class->GetFunction("W_AvailableSparks_C", "PlayEventOver");

	Params::UW_AvailableSparks_C_PlayEventOver_Params Parms;

	Parms.StartValue = StartValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AvailableSparks.W_AvailableSparks_C.PlayAvailableVotes
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_AvailableSparks_C::PlayAvailableVotes()
{
	static auto Func = Class->GetFunction("W_AvailableSparks_C", "PlayAvailableVotes");

	Params::UW_AvailableSparks_C_PlayAvailableVotes_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AvailableSparks.W_AvailableSparks_C.PlayIdle
// (Event, Protected, BlueprintEvent)
// Parameters:

void UW_AvailableSparks_C::PlayIdle()
{
	static auto Func = Class->GetFunction("W_AvailableSparks_C", "PlayIdle");

	Params::UW_AvailableSparks_C_PlayIdle_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function W_AvailableSparks.W_AvailableSparks_C.ExecuteUbergraph_W_AvailableSparks
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_StartValue_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_StartValue                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UW_AvailableSparks_C::ExecuteUbergraph_W_AvailableSparks(int32 EntryPoint, float K2Node_Event_StartValue_1, float K2Node_Event_StartValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5)
{
	static auto Func = Class->GetFunction("W_AvailableSparks_C", "ExecuteUbergraph_W_AvailableSparks");

	Params::UW_AvailableSparks_C_ExecuteUbergraph_W_AvailableSparks_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_StartValue_1 = K2Node_Event_StartValue_1;
	Parms.K2Node_Event_StartValue = K2Node_Event_StartValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.CallFunc_PlayAnimation_ReturnValue_5 = CallFunc_PlayAnimation_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
