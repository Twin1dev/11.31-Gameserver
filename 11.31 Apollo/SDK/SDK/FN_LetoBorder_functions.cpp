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


// Function LetoBorder.LetoBorder_C.UpdateBorderWidth
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              HalfBorderWidth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULetoBorder_C::UpdateBorderWidth(float HalfBorderWidth)
{
	static auto Func = Class->GetFunction("LetoBorder_C", "UpdateBorderWidth");

	Params::ULetoBorder_C_UpdateBorderWidth_Params Parms;

	Parms.HalfBorderWidth = HalfBorderWidth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LetoBorder.LetoBorder_C.ExecuteUbergraph_LetoBorder
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_HalfBorderWidth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULetoBorder_C::ExecuteUbergraph_LetoBorder(int32 EntryPoint, float K2Node_Event_HalfBorderWidth, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static auto Func = Class->GetFunction("LetoBorder_C", "ExecuteUbergraph_LetoBorder");

	Params::ULetoBorder_C_ExecuteUbergraph_LetoBorder_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_HalfBorderWidth = K2Node_Event_HalfBorderWidth;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
