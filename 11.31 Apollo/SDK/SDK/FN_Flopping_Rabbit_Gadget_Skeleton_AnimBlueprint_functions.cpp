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


// Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms;

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto Func = Class->GetFunction("Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C", "BlueprintUpdateAnimation");

	Params::UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C_BlueprintUpdateAnimation_Params Parms;

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint.Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_FloppingRabbit_Weap_Athena_C*K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AB_FloppingRabbit_Weap_Athena_C* K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint");

	Params::UFlopping_Rabbit_Gadget_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Flopping_Rabbit_Gadget_Skeleton_AnimBlueprint_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena = K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
