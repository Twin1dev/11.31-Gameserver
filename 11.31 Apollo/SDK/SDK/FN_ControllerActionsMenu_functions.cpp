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


// Function ControllerActionsMenu.ControllerActionsMenu_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UControllerActionsMenu_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("ControllerActionsMenu_C", "BP_OnActivated");

	Params::UControllerActionsMenu_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ControllerActionsMenu.ControllerActionsMenu_C.ExecuteUbergraph_ControllerActionsMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UControllerActionsMenu_C::ExecuteUbergraph_ControllerActionsMenu(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("ControllerActionsMenu_C", "ExecuteUbergraph_ControllerActionsMenu");

	Params::UControllerActionsMenu_C_ExecuteUbergraph_ControllerActionsMenu_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
