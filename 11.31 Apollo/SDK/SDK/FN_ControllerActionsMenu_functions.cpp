#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ControllerActionsMenu.ControllerActionsMenu_C
// (None)

class UClass* UControllerActionsMenu_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControllerActionsMenu_C");

	return Clss;
}


// ControllerActionsMenu_C ControllerActionsMenu.Default__ControllerActionsMenu_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UControllerActionsMenu_C* UControllerActionsMenu_C::GetDefaultObj()
{
	static class UControllerActionsMenu_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UControllerActionsMenu_C*>(UControllerActionsMenu_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ControllerActionsMenu.ControllerActionsMenu_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UControllerActionsMenu_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllerActionsMenu_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ControllerActionsMenu.ControllerActionsMenu_C.ExecuteUbergraph_ControllerActionsMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UControllerActionsMenu_C::ExecuteUbergraph_ControllerActionsMenu(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllerActionsMenu_C", "ExecuteUbergraph_ControllerActionsMenu");

	Params::UControllerActionsMenu_C_ExecuteUbergraph_ControllerActionsMenu_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


