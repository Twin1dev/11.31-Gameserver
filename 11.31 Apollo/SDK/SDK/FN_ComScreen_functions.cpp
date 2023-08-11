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


// Function ComScreen.ComScreen_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UComScreen_C::Construct()
{
	static auto Func = Class->GetFunction("ComScreen_C", "Construct");

	Params::UComScreen_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ComScreen.ComScreen_C.FadeOutScreen
// (Event, Public, BlueprintEvent)
// Parameters:

void UComScreen_C::FadeOutScreen()
{
	static auto Func = Class->GetFunction("ComScreen_C", "FadeOutScreen");

	Params::UComScreen_C_FadeOutScreen_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ComScreen.ComScreen_C.ExecuteUbergraph_ComScreen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComScreen_C::ExecuteUbergraph_ComScreen(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static auto Func = Class->GetFunction("ComScreen_C", "ExecuteUbergraph_ComScreen");

	Params::UComScreen_C_ExecuteUbergraph_ComScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
