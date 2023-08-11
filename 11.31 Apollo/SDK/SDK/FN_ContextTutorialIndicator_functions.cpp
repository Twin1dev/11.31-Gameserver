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


// Function ContextTutorialIndicator.ContextTutorialIndicator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UContextTutorialIndicator_C::Construct()
{
	static auto Func = Class->GetFunction("ContextTutorialIndicator_C", "Construct");

	Params::UContextTutorialIndicator_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ContextTutorialIndicator.ContextTutorialIndicator_C.ExecuteUbergraph_ContextTutorialIndicator
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UContextTutorialIndicator_C::ExecuteUbergraph_ContextTutorialIndicator(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("ContextTutorialIndicator_C", "ExecuteUbergraph_ContextTutorialIndicator");

	Params::UContextTutorialIndicator_C_ExecuteUbergraph_ContextTutorialIndicator_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
