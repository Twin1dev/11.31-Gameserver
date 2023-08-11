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


// Function BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBP_AssaultRifle_FrontClip_SideAction_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("BP_AssaultRifle_FrontClip_SideAction_C", "AnimGraph");

	Params::UBP_AssaultRifle_FrontClip_SideAction_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C.ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_AssaultRifle_FrontClip_SideAction_C::ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_AssaultRifle_FrontClip_SideAction_C", "ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction");

	Params::UBP_AssaultRifle_FrontClip_SideAction_C_ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
