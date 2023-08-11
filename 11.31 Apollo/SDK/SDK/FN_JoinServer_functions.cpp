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


// Function JoinServer.JoinServer_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortUIState            PreviousUIState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::OnEnterState(enum class EFortUIState PreviousUIState)
{
	static auto Func = Class->GetFunction("JoinServer_C", "OnEnterState");

	Params::UJoinServer_C_OnEnterState_Params Parms;

	Parms.PreviousUIState = PreviousUIState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JoinServer.JoinServer_C.OnShowTutorialDialog
// (Event, Protected, BlueprintEvent)
// Parameters:

void UJoinServer_C::OnShowTutorialDialog()
{
	static auto Func = Class->GetFunction("JoinServer_C", "OnShowTutorialDialog");

	Params::UJoinServer_C_OnShowTutorialDialog_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function JoinServer.JoinServer_C.ExecuteUbergraph_JoinServer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIState            K2Node_Event_PreviousUIState                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::ExecuteUbergraph_JoinServer(int32 EntryPoint, enum class EFortUIState K2Node_Event_PreviousUIState)
{
	static auto Func = Class->GetFunction("JoinServer_C", "ExecuteUbergraph_JoinServer");

	Params::UJoinServer_C_ExecuteUbergraph_JoinServer_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PreviousUIState = K2Node_Event_PreviousUIState;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
