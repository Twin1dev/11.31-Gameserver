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


// Function SK_M_Med_Soldier_04_Skeleton_AnimBP.SK_M_Med_Soldier_04_Skeleton_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USK_M_Med_Soldier_04_Skeleton_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("SK_M_Med_Soldier_04_Skeleton_AnimBP_C", "AnimGraph");

	Params::USK_M_Med_Soldier_04_Skeleton_AnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function SK_M_Med_Soldier_04_Skeleton_AnimBP.SK_M_Med_Soldier_04_Skeleton_AnimBP_C.OnBeginCrouching
// (Event, Public, BlueprintEvent)
// Parameters:

void USK_M_Med_Soldier_04_Skeleton_AnimBP_C::OnBeginCrouching()
{
	static auto Func = Class->GetFunction("SK_M_Med_Soldier_04_Skeleton_AnimBP_C", "OnBeginCrouching");

	Params::USK_M_Med_Soldier_04_Skeleton_AnimBP_C_OnBeginCrouching_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_M_Med_Soldier_04_Skeleton_AnimBP.SK_M_Med_Soldier_04_Skeleton_AnimBP_C.OnEndCrouching
// (Event, Public, BlueprintEvent)
// Parameters:

void USK_M_Med_Soldier_04_Skeleton_AnimBP_C::OnEndCrouching()
{
	static auto Func = Class->GetFunction("SK_M_Med_Soldier_04_Skeleton_AnimBP_C", "OnEndCrouching");

	Params::USK_M_Med_Soldier_04_Skeleton_AnimBP_C_OnEndCrouching_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_M_Med_Soldier_04_Skeleton_AnimBP.SK_M_Med_Soldier_04_Skeleton_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_M_Med_Soldier_04_Skeleton_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto Func = Class->GetFunction("SK_M_Med_Soldier_04_Skeleton_AnimBP_C", "BlueprintUpdateAnimation");

	Params::USK_M_Med_Soldier_04_Skeleton_AnimBP_C_BlueprintUpdateAnimation_Params Parms;

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SK_M_Med_Soldier_04_Skeleton_AnimBP.SK_M_Med_Soldier_04_Skeleton_AnimBP_C.ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USK_M_Med_Soldier_04_Skeleton_AnimBP_C::ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX)
{
	static auto Func = Class->GetFunction("SK_M_Med_Soldier_04_Skeleton_AnimBP_C", "ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP");

	Params::USK_M_Med_Soldier_04_Skeleton_AnimBP_C_ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
