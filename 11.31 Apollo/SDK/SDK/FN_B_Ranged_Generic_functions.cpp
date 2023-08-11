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


// Function B_Ranged_Generic.B_Ranged_Generic_C.GetScopeParameters
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        ScopeComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   DepthOfFieldVignetteRange                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              WeaponSightsCameraOffset                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::GetScopeParameters(class UStaticMeshComponent** ScopeComponent, struct FVector2D* DepthOfFieldVignetteRange, float* WeaponSightsCameraOffset, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "GetScopeParameters");

	Params::AB_Ranged_Generic_C_GetScopeParameters_Params Parms;

	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ScopeComponent != nullptr)
		*ScopeComponent = Parms.ScopeComponent;

	if (DepthOfFieldVignetteRange != nullptr)
		*DepthOfFieldVignetteRange = Parms.DepthOfFieldVignetteRange;

	if (WeaponSightsCameraOffset != nullptr)
		*WeaponSightsCameraOffset = Parms.WeaponSightsCameraOffset;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.GetActiveMuzzleComponents
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UFXSystemComponent*>  NewParam                                                         (Parm, OutParm, ZeroConstructor, ContainsInstancedReference)
// TArray<class UFXSystemComponent*>  K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UObject*                     CallFunc_LoadAsset_Blocking_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              K2Node_DynamicCast_AsNiagara_System                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetMuzzleSocketName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFXSystemComponent*>  K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::GetActiveMuzzleComponents(TArray<class UFXSystemComponent*>* NewParam, TArray<class UFXSystemComponent*>& K2Node_MakeArray_Array, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_GetMuzzleSocketName_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, TArray<class UFXSystemComponent*>& K2Node_MakeArray_Array_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "GetActiveMuzzleComponents");

	Params::AB_Ranged_Generic_C_GetActiveMuzzleComponents_Params Parms;

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_LoadAsset_Blocking_ReturnValue = CallFunc_LoadAsset_Blocking_ReturnValue;
	Parms.K2Node_DynamicCast_AsNiagara_System = K2Node_DynamicCast_AsNiagara_System;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetMuzzleSocketName_ReturnValue = CallFunc_GetMuzzleSocketName_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetActiveMuzzleComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NiagaraEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::SetActiveMuzzleComponent(bool NiagaraEnabled)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "SetActiveMuzzleComponent");

	Params::AB_Ranged_Generic_C_SetActiveMuzzleComponent_Params Parms;

	Parms.NiagaraEnabled = NiagaraEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.StopScopedAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::StopScopedAudio(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "StopScopedAudio");

	Params::AB_Ranged_Generic_C_StopScopedAudio_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.StartScopedAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::StartScopedAudio(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "StartScopedAudio");

	Params::AB_Ranged_Generic_C_StartScopedAudio_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetPostProcessParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::SetPostProcessParams(float InputPin)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "SetPostProcessParams");

	Params::AB_Ranged_Generic_C_SetPostProcessParams_Params Parms;

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetActiveAlterationIdleParticles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::SetActiveAlterationIdleParticles(bool Active, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "SetActiveAlterationIdleParticles");

	Params::AB_Ranged_Generic_C_SetActiveAlterationIdleParticles_Params Parms;

	Parms.Active = Active;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShowReticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 CallFunc_GetInstigatorController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerZone*   K2Node_DynamicCast_AsFort_Player_Controller_Zone                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::ShowReticle(class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "ShowReticle");

	Params::AB_Ranged_Generic_C_ShowReticle_Params Parms;

	Parms.CallFunc_GetInstigatorController_ReturnValue = CallFunc_GetInstigatorController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Zone = K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.HideReticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AController*                 CallFunc_GetInstigatorController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerZone*   K2Node_DynamicCast_AsFort_Player_Controller_Zone                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::HideReticle(class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "HideReticle");

	Params::AB_Ranged_Generic_C_HideReticle_Params Parms;

	Parms.CallFunc_GetInstigatorController_ReturnValue = CallFunc_GetInstigatorController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Zone = K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateOrDeactivateWindParticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewActive                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::ActivateOrDeactivateWindParticle(bool bNewActive)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "ActivateOrDeactivateWindParticle");

	Params::AB_Ranged_Generic_C_ActivateOrDeactivateWindParticle_Params Parms;

	Parms.bNewActive = bNewActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateMuzzleFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFXSystemComponent*>  CallFunc_GetActiveMuzzleComponents_NewParam                      (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::DeactivateMuzzleFX(int32 Temp_int_Variable, TArray<class UFXSystemComponent*>& CallFunc_GetActiveMuzzleComponents_NewParam, int32 CallFunc_Add_IntInt_ReturnValue, class UFXSystemComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "DeactivateMuzzleFX");

	Params::AB_Ranged_Generic_C_DeactivateMuzzleFX_Params Parms;

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_GetActiveMuzzleComponents_NewParam = CallFunc_GetActiveMuzzleComponents_NewParam;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateReloadSmokeFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::DeactivateReloadSmokeFX(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "DeactivateReloadSmokeFX");

	Params::AB_Ranged_Generic_C_DeactivateReloadSmokeFX_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateReloadSmokeFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::ActivateReloadSmokeFX(bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "ActivateReloadSmokeFX");

	Params::AB_Ranged_Generic_C_ActivateReloadSmokeFX_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateShellsFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Bool                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::ActivateShellsFX(bool Bool)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "ActivateShellsFX");

	Params::AB_Ranged_Generic_C_ActivateShellsFX_Params Parms;

	Parms.Bool = Bool;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateShellsFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::DeactivateShellsFX(bool CallFunc_IsActive_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "DeactivateShellsFX");

	Params::AB_Ranged_Generic_C_DeactivateShellsFX_Params Parms;

	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetupShellFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_FloatToVector_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::SetupShellFX(bool CallFunc_DoesSocketExist_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "SetupShellFX");

	Params::AB_Ranged_Generic_C_SetupShellFX_Params Parms;

	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_Conv_FloatToVector_ReturnValue = CallFunc_Conv_FloatToVector_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UpdateShellEmittersFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_ShouldPlayPersistentFireFX_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldPlayPersistentFireFX_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldPlayPersistentFireFX_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldPlayPersistentFireFX_ReturnValue_3                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldPlayPersistentFireFX_ReturnValue_4                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldPlayPersistentFireFX_ReturnValue_5                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldPlayPersistentFireFX_ReturnValue_6                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldPlayPersistentFireFX_ReturnValue_7                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetShellReloadCounter_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldPlayPersistentFireFX_ReturnValue_8                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::UpdateShellEmittersFX(bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue, bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue_1, bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue_3, bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue_4, bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue_5, bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue_6, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue_7, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, int32 CallFunc_GetShellReloadCounter_ReturnValue, int32 CallFunc_Max_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue_8, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_8)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "UpdateShellEmittersFX");

	Params::AB_Ranged_Generic_C_UpdateShellEmittersFX_Params Parms;

	Parms.CallFunc_ShouldPlayPersistentFireFX_ReturnValue = CallFunc_ShouldPlayPersistentFireFX_ReturnValue;
	Parms.CallFunc_ShouldPlayPersistentFireFX_ReturnValue_1 = CallFunc_ShouldPlayPersistentFireFX_ReturnValue_1;
	Parms.CallFunc_ShouldPlayPersistentFireFX_ReturnValue_2 = CallFunc_ShouldPlayPersistentFireFX_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_ShouldPlayPersistentFireFX_ReturnValue_3 = CallFunc_ShouldPlayPersistentFireFX_ReturnValue_3;
	Parms.CallFunc_ShouldPlayPersistentFireFX_ReturnValue_4 = CallFunc_ShouldPlayPersistentFireFX_ReturnValue_4;
	Parms.CallFunc_ShouldPlayPersistentFireFX_ReturnValue_5 = CallFunc_ShouldPlayPersistentFireFX_ReturnValue_5;
	Parms.CallFunc_ShouldPlayPersistentFireFX_ReturnValue_6 = CallFunc_ShouldPlayPersistentFireFX_ReturnValue_6;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_ShouldPlayPersistentFireFX_ReturnValue_7 = CallFunc_ShouldPlayPersistentFireFX_ReturnValue_7;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_GetShellReloadCounter_ReturnValue = CallFunc_GetShellReloadCounter_ReturnValue;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;
	Parms.CallFunc_ShouldPlayPersistentFireFX_ReturnValue_8 = CallFunc_ShouldPlayPersistentFireFX_ReturnValue_8;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_7 = CallFunc_BooleanAND_ReturnValue_7;
	Parms.CallFunc_BooleanAND_ReturnValue_8 = CallFunc_BooleanAND_ReturnValue_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortReloadFXState      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::Muzzle_Play_Reload_FX(enum class EFortReloadFXState Selection, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "Muzzle Play Reload FX");

	Params::AB_Ranged_Generic_C_Muzzle_Play_Reload_FX_Params Parms;

	Parms.Selection = Selection;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Persistent_Fire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingScope_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFXSystemComponent*>  CallFunc_GetActiveMuzzleComponents_NewParam                      (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UFXSystemComponent*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::Muzzle_Flash_FX(bool Persistent_Fire, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsUsingScope_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<class UFXSystemComponent*>& CallFunc_GetActiveMuzzleComponents_NewParam, class UFXSystemComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "Muzzle Flash FX");

	Params::AB_Ranged_Generic_C_Muzzle_Flash_FX_Params Parms;

	Parms.Persistent_Fire = Persistent_Fire;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsUsingScope_ReturnValue = CallFunc_IsUsingScope_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetActiveMuzzleComponents_NewParam = CallFunc_GetActiveMuzzleComponents_NewParam;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWpnRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::SetWpnRarity()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "SetWpnRarity");

	Params::AB_Ranged_Generic_C_SetWpnRarity_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AddRandomScale
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFXSystemComponent*>  CallFunc_GetActiveMuzzleComponents_NewParam                      (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// float                              CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::AddRandomScale(int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, TArray<class UFXSystemComponent*>& CallFunc_GetActiveMuzzleComponents_NewParam, float CallFunc_RandomFloatInRange_ReturnValue_2, class UFXSystemComponent* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFXSystemComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "AddRandomScale");

	Params::AB_Ranged_Generic_C_AddRandomScale_Params Parms;

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_GetActiveMuzzleComponents_NewParam = CallFunc_GetActiveMuzzleComponents_NewParam;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ValidMuzzleSocketCount                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScalarParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FName>                CallFunc_GetUniqueMuzzleSocketNames_Names                        (ZeroConstructor, ReferenceParm)
// TArray<class FName>                CallFunc_GetUniqueMuzzleSocketNames_Names_1                      (ZeroConstructor, ReferenceParm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_GetMuzzleSocketName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTransform                  Temp_struct_Variable_1                                           (ConstParm, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_AddComponent_ReturnValue_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::UserConstructionScript(int32 ValidMuzzleSocketCount, int32 Temp_int_Loop_Counter_Variable, const struct FTransform& Temp_struct_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_GetScalarParameterValue_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, TArray<class FName>& CallFunc_GetUniqueMuzzleSocketNames_Names, TArray<class FName>& CallFunc_GetUniqueMuzzleSocketNames_Names_1, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UParticleSystemComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue, class FName CallFunc_GetMuzzleSocketName_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, const struct FTransform& Temp_struct_Variable_1, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "UserConstructionScript");

	Params::AB_Ranged_Generic_C_UserConstructionScript_Params Parms;

	Parms.ValidMuzzleSocketCount = ValidMuzzleSocketCount;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue = CallFunc_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_GetUniqueMuzzleSocketNames_Names = CallFunc_GetUniqueMuzzleSocketNames_Names;
	Parms.CallFunc_GetUniqueMuzzleSocketNames_Names_1 = CallFunc_GetUniqueMuzzleSocketNames_Names_1;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue = CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue;
	Parms.CallFunc_GetMuzzleSocketName_ReturnValue = CallFunc_GetMuzzleSocketName_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_1 = CallFunc_K2_AttachToComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_AddComponent_ReturnValue_1 = CallFunc_AddComponent_ReturnValue_1;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue_2 = CallFunc_K2_AttachToComponent_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::AnimateScopePostProcess__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "AnimateScopePostProcess__FinishedFunc");

	Params::AB_Ranged_Generic_C_AnimateScopePostProcess__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::AnimateScopePostProcess__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "AnimateScopePostProcess__UpdateFunc");

	Params::AB_Ranged_Generic_C_AnimateScopePostProcess__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4DE6158742ED7EE528BC98A240A81632
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::OnLoaded_4DE6158742ED7EE528BC98A240A81632(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnLoaded_4DE6158742ED7EE528BC98A240A81632");

	Params::AB_Ranged_Generic_C_OnLoaded_4DE6158742ED7EE528BC98A240A81632_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_3A9BBE884A5C5966375089938B7DC0CA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnLoaded_3A9BBE884A5C5966375089938B7DC0CA");

	Params::AB_Ranged_Generic_C_OnLoaded_3A9BBE884A5C5966375089938B7DC0CA_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_83457BA843174AC6288682A342EBEAD9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::OnLoaded_83457BA843174AC6288682A342EBEAD9(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnLoaded_83457BA843174AC6288682A342EBEAD9");

	Params::AB_Ranged_Generic_C_OnLoaded_83457BA843174AC6288682A342EBEAD9_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_5B08633343C4DA6FF40449A8A36357E4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::OnLoaded_5B08633343C4DA6FF40449A8A36357E4(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnLoaded_5B08633343C4DA6FF40449A8A36357E4");

	Params::AB_Ranged_Generic_C_OnLoaded_5B08633343C4DA6FF40449A8A36357E4_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPersistentFire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSecondaryFire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnPlayWeaponFireFX");

	Params::AB_Ranged_Generic_C_OnPlayWeaponFireFX_Params Parms;

	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnStopWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::OnStopWeaponFireFX()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnStopWeaponFireFX");

	Params::AB_Ranged_Generic_C_OnStopWeaponFireFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortReloadFXState      ReloadStage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::OnPlayReloadFX(enum class EFortReloadFXState ReloadStage)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnPlayReloadFX");

	Params::AB_Ranged_Generic_C_OnPlayReloadFX_Params Parms;

	Parms.ReloadStage = ReloadStage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewIsTargeting                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::OnSetTargeting(bool bNewIsTargeting)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnSetTargeting");

	Params::AB_Ranged_Generic_C_OnSetTargeting_Params Parms;

	Parms.bNewIsTargeting = bNewIsTargeting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::K2_OnUnEquip()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "K2_OnUnEquip");

	Params::AB_Ranged_Generic_C_K2_OnUnEquip_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.InitializeScopeVariables
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::InitializeScopeVariables()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "InitializeScopeVariables");

	Params::AB_Ranged_Generic_C_InitializeScopeVariables_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable_Or_Disable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              StencilBufferValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int32 StencilBufferValue)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "Update Enemy Custom Depths");

	Params::AB_Ranged_Generic_C_Update_Enemy_Custom_Depths_Params Parms;

	Parms.Enable_Or_Disable = Enable_Or_Disable;
	Parms.StencilBufferValue = StencilBufferValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::OnWeaponAttached()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnWeaponAttached");

	Params::AB_Ranged_Generic_C_OnWeaponAttached_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortAlterationItemDefinition*NewAlteration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnInitAlteration");

	Params::AB_Ranged_Generic_C_OnInitAlteration_Params Parms;

	Parms.NewAlteration = NewAlteration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortCosmeticModification   CosmeticMod                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void AB_Ranged_Generic_C::OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnInitCosmeticAlterations");

	Params::AB_Ranged_Generic_C_OnInitCosmeticAlterations_Params Parms;

	Parms.CosmeticMod = CosmeticMod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShellsON_(onPump)
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::ShellsON__onPump_()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "ShellsON_(onPump)");

	Params::AB_Ranged_Generic_C_ShellsON__onPump__Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnEquippedWeaponDestory
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::OnEquippedWeaponDestory()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnEquippedWeaponDestory");

	Params::AB_Ranged_Generic_C_OnEquippedWeaponDestory_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              TargetLimit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::SetWeaponPierceThrough(bool Enable, int32 TargetLimit)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "SetWeaponPierceThrough");

	Params::AB_Ranged_Generic_C_SetWeaponPierceThrough_Params Parms;

	Parms.Enable = Enable;
	Parms.TargetLimit = TargetLimit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough_ClientRep
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              TargetLimit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::SetWeaponPierceThrough_ClientRep(bool Enable, int32 TargetLimit)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "SetWeaponPierceThrough_ClientRep");

	Params::AB_Ranged_Generic_C_SetWeaponPierceThrough_ClientRep_Params Parms;

	Parms.Enable = Enable;
	Parms.TargetLimit = TargetLimit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "ReceiveBeginPlay");

	Params::AB_Ranged_Generic_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bSetForLocalControllerOnly                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnWeaponVisibilityChanged");

	Params::AB_Ranged_Generic_C_OnWeaponVisibilityChanged_Params Parms;

	Parms.bVisible = bVisible;
	Parms.bSetForLocalControllerOnly = bSetForLocalControllerOnly;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.HideWeaponMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::HideWeaponMesh()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "HideWeaponMesh");

	Params::AB_Ranged_Generic_C_HideWeaponMesh_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShowWeaponMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::ShowWeaponMesh()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "ShowWeaponMesh");

	Params::AB_Ranged_Generic_C_ShowWeaponMesh_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.HideWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::HideWeapon()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "HideWeapon");

	Params::AB_Ranged_Generic_C_HideWeapon_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShowWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::ShowWeapon()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "ShowWeapon");

	Params::AB_Ranged_Generic_C_ShowWeapon_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ReverseScopePP
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::ReverseScopePP()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "ReverseScopePP");

	Params::AB_Ranged_Generic_C_ReverseScopePP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ResetDoonceScopeSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::ResetDoonceScopeSound()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "ResetDoonceScopeSound");

	Params::AB_Ranged_Generic_C_ResetDoonceScopeSound_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideThirdPersonStuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::UnhideThirdPersonStuff()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "UnhideThirdPersonStuff");

	Params::AB_Ranged_Generic_C_UnhideThirdPersonStuff_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.PlayScopePP
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::PlayScopePP()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "PlayScopePP");

	Params::AB_Ranged_Generic_C_PlayScopePP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.HideFirstPersonStuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::HideFirstPersonStuff()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "HideFirstPersonStuff");

	Params::AB_Ranged_Generic_C_HideFirstPersonStuff_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AbortScopeFX
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::AbortScopeFX()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "AbortScopeFX");

	Params::AB_Ranged_Generic_C_AbortScopeFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.HideThirdPersonStuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::HideThirdPersonStuff()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "HideThirdPersonStuff");

	Params::AB_Ranged_Generic_C_HideThirdPersonStuff_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Which_Call                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::UnhideFirstPersonStuffPart2(int32 Which_Call)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "UnhideFirstPersonStuffPart2");

	Params::AB_Ranged_Generic_C_UnhideFirstPersonStuffPart2_Params Parms;

	Parms.Which_Call = Which_Call;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::UnhideFirstPersonStuffPart1()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "UnhideFirstPersonStuffPart1");

	Params::AB_Ranged_Generic_C_UnhideFirstPersonStuffPart1_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeFX
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::ForceScopeFX()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "ForceScopeFX");

	Params::AB_Ranged_Generic_C_ForceScopeFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.BindFireRateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::BindFireRateChange()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "BindFireRateChange");

	Params::AB_Ranged_Generic_C_BindFireRateChange_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.PitchUpOnRateOfFireChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewRateOfFire                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::PitchUpOnRateOfFireChange(float NewRateOfFire)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "PitchUpOnRateOfFireChange");

	Params::AB_Ranged_Generic_C_PitchUpOnRateOfFireChange_Params Parms;

	Parms.NewRateOfFire = NewRateOfFire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionFixOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::ShellEjectionFixOn()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "ShellEjectionFixOn");

	Params::AB_Ranged_Generic_C_ShellEjectionFixOn_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Bind on Effects Quality
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::Bind_on_Effects_Quality()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "Bind on Effects Quality");

	Params::AB_Ranged_Generic_C_Bind_on_Effects_Quality_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::ShellEjectionOff()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "ShellEjectionOff");

	Params::AB_Ranged_Generic_C_ShellEjectionOff_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeBackImmediatly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::ForceScopeBackImmediatly()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "ForceScopeBackImmediatly");

	Params::AB_Ranged_Generic_C_ForceScopeBackImmediatly_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayImpactFX
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// enum class EPhysicalSurface        ImpactPhysicalSurface                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          SpawnedPSC                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_Ranged_Generic_C::OnPlayImpactFX(struct FHitResult& HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnPlayImpactFX");

	Params::AB_Ranged_Generic_C_OnPlayImpactFX_Params Parms;

	Parms.HitResult = HitResult;
	Parms.ImpactPhysicalSurface = ImpactPhysicalSurface;
	Parms.SpawnedPSC = SpawnedPSC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnStartOverheated
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_Ranged_Generic_C::OnStartOverheated()
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "OnStartOverheated");

	Params::AB_Ranged_Generic_C_OnStartOverheated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetPI_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_DynamicCast_AsParticle_System                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bPersistentFire                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSecondaryFire                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortReloadFXState      K2Node_Event_ReloadStage                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MathExpression_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bNewIsTargeting                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetHiddenInGameOtherLocalControllersOnly_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetHiddenInGameControllerOnly_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AFortAIPawn*>         CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// bool                               K2Node_CustomEvent_Enable_Or_Disable                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_StencilBufferValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UFortAlterationItemDefinition*K2Node_Event_NewAlteration                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortCosmeticModification   K2Node_Event_CosmeticMod                                         ()
