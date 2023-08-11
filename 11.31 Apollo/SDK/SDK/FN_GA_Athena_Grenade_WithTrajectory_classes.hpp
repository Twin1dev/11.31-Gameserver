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

// 0x3B8 (0xDE8 - 0xA30)
// BlueprintGeneratedClass GA_Athena_Grenade_WithTrajectory.GA_Athena_Grenade_WithTrajectory_C
class UGA_Athena_Grenade_WithTrajectory_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          EventActivation;                                   // 0xA38(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EventComplete;                                     // 0xA40(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Prj_Grenade;                                       // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GrenadeSpeedMin;                                   // 0xA50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GrenadeSpeedMax;                                   // 0xA54(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GravityScale;                                      // 0xA58(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            GrenadeSound;                                      // 0xA60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EC_DefaultExplosion;                               // 0xA68(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec      EC_ReturnedEffect;                                 // 0xA70(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FFortGameplayEffectContainerSpec      EC_AdditionalReturnedEffect;                       // 0xB28(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        ExplosionRadius;                                   // 0xBE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AdditionalThrowAngle;                              // 0xBE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortFeedbackHandle                   GrenadeDialogFeedback;                             // 0xBE8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         GrenadeAmmo;                                       // 0xC00(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         PlasmaGrenades;                                    // 0xC01(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Flashbang;                                         // 0xC02(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46CE[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               GrenadeTargetingOriginOffset;                      // 0xC04(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                   DummyProjectile;                                   // 0xC10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DummyShouldBounce;                                 // 0xC18(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46CF[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        DummyBounciness;                                   // 0xC1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyFriction;                                     // 0xC20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyMaxSpeed;                                     // 0xC24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyGravity;                                      // 0xC28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyTimeStep;                                     // 0xC2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyExtent;                                       // 0xC30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GrenadeTargetingOriginOffset_Crouched;             // 0xC34(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InThrowWindup;                                     // 0xC40(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class ABP_ProjectileTrajectory_C*            TrajectoryIndicator;                               // 0xC48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                TrajectoryIndicatorClass;                          // 0xC50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayAbilityMontageInfo       ThrowWindupMontage;                                // 0xC58(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         AbilityKeyPressed;                                 // 0xCB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_46D1[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        MaxSpeedPitch;                                     // 0xCB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinSpeedPitch;                                     // 0xCB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayEventData                    Event_Data;                                        // 0xCC0(0xB0)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xD70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxTossPitch;                                      // 0xD78(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxTrajectoryBounces;                              // 0xD7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PostThrowCancelDelay;                              // 0xD80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PostThrowEndDelay;                                 // 0xD84(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                   ProjectileReference;                               // 0xD88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DistanceFromInstigatorCheck;                       // 0xD90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTimerHandle                          UpdateTrajectoryTimerHandle;                       // 0xD98(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Spawned_On_Equip;                                  // 0xDA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	enum class ECollisionChannel                 DummyCollisionChannel;                             // 0xDA1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_46D4[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortProjectileDecoHelper*             GrenadeDecoHelper;                                 // 0xDA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortDecoTool_ContextTrap*             GrenadeDecoTool;                                   // 0xDB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            OnProjectileSpawn;                                 // 0xDB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FGameplayTagContainer                 QuestCreditTargetTag;                              // 0xDC8(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_Grenade_WithTrajectory_C");
		return Clss;
	}

	bool ShouldOnlyShowTrajectoryOnUse();
	class AFortProjectileTrajectory* SpawnTrajectoryIndicator(bool bSpawnOnEquip, bool CallFunc_IsValid_ReturnValue, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetProjectileTrajectoryPoints(TArray<struct FVector>* OutSplinePoints, TArray<struct FVector>* OutSplineTangents, struct FHitResult* OutHitResult, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_SpawnLocationAndRotation_OutLoc, const struct FRotator& CallFunc_SpawnLocationAndRotation_OutRot, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FHitResult& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents);
	TSubclassOf<class AFortProjectileTrajectory> GetProjectileTrajectoryActor();
	void UpdateTrajectorySpline(TArray<struct FVector>& CallFunc_GetProjectileTrajectoryPoints_OutSplinePoints, TArray<struct FVector>& CallFunc_GetProjectileTrajectoryPoints_OutSplineTangents, const struct FHitResult& CallFunc_GetProjectileTrajectoryPoints_OutHitResult, bool CallFunc_IsValid_ReturnValue);
	void GetOwningPlayer(class AFortPlayerPawn** Player_Pawn, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed, float CallFunc_NormalizeAxis_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue);
	void SetupDummyProjectile(class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AFortProjectileTrajectory* CallFunc_FinishSpawningActor_ReturnValue, class ABP_ProjectileTrajectory_C* K2Node_DynamicCast_AsBP_Projectile_Trajectory, bool K2Node_DynamicCast_bSuccess);
	void SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot, bool Temp_bool_Variable, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn_1, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FVector& K2Node_Select_Default, float CallFunc_Add_FloatFloat_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, float CallFunc_FMin_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue);
	void SetupGrenade(float AimPitch, class UClass** Base_Grenade, float* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, float* Projectile_Gravity_Scale, struct FFortGameplayEffectContainerSpec* Additional_Explosion_Gameplay_Spec, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, float CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1);
	void Destroyed_40FE015D40E881984FE611B980B75D52(struct FProjectileEventData& ProjectileData);
	void Exploded_40FE015D40E881984FE611B980B75D52(struct FProjectileEventData& ProjectileData);
	void Stopped_40FE015D40E881984FE611B980B75D52(struct FProjectileEventData& ProjectileData);
	void Bounced_40FE015D40E881984FE611B980B75D52(struct FProjectileEventData& ProjectileData);
	void Touched_40FE015D40E881984FE611B980B75D52(struct FProjectileEventData& ProjectileData);
	void Created_40FE015D40E881984FE611B980B75D52(struct FProjectileEventData& ProjectileData);
	void Completed_B08560984B3818F6EECB3C9A92E61ADC(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_B08560984B3818F6EECB3C9A92E61ADC(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_B08560984B3818F6EECB3C9A92E61ADC(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnFinish_E8F8DC5A465F19B633AF0E8888171F5A();
	void OnFinish_4B1D92B7427697E6BD9D58ACA0F87155();
	void OnCancelled_758AC809498064C01C71318E141D1E46();
	void OnInterrupted_758AC809498064C01C71318E141D1E46();
	void OnBlendOut_758AC809498064C01C71318E141D1E46();
	void OnCompleted_758AC809498064C01C71318E141D1E46();
	void OnFinish_D7F9D67243A9BA307AFBF7839EC5CA1C();
	void K2_ActivateAbility();
	void Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction);
	void OnAbilityInputReleased();
	void K2_OnEndAbility(bool bWasCancelled);
	void CleanupTrajectoryDisplay();
	void TossGrenade();
	void InitTrajectoryVariables();
	void AthenaProjectileSpawned(class AFortProjectileBase* ProjectileReference);
	void CleanupTrajectoryIndicatorOnUnequip();
	void Cleanup_Trajectory_Display_On_End();
	void UpdateTrajectory();
	void ExecuteUbergraph_GA_Athena_Grenade_WithTrajectory(int32 EntryPoint, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData_2, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FProjectileEventData& Temp_struct_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, enum class ECollisionChannel CallFunc_GetCollisionObjectType_ReturnValue, float CallFunc_GetScaledCapsuleSize_OutRadius, float CallFunc_GetScaledCapsuleSize_OutHalfHeight, float CallFunc_FMax_ReturnValue, float CallFunc_GetGravityZ_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& K2Node_CustomEvent_Location, const struct FRotator& K2Node_CustomEvent_Direction, const struct FVector& CallFunc_SpawnLocationAndRotation_OutLoc, const struct FRotator& CallFunc_SpawnLocationAndRotation_OutRot, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UClass* CallFunc_SetupGrenade_Base_Grenade, float CallFunc_SetupGrenade_Projectile_Speed, const struct FFortGameplayEffectContainerSpec& CallFunc_SetupGrenade_Explosion_Gameplay_Spec, float CallFunc_SetupGrenade_Projectile_Gravity_Scale, const struct FFortGameplayEffectContainerSpec& CallFunc_SetupGrenade_Additional_Explosion_Gameplay_Spec, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, bool CallFunc_IsStandalone_ReturnValue, bool K2Node_Event_bWasCancelled, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue_1, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData_4, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn_2, bool CallFunc_BooleanOR_ReturnValue, class UFortAbilityTask_SpawnProjectileAndWait* CallFunc_SpawnProjectileAndWait_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class AFortProjectileBase* CallFunc_BeginSpawningActor_SpawnedActor, bool CallFunc_BeginSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn_3, float CallFunc_VSize_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, class AFortPlayerPawn* CallFunc_GetOwningPlayer_Player_Pawn_4, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_6, class AFortProjectileBase* CallFunc_FinishSpawningActor_ReturnValue, class AFortProjectileBase* K2Node_CustomEvent_ProjectileReference, const struct FProjectileEventData& K2Node_CustomEvent_ProjectileData_5, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class AFortProjectileTrajectory* CallFunc_SpawnTrajectoryIndicator_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted);
	void OnProjectileSpawn__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
