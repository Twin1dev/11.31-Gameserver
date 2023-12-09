#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0xC20 - 0xB08)
// BlueprintGeneratedClass Athena_Prop_SneakySnowmanV2.Athena_Prop_SneakySnowmanV2_C
class AAthena_Prop_SneakySnowmanV2_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB08(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCapsuleComponent*                     OverlapCheck;                                      // 0xB10(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UProjectileMovementComponent*          ProjectileMovementComp;                            // 0xB18(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_RotationAlpha_4116426F45EB954F1A0ACDA6058E6CCC; // 0xB20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_4116426F45EB954F1A0ACDA6058E6CCC; // 0xB24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6FFE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0xB28(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSimulationRunning;                                // 0xB30(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_6FFF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                GE_ApplyEnemySnowman;                              // 0xB38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        ShouldSnowmanEnemies;                              // 0xB40(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPickupAthena*                     PickupAthena;                                      // 0xB60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        Ignored_Actors;                                    // 0xB68(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	TArray<enum class EObjectTypeQuery>          LineTraceObjects;                                  // 0xB78(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         DestroyAfterHit;                                   // 0xB88(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7000[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               LandedLocation;                                    // 0xB8C(0xC)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	float                                        InitialGravityScale;                               // 0xB98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GamestateLoaded;                                   // 0xB9C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7001[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<enum class EObjectTypeQuery>          ObjectTypes;                                       // 0xBA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                               StopLocation;                                      // 0xBB0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7002[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        FallHeightToDestroy;                               // 0xBC0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               StartLocation;                                     // 0xBE0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7003[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        ShouldSpawnSnowball;                               // 0xBF0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Dead;                                              // 0xC10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7004[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               EndLocation;                                       // 0xC14(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAthena_Prop_SneakySnowmanV2_C* GetDefaultObj();

	void GetNewSnowmanTransform(struct FTransform* Transform, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	bool BlueprintGetInteractionTime(class AFortPawn* InteractingPawn, float* OutInteractionTime, enum class EInteractionBeingAttempted InteractionBeingAttempted);
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, TArray<class AActor*>& K2Node_MakeArray_Array, class AActor* CallFunc_GetHeldObjectAttachedToPlayer_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit_1, bool CallFunc_LineTraceSingle_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, TArray<struct FGameplayTag>& K2Node_MakeArray_Array_2, const struct FGameplayTagContainer& CallFunc_MakeGameplayTagContainerFromArray_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3);
	void TraceStartAndEnd(struct FVector* Start, struct FVector* End, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue);
	void ForceSetLocationOnLanding(const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_EqualEqual_VectorVector_ReturnValue);
	void OnRep_LandedLocation(bool CallFunc_HasAuthority_ReturnValue);
	void OnRep_bSimulationRunning();
	void ResetSimulatedComponents();
	void UserConstructionScript();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void OnGaveSneakySnowman();
	void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(struct FHitResult& ImpactResult);
	void BuildingActorDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void RestartSimulating();
	void ReceiveBeginPlay();
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void BndEvt__OverlapCheck_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void PreFinishSpawning(class AFortVolume* VolumeSpawnedWithin);
	void PlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags);
	void WobbleAnims();
	void WorldPropSupportDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void ResetDistanceCheck();
	void BlueprintOnInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted);
	void MovePlayer(class AActor* Player);
	void OnStartedJumpingIn();
	void DisableCollision();
	void OnTookSneakySnowman();
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void SpawnParticles();
	void ExecuteUbergraph_Athena_Prop_SneakySnowmanV2(int32 EntryPoint, class AActor* K2Node_CustomEvent_DamagedActor_1, float K2Node_CustomEvent_Damage_1, class AController* K2Node_CustomEvent_InstigatedBy_1, class AActor* K2Node_CustomEvent_DamageCauser_1, const struct FVector& K2Node_CustomEvent_HitLocation_1, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent_1, class FName K2Node_CustomEvent_BoneName_1, const struct FVector& K2Node_CustomEvent_Momentum_1, const struct FHitResult& K2Node_ComponentBoundEvent_ImpactResult, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface, bool K2Node_DynamicCast_bSuccess, class AFortPickupAthena* K2Node_DynamicCast_AsFort_Pickup_Athena, bool K2Node_DynamicCast_bSuccess_1, TArray<class AFortPlayerPawn*>& CallFunc_GetAllPassengers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Greater_IntInt_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue, class AAthena_Prop_SneakySnowmanV2_C* K2Node_DynamicCast_AsAthena_Prop_Sneaky_Snowman_V2, bool K2Node_DynamicCast_bSuccess_3, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess_4, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, float CallFunc_GetGameTimeInSeconds_ReturnValue, float K2Node_Event_Damage_1, const struct FGameplayTagContainer& K2Node_Event_DamageTags_1, const struct FVector& K2Node_Event_Momentum_1, const struct FHitResult& K2Node_Event_HitInfo_1, class AFortPawn* K2Node_Event_InstigatedBy_1, class AActor* K2Node_Event_DamageCauser_1, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext_1, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool Temp_bool_IsClosed_Variable, bool CallFunc_BooleanAND_ReturnValue, class AFortVolume* K2Node_Event_VolumeSpawnedWithin, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class FName K2Node_CustomEvent_PlaylistName, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess_6, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, TArray<class AActor*>& K2Node_MakeArray_Array, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, bool CallFunc_IsActive_ReturnValue, const struct FVector& CallFunc_TraceStartAndEnd_Start, const struct FVector& CallFunc_TraceStartAndEnd_End, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, float CallFunc_DistanceBetweenTwoVectors_Distance, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor_1, bool K2Node_DynamicCast_bSuccess_7, class APawn* CallFunc_GetInstigator_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_2, bool K2Node_DynamicCast_bSuccess_8, float CallFunc_GetValueAtLevel_ReturnValue_2, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, int32 Temp_int_Array_Index_Variable, class AFortPlayerPawn* CallFunc_Array_Get_Item, const struct FActiveGameplayEffectHandle& CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_GetOrCreateMIDOnDefaultMesh_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetOrCreateMIDOnDefaultMesh_ReturnValue_1, class AFortPawn* K2Node_Event_InteractingPawn, enum class EInteractionBeingAttempted K2Node_Event_InteractionBeingAttempted, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* K2Node_Event_Player, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, bool CallFunc_RowToBool_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, class ABuildingGameplayActor* CallFunc_SpawnBuildingGameplayActor_ReturnValue, class AB_HeldObject_Snowball_C* K2Node_DynamicCast_AsB_Held_Object_Snowball, bool K2Node_DynamicCast_bSuccess_9, float CallFunc_VSize_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_2, bool CallFunc_HasTag_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_4, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
};

}


