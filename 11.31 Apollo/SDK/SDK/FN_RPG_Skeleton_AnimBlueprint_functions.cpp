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


// Function RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void URPG_Skeleton_AnimBlueprint_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("RPG_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::URPG_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function RPG_Skeleton_AnimBlueprint.RPG_Skeleton_AnimBlueprint_C.ExecuteUbergraph_RPG_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URPG_Skeleton_AnimBlueprint_C::ExecuteUbergraph_RPG_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("RPG_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_RPG_Skeleton_AnimBlueprint");

	Params::URPG_Skeleton_AnimBlueprint_C_ExecuteUbergraph_RPG_Skeleton_AnimBlueprint_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
