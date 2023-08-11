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


// Function VBuckSummary.VBuckSummary_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UVBuckSummary_C::Construct()
{
	static auto Func = Class->GetFunction("VBuckSummary_C", "Construct");

	Params::UVBuckSummary_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VBuckSummary.VBuckSummary_C.OnSetSummary
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVBuckSummary_C::OnSetSummary()
{
	static auto Func = Class->GetFunction("VBuckSummary_C", "OnSetSummary");

	Params::UVBuckSummary_C_OnSetSummary_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VBuckSummary.VBuckSummary_C.ExecuteUbergraph_VBuckSummary
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVBuckSummary_C::ExecuteUbergraph_VBuckSummary(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("VBuckSummary_C", "ExecuteUbergraph_VBuckSummary");

	Params::UVBuckSummary_C_ExecuteUbergraph_VBuckSummary_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
