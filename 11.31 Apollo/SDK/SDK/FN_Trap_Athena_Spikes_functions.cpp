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


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ChangeToNormalMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATrap_Athena_Spikes_C::ChangeToNormalMaterial()
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", "ChangeToNormalMaterial");

	Params::ATrap_Athena_Spikes_C_ChangeToNormalMaterial_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C. ChangeToFriendlyMaterial
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AFortPlayerController*>CallFunc_GetLocalFortPlayerControllers_ReturnValue               (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerController*       CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATrap_Athena_Spikes_C::_ChangeToFriendlyMaterial(enum class ESubGame CallFunc_GetSubGame_ReturnValue, TArray<class AFortPlayerController*>& CallFunc_GetLocalFortPlayerControllers_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", " ChangeToFriendlyMaterial");

	Params::ATrap_Athena_Spikes_C__ChangeToFriendlyMaterial_Params Parms;

	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_GetLocalFortPlayerControllers_ReturnValue = CallFunc_GetLocalFortPlayerControllers_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.MaterialSweepOnSpikes
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              SweepSpeed                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                SweepColor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              SweepExponent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Athena_Spikes_C::MaterialSweepOnSpikes(float SweepSpeed, const struct FLinearColor& SweepColor, float SweepExponent, float Temp_float_Variable, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", "MaterialSweepOnSpikes");

	Params::ATrap_Athena_Spikes_C_MaterialSweepOnSpikes_Params Parms;

	Parms.SweepSpeed = SweepSpeed;
	Parms.SweepColor = SweepColor;
	Parms.SweepExponent = SweepExponent;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.SetSpikePosition
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewSpikePosition                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Athena_Spikes_C::SetSpikePosition(float NewSpikePosition, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", "SetSpikePosition");

	Params::ATrap_Athena_Spikes_C_SetSpikePosition_Params Parms;

	Parms.NewSpikePosition = NewSpikePosition;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Athena_Spikes_C::UserConstructionScript(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue)
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", "UserConstructionScript");

	Params::ATrap_Athena_Spikes_C_UserConstructionScript_Params Parms;

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Fire__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATrap_Athena_Spikes_C::Fire__FinishedFunc()
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", "Fire__FinishedFunc");

	Params::ATrap_Athena_Spikes_C_Fire__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Fire__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATrap_Athena_Spikes_C::Fire__UpdateFunc()
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", "Fire__UpdateFunc");

	Params::ATrap_Athena_Spikes_C_Fire__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Retract__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATrap_Athena_Spikes_C::Retract__FinishedFunc()
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", "Retract__FinishedFunc");

	Params::ATrap_Athena_Spikes_C_Retract__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Retract__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATrap_Athena_Spikes_C::Retract__UpdateFunc()
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", "Retract__UpdateFunc");

	Params::ATrap_Athena_Spikes_C_Retract__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.Retract__Sounds__EventFunc
// (BlueprintEvent)
// Parameters:

void ATrap_Athena_Spikes_C::Retract__Sounds__EventFunc()
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", "Retract__Sounds__EventFunc");

	Params::ATrap_Athena_Spikes_C_Retract__Sounds__EventFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ResetSpikes__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATrap_Athena_Spikes_C::ResetSpikes__FinishedFunc()
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", "ResetSpikes__FinishedFunc");

	Params::ATrap_Athena_Spikes_C_ResetSpikes__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ResetSpikes__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATrap_Athena_Spikes_C::ResetSpikes__UpdateFunc()
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", "ResetSpikes__UpdateFunc");

	Params::ATrap_Athena_Spikes_C_ResetSpikes__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnLoaded_8E622EE64F2AF153BE7162BA1D8EBCC1
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Athena_Spikes_C::OnLoaded_8E622EE64F2AF153BE7162BA1D8EBCC1(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", "OnLoaded_8E622EE64F2AF153BE7162BA1D8EBCC1");

	Params::ATrap_Athena_Spikes_C_OnLoaded_8E622EE64F2AF153BE7162BA1D8EBCC1_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnLoaded_8A9D6DF7414FFDD42BE9FCB155F39B4D
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATrap_Athena_Spikes_C::OnLoaded_8A9D6DF7414FFDD42BE9FCB155F39B4D(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", "OnLoaded_8A9D6DF7414FFDD42BE9FCB155F39B4D");

	Params::ATrap_Athena_Spikes_C_OnLoaded_8A9D6DF7414FFDD42BE9FCB155F39B4D_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnReloadEnd
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Athena_Spikes_C::OnReloadEnd()
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", "OnReloadEnd");

	Params::ATrap_Athena_Spikes_C_OnReloadEnd_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnPlaced
// (Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Athena_Spikes_C::OnPlaced()
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", "OnPlaced");

	Params::ATrap_Athena_Spikes_C_OnPlaced_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnFinishedBuilding
// (Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Athena_Spikes_C::OnFinishedBuilding()
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", "OnFinishedBuilding");

	Params::ATrap_Athena_Spikes_C_OnFinishedBuilding_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.GameplayCue.Abilities.Activation.Traps.ActivateTrap
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EGameplayCueEvent       EventType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      Parameters                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void ATrap_Athena_Spikes_C::GameplayCue_Abilities_Activation_Traps_ActivateTrap(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters)
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", "GameplayCue.Abilities.Activation.Traps.ActivateTrap");

	Params::ATrap_Athena_Spikes_C_GameplayCue_Abilities_Activation_Traps_ActivateTrap_Params Parms;

	Parms.EventType = EventType;
	Parms.Parameters = Parameters;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnOutOfDurability
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Athena_Spikes_C::OnOutOfDurability()
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", "OnOutOfDurability");

	Params::ATrap_Athena_Spikes_C_OnOutOfDurability_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnWorldReady
// (Event, Public, BlueprintEvent)
// Parameters:

void ATrap_Athena_Spikes_C::OnWorldReady()
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", "OnWorldReady");

	Params::ATrap_Athena_Spikes_C_OnWorldReady_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.OnInitTeam
// (Event, Protected, BlueprintEvent)
// Parameters:

void ATrap_Athena_Spikes_C::OnInitTeam()
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", "OnInitTeam");

	Params::ATrap_Athena_Spikes_C_OnInitTeam_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Trap_Athena_Spikes.Trap_Athena_Spikes_C.ExecuteUbergraph_Trap_Athena_Spikes
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Option_B___If_false__use_Option_A_Variable             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam                               (IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam_1                             (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam_2                             (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam_3                             (IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam_4                             (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam_5                             (IsPlainOldData, NoDestructor)
// struct FParticleSysParam           K2Node_MakeStruct_ParticleSysParam_6                             (IsPlainOldData, NoDestructor)
// TArray<struct FParticleSysParam>   K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPortableSoftParticles  K2Node_MakeStruct_FortPortableSoftParticles                      ()
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<class FName, struct FParameterNameMapping>K2Node_MakeMap_Map                                               (ConstParm, ZeroConstructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemAsset*              K2Node_DynamicCast_AsFXSystem_Asset                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemAsset*              Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortPortableSoftParticles  K2Node_MakeStruct_FortPortableSoftParticles_1                    ()
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     Temp_object_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemAsset*              K2Node_DynamicCast_AsFXSystem_Asset_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFXSystemAsset*              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPortableSoftParticles  K2Node_Select_Default_1                                          ()
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FFortPortableSoftParticles  K2Node_SetFieldsInStruct_StructOut                               ()
// bool                               CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UFXSystemAsset>K2Node_Select_Default_2                                          (HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerCameraManager*        CallFunc_GetPlayerCameraManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_GetCameraLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EGameplayCueEvent       K2Node_GameplayCueEvent_EventType                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      K2Node_GameplayCueEvent_Parameters                               (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFXSystemComponent*          CallFunc_SpawnFXSystemAttached_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FParticleSysParam>   CallFunc_MapParticleInstanceParamNames_ReturnValue               (ZeroConstructor, ReferenceParm)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EFortTeamAffiliation>K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)
// uint8                              CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_SpawnFXAtLocation_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UFXSystemAsset>K2Node_Select_Default_3                                          (HasGetValueTypeHash)

void ATrap_Athena_Spikes_C::ExecuteUbergraph_Trap_Athena_Spikes(int32 EntryPoint, bool Temp_bool_Option_B___If_false__use_Option_A_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_1, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_2, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_3, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_4, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_5, const struct FParticleSysParam& K2Node_MakeStruct_ParticleSysParam_6, TArray<struct FParticleSysParam>& K2Node_MakeArray_Array, bool Temp_bool_Has_Been_Initd_Variable, const struct FFortPortableSoftParticles& K2Node_MakeStruct_FortPortableSoftParticles, bool CallFunc_IsDedicatedServer_ReturnValue_1, TMap<class FName, struct FParameterNameMapping> K2Node_MakeMap_Map, bool Temp_bool_IsClosed_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UObject* Temp_object_Variable, class UObject* K2Node_CustomEvent_Loaded, class UFXSystemAsset* K2Node_DynamicCast_AsFXSystem_Asset, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UFXSystemAsset* Temp_object_Variable_1, const struct FFortPortableSoftParticles& K2Node_MakeStruct_FortPortableSoftParticles_1, bool Temp_bool_Variable_1, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UObject* Temp_object_Variable_2, class UObject* K2Node_CustomEvent_Loaded_1, class UFXSystemAsset* K2Node_DynamicCast_AsFXSystem_Asset_1, bool K2Node_DynamicCast_bSuccess_1, class UFXSystemAsset* K2Node_Select_Default, bool Temp_bool_Variable_2, float Temp_float_Variable, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool Temp_bool_Variable_3, const struct FFortPortableSoftParticles& K2Node_Select_Default_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFortPortableSoftParticles& K2Node_SetFieldsInStruct_StructOut, bool CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue, TSoftObjectPtr<class UFXSystemAsset> K2Node_Select_Default_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class APlayerCameraManager* CallFunc_GetPlayerCameraManager_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetCameraLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_5, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_Lerp_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, TArray<struct FParticleSysParam>& CallFunc_MapParticleInstanceParamNames_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, float CallFunc_VSize_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_6, TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array_1, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_7, class UFXSystemComponent* CallFunc_SpawnFXAtLocation_ReturnValue, TSoftObjectPtr<class UFXSystemAsset> K2Node_Select_Default_3)
{
	static auto Func = Class->GetFunction("Trap_Athena_Spikes_C", "ExecuteUbergraph_Trap_Athena_Spikes");

	Params::ATrap_Athena_Spikes_C_ExecuteUbergraph_Trap_Athena_Spikes_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Option_B___If_false__use_Option_A_Variable = Temp_bool_Option_B___If_false__use_Option_A_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.K2Node_MakeStruct_ParticleSysParam = K2Node_MakeStruct_ParticleSysParam;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_2 = CallFunc_Multiply_VectorVector_ReturnValue_2;
	Parms.K2Node_MakeStruct_ParticleSysParam_1 = K2Node_MakeStruct_ParticleSysParam_1;
	Parms.K2Node_MakeStruct_ParticleSysParam_2 = K2Node_MakeStruct_ParticleSysParam_2;
	Parms.K2Node_MakeStruct_ParticleSysParam_3 = K2Node_MakeStruct_ParticleSysParam_3;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_3 = CallFunc_Multiply_VectorVector_ReturnValue_3;
	Parms.K2Node_MakeStruct_ParticleSysParam_4 = K2Node_MakeStruct_ParticleSysParam_4;
	Parms.K2Node_MakeStruct_ParticleSysParam_5 = K2Node_MakeStruct_ParticleSysParam_5;
	Parms.K2Node_MakeStruct_ParticleSysParam_6 = K2Node_MakeStruct_ParticleSysParam_6;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_MakeStruct_FortPortableSoftParticles = K2Node_MakeStruct_FortPortableSoftParticles;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.K2Node_MakeMap_Map = K2Node_MakeMap_Map;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_DynamicCast_AsFXSystem_Asset = K2Node_DynamicCast_AsFXSystem_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_MakeStruct_FortPortableSoftParticles_1 = K2Node_MakeStruct_FortPortableSoftParticles_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue_1 = CallFunc_IsValidSoftObjectReference_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.K2Node_DynamicCast_AsFXSystem_Asset_1 = K2Node_DynamicCast_AsFXSystem_Asset_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_SetFieldsInStruct_StructOut = K2Node_SetFieldsInStruct_StructOut;
	Parms.CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue = CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_GetPlayerCameraManager_ReturnValue = CallFunc_GetPlayerCameraManager_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetCameraLocation_ReturnValue = CallFunc_GetCameraLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_4 = CallFunc_K2_GetActorLocation_ReturnValue_4;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_5 = CallFunc_K2_GetActorLocation_ReturnValue_5;
	Parms.K2Node_GameplayCueEvent_EventType = K2Node_GameplayCueEvent_EventType;
	Parms.K2Node_GameplayCueEvent_Parameters = K2Node_GameplayCueEvent_Parameters;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue_2 = CallFunc_Lerp_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SpawnFXSystemAttached_ReturnValue = CallFunc_SpawnFXSystemAttached_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_MapParticleInstanceParamNames_ReturnValue = CallFunc_MapParticleInstanceParamNames_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_6 = CallFunc_K2_GetActorLocation_ReturnValue_6;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;
	Parms.CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue_1 = CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_7 = CallFunc_K2_GetActorLocation_ReturnValue_7;
	Parms.CallFunc_SpawnFXAtLocation_ReturnValue = CallFunc_SpawnFXAtLocation_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
