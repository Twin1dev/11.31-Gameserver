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


// Function Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBucket_Old_Gadget_Skeleton_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Bucket_Old_Gadget_Skeleton_AnimBP_C", "AnimGraph");

	Params::UBucket_Old_Gadget_Skeleton_AnimBP_C_AnimGraph_Params Parms;

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C.ExecuteUbergraph_Bucket_Old_Gadget_Skeleton_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBucket_Old_Gadget_Skeleton_AnimBP_C::ExecuteUbergraph_Bucket_Old_Gadget_Skeleton_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Bucket_Old_Gadget_Skeleton_AnimBP_C", "ExecuteUbergraph_Bucket_Old_Gadget_Skeleton_AnimBP");

	Params::UBucket_Old_Gadget_Skeleton_AnimBP_C_ExecuteUbergraph_Bucket_Old_Gadget_Skeleton_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
