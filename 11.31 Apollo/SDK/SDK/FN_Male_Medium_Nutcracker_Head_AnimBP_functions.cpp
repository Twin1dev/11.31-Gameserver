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


// Function Male_Medium_Nutcracker_Head_AnimBP.Male_Medium_Nutcracker_Head_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMale_Medium_Nutcracker_Head_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("Male_Medium_Nutcracker_Head_AnimBP_C", "AnimGraph");

	Params::UMale_Medium_Nutcracker_Head_AnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function Male_Medium_Nutcracker_Head_AnimBP.Male_Medium_Nutcracker_Head_AnimBP_C.ExecuteUbergraph_Male_Medium_Nutcracker_Head_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMale_Medium_Nutcracker_Head_AnimBP_C::ExecuteUbergraph_Male_Medium_Nutcracker_Head_AnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("Male_Medium_Nutcracker_Head_AnimBP_C", "ExecuteUbergraph_Male_Medium_Nutcracker_Head_AnimBP");

	Params::UMale_Medium_Nutcracker_Head_AnimBP_C_ExecuteUbergraph_Male_Medium_Nutcracker_Head_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
