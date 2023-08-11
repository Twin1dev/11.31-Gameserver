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


// Function PCB_InfoPanel.PCB_InfoPanel_C.CmsDataRead
// (Event, Public, BlueprintEvent)
// Parameters:

void UPCB_InfoPanel_C::CmsDataRead()
{
	static auto Func = Class->GetFunction("PCB_InfoPanel_C", "CmsDataRead");

	Params::UPCB_InfoPanel_C_CmsDataRead_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PCB_InfoPanel.PCB_InfoPanel_C.ExecuteUbergraph_PCB_InfoPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetPCBHeader_ReturnValue                                ()
// class FText                        CallFunc_GetPCBDescription_ReturnValue                           ()

void UPCB_InfoPanel_C::ExecuteUbergraph_PCB_InfoPanel(int32 EntryPoint, class FText CallFunc_GetPCBHeader_ReturnValue, class FText CallFunc_GetPCBDescription_ReturnValue)
{
	static auto Func = Class->GetFunction("PCB_InfoPanel_C", "ExecuteUbergraph_PCB_InfoPanel");

	Params::UPCB_InfoPanel_C_ExecuteUbergraph_PCB_InfoPanel_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPCBHeader_ReturnValue = CallFunc_GetPCBHeader_ReturnValue;
	Parms.CallFunc_GetPCBDescription_ReturnValue = CallFunc_GetPCBDescription_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
