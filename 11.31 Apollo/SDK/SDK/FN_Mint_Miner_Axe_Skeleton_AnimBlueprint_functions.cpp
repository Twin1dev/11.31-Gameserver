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


// Function Mint_Miner_Axe_Skeleton_AnimBlueprint.Mint_Miner_Axe_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMint_Miner_Axe_Skeleton_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Mint_Miner_Axe_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UMint_Miner_Axe_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms;

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Mint_Miner_Axe_Skeleton_AnimBlueprint.Mint_Miner_Axe_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Mint_Miner_Axe_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMint_Miner_Axe_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Mint_Miner_Axe_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Mint_Miner_Axe_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_Mint_Miner_Axe_Skeleton_AnimBlueprint");

	Params::UMint_Miner_Axe_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Mint_Miner_Axe_Skeleton_AnimBlueprint_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
