#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x370 (0xDA0 - 0xA30)
// BlueprintGeneratedClass GA_ThrowConsumable.GA_ThrowConsumable_C
class UGA_ThrowConsumable_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AbilityKeyPressed;                                 // 0xA40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         InThrowWindup;                                     // 0xA41(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51C3[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        AdditionalThrowAngle;                              // 0xA44(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxTossPitch;                                      // 0xA48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GrenadeTargetingOriginOffset;                      // 0xA4C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GrenadeTargetingOriginOffset_Crouched;             // 0xA58(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51C4[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortProjectileBase*                   SpawnedProjectile;                                 // 0xA68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Proj_ThrownProjectile;                             // 0xA70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        ProjectileSpeed;                                   // 0xA78(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        ProjectileGravityScale;                            // 0xA98(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        TrajectoryUpdateInterval;                          // 0xAB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51C5[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAnimMontage*                          CookMonage;                                        // 0xAC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ThrowMontage;                                      // 0xAC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          GC_OnThrow;                                        // 0xAD0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ABP_ProjectileTrajectory_C*            TrajectoryIndicator;                               // 0xAD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                TrajectoryIndicatorClass;                          // 0xAE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                   DummyProjectile;                                   // 0xAE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyMaxSpeed;                                     // 0xAF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyGravity;                                      // 0xAF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyExtent;                                       // 0xAF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyTimeStep;                                     // 0xAFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TrajectoryCollisionProfileName;                    // 0xB00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_InWindup;                                       // 0xB08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           Handle_GE_InWindup;                                // 0xB10(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EC_DefaultExplosion;                               // 0xB18(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        ExplosionEffectLevel;                              // 0xB20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51C6[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortGameplayEffectContainerSpec      ExplosionEffectContainerSpec;                      // 0xB28(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         SpawnedOnEquip;                                    // 0xBE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTag                          EC_DefaultHit;                                     // 0xBE4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        HitEffectLevel;                                    // 0xBEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec      HitEffectContainerSpec;                            // 0xBF0(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance)
	UMulticastInlineDelegateProperty_            OnProjectileSpawn;                                 // 0xCA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         HasAdditionalExplosion;                            // 0xCB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51C8[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTag                          EC_AdditionalExplosion;                            // 0xCBC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        AdditionalExplodeLevel;                            // 0xCC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec      AdditionalContainerSpec;                           // 0xCC8(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 QuestCreditTargetTag;                              // 0xD80(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_ThrowConsumable_C");
		return Clss;
	}

	bool ShouldOnlyShowTrajectoryOnUse();
	class AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	TSubclassOf<class AFortProjectileTrajectory> GetProjectileTrajectoryActor();
	void GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult, const struct FVector& LocalVelocity, const struct FVector& LocalLocation, class AFortPlayerPawn* LocalPawn, bool CallFunc_NotEqual_NameName_ReturnValue, const struct FHitResult& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, const struct FHitResult& CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutHitResult, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutSplinePoints, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHitProfile_OutSplineTangents, const struct FVector& CallFunc_GetSpawnLocationAndRotation_Location, const struct FRotator& CallFunc_GetSpawnLocationAndRotation_Rotation, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue);
	void GetProjectileInitialGravityScaleToUse(float* GravityScaleToUse, const class FString& GetProjectileInitialGravityScaleContext, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EvaluateCurveTableRow_ReturnValue, bool CallFunc_IsCurveTableRowValid_ReturnValue);
	void GetProjectileInitialSpeedToUse(float* ProjectileSpeedToUse, const class FString& GetProjectileInitialSpeedToUseContext, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EvaluateCurveTableRow_ReturnValue, bool CallFunc_IsCurveTableRowValid_ReturnValue);
	void CleanupTrajectory();
	void PostThrowCleanup(bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateTrajectorySpline(TArray<struct FVector>& CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints, TArray<struct FVector>& CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents, const struct FHitResult& CallFunc_GetProjectileTrajectoryPoints_OutHitResult, bool CallFunc_IsValid_ReturnValue);
	void SetupDummyProjectile(class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortProjectileTrajectory* CallFunc_FinishSpawningActor_ReturnValue, class ABP_ProjectileTrajectory_C* K2Node_DynamicCast_AsBP_Projectile_Trajectory, bool K2Node_DynamicCast_bSuccess);
	void OnProjectileSetup();
	void OnProjectileSpawned(class AFortProjectileBase* SpawnedProjectile);
	void SpawnThrownProjectile(class UClass* ProjectileClass, struct FVector& ProjectileSpawnLocation, struct FRotator& ProjectileSpawnDirection, const struct FFortGameplayEffectContainerSpec& HitEffectContainerSpec, const struct FFortGameplayEffectContainerSpec& ExplosionEffectContainerSpec, float ProjectileInitialSpeed, float ProjectileGravityScale, class AFortProjectileBase** SpawnedProjectile, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue);
	void GetOwningPlayer(class AFortPlayerPawn** Player_Pawn, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void GetSpawnLocationAndRotation(struct FVector* Location, struct FRotator* Rotation, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool Temp_bool_Variable, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_NormalizeAxis_ReturnValue, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn_1, float CallFunc_FMin_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& K2Node_Select_Default, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void PrethrowSetup(const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void Completed_01C5B37D48E3DC6F82DDC58640CE2A27(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_01C5B37D48E3DC6F82DDC58640CE2A27(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_01C5B37D48E3DC6F82DDC58640CE2A27(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_96367E244486362FDDE5ED87D909C17B();
	void OnCancelled_D89CCB8E47DB19D6DCF41F96F207CC3D();
	void OnInterrupted_D89CCB8E47DB19D6DCF41F96F207CC3D();
	void OnBlendOut_D89CCB8E47DB19D6DCF41F96F207CC3D();
	void OnCompleted_D89CCB8E47DB19D6DCF41F96F207CC3D();
	void ThrowProjectile();
	void AttemptSpawnThrownProjectile();
	void K2_OnEndAbility(bool bWasCancelled);
	void InitTrajectoryVariables();
	void OnAbilityInputReleased();
	void CleanupTrajectoryIndicatorOnUnequip();
	void UpdateTrajectory();
	void ThrowMontageStarted();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_ThrowConsumable(int32 EntryPoint, float CallFunc_GetProjectileInitialSpeedToUse_ProjectileSpeedToUse, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, float CallFunc_GetScaledCapsuleSize_OutRadius, float CallFunc_GetScaledCapsuleSize_OutHalfHeight, float CallFunc_GetGravityZ_ReturnValue, float CallFunc_FMax_ReturnValue, bool CallFunc_IsCurveTableRowValid_ReturnValue, float CallFunc_GetGravityZ_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FVector& CallFunc_GetSpawnLocationAndRotation_Location, const struct FRotator& CallFunc_GetSpawnLocationAndRotation_Rotation, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float K2Node_Select_Default, class AFortProjectileBase* CallFunc_FinishSpawningActor_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, class AFortProjectileTrajectory* CallFunc_SpawnTrajectoryIndicator_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted, float CallFunc_GetProjectileInitialSpeedToUse_ProjectileSpeedToUse_1, float CallFunc_GetProjectileInitialGravityScaleToUse_GravityScaleToUse, class AFortProjectileBase* CallFunc_SpawnThrownProjectile_SpawnedProjectile, bool CallFunc_IsValid_ReturnValue_3);
	void OnProjectileSpawn__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
