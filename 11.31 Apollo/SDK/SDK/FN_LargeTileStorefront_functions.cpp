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


// Function LargeTileStorefront.LargeTileStorefront_C.OnSectionEstablished
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEmptySection                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ULargeTileStorefront_C::OnSectionEstablished(bool bEmptySection)
{
	static auto Func = Class->GetFunction("LargeTileStorefront_C", "OnSectionEstablished");

	Params::ULargeTileStorefront_C_OnSectionEstablished_Params Parms;

	Parms.bEmptySection = bEmptySection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LargeTileStorefront.LargeTileStorefront_C.ExecuteUbergraph_LargeTileStorefront
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEmptySection                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULargeTileStorefront_C::ExecuteUbergraph_LargeTileStorefront(int32 EntryPoint, bool K2Node_Event_bEmptySection, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("LargeTileStorefront_C", "ExecuteUbergraph_LargeTileStorefront");

	Params::ULargeTileStorefront_C_ExecuteUbergraph_LargeTileStorefront_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bEmptySection = K2Node_Event_bEmptySection;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
