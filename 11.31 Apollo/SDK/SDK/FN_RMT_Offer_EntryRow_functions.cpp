#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RMT_Offer_EntryRow.RMT_Offer_EntryRow_C
// (None)

class UClass* URMT_Offer_EntryRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RMT_Offer_EntryRow_C");

	return Clss;
}


// RMT_Offer_EntryRow_C RMT_Offer_EntryRow.Default__RMT_Offer_EntryRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URMT_Offer_EntryRow_C* URMT_Offer_EntryRow_C::GetDefaultObj()
{
	static class URMT_Offer_EntryRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URMT_Offer_EntryRow_C*>(URMT_Offer_EntryRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RMT_Offer_EntryRow.RMT_Offer_EntryRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void URMT_Offer_EntryRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RMT_Offer_EntryRow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RMT_Offer_EntryRow.RMT_Offer_EntryRow_C.ExecuteUbergraph_RMT_Offer_EntryRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void URMT_Offer_EntryRow_C::ExecuteUbergraph_RMT_Offer_EntryRow(int32 EntryPoint, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RMT_Offer_EntryRow_C", "ExecuteUbergraph_RMT_Offer_EntryRow");

	Params::URMT_Offer_EntryRow_C_ExecuteUbergraph_RMT_Offer_EntryRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


