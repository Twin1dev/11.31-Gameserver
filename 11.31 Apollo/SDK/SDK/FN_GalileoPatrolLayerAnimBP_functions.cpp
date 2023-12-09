#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass GalileoPatrolLayerAnimBP.GalileoPatrolLayerAnimBP_C
// (None)

class UClass* UGalileoPatrolLayerAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GalileoPatrolLayerAnimBP_C");

	return Clss;
}


// GalileoPatrolLayerAnimBP_C GalileoPatrolLayerAnimBP.Default__GalileoPatrolLayerAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGalileoPatrolLayerAnimBP_C* UGalileoPatrolLayerAnimBP_C::GetDefaultObj()
{
	static class UGalileoPatrolLayerAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGalileoPatrolLayerAnimBP_C*>(UGalileoPatrolLayerAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GalileoPatrolLayerAnimBP.GalileoPatrolLayerAnimBP_C.FullBodyOverride
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PassThroughFullBodyPose                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   FullBodyOverride                                                 (Parm, OutParm, NoDestructor)

void UGalileoPatrolLayerAnimBP_C::FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GalileoPatrolLayerAnimBP_C", "FullBodyOverride");

	Params::UGalileoPatrolLayerAnimBP_C_FullBodyOverride_Params Parms{};

	Parms.PassThroughFullBodyPose = PassThroughFullBodyPose;

	UObject::ProcessEvent(Func, &Parms);

	if (FullBodyOverride != nullptr)
		*FullBodyOverride = std::move(Parms.FullBodyOverride);

}


// Function GalileoPatrolLayerAnimBP.GalileoPatrolLayerAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UGalileoPatrolLayerAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GalileoPatrolLayerAnimBP_C", "AnimGraph");

	Params::UGalileoPatrolLayerAnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function GalileoPatrolLayerAnimBP.GalileoPatrolLayerAnimBP_C.ExecuteUbergraph_GalileoPatrolLayerAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGalileoPatrolLayerAnimBP_C::ExecuteUbergraph_GalileoPatrolLayerAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GalileoPatrolLayerAnimBP_C", "ExecuteUbergraph_GalileoPatrolLayerAnimBP");

	Params::UGalileoPatrolLayerAnimBP_C_ExecuteUbergraph_GalileoPatrolLayerAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


