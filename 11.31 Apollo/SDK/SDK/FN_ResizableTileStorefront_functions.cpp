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


// Function ResizableTileStorefront.ResizableTileStorefront_C.OnSectionEstablished
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEmptySection                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UResizableTileStorefront_C::OnSectionEstablished(bool bEmptySection)
{
	static auto Func = Class->GetFunction("ResizableTileStorefront_C", "OnSectionEstablished");

	Params::UResizableTileStorefront_C_OnSectionEstablished_Params Parms;

	Parms.bEmptySection = bEmptySection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ResizableTileStorefront.ResizableTileStorefront_C.ExecuteUbergraph_ResizableTileStorefront
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEmptySection                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UResizableTileStorefront_C::ExecuteUbergraph_ResizableTileStorefront(int32 EntryPoint, bool K2Node_Event_bEmptySection, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("ResizableTileStorefront_C", "ExecuteUbergraph_ResizableTileStorefront");

	Params::UResizableTileStorefront_C_ExecuteUbergraph_ResizableTileStorefront_Params Parms;

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
