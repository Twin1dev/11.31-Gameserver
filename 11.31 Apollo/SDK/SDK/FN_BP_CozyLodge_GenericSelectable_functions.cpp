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


// Function BP_CozyLodge_GenericSelectable.BP_CozyLodge_GenericSelectable_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_CozyLodge_GenericSelectable_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_CozyLodge_GenericSelectable_C", "ReceiveBeginPlay");

	Params::ABP_CozyLodge_GenericSelectable_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_CozyLodge_GenericSelectable.BP_CozyLodge_GenericSelectable_C.ExecuteUbergraph_BP_CozyLodge_GenericSelectable
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_CozyLodge_GenericSelectable_C::ExecuteUbergraph_BP_CozyLodge_GenericSelectable(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_CozyLodge_GenericSelectable_C", "ExecuteUbergraph_BP_CozyLodge_GenericSelectable");

	Params::ABP_CozyLodge_GenericSelectable_C_ExecuteUbergraph_BP_CozyLodge_GenericSelectable_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
