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


// Function BP_BoltActionSniperRifleNoScope.BP_BoltActionSniperRifleNoScope_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBP_BoltActionSniperRifleNoScope_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("BP_BoltActionSniperRifleNoScope_C", "AnimGraph");

	Params::UBP_BoltActionSniperRifleNoScope_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function BP_BoltActionSniperRifleNoScope.BP_BoltActionSniperRifleNoScope_C.ExecuteUbergraph_BP_BoltActionSniperRifleNoScope
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_BoltActionSniperRifleNoScope_C::ExecuteUbergraph_BP_BoltActionSniperRifleNoScope(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_BoltActionSniperRifleNoScope_C", "ExecuteUbergraph_BP_BoltActionSniperRifleNoScope");

	Params::UBP_BoltActionSniperRifleNoScope_C_ExecuteUbergraph_BP_BoltActionSniperRifleNoScope_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
