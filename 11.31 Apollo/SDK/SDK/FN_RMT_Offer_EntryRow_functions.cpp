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


// Function RMT_Offer_EntryRow.RMT_Offer_EntryRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URMT_Offer_EntryRow_C::Construct()
{
	static auto Func = Class->GetFunction("RMT_Offer_EntryRow_C", "Construct");

	Params::URMT_Offer_EntryRow_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function RMT_Offer_EntryRow.RMT_Offer_EntryRow_C.ExecuteUbergraph_RMT_Offer_EntryRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     ()

void URMT_Offer_EntryRow_C::ExecuteUbergraph_RMT_Offer_EntryRow(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static auto Func = Class->GetFunction("RMT_Offer_EntryRow_C", "ExecuteUbergraph_RMT_Offer_EntryRow");

	Params::URMT_Offer_EntryRow_C_ExecuteUbergraph_RMT_Offer_EntryRow_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
