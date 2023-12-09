#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HelpListItem.HelpListItem_C
// (None)

class UClass* UHelpListItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HelpListItem_C");

	return Clss;
}


// HelpListItem_C HelpListItem.Default__HelpListItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHelpListItem_C* UHelpListItem_C::GetDefaultObj()
{
	static class UHelpListItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHelpListItem_C*>(UHelpListItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HelpListItem.HelpListItem_C.SetupExpansion
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Expanded                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpListItem_C::SetupExpansion(bool Expanded, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HelpListItem_C", "SetupExpansion");

	Params::UHelpListItem_C_SetupExpansion_Params Parms{};

	Parms.Expanded = Expanded;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpListItem.HelpListItem_C.InitializeItem
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UHelpListItem_C::InitializeItem(bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HelpListItem_C", "InitializeItem");

	Params::UHelpListItem_C_InitializeItem_Params Parms{};

	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpListItem.HelpListItem_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpListItem_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HelpListItem_C", "OnListItemObjectSet");

	Params::UHelpListItem_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpListItem.HelpListItem_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHelpListItem_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HelpListItem_C", "BP_OnItemExpansionChanged");

	Params::UHelpListItem_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpListItem.HelpListItem_C.ExecuteUbergraph_HelpListItem
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsListItemExpanded_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHelpListItem_C::ExecuteUbergraph_HelpListItem(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool CallFunc_IsListItemExpanded_ReturnValue, class UObject* K2Node_Event_ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HelpListItem_C", "ExecuteUbergraph_HelpListItem");

	Params::UHelpListItem_C_ExecuteUbergraph_HelpListItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.CallFunc_IsListItemExpanded_ReturnValue = CallFunc_IsListItemExpanded_ReturnValue;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HelpListItem.HelpListItem_C.InviteJoinChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UHelpListItem_C::InviteJoinChanged__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HelpListItem_C", "InviteJoinChanged__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


