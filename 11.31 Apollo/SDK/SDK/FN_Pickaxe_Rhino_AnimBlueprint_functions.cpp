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


// Function Pickaxe_Rhino_AnimBlueprint.Pickaxe_Rhino_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UPickaxe_Rhino_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Pickaxe_Rhino_AnimBlueprint_C", "AnimGraph");

	Params::UPickaxe_Rhino_AnimBlueprint_C_AnimGraph_Params Parms;

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Pickaxe_Rhino_AnimBlueprint.Pickaxe_Rhino_AnimBlueprint_C.ExecuteUbergraph_Pickaxe_Rhino_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPickaxe_Rhino_AnimBlueprint_C::ExecuteUbergraph_Pickaxe_Rhino_AnimBlueprint(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Pickaxe_Rhino_AnimBlueprint_C", "ExecuteUbergraph_Pickaxe_Rhino_AnimBlueprint");

	Params::UPickaxe_Rhino_AnimBlueprint_C_ExecuteUbergraph_Pickaxe_Rhino_AnimBlueprint_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
