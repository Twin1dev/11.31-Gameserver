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


// Function Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C.OnRep_TurnOffTrail
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APrj_Athena_Bucket_Nice_C::OnRep_TurnOffTrail()
{
	static auto Func = Class->GetFunction("Prj_Athena_Bucket_Nice_C", "OnRep_TurnOffTrail");

	Params::APrj_Athena_Bucket_Nice_C_OnRep_TurnOffTrail_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C.OnExploded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              HitActors                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>          HitResults                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)

void APrj_Athena_Bucket_Nice_C::OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults)
{
	static auto Func = Class->GetFunction("Prj_Athena_Bucket_Nice_C", "OnExploded");

	Params::APrj_Athena_Bucket_Nice_C_OnExploded_Params Parms;

	Parms.HitActors = HitActors;
	Parms.HitResults = HitResults;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_Bucket_Nice.Prj_Athena_Bucket_Nice_C.ExecuteUbergraph_Prj_Athena_Bucket_Nice
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              K2Node_Event_HitActors                                           (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>          K2Node_Event_HitResults                                          (ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)

void APrj_Athena_Bucket_Nice_C::ExecuteUbergraph_Prj_Athena_Bucket_Nice(int32 EntryPoint, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults)
{
	static auto Func = Class->GetFunction("Prj_Athena_Bucket_Nice_C", "ExecuteUbergraph_Prj_Athena_Bucket_Nice");

	Params::APrj_Athena_Bucket_Nice_C_ExecuteUbergraph_Prj_Athena_Bucket_Nice_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_HitActors = K2Node_Event_HitActors;
	Parms.K2Node_Event_HitResults = K2Node_Event_HitResults;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
