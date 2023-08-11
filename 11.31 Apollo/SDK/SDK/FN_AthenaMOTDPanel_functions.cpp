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


// Function AthenaMOTDPanel.AthenaMOTDPanel_C.OnShowBackground
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMOTDPanel_C::OnShowBackground()
{
	static auto Func = Class->GetFunction("AthenaMOTDPanel_C", "OnShowBackground");

	Params::UAthenaMOTDPanel_C_OnShowBackground_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMOTDPanel.AthenaMOTDPanel_C.OnHideBackground
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMOTDPanel_C::OnHideBackground()
{
	static auto Func = Class->GetFunction("AthenaMOTDPanel_C", "OnHideBackground");

	Params::UAthenaMOTDPanel_C_OnHideBackground_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMOTDPanel.AthenaMOTDPanel_C.ExecuteUbergraph_AthenaMOTDPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMOTDPanel_C::ExecuteUbergraph_AthenaMOTDPanel(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("AthenaMOTDPanel_C", "ExecuteUbergraph_AthenaMOTDPanel");

	Params::UAthenaMOTDPanel_C_ExecuteUbergraph_AthenaMOTDPanel_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
