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


// Function GalileoPatrolLayerAnimBP.GalileoPatrolLayerAnimBP_C.FullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PassThroughFullBodyPose                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   FullBodyOverride                                                 (Parm, OutParm, NoDestructor)

void UGalileoPatrolLayerAnimBP_C::FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride)
{
	static auto Func = Class->GetFunction("GalileoPatrolLayerAnimBP_C", "FullBodyOverride");

	Params::UGalileoPatrolLayerAnimBP_C_FullBodyOverride_Params Parms;

	Parms.PassThroughFullBodyPose = PassThroughFullBodyPose;

	UObject::ProcessEvent(Func, &Parms);

	if (FullBodyOverride != nullptr)
		*FullBodyOverride = Parms.FullBodyOverride;

}


// Function GalileoPatrolLayerAnimBP.GalileoPatrolLayerAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UGalileoPatrolLayerAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("GalileoPatrolLayerAnimBP_C", "AnimGraph");

	Params::UGalileoPatrolLayerAnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function GalileoPatrolLayerAnimBP.GalileoPatrolLayerAnimBP_C.ExecuteUbergraph_GalileoPatrolLayerAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGalileoPatrolLayerAnimBP_C::ExecuteUbergraph_GalileoPatrolLayerAnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GalileoPatrolLayerAnimBP_C", "ExecuteUbergraph_GalileoPatrolLayerAnimBP");

	Params::UGalileoPatrolLayerAnimBP_C_ExecuteUbergraph_GalileoPatrolLayerAnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
