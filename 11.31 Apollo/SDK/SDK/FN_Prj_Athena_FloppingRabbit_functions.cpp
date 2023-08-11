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


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.GetSheetVals
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrj_Athena_FloppingRabbit_C::GetSheetVals(float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2)
{
	static auto Func = Class->GetFunction("Prj_Athena_FloppingRabbit_C", "GetSheetVals");

	Params::APrj_Athena_FloppingRabbit_C_GetSheetVals_Params Parms;

	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_2 = CallFunc_GetValueAtLevel_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BigBob__FinishedFunc
// (BlueprintEvent)
// Parameters:

void APrj_Athena_FloppingRabbit_C::BigBob__FinishedFunc()
{
	static auto Func = Class->GetFunction("Prj_Athena_FloppingRabbit_C", "BigBob__FinishedFunc");

	Params::APrj_Athena_FloppingRabbit_C_BigBob__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BigBob__UpdateFunc
// (BlueprintEvent)
// Parameters:

void APrj_Athena_FloppingRabbit_C::BigBob__UpdateFunc()
{
	static auto Func = Class->GetFunction("Prj_Athena_FloppingRabbit_C", "BigBob__UpdateFunc");

	Params::APrj_Athena_FloppingRabbit_C_BigBob__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveHit
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         MyComp                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      Other                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSelfMoved                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     HitLocation                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     HitNormal                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APrj_Athena_FloppingRabbit_C::ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("Prj_Athena_FloppingRabbit_C", "ReceiveHit");

	Params::APrj_Athena_FloppingRabbit_C_ReceiveHit_Params Parms;

	Parms.MyComp = MyComp;
	Parms.Other = Other;
	Parms.OtherComp = OtherComp;
	Parms.bSelfMoved = bSelfMoved;
	Parms.HitLocation = HitLocation;
	Parms.HitNormal = HitNormal;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         OtherComp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OtherBodyIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bFromSweep                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  SweepResult                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void APrj_Athena_FloppingRabbit_C::BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static auto Func = Class->GetFunction("Prj_Athena_FloppingRabbit_C", "BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature");

	Params::APrj_Athena_FloppingRabbit_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params Parms;

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.FullDip
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               InWorldSpawner                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APrj_Athena_FloppingRabbit_C::FullDip(bool InWorldSpawner)
{
	static auto Func = Class->GetFunction("Prj_Athena_FloppingRabbit_C", "FullDip");

	Params::APrj_Athena_FloppingRabbit_C_FullDip_Params Parms;

	Parms.InWorldSpawner = InWorldSpawner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CatchWindow
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APrj_Athena_FloppingRabbit_C::CatchWindow()
{
	static auto Func = Class->GetFunction("Prj_Athena_FloppingRabbit_C", "CatchWindow");

	Params::APrj_Athena_FloppingRabbit_C_CatchWindow_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.TryCatch
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void APrj_Athena_FloppingRabbit_C::TryCatch()
{
	static auto Func = Class->GetFunction("Prj_Athena_FloppingRabbit_C", "TryCatch");

	Params::APrj_Athena_FloppingRabbit_C_TryCatch_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.HideAndKill
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void APrj_Athena_FloppingRabbit_C::HideAndKill()
{
	static auto Func = Class->GetFunction("Prj_Athena_FloppingRabbit_C", "HideAndKill");

	Params::APrj_Athena_FloppingRabbit_C_HideAndKill_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APrj_Athena_FloppingRabbit_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Prj_Athena_FloppingRabbit_C", "ReceiveBeginPlay");

	Params::APrj_Athena_FloppingRabbit_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.DistanceCheck
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APrj_Athena_FloppingRabbit_C::DistanceCheck()
{
	static auto Func = Class->GetFunction("Prj_Athena_FloppingRabbit_C", "DistanceCheck");

	Params::APrj_Athena_FloppingRabbit_C_DistanceCheck_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ForceKill
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APrj_Athena_FloppingRabbit_C::ForceKill()
{
	static auto Func = Class->GetFunction("Prj_Athena_FloppingRabbit_C", "ForceKill");

	Params::APrj_Athena_FloppingRabbit_C_ForceKill_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.OnExploded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<class AActor*>              HitActors                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>          HitResults                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)

void APrj_Athena_FloppingRabbit_C::OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults)
{
	static auto Func = Class->GetFunction("Prj_Athena_FloppingRabbit_C", "OnExploded");

	Params::APrj_Athena_FloppingRabbit_C_OnExploded_Params Parms;

	Parms.HitActors = HitActors;
	Parms.HitResults = HitResults;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.HitWater
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FishSpawner                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void APrj_Athena_FloppingRabbit_C::HitWater(bool FishSpawner)
{
	static auto Func = Class->GetFunction("Prj_Athena_FloppingRabbit_C", "HitWater");

	Params::APrj_Athena_FloppingRabbit_C_HitWater_Params Parms;

	Parms.FishSpawner = FishSpawner;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ReceiveDestroyed
// (Event, Public, BlueprintEvent)
// Parameters:

void APrj_Athena_FloppingRabbit_C::ReceiveDestroyed()
{
	static auto Func = Class->GetFunction("Prj_Athena_FloppingRabbit_C", "ReceiveDestroyed");

	Params::APrj_Athena_FloppingRabbit_C_ReceiveDestroyed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CheckForDip
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APrj_Athena_FloppingRabbit_C::CheckForDip()
{
	static auto Func = Class->GetFunction("Prj_Athena_FloppingRabbit_C", "CheckForDip");

	Params::APrj_Athena_FloppingRabbit_C_CheckForDip_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CheckForHighTierSpawner
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APrj_Athena_FloppingRabbit_C::CheckForHighTierSpawner()
{
	static auto Func = Class->GetFunction("Prj_Athena_FloppingRabbit_C", "CheckForHighTierSpawner");

	Params::APrj_Athena_FloppingRabbit_C_CheckForHighTierSpawner_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.SpawnItemsFX
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APrj_Athena_FloppingRabbit_C::SpawnItemsFX()
{
	static auto Func = Class->GetFunction("Prj_Athena_FloppingRabbit_C", "SpawnItemsFX");

	Params::APrj_Athena_FloppingRabbit_C_SpawnItemsFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.CustomPickupAttach
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPickup*                 FortPickup                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APrj_Athena_FloppingRabbit_C::CustomPickupAttach(class AFortPickup* FortPickup)
{
	static auto Func = Class->GetFunction("Prj_Athena_FloppingRabbit_C", "CustomPickupAttach");

	Params::APrj_Athena_FloppingRabbit_C_CustomPickupAttach_Params Parms;

	Parms.FortPickup = FortPickup;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.WriteNothingCaughtFishingAnalytic
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void APrj_Athena_FloppingRabbit_C::WriteNothingCaughtFishingAnalytic()
{
	static auto Func = Class->GetFunction("Prj_Athena_FloppingRabbit_C", "WriteNothingCaughtFishingAnalytic");

	Params::APrj_Athena_FloppingRabbit_C_WriteNothingCaughtFishingAnalytic_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_FloppingRabbit.Prj_Athena_FloppingRabbit_C.ExecuteUbergraph_Prj_Athena_FloppingRabbit
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABGA_Athena_FlopperSpawn_Parent_C*K2Node_DynamicCast_AsBGA_Athena_Flopper_Spawn_Parent             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_FloppingRabbit_Weap_Athena_C*K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AB_Athena_FloppingRabbit_Wire_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Abs_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_DistanceBetweenTwoVectors_Distance                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABGA_Athena_FlopperSpawn_Default_C*CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_InWorldSpawner                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBoolWithWeight_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OverlappedComponent                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_ComponentBoundEvent_OtherActor                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_ComponentBoundEvent_OtherComp                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_OtherBodyIndex                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bFromSweep                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_ComponentBoundEvent_SweepResult                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPickup*                 K2Node_DynamicCast_AsFort_Pickup                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortAthenaWater*            K2Node_DynamicCast_AsFort_Athena_Water                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWaterBodyActor*         K2Node_DynamicCast_AsFort_Water_Body_Actor                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPrimitiveComponent*         K2Node_Event_MyComp                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_Event_Other                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_OtherComp                                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSelfMoved                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     K2Node_Event_HitLocation                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_HitNormal                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_NormalImpulse                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              K2Node_Event_HitActors                                           (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<struct FHitResult>          K2Node_Event_HitResults                                          (ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// bool                               K2Node_CustomEvent_FishSpawner                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_8                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FHitResult                  CallFunc_K2_SetRelativeLocation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_9                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABGA_Athena_FlopperSpawn_Default_C*K2Node_DynamicCast_AsBGA_Athena_Flopper_Spawn_Default            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueAtLevel_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<class FName, class FName>     K2Node_MakeMap_Map                                               (ZeroConstructor)
// struct FFluidForceSocketInfo       K2Node_MakeStruct_FluidForceSocketInfo                           (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFluidForceDynamic          K2Node_MakeStruct_FluidForceDynamic                              (ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class ABP_FluidSim_FN_C*>   CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class ABP_FluidSim_FN_C*           CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable_3                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_4                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLastWaterSurfaceInfo_WaterDepth                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLastWaterSurfaceInfo_WaterVelocity                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_10                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_5                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation_1            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetLastWaterSurfaceInfo_WaterDepth_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetLastWaterSurfaceInfo_WaterVelocity_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_1                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPickup*                 K2Node_CustomEvent_FortPickup                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetAttachParentActor_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSquaredDistanceTo_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsServer_ReturnValue_6                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetSquaredDistanceTo_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              Temp_object_Variable                                             (ConstParm, ZeroConstructor, ReferenceParm)
// bool                               Temp_bool_IsClosed_Variable_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue_2                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              Temp_object_Variable_1                                           (ConstParm, ZeroConstructor, ReferenceParm)
// TArray<class AActor*>              CallFunc_CapsuleOverlapActors_OutActors                          (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_CapsuleOverlapActors_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_11                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_CapsuleOverlapActors_OutActors_1                        (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_CapsuleOverlapActors_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void APrj_Athena_FloppingRabbit_C::ExecuteUbergraph_Prj_Athena_FloppingRabbit(int32 EntryPoint, class ABGA_Athena_FlopperSpawn_Parent_C* K2Node_DynamicCast_AsBGA_Athena_Flopper_Spawn_Parent, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AB_FloppingRabbit_Weap_Athena_C* K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena, bool K2Node_DynamicCast_bSuccess_2, class AB_Athena_FloppingRabbit_Wire_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, float CallFunc_Abs_ReturnValue, float CallFunc_DistanceBetweenTwoVectors_Distance, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class ABGA_Athena_FlopperSpawn_Default_C* CallFunc_FinishSpawningActor_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue_1, bool K2Node_CustomEvent_InWorldSpawner, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_RandomBoolWithWeight_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AFortPickup* K2Node_DynamicCast_AsFort_Pickup, bool K2Node_DynamicCast_bSuccess_3, class AFortAthenaWater* K2Node_DynamicCast_AsFort_Athena_Water, bool K2Node_DynamicCast_bSuccess_4, class AFortWaterBodyActor* K2Node_DynamicCast_AsFort_Water_Body_Actor, bool K2Node_DynamicCast_bSuccess_5, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_6, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, bool K2Node_CustomEvent_FishSpawner, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_6, class APawn* CallFunc_GetInstigator_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_7, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_8, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsServer_ReturnValue_4, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_9, bool Temp_bool_IsClosed_Variable_1, class ABGA_Athena_FlopperSpawn_Default_C* K2Node_DynamicCast_AsBGA_Athena_Flopper_Spawn_Default, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsValid_ReturnValue_6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_7, float CallFunc_GetValueAtLevel_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue, TMap<class FName, class FName> K2Node_MakeMap_Map, const struct FFluidForceSocketInfo& K2Node_MakeStruct_FluidForceSocketInfo, bool CallFunc_IsValid_ReturnValue_8, const struct FFluidForceDynamic& K2Node_MakeStruct_FluidForceDynamic, TArray<class ABP_FluidSim_FN_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_FluidSim_FN_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_9, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_3, bool CallFunc_Greater_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_4, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition, float CallFunc_GetLastWaterSurfaceInfo_WaterDepth, int32 CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterVelocity, float CallFunc_Conv_IntToFloat_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool Temp_bool_IsClosed_Variable_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_10, bool CallFunc_IsServer_ReturnValue_5, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation_1, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal_1, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition_1, float CallFunc_GetLastWaterSurfaceInfo_WaterDepth_1, int32 CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx_1, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterVelocity_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1, class AFortPickup* K2Node_CustomEvent_FortPickup, class AActor* CallFunc_GetAttachParentActor_ReturnValue, float CallFunc_GetSquaredDistanceTo_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsServer_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_3, float CallFunc_GetSquaredDistanceTo_ReturnValue_1, TArray<class AActor*>& Temp_object_Variable, bool Temp_bool_IsClosed_Variable_3, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UParticleSystem* K2Node_Select_Default, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_2, class USoundBase* K2Node_Select_Default_1, bool Temp_bool_IsClosed_Variable_4, bool CallFunc_IsValid_ReturnValue_10, TArray<class AActor*>& Temp_object_Variable_1, TArray<class AActor*>& CallFunc_CapsuleOverlapActors_OutActors, bool CallFunc_CapsuleOverlapActors_ReturnValue, bool CallFunc_IsValid_ReturnValue_11, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_12, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_11, TArray<class AActor*>& CallFunc_CapsuleOverlapActors_OutActors_1, bool CallFunc_CapsuleOverlapActors_ReturnValue_1)
{
	static auto Func = Class->GetFunction("Prj_Athena_FloppingRabbit_C", "ExecuteUbergraph_Prj_Athena_FloppingRabbit");

	Params::APrj_Athena_FloppingRabbit_C_ExecuteUbergraph_Prj_Athena_FloppingRabbit_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBGA_Athena_Flopper_Spawn_Parent = K2Node_DynamicCast_AsBGA_Athena_Flopper_Spawn_Parent;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena = K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Abs_ReturnValue = CallFunc_Abs_ReturnValue;
	Parms.CallFunc_DistanceBetweenTwoVectors_Distance = CallFunc_DistanceBetweenTwoVectors_Distance;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_GetInstigator_ReturnValue_1 = CallFunc_GetInstigator_ReturnValue_1;
	Parms.K2Node_CustomEvent_InWorldSpawner = K2Node_CustomEvent_InWorldSpawner;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_RandomBoolWithWeight_ReturnValue = CallFunc_RandomBoolWithWeight_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_OverlappedComponent = K2Node_ComponentBoundEvent_OverlappedComponent;
	Parms.K2Node_ComponentBoundEvent_OtherActor = K2Node_ComponentBoundEvent_OtherActor;
	Parms.K2Node_ComponentBoundEvent_OtherComp = K2Node_ComponentBoundEvent_OtherComp;
	Parms.K2Node_ComponentBoundEvent_OtherBodyIndex = K2Node_ComponentBoundEvent_OtherBodyIndex;
	Parms.K2Node_ComponentBoundEvent_bFromSweep = K2Node_ComponentBoundEvent_bFromSweep;
	Parms.K2Node_ComponentBoundEvent_SweepResult = K2Node_ComponentBoundEvent_SweepResult;
	Parms.K2Node_DynamicCast_AsFort_Pickup = K2Node_DynamicCast_AsFort_Pickup;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_DynamicCast_AsFort_Athena_Water = K2Node_DynamicCast_AsFort_Athena_Water;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_DynamicCast_AsFort_Water_Body_Actor = K2Node_DynamicCast_AsFort_Water_Body_Actor;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_Event_MyComp = K2Node_Event_MyComp;
	Parms.K2Node_Event_Other = K2Node_Event_Other;
	Parms.K2Node_Event_OtherComp = K2Node_Event_OtherComp;
	Parms.K2Node_Event_bSelfMoved = K2Node_Event_bSelfMoved;
	Parms.K2Node_Event_HitLocation = K2Node_Event_HitLocation;
	Parms.K2Node_Event_HitNormal = K2Node_Event_HitNormal;
	Parms.K2Node_Event_NormalImpulse = K2Node_Event_NormalImpulse;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsServer_ReturnValue_2 = CallFunc_IsServer_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_Event_HitActors = K2Node_Event_HitActors;
	Parms.K2Node_Event_HitResults = K2Node_Event_HitResults;
	Parms.K2Node_CustomEvent_FishSpawner = K2Node_CustomEvent_FishSpawner;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_5 = CallFunc_K2_GetActorLocation_ReturnValue_5;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_6 = CallFunc_K2_GetActorLocation_ReturnValue_6;
	Parms.CallFunc_GetInstigator_ReturnValue_2 = CallFunc_GetInstigator_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue_3 = CallFunc_IsServer_ReturnValue_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_7 = CallFunc_K2_GetActorLocation_ReturnValue_7;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_8 = CallFunc_K2_GetActorLocation_ReturnValue_8;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_4 = CallFunc_IsServer_ReturnValue_4;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.Temp_bool_Has_Been_Initd_Variable_2 = Temp_bool_Has_Been_Initd_Variable_2;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_K2_SetRelativeLocation_SweepHitResult = CallFunc_K2_SetRelativeLocation_SweepHitResult;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_9 = CallFunc_K2_GetActorLocation_ReturnValue_9;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;
	Parms.K2Node_DynamicCast_AsBGA_Athena_Flopper_Spawn_Default = K2Node_DynamicCast_AsBGA_Athena_Flopper_Spawn_Default;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_2 = CallFunc_GetValueAtLevel_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_3 = CallFunc_GetValueAtLevel_ReturnValue_3;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.K2Node_MakeStruct_FluidForceSocketInfo = K2Node_MakeStruct_FluidForceSocketInfo;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_MakeStruct_FluidForceDynamic = K2Node_MakeStruct_FluidForceDynamic;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_3 = Temp_bool_Has_Been_Initd_Variable_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable_4 = Temp_bool_Has_Been_Initd_Variable_4;
	Parms.CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation = CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation;
	Parms.CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal = CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal;
	Parms.CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition = CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition;
	Parms.CallFunc_GetLastWaterSurfaceInfo_WaterDepth = CallFunc_GetLastWaterSurfaceInfo_WaterDepth;
	Parms.CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx = CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx;
	Parms.CallFunc_GetLastWaterSurfaceInfo_WaterVelocity = CallFunc_GetLastWaterSurfaceInfo_WaterVelocity;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.Temp_bool_IsClosed_Variable_2 = Temp_bool_IsClosed_Variable_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_10 = CallFunc_K2_GetActorLocation_ReturnValue_10;
	Parms.CallFunc_IsServer_ReturnValue_5 = CallFunc_IsServer_ReturnValue_5;
	Parms.CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation_1 = CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation_1;
	Parms.CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal_1 = CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal_1;
	Parms.CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition_1 = CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition_1;
	Parms.CallFunc_GetLastWaterSurfaceInfo_WaterDepth_1 = CallFunc_GetLastWaterSurfaceInfo_WaterDepth_1;
	Parms.CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx_1 = CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx_1;
	Parms.CallFunc_GetLastWaterSurfaceInfo_WaterVelocity_1 = CallFunc_GetLastWaterSurfaceInfo_WaterVelocity_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_1 = CallFunc_SpawnEmitterAtLocation_ReturnValue_1;
	Parms.K2Node_CustomEvent_FortPickup = K2Node_CustomEvent_FortPickup;
	Parms.CallFunc_GetAttachParentActor_ReturnValue = CallFunc_GetAttachParentActor_ReturnValue;
	Parms.CallFunc_GetSquaredDistanceTo_ReturnValue = CallFunc_GetSquaredDistanceTo_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_6 = CallFunc_IsServer_ReturnValue_6;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue_3 = CallFunc_GetInstigator_ReturnValue_3;
	Parms.CallFunc_GetSquaredDistanceTo_ReturnValue_1 = CallFunc_GetSquaredDistanceTo_ReturnValue_1;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_bool_IsClosed_Variable_3 = Temp_bool_IsClosed_Variable_3;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue_2 = CallFunc_SpawnEmitterAtLocation_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_bool_IsClosed_Variable_4 = Temp_bool_IsClosed_Variable_4;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_CapsuleOverlapActors_OutActors = CallFunc_CapsuleOverlapActors_OutActors;
	Parms.CallFunc_CapsuleOverlapActors_ReturnValue = CallFunc_CapsuleOverlapActors_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_11 = CallFunc_K2_GetActorLocation_ReturnValue_11;
	Parms.CallFunc_CapsuleOverlapActors_OutActors_1 = CallFunc_CapsuleOverlapActors_OutActors_1;
	Parms.CallFunc_CapsuleOverlapActors_ReturnValue_1 = CallFunc_CapsuleOverlapActors_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
