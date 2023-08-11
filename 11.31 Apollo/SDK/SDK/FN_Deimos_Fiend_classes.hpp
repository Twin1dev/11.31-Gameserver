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

// 0x258 (0x26E8 - 0x2490)
// BlueprintGeneratedClass Deimos_Fiend.Deimos_Fiend_C
class ADeimos_Fiend_C : public AEnemyPawn_Parent_Deimos_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2490(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        HitCount;                                          // 0x2498(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastTakeHitTime;                                   // 0x249C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_HitReactionAdditiveSingleOneShot;               // 0x24A0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_HitReactionAdditiveLoop;                        // 0x24C0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_HitReactionFullBody;                            // 0x24E0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_HitReactionBlockAll;                            // 0x2500(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_HitReactionBlockMelee;                          // 0x2520(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 TC_HitReactionBlockRanged;                         // 0x2540(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         HitReactForMelee;                                  // 0x2560(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UParticleSystem*                       ImpactParticles_Default;                           // 0x2568(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ImpactParticles_HumanFlesh;                        // 0x2570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ImpactParticles_Wood;                              // 0x2578(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ImpactParticles_Stone;                             // 0x2580(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ImpactParticles_Metal;                             // 0x2588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         MeleeImpact_UseSocketTransforms;                   // 0x2590(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55F2[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  Impact_MeleeSocket;                                // 0x2594(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsHeadshot_HideHead;                               // 0x259C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55F3[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        PreviousLargestDeathRadius;                        // 0x25A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            Death_Normal_Sound;                                // 0x25A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Death_RedLaser_Sound;                              // 0x25B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       Spawn_Dust_Particles;                              // 0x25B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SafetyTimerDuration;                               // 0x25C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DeathFX_HQ;                                        // 0x25C4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTexture*                              Diffuse_Texture;                                   // 0x25C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeimosKnockBackValue;                              // 0x25D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MonsterType;                                       // 0x25D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FGameplayCueParameters                CueParamsSpawnFiend;                               // 0x25D8(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UMaterialInstance*                     MaskedDeathMaterial;                               // 0x2690(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_MaskedDeathMaterial;                           // 0x2698(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_MonsterMaterial;                               // 0x26A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          EnemyColor;                                        // 0x26A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_DeimosShieldOnFiendKill;                        // 0x26B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        FreezeDuration;                                    // 0x26C0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          SpawnFXGC;                                         // 0x26E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Deimos_Fiend_C");
		return Clss;
	}

	void GetEnemyColor(struct FLinearColor* Color);
	void Temp_FindClosestBone(const struct FVector& HitLocation, class FName* ClosestBone, float BoneDistance, class FName LocalClosestBone, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, TArray<class FName>& CallFunc_GetAllSocketNames_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_Contains_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue);
	void SetupMIDs(class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1);
	void OnRep_HasBackPack();
	void MantleStart(const struct FVector& StartPos, const struct FVector& MidPos, const struct FVector& EndPos, bool LowWall, bool MidWall, bool FullWall, bool WindowWall);
	void MantleEnd();
	void HuskEvadeStart();
	void VerifyTakerAttack(bool SpecialAttack, bool Swoop, bool Soul_Suck, bool Portal);
	void ResetTakerSpecialAttackTimer(bool Swoop, bool SoulSuckMelee, bool Portal);
	void BeginTakerSwoopAttack();
	void EndTakerSwoopAttack();
	void TakerWallPortalBehavior(class AActor* BuildingPart, class UBTTask_BlueprintBase* Task, const struct FVector& DesiredMoveLocation, bool Debug);
	void IsTakerWallPortalAvailable(bool Portal_Available_);
	void TakerAttackFSM(bool SuccessfulHit);
	void TakerSoulSuckSoundBegin(bool Success);
	void TakerSoulSuckSoundEnd();
	void PortalAdd(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>& BuildingActorList);
	void PortalClear();
	void TakerSoulSuckInterrupted();
	void PortalGet(class ABuildingActor* BuildingActor, TArray<class ABuildingActor*>& BuildingActorList, class AActor* BT);
	void PortalFX();
	void PortalCollision(bool Collide_);
	void GameplayCue_Impact_Physical_Creature(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void ReceiveBeginPlay();
	void OnStartedEncounterSpawn();
	void AnimateDeathMaterial();
	void CustomOnDied(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void GameplayCue_Athena_IceDeimos(enum class EGameplayCueEvent EventType, const struct FGameplayCueParameters& Parameters);
	void RemoveChillerMaterial();
	void ExecuteUbergraph_Deimos_Fiend(int32 EntryPoint, class UParticleSystem* Temp_object_Variable, class UParticleSystem* Temp_object_Variable_1, class UParticleSystem* Temp_object_Variable_2, class UParticleSystem* Temp_object_Variable_3, bool CallFunc_HasAuthority_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasAuthority_ReturnValue_1, class UParticleSystem* Temp_object_Variable_4, bool CallFunc_HasAuthority_ReturnValue_2, const struct FVector& K2Node_Event_StartPos, const struct FVector& K2Node_Event_MidPos, const struct FVector& K2Node_Event_EndPos, bool K2Node_Event_LowWall, bool K2Node_Event_MidWall, bool K2Node_Event_FullWall, bool K2Node_Event_WindowWall, bool K2Node_Event_SpecialAttack, bool K2Node_Event_Swoop_1, bool K2Node_Event_Soul_Suck, bool K2Node_Event_Portal_1, bool K2Node_Event_Swoop, bool K2Node_Event_SoulSuckMelee, bool K2Node_Event_Portal, class AActor* K2Node_Event_BuildingPart, class UBTTask_BlueprintBase* K2Node_Event_Task, const struct FVector& K2Node_Event_DesiredMoveLocation, bool K2Node_Event_Debug, bool K2Node_Event_Portal_Available_, bool K2Node_Event_SuccessfulHit, bool K2Node_Event_Success, class ABuildingActor* K2Node_Event_BuildingActor_1, TArray<class ABuildingActor*>& K2Node_Event_BuildingActorList_1, class ABuildingActor* K2Node_Event_BuildingActor, TArray<class ABuildingActor*>& K2Node_Event_BuildingActorList, class AActor* K2Node_Event_BT, bool K2Node_Event_Collide_, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType_1, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters_1, const struct FHitResult& CallFunc_GetHitResult_ReturnValue, const struct FHitResult& CallFunc_GetHitResult_ReturnValue_1, enum class EPhysicalSurface CallFunc_GetFortPhysicalSurface_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class USoundBase* CallFunc_GetImpactPhysicalSurfaceSound_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, class UParticleSystem* Temp_object_Variable_5, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, class UPrimitiveComponent* K2Node_DynamicCast_AsPrimitive_Component, bool K2Node_DynamicCast_bSuccess, enum class EPhysicalSurface Temp_byte_Variable, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_1, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_GetGameTimeInSeconds_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, enum class EGameplayCueEvent K2Node_GameplayCueEvent_EventType, const struct FGameplayCueParameters& K2Node_GameplayCueEvent_Parameters, bool K2Node_SwitchEnum_CmpSuccess, class UParticleSystem* Temp_object_Variable_6, float CallFunc_GetValue_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UParticleSystem* Temp_object_Variable_7, class UParticleSystem* K2Node_Select_Default, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
