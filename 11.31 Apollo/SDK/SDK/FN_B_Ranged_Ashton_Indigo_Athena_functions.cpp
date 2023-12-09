#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C
// (Actor)

class UClass* AB_Ranged_Ashton_Indigo_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Ranged_Ashton_Indigo_Athena_C");

	return Clss;
}


// B_Ranged_Ashton_Indigo_Athena_C B_Ranged_Ashton_Indigo_Athena.Default__B_Ranged_Ashton_Indigo_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Ranged_Ashton_Indigo_Athena_C* AB_Ranged_Ashton_Indigo_Athena_C::GetDefaultObj()
{
	static class AB_Ranged_Ashton_Indigo_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Ranged_Ashton_Indigo_Athena_C*>(AB_Ranged_Ashton_Indigo_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.ShowReticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 CallFunc_GetInstigatorController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerZone*   K2Node_DynamicCast_AsFort_Player_Controller_Zone                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Ashton_Indigo_Athena_C::ShowReticle(class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "ShowReticle");

	Params::AB_Ranged_Ashton_Indigo_Athena_C_ShowReticle_Params Parms{};

	Parms.CallFunc_GetInstigatorController_ReturnValue = CallFunc_GetInstigatorController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Zone = K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.HideReticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 CallFunc_GetInstigatorController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerZone*   K2Node_DynamicCast_AsFort_Player_Controller_Zone                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Ashton_Indigo_Athena_C::HideReticle(class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "HideReticle");

	Params::AB_Ranged_Ashton_Indigo_Athena_C_HideReticle_Params Parms{};

	Parms.CallFunc_GetInstigatorController_ReturnValue = CallFunc_GetInstigatorController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Zone = K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.CenterReset__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Ranged_Ashton_Indigo_Athena_C::CenterReset__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "CenterReset__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.CenterReset__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Ranged_Ashton_Indigo_Athena_C::CenterReset__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "CenterReset__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.CenterSize__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Ranged_Ashton_Indigo_Athena_C::CenterSize__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "CenterSize__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.CenterSize__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Ranged_Ashton_Indigo_Athena_C::CenterSize__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "CenterSize__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.Intensity__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Ranged_Ashton_Indigo_Athena_C::Intensity__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "Intensity__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.Intensity__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Ranged_Ashton_Indigo_Athena_C::Intensity__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "Intensity__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPersistentFire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSecondaryFire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Ashton_Indigo_Athena_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "OnPlayWeaponFireFX");

	Params::AB_Ranged_Ashton_Indigo_Athena_C_OnPlayWeaponFireFX_Params Parms{};

	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.OnStopWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AB_Ranged_Ashton_Indigo_Athena_C::OnStopWeaponFireFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "OnStopWeaponFireFX");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Ranged_Ashton_Indigo_Athena_C::K2_OnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "K2_OnUnEquip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Ranged_Ashton_Indigo_Athena_C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "OnWeaponAttached");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Ranged_Ashton_Indigo_Athena_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.HandFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EDualWeaponHand         Hand                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPersistantFire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Ashton_Indigo_Athena_C::HandFired(enum class EDualWeaponHand Hand, bool bPersistantFire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "HandFired");

	Params::AB_Ranged_Ashton_Indigo_Athena_C_HandFired_Params Parms{};

	Parms.Hand = Hand;
	Parms.bPersistantFire = bPersistantFire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.BindOnHandFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Ashton_Indigo_Athena_C::BindOnHandFired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "BindOnHandFired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.OnSetTargeting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewIsTargeting                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Ashton_Indigo_Athena_C::OnSetTargeting(bool bNewIsTargeting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "OnSetTargeting");

	Params::AB_Ranged_Ashton_Indigo_Athena_C_OnSetTargeting_Params Parms{};

	Parms.bNewIsTargeting = bNewIsTargeting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.OnSpawnProjectile
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortProjectileBase*         SpawnProjectile                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Ashton_Indigo_Athena_C::OnSpawnProjectile(class AFortProjectileBase* SpawnProjectile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "OnSpawnProjectile");

	Params::AB_Ranged_Ashton_Indigo_Athena_C_OnSpawnProjectile_Params Parms{};

	Parms.SpawnProjectile = SpawnProjectile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.LockOnStart
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Ashton_Indigo_Athena_C::LockOnStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "LockOnStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.LockOnEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Ashton_Indigo_Athena_C::LockOnEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "LockOnEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.NewTarget
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Ashton_Indigo_Athena_C::NewTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "NewTarget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Ashton_Indigo_Athena_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "ReceiveTick");

	Params::AB_Ranged_Ashton_Indigo_Athena_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Ashton_Indigo_Athena.B_Ranged_Ashton_Indigo_Athena_C.ExecuteUbergraph_B_Ranged_Ashton_Indigo_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bPersistentFire                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSecondaryFire                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EDualWeaponHand         K2Node_CustomEvent_Hand                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bPersistantFire                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bNewIsTargeting                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortProjectileBase*         K2Node_Event_SpawnProjectile                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_Prj_Ashton_Indigo_C*      K2Node_DynamicCast_AsB_Prj_Ashton_Indigo                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortProjectileMovementInterface>CallFunc_SetHomingStyle_self_CastInput                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortProjectileMovementInterface>CallFunc_SetHomingTurnSpeedMax_self_CastInput                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortProjectileMovementInterface>CallFunc_SetHomingTurnSpeedMin_self_CastInput                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortProjectileMovementInterface>CallFunc_SetHomingLockTargetDistanceThreshold_self_CastInput     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortProjectileMovementInterface>CallFunc_SetHomingTimeUntilMaxTurnSpeed_self_CastInput           (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IFortProjectileMovementInterface>CallFunc_SetHomingTarget_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAshton_Indigo_LockOnWidget_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Ashton_Indigo_Athena_C::ExecuteUbergraph_B_Ranged_Ashton_Indigo_Athena(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, enum class EDualWeaponHand K2Node_CustomEvent_Hand, bool K2Node_CustomEvent_bPersistantFire, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1, bool K2Node_Event_bNewIsTargeting, class AFortProjectileBase* K2Node_Event_SpawnProjectile, class AB_Prj_Ashton_Indigo_C* K2Node_DynamicCast_AsB_Prj_Ashton_Indigo, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingStyle_self_CastInput, bool Temp_bool_Has_Been_Initd_Variable_1, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingTurnSpeedMax_self_CastInput, float CallFunc_Subtract_FloatFloat_ReturnValue, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingTurnSpeedMin_self_CastInput, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingLockTargetDistanceThreshold_self_CastInput, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingTimeUntilMaxTurnSpeed_self_CastInput, TScriptInterface<class IFortProjectileMovementInterface> CallFunc_SetHomingTarget_self_CastInput, class UAshton_Indigo_LockOnWidget_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float K2Node_Event_DeltaSeconds, bool Temp_bool_IsClosed_Variable_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Ashton_Indigo_Athena_C", "ExecuteUbergraph_B_Ranged_Ashton_Indigo_Athena");

	Params::AB_Ranged_Ashton_Indigo_Athena_C_ExecuteUbergraph_B_Ranged_Ashton_Indigo_Athena_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_Event_bPersistentFire = K2Node_Event_bPersistentFire;
	Parms.K2Node_Event_bSecondaryFire = K2Node_Event_bSecondaryFire;
	Parms.K2Node_CustomEvent_Hand = K2Node_CustomEvent_Hand;
	Parms.K2Node_CustomEvent_bPersistantFire = K2Node_CustomEvent_bPersistantFire;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1 = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable_1;
	Parms.K2Node_Event_bNewIsTargeting = K2Node_Event_bNewIsTargeting;
	Parms.K2Node_Event_SpawnProjectile = K2Node_Event_SpawnProjectile;
	Parms.K2Node_DynamicCast_AsB_Prj_Ashton_Indigo = K2Node_DynamicCast_AsB_Prj_Ashton_Indigo;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetHomingStyle_self_CastInput = CallFunc_SetHomingStyle_self_CastInput;
	Parms.Temp_bool_Has_Been_Initd_Variable_1 = Temp_bool_Has_Been_Initd_Variable_1;
	Parms.CallFunc_SetHomingTurnSpeedMax_self_CastInput = CallFunc_SetHomingTurnSpeedMax_self_CastInput;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_SetHomingTurnSpeedMin_self_CastInput = CallFunc_SetHomingTurnSpeedMin_self_CastInput;
	Parms.CallFunc_SetHomingLockTargetDistanceThreshold_self_CastInput = CallFunc_SetHomingLockTargetDistanceThreshold_self_CastInput;
	Parms.CallFunc_SetHomingTimeUntilMaxTurnSpeed_self_CastInput = CallFunc_SetHomingTimeUntilMaxTurnSpeed_self_CastInput;
	Parms.CallFunc_SetHomingTarget_self_CastInput = CallFunc_SetHomingTarget_self_CastInput;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.Temp_bool_IsClosed_Variable_1 = Temp_bool_IsClosed_Variable_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


