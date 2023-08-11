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


// Function ComScreenTile.ComScreenTile_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UComScreenTile_C::BP_OnEntryReleased()
{
	static auto Func = Class->GetFunction("ComScreenTile_C", "BP_OnEntryReleased");

	Params::UComScreenTile_C_BP_OnEntryReleased_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ComScreenTile.ComScreenTile_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UComScreenTile_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto Func = Class->GetFunction("ComScreenTile_C", "BP_OnItemExpansionChanged");

	Params::UComScreenTile_C_BP_OnItemExpansionChanged_Params Parms;

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComScreenTile.ComScreenTile_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UComScreenTile_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto Func = Class->GetFunction("ComScreenTile_C", "BP_OnItemSelectionChanged");

	Params::UComScreenTile_C_BP_OnItemSelectionChanged_Params Parms;

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComScreenTile.ComScreenTile_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComScreenTile_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto Func = Class->GetFunction("ComScreenTile_C", "OnListItemObjectSet");

	Params::UComScreenTile_C_OnListItemObjectSet_Params Parms;

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComScreenTile.ComScreenTile_C.ExecuteUbergraph_ComScreenTile
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UComScreenTile_C::ExecuteUbergraph_ComScreenTile(int32 EntryPoint, class UObject* K2Node_Event_ListItemObject, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected)
{
	static auto Func = Class->GetFunction("ComScreenTile_C", "ExecuteUbergraph_ComScreenTile");

	Params::UComScreenTile_C_ExecuteUbergraph_ComScreenTile_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