// TSoftObjectPtr<class UFXSystemAsset>CallFunc_SelectAltSystemAsset_ReturnValue                        (HasGetValueTypeHash)
// bool                               CallFunc_IsAssetNull_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAssetNull_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UFXSystemAsset>CallFunc_SelectAltSystemAsset_ReturnValue_1                      (HasGetValueTypeHash)
// bool                               CallFunc_IsAssetNull_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAssetNull_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseScopeTargeting_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              K2Node_DynamicCast_AsNiagara_System                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UNiagaraSystem*              CallFunc_SetBeamNiagaraSystem_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             K2Node_DynamicCast_AsParticle_System_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystem*             CallFunc_SetBeamParticleSystem_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enable_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_TargetLimit_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enable                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_TargetLimit                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInVehicle_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingFirstPersonCamera_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsUsingScopeOrFirstPersonCamera_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AController*                 CallFunc_GetInstigatorController_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerControllerZone*   K2Node_DynamicCast_AsFort_Player_Controller_Zone                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortWindManager*            CallFunc_GetWindManager_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UseScopeTargeting_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseScopeTargeting_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bVisible                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSetForLocalControllerOnly                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRenderingDetailMode_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRenderingDetailMode_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_SetHiddenInGameControllerOnly_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_Which_Call                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewRateOfFire                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWeaponRateOfFireModifier_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInAthena_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGameUserSettings*       CallFunc_GetFortGameUserSettings_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_6                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInVehicle_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_7                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// enum class EPhysicalSurface        K2Node_Event_ImpactPhysicalSurface                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          K2Node_Event_SpawnedPSC                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortAIPawn*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_8                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingActor*              K2Node_DynamicCast_AsBuilding_Actor                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_NegateVector_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortTeamAffiliation    CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsTargeting_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsTargeting_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetIsTargeting_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateBrush                 CallFunc_GetWeaponDataSmallPreviewImageBrush_ReturnValue         ()
// enum class EFortWeaponTriggerType  CallFunc_GetWeaponDataTriggerType_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldPlayPersistentFireFX_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UFXSystemComponent*>  CallFunc_GetActiveMuzzleComponents_NewParam                      (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UFXSystemComponent*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UParticleSystemComponent*    CallFunc_GetBeamPSC_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUseBeamParticles_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_9                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Generic_Parent_C*K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetNumericCVar_OutValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNumericCVar_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNumericCVar_OutValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNumericCVar_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetNumericCVar_OutValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNumericCVar_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FMax_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNumericCVar_OutValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNumericCVar_ReturnValue_3                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue_3                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNumericCVar_OutValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNumericCVar_ReturnValue_4                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_FMax_ReturnValue_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APawn*                       CallFunc_GetInstigator_ReturnValue_10                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_5                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue_2           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              K2Node_DynamicCast_AsNiagara_System_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_DynamicCast_AsParticle_System_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class UParticleSystem*             K2Node_DynamicCast_AsParticle_System_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_17                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue_1                        (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_5                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_1                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_6                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_7                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_8                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_9                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_FindLookAtRotation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::ExecuteUbergraph_B_Ranged_Generic(int32 EntryPoint, float CallFunc_GetPI_ReturnValue, float CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, int32 Temp_int_Variable, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UObject* K2Node_CustomEvent_Loaded_3, class UObject* Temp_object_Variable, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess_1, class APawn* CallFunc_GetInstigator_ReturnValue_1, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, enum class EFortReloadFXState K2Node_Event_ReloadStage, float CallFunc_GetGameTimeInSeconds_ReturnValue, float K2Node_MathExpression_ReturnValue, bool K2Node_MathExpression_ReturnValue_1, class UObject* K2Node_CustomEvent_Loaded_2, class APawn* CallFunc_GetInstigator_ReturnValue_2, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_2, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_Event_bNewIsTargeting, bool CallFunc_SetHiddenInGameOtherLocalControllersOnly_ReturnValue, bool CallFunc_SetHiddenInGameControllerOnly_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, TArray<class AFortAIPawn*>& CallFunc_GetAllActorsOfClass_OutActors, bool K2Node_CustomEvent_Enable_Or_Disable, int32 K2Node_CustomEvent_StencilBufferValue, bool CallFunc_HasAuthority_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortAlterationItemDefinition* K2Node_Event_NewAlteration, const struct FFortCosmeticModification& K2Node_Event_CosmeticMod, TSoftObjectPtr<class UFXSystemAsset> CallFunc_SelectAltSystemAsset_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, TSoftObjectPtr<class UFXSystemAsset> CallFunc_SelectAltSystemAsset_ReturnValue_1, bool CallFunc_IsAssetNull_ReturnValue_2, bool CallFunc_IsAssetNull_ReturnValue_3, class APawn* CallFunc_GetInstigator_ReturnValue_3, bool CallFunc_UseScopeTargeting_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_3, bool K2Node_DynamicCast_bSuccess_4, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, bool Temp_bool_IsClosed_Variable, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, class UObject* Temp_object_Variable_1, class APawn* CallFunc_GetInstigator_ReturnValue_4, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System, bool K2Node_DynamicCast_bSuccess_5, class UNiagaraSystem* CallFunc_SetBeamNiagaraSystem_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class UParticleSystem* K2Node_DynamicCast_AsParticle_System_1, bool K2Node_DynamicCast_bSuccess_6, class UParticleSystem* CallFunc_SetBeamParticleSystem_ReturnValue, bool K2Node_CustomEvent_Enable_1, int32 K2Node_CustomEvent_TargetLimit_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_CustomEvent_Enable, int32 K2Node_CustomEvent_TargetLimit, class APawn* CallFunc_GetInstigator_ReturnValue_5, int32 CallFunc_SelectInt_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsUsingFirstPersonCamera_ReturnValue, bool CallFunc_IsUsingScopeOrFirstPersonCamera_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class AController* CallFunc_GetInstigatorController_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess_8, class AFortWindManager* CallFunc_GetWindManager_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_2, bool CallFunc_UseScopeTargeting_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, bool CallFunc_UseScopeTargeting_ReturnValue_2, bool K2Node_Event_bVisible, bool K2Node_Event_bSetForLocalControllerOnly, int32 CallFunc_GetRenderingDetailMode_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetRenderingDetailMode_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_9, bool CallFunc_SetHiddenInGameControllerOnly_ReturnValue_1, int32 K2Node_CustomEvent_Which_Call, float K2Node_CustomEvent_NewRateOfFire, float CallFunc_GetWeaponRateOfFireModifier_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_IsInAthena_ReturnValue, class UFortGameUserSettings* CallFunc_GetFortGameUserSettings_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_6, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsInVehicle_ReturnValue_1, class UObject* K2Node_CustomEvent_Loaded_1, class APawn* CallFunc_GetInstigator_ReturnValue_7, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_4, bool K2Node_DynamicCast_bSuccess_10, bool CallFunc_IsValid_ReturnValue_11, const struct FHitResult& K2Node_Event_HitResult, enum class EPhysicalSurface K2Node_Event_ImpactPhysicalSurface, class UFXSystemComponent* K2Node_Event_SpawnedPSC, int32 Temp_int_Array_Index_Variable, class AFortAIPawn* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class APawn* CallFunc_GetInstigator_ReturnValue_8, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess_11, uint8 CallFunc_GetActorTeam_ReturnValue, const struct FVector& CallFunc_NegateVector_ReturnValue, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_GetIsTargeting_ReturnValue, bool CallFunc_GetIsTargeting_ReturnValue_1, bool CallFunc_GetIsTargeting_ReturnValue_2, const struct FSlateBrush& CallFunc_GetWeaponDataSmallPreviewImageBrush_ReturnValue, enum class EFortWeaponTriggerType CallFunc_GetWeaponDataTriggerType_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_12, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue, TArray<class UFXSystemComponent*>& CallFunc_GetActiveMuzzleComponents_NewParam, class UFXSystemComponent* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, class UParticleSystemComponent* CallFunc_GetBeamPSC_ReturnValue, bool CallFunc_GetUseBeamParticles_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, class APawn* CallFunc_GetInstigator_ReturnValue_9, class APlayerPawn_Generic_Parent_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent, bool K2Node_DynamicCast_bSuccess_13, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_GetNumericCVar_OutValue, bool CallFunc_GetNumericCVar_ReturnValue, float CallFunc_FMax_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetNumericCVar_OutValue_1, bool CallFunc_GetNumericCVar_ReturnValue_1, float CallFunc_GetNumericCVar_OutValue_2, bool CallFunc_GetNumericCVar_ReturnValue_2, float CallFunc_FMax_ReturnValue_1, float CallFunc_FMax_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, float CallFunc_GetNumericCVar_OutValue_3, bool CallFunc_GetNumericCVar_ReturnValue_3, float CallFunc_FMax_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float CallFunc_Divide_FloatFloat_ReturnValue_3, float CallFunc_GetNumericCVar_OutValue_4, bool CallFunc_GetNumericCVar_ReturnValue_4, float CallFunc_FMax_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_4, class APawn* CallFunc_GetInstigator_ReturnValue_10, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_5, bool K2Node_DynamicCast_bSuccess_14, float CallFunc_Multiply_FloatFloat_ReturnValue_2, class APlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_IsValid_ReturnValue_14, class UObject* Temp_object_Variable_2, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System_1, bool K2Node_DynamicCast_bSuccess_15, float CallFunc_Multiply_FloatFloat_ReturnValue_3, class UParticleSystem* K2Node_DynamicCast_AsParticle_System_2, bool K2Node_DynamicCast_bSuccess_16, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_15, class UObject* Temp_object_Variable_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UParticleSystem* K2Node_DynamicCast_AsParticle_System_3, bool K2Node_DynamicCast_bSuccess_17, class UObject* K2Node_CustomEvent_Loaded, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, float CallFunc_Divide_FloatFloat_ReturnValue_5, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_6, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_VSize_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_7, float CallFunc_Divide_FloatFloat_ReturnValue_6, float CallFunc_Divide_FloatFloat_ReturnValue_7, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_8, float CallFunc_Divide_FloatFloat_ReturnValue_9, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, bool CallFunc_DoesSocketExist_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "ExecuteUbergraph_B_Ranged_Generic");

	Params::AB_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPI_ReturnValue = CallFunc_GetPI_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue = CallFunc_GetLocalViewingPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CustomEvent_Loaded_3 = K2Node_CustomEvent_Loaded_3;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsParticle_System = K2Node_DynamicCast_AsParticle_System;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetInstigator_ReturnValue_1 = CallFunc_GetInstigator_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Pawn_1 = K2Node_DynamicCast_AsFort_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Event_bPersistentFire = K2Node_Event_bPersistentFire;
	Parms.K2Node_Event_bSecondaryFire = K2Node_Event_bSecondaryFire;
	Parms.K2Node_Event_ReloadStage = K2Node_Event_ReloadStage;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.K2Node_MathExpression_ReturnValue_1 = K2Node_MathExpression_ReturnValue_1;
	Parms.K2Node_CustomEvent_Loaded_2 = K2Node_CustomEvent_Loaded_2;
	Parms.CallFunc_GetInstigator_ReturnValue_2 = CallFunc_GetInstigator_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsFort_Pawn_2 = K2Node_DynamicCast_AsFort_Pawn_2;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Event_bNewIsTargeting = K2Node_Event_bNewIsTargeting;
	Parms.CallFunc_SetHiddenInGameOtherLocalControllersOnly_ReturnValue = CallFunc_SetHiddenInGameOtherLocalControllersOnly_ReturnValue;
	Parms.CallFunc_SetHiddenInGameControllerOnly_ReturnValue = CallFunc_SetHiddenInGameControllerOnly_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.K2Node_CustomEvent_Enable_Or_Disable = K2Node_CustomEvent_Enable_Or_Disable;
	Parms.K2Node_CustomEvent_StencilBufferValue = K2Node_CustomEvent_StencilBufferValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_NewAlteration = K2Node_Event_NewAlteration;
	Parms.K2Node_Event_CosmeticMod = K2Node_Event_CosmeticMod;
	Parms.CallFunc_SelectAltSystemAsset_ReturnValue = CallFunc_SelectAltSystemAsset_ReturnValue;
	Parms.CallFunc_IsAssetNull_ReturnValue = CallFunc_IsAssetNull_ReturnValue;
	Parms.CallFunc_IsAssetNull_ReturnValue_1 = CallFunc_IsAssetNull_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SelectAltSystemAsset_ReturnValue_1 = CallFunc_SelectAltSystemAsset_ReturnValue_1;
	Parms.CallFunc_IsAssetNull_ReturnValue_2 = CallFunc_IsAssetNull_ReturnValue_2;
	Parms.CallFunc_IsAssetNull_ReturnValue_3 = CallFunc_IsAssetNull_ReturnValue_3;
	Parms.CallFunc_GetInstigator_ReturnValue_3 = CallFunc_GetInstigator_ReturnValue_3;
	Parms.CallFunc_UseScopeTargeting_ReturnValue = CallFunc_UseScopeTargeting_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn_3 = K2Node_DynamicCast_AsFort_Pawn_3;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue_1 = CallFunc_GetLocalViewingPlayerController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_GetInstigator_ReturnValue_4 = CallFunc_GetInstigator_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsNiagara_System = K2Node_DynamicCast_AsNiagara_System;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_SetBeamNiagaraSystem_ReturnValue = CallFunc_SetBeamNiagaraSystem_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsParticle_System_1 = K2Node_DynamicCast_AsParticle_System_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_SetBeamParticleSystem_ReturnValue = CallFunc_SetBeamParticleSystem_ReturnValue;
	Parms.K2Node_CustomEvent_Enable_1 = K2Node_CustomEvent_Enable_1;
	Parms.K2Node_CustomEvent_TargetLimit_1 = K2Node_CustomEvent_TargetLimit_1;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_CustomEvent_Enable = K2Node_CustomEvent_Enable;
	Parms.K2Node_CustomEvent_TargetLimit = K2Node_CustomEvent_TargetLimit;
	Parms.CallFunc_GetInstigator_ReturnValue_5 = CallFunc_GetInstigator_ReturnValue_5;
	Parms.CallFunc_SelectInt_ReturnValue_1 = CallFunc_SelectInt_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_IsInVehicle_ReturnValue = CallFunc_IsInVehicle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsUsingFirstPersonCamera_ReturnValue = CallFunc_IsUsingFirstPersonCamera_ReturnValue;
	Parms.CallFunc_IsUsingScopeOrFirstPersonCamera_ReturnValue = CallFunc_IsUsingScopeOrFirstPersonCamera_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_GetInstigatorController_ReturnValue = CallFunc_GetInstigatorController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Zone = K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_GetWindManager_ReturnValue = CallFunc_GetWindManager_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_2 = CallFunc_IsDedicatedServer_ReturnValue_2;
	Parms.CallFunc_UseScopeTargeting_ReturnValue_1 = CallFunc_UseScopeTargeting_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue_2 = CallFunc_GetSocketLocation_ReturnValue_2;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	Parms.CallFunc_UseScopeTargeting_ReturnValue_2 = CallFunc_UseScopeTargeting_ReturnValue_2;
	Parms.K2Node_Event_bVisible = K2Node_Event_bVisible;
	Parms.K2Node_Event_bSetForLocalControllerOnly = K2Node_Event_bSetForLocalControllerOnly;
	Parms.CallFunc_GetRenderingDetailMode_ReturnValue = CallFunc_GetRenderingDetailMode_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetRenderingDetailMode_ReturnValue_1 = CallFunc_GetRenderingDetailMode_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_SetHiddenInGameControllerOnly_ReturnValue_1 = CallFunc_SetHiddenInGameControllerOnly_ReturnValue_1;
	Parms.K2Node_CustomEvent_Which_Call = K2Node_CustomEvent_Which_Call;
	Parms.K2Node_CustomEvent_NewRateOfFire = K2Node_CustomEvent_NewRateOfFire;
	Parms.CallFunc_GetWeaponRateOfFireModifier_ReturnValue = CallFunc_GetWeaponRateOfFireModifier_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_IsInAthena_ReturnValue = CallFunc_IsInAthena_ReturnValue;
	Parms.CallFunc_GetFortGameUserSettings_ReturnValue = CallFunc_GetFortGameUserSettings_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue_6 = CallFunc_GetInstigator_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_1 = K2Node_DynamicCast_AsFort_Player_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_IsInVehicle_ReturnValue_1 = CallFunc_IsInVehicle_ReturnValue_1;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.CallFunc_GetInstigator_ReturnValue_7 = CallFunc_GetInstigator_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsFort_Pawn_4 = K2Node_DynamicCast_AsFort_Pawn_4;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.K2Node_Event_ImpactPhysicalSurface = K2Node_Event_ImpactPhysicalSurface;
	Parms.K2Node_Event_SpawnedPSC = K2Node_Event_SpawnedPSC;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_GetInstigator_ReturnValue_8 = CallFunc_GetInstigator_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsBuilding_Actor = K2Node_DynamicCast_AsBuilding_Actor;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;
	Parms.CallFunc_NegateVector_ReturnValue = CallFunc_NegateVector_ReturnValue;
	Parms.CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue = CallFunc_GetTeamAffiliationToLocalPlayer_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_GetIsTargeting_ReturnValue = CallFunc_GetIsTargeting_ReturnValue;
	Parms.CallFunc_GetIsTargeting_ReturnValue_1 = CallFunc_GetIsTargeting_ReturnValue_1;
	Parms.CallFunc_GetIsTargeting_ReturnValue_2 = CallFunc_GetIsTargeting_ReturnValue_2;
	Parms.CallFunc_GetWeaponDataSmallPreviewImageBrush_ReturnValue = CallFunc_GetWeaponDataSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_GetWeaponDataTriggerType_ReturnValue = CallFunc_GetWeaponDataTriggerType_ReturnValue;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_ShouldPlayPersistentFireFX_ReturnValue = CallFunc_ShouldPlayPersistentFireFX_ReturnValue;
	Parms.CallFunc_GetActiveMuzzleComponents_NewParam = CallFunc_GetActiveMuzzleComponents_NewParam;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_GetBeamPSC_ReturnValue = CallFunc_GetBeamPSC_ReturnValue;
	Parms.CallFunc_GetUseBeamParticles_ReturnValue = CallFunc_GetUseBeamParticles_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetInstigator_ReturnValue_9 = CallFunc_GetInstigator_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent = K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetNumericCVar_OutValue = CallFunc_GetNumericCVar_OutValue;
	Parms.CallFunc_GetNumericCVar_ReturnValue = CallFunc_GetNumericCVar_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GetNumericCVar_OutValue_1 = CallFunc_GetNumericCVar_OutValue_1;
	Parms.CallFunc_GetNumericCVar_ReturnValue_1 = CallFunc_GetNumericCVar_ReturnValue_1;
	Parms.CallFunc_GetNumericCVar_OutValue_2 = CallFunc_GetNumericCVar_OutValue_2;
	Parms.CallFunc_GetNumericCVar_ReturnValue_2 = CallFunc_GetNumericCVar_ReturnValue_2;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.CallFunc_FMax_ReturnValue_2 = CallFunc_FMax_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_2 = CallFunc_Divide_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetNumericCVar_OutValue_3 = CallFunc_GetNumericCVar_OutValue_3;
	Parms.CallFunc_GetNumericCVar_ReturnValue_3 = CallFunc_GetNumericCVar_ReturnValue_3;
	Parms.CallFunc_FMax_ReturnValue_3 = CallFunc_FMax_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_3 = CallFunc_Divide_FloatFloat_ReturnValue_3;
	Parms.CallFunc_GetNumericCVar_OutValue_4 = CallFunc_GetNumericCVar_OutValue_4;
	Parms.CallFunc_GetNumericCVar_ReturnValue_4 = CallFunc_GetNumericCVar_ReturnValue_4;
	Parms.CallFunc_FMax_ReturnValue_4 = CallFunc_FMax_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_4 = CallFunc_Divide_FloatFloat_ReturnValue_4;
	Parms.CallFunc_GetInstigator_ReturnValue_10 = CallFunc_GetInstigator_ReturnValue_10;
	Parms.K2Node_DynamicCast_AsFort_Pawn_5 = K2Node_DynamicCast_AsFort_Pawn_5;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue_2 = CallFunc_GetLocalViewingPlayerController_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_DynamicCast_AsNiagara_System_1 = K2Node_DynamicCast_AsNiagara_System_1;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_3 = CallFunc_Multiply_FloatFloat_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsParticle_System_2 = K2Node_DynamicCast_AsParticle_System_2;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_4 = CallFunc_Multiply_FloatFloat_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_5 = CallFunc_Multiply_FloatFloat_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_DynamicCast_AsParticle_System_3 = K2Node_DynamicCast_AsParticle_System_3;
	Parms.K2Node_DynamicCast_bSuccess_17 = K2Node_DynamicCast_bSuccess_17;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue_1 = CallFunc_GetSocketTransform_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_3 = CallFunc_GetSocketLocation_ReturnValue_3;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_5 = CallFunc_Divide_FloatFloat_ReturnValue_5;
	Parms.CallFunc_GetSocketLocation_ReturnValue_4 = CallFunc_GetSocketLocation_ReturnValue_4;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_6 = CallFunc_Multiply_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_1 = CallFunc_SpawnEmitterAttached_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_7 = CallFunc_Multiply_FloatFloat_ReturnValue_7;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_6 = CallFunc_Divide_FloatFloat_ReturnValue_6;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_7 = CallFunc_Divide_FloatFloat_ReturnValue_7;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_8 = CallFunc_Divide_FloatFloat_ReturnValue_8;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_9 = CallFunc_Divide_FloatFloat_ReturnValue_9;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_DoesSocketExist_ReturnValue_1 = CallFunc_DoesSocketExist_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_FindLookAtRotation_ReturnValue = CallFunc_FindLookAtRotation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.onAimDownSightsChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AimDownsights                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_Ranged_Generic_C::OnAimDownSightsChanged__DelegateSignature(bool AimDownsights)
{
	static auto Func = Class->GetFunction("B_Ranged_Generic_C", "onAimDownSightsChanged__DelegateSignature");

	Params::AB_Ranged_Generic_C_OnAimDownSightsChanged__DelegateSignature_Params Parms;

	Parms.AimDownsights = AimDownsights;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
