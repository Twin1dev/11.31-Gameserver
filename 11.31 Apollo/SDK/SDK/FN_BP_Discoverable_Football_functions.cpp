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


// Function BP_Discoverable_Football.BP_Discoverable_Football_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ABP_Discoverable_Football_C::Timeline_0__FinishedFunc()
{
	static auto Func = Class->GetFunction("BP_Discoverable_Football_C", "Timeline_0__FinishedFunc");

	Params::ABP_Discoverable_Football_C_Timeline_0__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Discoverable_Football.BP_Discoverable_Football_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ABP_Discoverable_Football_C::Timeline_0__UpdateFunc()
{
	static auto Func = Class->GetFunction("BP_Discoverable_Football_C", "Timeline_0__UpdateFunc");

	Params::ABP_Discoverable_Football_C_Timeline_0__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Discoverable_Football.BP_Discoverable_Football_C.Commit_OnSpecialInteraction
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Discoverable_Football_C::Commit_OnSpecialInteraction()
{
	static auto Func = Class->GetFunction("BP_Discoverable_Football_C", "Commit_OnSpecialInteraction");

	Params::ABP_Discoverable_Football_C_Commit_OnSpecialInteraction_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Discoverable_Football.BP_Discoverable_Football_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_Discoverable_Football_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_Discoverable_Football_C", "ReceiveBeginPlay");

	Params::ABP_Discoverable_Football_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Discoverable_Football.BP_Discoverable_Football_C.ExecuteUbergraph_BP_Discoverable_Football
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_VLerp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Discoverable_Football_C::ExecuteUbergraph_BP_Discoverable_Football(int32 EntryPoint, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_Discoverable_Football_C", "ExecuteUbergraph_BP_Discoverable_Football");

	Params::ABP_Discoverable_Football_C_ExecuteUbergraph_BP_Discoverable_Football_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_VLerp_ReturnValue = CallFunc_VLerp_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
