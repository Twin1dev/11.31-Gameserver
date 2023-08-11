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

// 0x342 (0xE74 - 0xB32)
// BlueprintGeneratedClass GA_Commando_FragGrenade_WithTrajectory.GA_Commando_FragGrenade_WithTrajectory_C
class UGA_Commando_FragGrenade_WithTrajectory_C : public UGAT_CommandoActiveAbility_C
{
public:
	uint8                                        Pad_1861[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB38(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                Prj_Grenade;                                       // 0xB40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GrenadeSpeedMin;                                   // 0xB48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GrenadeSpeedMax;                                   // 0xB4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GravityScale;                                      // 0xB50(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1862[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            GrenadeSound;                                      // 0xB58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_ClusterBomb;                                    // 0xB60(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        MaxClusterGrenades;                                // 0xB80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1863[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                Prj_Cluster;                                       // 0xB88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ClusterSpeedMax;                                   // 0xB90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1864[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTagContainer                 TC_BiggerIsBetter;                                 // 0xB98(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          T_GEContainer_Explosion;                           // 0xBB8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        ExplosionRadius;                                   // 0xBC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AdditionalThrowAngle;                              // 0xBC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ClusterMinPitch;                                   // 0xBC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ClusterMaxPitch;                                   // 0xBCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EC_ClusterExplosion;                               // 0xBD0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        ClusterSpeedMin;                                   // 0xBD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1865[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortFeedbackHandle                   GrenadeDialogFeedback;                             // 0xBE0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FGameplayTagContainer                 TC_KeepOut;                                        // 0xBF8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          EC_KeepOut;                                        // 0xC18(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                AOE_KeepOut;                                       // 0xC20(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BiggerIsBetter;                                    // 0xC28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ClusterBomb;                                       // 0xC29(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         KeepOut;                                           // 0xC2A(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1866[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTagContainer                 TC_GrenadeAmmo;                                    // 0xC30(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_GrenadeCost;                                    // 0xC50(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_GrenadeDamage;                                  // 0xC70(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         GrenadeAmmo;                                       // 0xC90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         GrenadeCost;                                       // 0xC91(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         GrenadeDamage;                                     // 0xC92(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1867[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        GrenadeAmmoUpgrade;                                // 0xC94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        GrenadeAmmoDefault;                                // 0xC98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxGrenadeAmmo;                                    // 0xC9C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ExplosionRadiusTooltip;                            // 0xCA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ExplosionRadiusDefault;                            // 0xCA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ExplosionRadiusUpgrade;                            // 0xCA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1868[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTagContainer                 TC_PlasmaGrenades;                                 // 0xCB0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         PlasmaGrenades;                                    // 0xCD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1869[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTagContainer                 TC_Flashbang;                                      // 0xCD8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Flashbang;                                         // 0xCF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_186A[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               GrenadeTargetingOriginOffset;                      // 0xCFC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortProjectileBase*                   DummyProjectile;                                   // 0xD08(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DummyShouldBounce;                                 // 0xD10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_186B[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        DummyBounciness;                                   // 0xD14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyFriction;                                     // 0xD18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TrajectoryUpdateInterval;                          // 0xD1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyMaxSpeed;                                     // 0xD20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyGravity;                                      // 0xD24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyTimeStep;                                     // 0xD28(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DummyExtent;                                       // 0xD2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         InThrowWindup;                                     // 0xD30(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_186C[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class ABP_ProjectileTrajectory_C*            TrajectoryIndicator;                               // 0xD38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                TrajectoryIndicatorClass;                          // 0xD40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayAbilityMontageInfo       ThrowWindupMontage;                                // 0xD48(0x58)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         AbilityKeyPressed;                                 // 0xDA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_186D[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        MaxSpeedPitch;                                     // 0xDA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinSpeedPitch;                                     // 0xDA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxTossPitch;                                      // 0xDAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxTrajectoryBounces;                              // 0xDB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_186E[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTagContainer                 TC_Tactical_Clusterbomb;                           // 0xDB8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Tactical_Clusterbomb;                              // 0xDD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_186F[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTag                          EC_ClusterExplosion_Tactical;                      // 0xDDC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        F_FrameDelay;                                      // 0xDE4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BiggerIsBetter_T01;                                // 0xDE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         BiggerIsBetter_T02;                                // 0xDE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ClusterBomb_T01;                                   // 0xDEA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ClusterBomb_T02;                                   // 0xDEB(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FGameplayTag                          T_BiggerIsBetter_T01;                              // 0xDEC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_BiggerIsBetter_T02;                              // 0xDF4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_ClusterBomb_T01;                                 // 0xDFC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_ClusterBomb_T02;                                 // 0xE04(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1870[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FScalableFloat                        SF_BiggerIsBetterRadius_T01;                       // 0xE10(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAnimMontage*                          ThrowMontage;                                      // 0xE30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_Event_Activate;                                  // 0xE38(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_Event_Deactivate;                                // 0xE40(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        SF_BiggerIsBetterRadius_T02;                       // 0xE48(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	enum class ECollisionChannel                 DummyCollisionChannel;                             // 0xE68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1871[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTag                          ThrowCue;                                          // 0xE6C(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Commando_FragGrenade_WithTrajectory_C");
		return Clss;
	}

	void ActiveAbilitySetup(class UAbilitySystemComponent* AbilitySystemIn, class UAbilitySystemComponent** AbilitySystemOut, class UAbilitySystemComponent* CallFunc_ActiveAbilitySetup_AbilitySystemOut, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_1, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_2, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_DoesTagAssetInterfaceHaveTag_TagContainerInterface_CastInput_3, bool CallFunc_DoesTagAssetInterfaceHaveTag_ReturnValue_3);
	void SpawnFragGrenade(class UClass* ProjectileClass, struct FVector& SpawnLocation, const struct FRotator& InputPin, const struct FFortGameplayEffectContainerSpec& EffectContainerSpecToApplyOnExplode, float InitialSpeed, float GravityScale, class AB_Prj_Commando_FragGrenade_C* FragGrenade, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_1, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue_2, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue, class AB_Prj_Commando_FragGrenade_C* K2Node_DynamicCast_AsB_Prj_Commando_Frag_Grenade, bool K2Node_DynamicCast_bSuccess);
	void CalcGrenadeSpeedFromPitch(float AimPitch, float* GrenadeSpeed, float CallFunc_NormalizeAxis_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue);
	void UpdateTrajectorySpline(float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_SpawnLocationAndRotation_OutLoc, const struct FRotator& CallFunc_SpawnLocationAndRotation_OutRot, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_FMax_ReturnValue, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySpline_OutSplinePoints, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySpline_OutSplineTangents);
	void SetupDummyProjectile(const struct FTransform& CallFunc_GetTransform_ReturnValue, enum class ECollisionChannel CallFunc_GetCollisionObjectType_ReturnValue, float CallFunc_GetScaledCapsuleSize_OutRadius, float CallFunc_GetScaledCapsuleSize_OutHalfHeight, float CallFunc_FMax_ReturnValue, float CallFunc_GetGravityZ_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class ABP_ProjectileTrajectory_C* K2Node_DynamicCast_AsBP_Projectile_Trajectory, bool K2Node_DynamicCast_bSuccess, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, class AFortProjectileBase* CallFunc_FinishSpawningActor_ReturnValue_1);
	void SpawnLocationAndRotation(struct FVector* OutLoc, struct FRotator* OutRot, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FRotator& CallFunc_GetDefaultTargetingRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void SetupAbility(class UAbilitySystemComponent* AbilitySystemComponentRef, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_1, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_1, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_2, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_2, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_3, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_3, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_4, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_4, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_5, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_5, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_6, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_6, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_7, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_7, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput_8, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue_8);
	void SetupGrenade(float AimPitch, class UClass** Base_Grenade, float* Projectile_Speed, struct FFortGameplayEffectContainerSpec* Explosion_Gameplay_Spec, float* Projectile_Gravity_Scale, float CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, const struct FFortGameplayEffectContainerSpec& CallFunc_MakeGameplayEffectContainerSpec_ReturnValue, const struct FScalableFloat& CallFunc_EvaluatePerkTierBalanceValue_Balance_Value, float CallFunc_GetRangeFromGameplayEffectContainerSpec_Range, float CallFunc_Add_FloatFloat_ReturnValue, const struct FFortGameplayEffectContainer& CallFunc_BP_GetGameplayEffectContainer_ReturnValue, float CallFunc_GetRangeFromGameplayEffectContainer_Range, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FScalableFloat& K2Node_MakeStruct_ScalableFloat, const struct FFortGameplayEffectContainer& CallFunc_ReplaceRangeInGameplayEffectContainer_ReturnValue);
	void OnFinish_F5D87C9E46378707AE4C79B3A42F5A45();
	void OnCancelled_854170AF4268B06A435A3AA33232C5BF();
	void OnInterrupted_854170AF4268B06A435A3AA33232C5BF();
	void OnBlendOut_854170AF4268B06A435A3AA33232C5BF();
	void OnCompleted_854170AF4268B06A435A3AA33232C5BF();
	void OnFinish_1C6A100D44D1ACE5BBB57DAEDB3561CB();
	void Completed_BF65CDBE4F9E98E9174850B85775A15B(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Cancelled_BF65CDBE4F9E98E9174850B85775A15B(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Triggered_BF65CDBE4F9E98E9174850B85775A15B(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void OnAbilityInputReleased();
	void K2_OnEndAbility(bool bWasCancelled);
	void CleanupTrajectoryDisplay();
	void K2_ActivateAbility();
	void TossGrenade();
	void ServerSpawnProjectile();
	void ExecuteUbergraph_GA_Commando_FragGrenade_WithTrajectory(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_ActiveAbilitySetup_AbilitySystemOut, const struct FVector& CallFunc_SpawnLocationAndRotation_OutLoc, const struct FRotator& CallFunc_SpawnLocationAndRotation_OutRot, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UClass* CallFunc_SetupGrenade_Base_Grenade, float CallFunc_SetupGrenade_Projectile_Speed, const struct FFortGameplayEffectContainerSpec& CallFunc_SetupGrenade_Explosion_Gameplay_Spec, float CallFunc_SetupGrenade_Projectile_Gravity_Scale, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool K2Node_Event_bWasCancelled, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UAbilityTask_WaitDelay* CallFunc_WaitDelay_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_SetHolsterWeaponWithName_IsWeaponHolstered, bool CallFunc_SetHolsterWeaponWithName_OperationSuccessful, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageWaitTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsServer_ReturnValue, bool CallFunc_CommitAbilityWithEvent_Passed, bool CallFunc_SetHolsterWeaponWithName_IsWeaponHolstered_1, bool CallFunc_SetHolsterWeaponWithName_OperationSuccessful_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
