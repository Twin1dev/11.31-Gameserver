#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C
// (Actor)

class UClass* AB_Ranged_Lotus_Mustache_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Ranged_Lotus_Mustache_C");

	return Clss;
}


// B_Ranged_Lotus_Mustache_C B_Ranged_Lotus_Mustache.Default__B_Ranged_Lotus_Mustache_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Ranged_Lotus_Mustache_C* AB_Ranged_Lotus_Mustache_C::GetDefaultObj()
{
	static class AB_Ranged_Lotus_Mustache_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Ranged_Lotus_Mustache_C*>(AB_Ranged_Lotus_Mustache_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.Timeline_0__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Ranged_Lotus_Mustache_C::Timeline_0__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "Timeline_0__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.Timeline_0__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Ranged_Lotus_Mustache_C::Timeline_0__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "Timeline_0__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.Timeline_1__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Ranged_Lotus_Mustache_C::Timeline_1__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "Timeline_1__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.Timeline_1__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Ranged_Lotus_Mustache_C::Timeline_1__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "Timeline_1__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.OnSpawnProjectile
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         SpawnProjectile                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Lotus_Mustache_C::OnSpawnProjectile(class AFortProjectileBase* SpawnProjectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "OnSpawnProjectile");

	Params::AB_Ranged_Lotus_Mustache_C_OnSpawnProjectile_Params Parms{};

	Parms.SpawnProjectile = SpawnProjectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Ranged_Lotus_Mustache_C::K2_OnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "K2_OnUnEquip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Ranged_Lotus_Mustache_C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "OnWeaponAttached");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Lotus_Mustache_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "ReceiveTick");

	Params::AB_Ranged_Lotus_Mustache_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.NewTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Lotus_Mustache_C::NewTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "NewTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPersistentFire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSecondaryFire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Lotus_Mustache_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "OnPlayWeaponFireFX");

	Params::AB_Ranged_Lotus_Mustache_C_OnPlayWeaponFireFX_Params Parms{};

	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.SetHealthPercentServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Lotus_Mustache_C::SetHealthPercentServer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "SetHealthPercentServer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.SetHealthPercentClient
// (Net, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              HealthPercent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Lotus_Mustache_C::SetHealthPercentClient(float HealthPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "SetHealthPercentClient");

	Params::AB_Ranged_Lotus_Mustache_C_SetHealthPercentClient_Params Parms{};

	Parms.HealthPercent = HealthPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Lotus_Mustache.B_Ranged_Lotus_Mustache_C.ExecuteUbergraph_B_Ranged_Lotus_Mustache
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortProjectileBase*         K2Node_Event_SpawnProjectile                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortProjectileMovementInterface>CallFunc_SetHomingStyle_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortProjectileMovementInterface>CallFunc_SetHomingLockTargetDistanceThreshold_self_CastInput     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortProjectileMovementInterface>CallFunc_SetHomingTurnSpeedMax_self_CastInput                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortProjectileMovementInterface>CallFunc_SetHomingTurnSpeedMin_self_CastInput                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortProjectileMovementInterface>CallFunc_SetHomingTarget_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bPersistentFire                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSecondaryFire                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerPawnAthena*       K2Node_DynamicCast_AsFort_Player_Pawn_Athena                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_HealthPercent                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_Conv_VectorToTransform_ReturnValue                      (IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetActorLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_K2_SetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AAthena_LockOnWidgetActor_Proto_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ULotus_Mustache_HealthBar_C* K2Node_DynamicCast_AsLotus_Mustache_Health_Bar                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetDistanceTo_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RowToBool_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortProjectileMovementInterface>CallFunc_SetHomingTimeUntilMaxTurnSpeed_self_CastInput           (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Lotus_Mustache_C::ExecuteUbergraph_B_Ranged_Lotus_Mustache(int32 EntryPoint, class AFortProjectileBase* K2Node_Event_SpawnProjectile, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingStyle_self_CastInput, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingLockTargetDistanceThreshold_self_CastInput, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingTurnSpeedMax_self_CastInput, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingTurnSpeedMin_self_CastInput, bool CallFunc_IsValid_ReturnValue_1, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingTarget_self_CastInput, float K2Node_Event_DeltaSeconds, bool CallFunc_IsLocallyControlled_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, float K2Node_CustomEvent_HealthPercent, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealth_ReturnValue, bool CallFunc_IsServer_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AAthena_LockOnWidgetActor_Proto_C* CallFunc_FinishSpawningActor_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class ULotus_Mustache_HealthBar_C* K2Node_DynamicCast_AsLotus_Mustache_Health_Bar, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_3, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_RowToBool_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingTimeUntilMaxTurnSpeed_self_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Lotus_Mustache_C", "ExecuteUbergraph_B_Ranged_Lotus_Mustache");

	Params::AB_Ranged_Lotus_Mustache_C_ExecuteUbergraph_B_Ranged_Lotus_Mustache_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_SpawnProjectile = K2Node_Event_SpawnProjectile;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetHomingStyle_self_CastInput = CallFunc_SetHomingStyle_self_CastInput;
	Parms.CallFunc_SetHomingLockTargetDistanceThreshold_self_CastInput = CallFunc_SetHomingLockTargetDistanceThreshold_self_CastInput;
	Parms.CallFunc_SetHomingTurnSpeedMax_self_CastInput = CallFunc_SetHomingTurnSpeedMax_self_CastInput;
	Parms.CallFunc_SetHomingTurnSpeedMin_self_CastInput = CallFunc_SetHomingTurnSpeedMin_self_CastInput;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_SetHomingTarget_self_CastInput = CallFunc_SetHomingTarget_self_CastInput;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_Event_bPersistentFire = K2Node_Event_bPersistentFire;
	Parms.K2Node_Event_bSecondaryFire = K2Node_Event_bSecondaryFire;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_Athena = K2Node_DynamicCast_AsFort_Player_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_HealthPercent = K2Node_CustomEvent_HealthPercent;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_Conv_VectorToTransform_ReturnValue = CallFunc_Conv_VectorToTransform_ReturnValue;
	Parms.CallFunc_K2_SetActorLocation_SweepHitResult = CallFunc_K2_SetActorLocation_SweepHitResult;
	Parms.CallFunc_K2_SetActorLocation_ReturnValue = CallFunc_K2_SetActorLocation_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsLotus_Mustache_Health_Bar = K2Node_DynamicCast_AsLotus_Mustache_Health_Bar;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetDistanceTo_ReturnValue = CallFunc_GetDistanceTo_ReturnValue;
	Parms.CallFunc_RowToBool_ReturnValue = CallFunc_RowToBool_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SetHomingTimeUntilMaxTurnSpeed_self_CastInput = CallFunc_SetHomingTimeUntilMaxTurnSpeed_self_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}

}


