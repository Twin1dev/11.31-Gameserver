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

// 0x2F8 (0xB30 - 0x838)
// BlueprintGeneratedClass B_Prj_Commando_FragGrenade.B_Prj_Commando_FragGrenade_C
class AB_Prj_Commando_FragGrenade_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x838(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x840(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Fuse_Particle;                                     // 0x848(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x850(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       GrenadeFuse_AudioComponent;                        // 0x858(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              Effect_Distance;                                   // 0x860(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       P_Explosion;                                       // 0x868(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_DistantSound;                                  // 0x870(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_CloseSound;                                    // 0x878(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ExplosionRadius;                                   // 0x880(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        NumberOfBouncesTillExplode;                        // 0x884(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentNumberOfBounces;                            // 0x888(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D0B[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            Cue_GrenadeFuseSound;                              // 0x890(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BouncePawnAgainstPawnGravityScale;                 // 0x898(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4D0C[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UForceFeedbackEffect*                  ExplosionForceFeedbackNear;                        // 0x8A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UForceFeedbackEffect*                  ExplosionForceFeedbackFar;                         // 0x8A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MaxClusterGrenades;                                // 0x8B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          EC_ClusterExplosion;                               // 0x8B4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasCluster;                                       // 0x8BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_4D0D[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                Prj_Cluster;                                       // 0x8C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortGameplayEffectContainerSpec      ClusterContainerSpec;                              // 0x8C8(0xB8)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bHasKeepOut;                                       // 0x980(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D0E[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortGameplayEffectContainerSpec      KeepOutContainerSpec;                              // 0x988(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                AOE_KeepOut;                                       // 0xA40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasClusterTactical;                               // 0xA48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_4D0F[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortGameplayEffectContainerSpec      Cluster_Tactical_Container_Spec;                   // 0xA50(0xB8)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FGameplayTagContainer                 TC_ActorTagsThatShouldExplodeOnOverlap;            // 0xB08(0x20)(Edit, BlueprintVisible)
	struct FGameplayTag                          T_Event_GrenadeExploded;                           // 0xB28(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_Commando_FragGrenade_C");
		return Clss;
	}

	void SpawnKeepOut(const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class AFortAreaOfEffectCloud* CallFunc_SpawnAreaOfEffectCloud_ReturnValue, class AAOE_Commando_KeepOutExplosion_C* K2Node_DynamicCast_AsAOE_Commando_Keep_Out_Explosion, bool K2Node_DynamicCast_bSuccess);
	void SpawnClusters(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool Temp_bool_Variable, float CallFunc_RandomFloatInRange_ReturnValue_2, int32 Temp_int_Variable, const struct FFortGameplayEffectContainerSpec& K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, class AFortProjectileBase* CallFunc_SpawnProjectile_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	float CalcGrenadeSpeed(float Angle, float GrenadeSpeedMin, float GrenadeSpeedMax, float MaxSpeedPitch, float MinSpeedPitch, float CallFunc_NormalizeAxis_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue);
	void OnRep_StoredHit();
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue);
	void ReceiveBeginPlay();
	void OnStop(struct FHitResult& Hit);
	void Stop_Rotation();
	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void ReceiveAnyDamage(float Damage, class UDamageType* DamageType, class AController* InstigatedBy, class AActor* DamageCauser);
	void OnBounce(struct FHitResult& Hit);
	void On_Destroy_Grenade(class AActor* DestroyedActor);
	void Bind_Destroy_Grenade();
	void Force_On_Exploded_Effects();
	void Unbind_Destroy_Grenade();
	void TriggerDoExplsoion();
	void ReceiveDestroyed();
	void CheckKeepOutAndCluster();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void SendExplodedEvent();
	void ExecuteUbergraph_B_Prj_Commando_FragGrenade(int32 EntryPoint, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_Variable, const struct FHitResult& K2Node_Event_Hit_1, class AController* CallFunc_GetInstigatorController_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_OnSameTeam_ReturnValue, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, float K2Node_Event_Damage, class UDamageType* K2Node_Event_DamageType, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, const struct FVector& CallFunc_Conv_FloatToVector_ReturnValue, const struct FHitResult& K2Node_Event_Hit, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_3, bool Temp_bool_Has_Been_Initd_Variable_4, bool Temp_bool_IsClosed_Variable_1, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue_1, class APawn* CallFunc_GetInstigator_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_2, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_NotEqual_ObjectObject_ReturnValue, float CallFunc_Abs_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, class AActor* K2Node_CustomEvent_DestroyedActor, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, bool Temp_bool_IsClosed_Variable_2, bool Temp_bool_IsClosed_Variable_3, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool Temp_bool_IsClosed_Variable_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_Event_OtherActor, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, class APawn* K2Node_DynamicCast_AsPawn_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, class APawn* CallFunc_GetInstigator_ReturnValue_3, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayAbilityTargetingLocationInfo& K2Node_MakeStruct_GameplayAbilityTargetingLocationInfo, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromLocations_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
