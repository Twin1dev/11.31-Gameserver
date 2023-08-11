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


// Function ComRevealScreen.ComRevealScreen_C.StartFinalAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UComRevealScreen_C::StartFinalAnimation()
{
	static auto Func = Class->GetFunction("ComRevealScreen_C", "StartFinalAnimation");

	Params::UComRevealScreen_C_StartFinalAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ComRevealScreen.ComRevealScreen_C.StartFadeOutScreen
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComRevealScreen_C::StartFadeOutScreen(float Delay)
{
	static auto Func = Class->GetFunction("ComRevealScreen_C", "StartFadeOutScreen");

	Params::UComRevealScreen_C_StartFadeOutScreen_Params Parms;

	Parms.Delay = Delay;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComRevealScreen.ComRevealScreen_C.StartFadeInAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UComRevealScreen_C::StartFadeInAnimation()
{
	static auto Func = Class->GetFunction("ComRevealScreen_C", "StartFadeInAnimation");

	Params::UComRevealScreen_C_StartFadeInAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ComRevealScreen.ComRevealScreen_C.ExecuteUbergraph_ComRevealScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Delay                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComRevealScreen_C::ExecuteUbergraph_ComRevealScreen(int32 EntryPoint, float K2Node_Event_Delay, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static auto Func = Class->GetFunction("ComRevealScreen_C", "ExecuteUbergraph_ComRevealScreen");

	Params::UComRevealScreen_C_ExecuteUbergraph_ComRevealScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Delay = K2Node_Event_Delay;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
