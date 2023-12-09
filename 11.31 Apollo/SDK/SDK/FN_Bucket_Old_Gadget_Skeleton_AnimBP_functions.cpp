#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C
// (None)

class UClass* UBucket_Old_Gadget_Skeleton_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bucket_Old_Gadget_Skeleton_AnimBP_C");

	return Clss;
}


// Bucket_Old_Gadget_Skeleton_AnimBP_C Bucket_Old_Gadget_Skeleton_AnimBP.Default__Bucket_Old_Gadget_Skeleton_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBucket_Old_Gadget_Skeleton_AnimBP_C* UBucket_Old_Gadget_Skeleton_AnimBP_C::GetDefaultObj()
{
	static class UBucket_Old_Gadget_Skeleton_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBucket_Old_Gadget_Skeleton_AnimBP_C*>(UBucket_Old_Gadget_Skeleton_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBucket_Old_Gadget_Skeleton_AnimBP_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bucket_Old_Gadget_Skeleton_AnimBP_C", "AnimGraph");

	Params::UBucket_Old_Gadget_Skeleton_AnimBP_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C.ExecuteUbergraph_Bucket_Old_Gadget_Skeleton_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBucket_Old_Gadget_Skeleton_AnimBP_C::ExecuteUbergraph_Bucket_Old_Gadget_Skeleton_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bucket_Old_Gadget_Skeleton_AnimBP_C", "ExecuteUbergraph_Bucket_Old_Gadget_Skeleton_AnimBP");

	Params::UBucket_Old_Gadget_Skeleton_AnimBP_C_ExecuteUbergraph_Bucket_Old_Gadget_Skeleton_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


