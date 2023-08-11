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

// 0x1D0 (0xB10 - 0x940)
// BlueprintGeneratedClass B_Prj_Bullet_Galileo_Bun.B_Prj_Bullet_Galileo_Bun_C
class AB_Prj_Bullet_Galileo_Bun_C : public AFortProjectileAthena
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x940(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPointLightComponent*                  PointLight;                                        // 0x948(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  ProjectileMesh;                                    // 0x950(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sniper_Rifle_SurfaceImpactSound;                   // 0x958(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Sniper_Rifle_PlayerImpactSound;                    // 0x960(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               DecalSize;                                         // 0x968(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61FF[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FScalableFloat                        ProjectileGravityScale;                            // 0x978(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UParticleSystemComponent*              P_Sniper_Bullet_Trail;                             // 0x998(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       WaterImpactFX;                                     // 0x9A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WaterDepthTrace;                                   // 0x9A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WaterIndexTrace;                                   // 0x9AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TraceImpactNormal;                                 // 0x9B0(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TraceImpactLocation;                               // 0x9BC(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     WaterHitMat;                                       // 0x9C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            WaterHit;                                          // 0x9D0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class USoundBase*                            Sniper_Rifle_WaterImpactSound;                     // 0xA58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bHasPlayedWaterSound;                              // 0xA60(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHitPawn;                                          // 0xA61(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bStopped;                                          // 0xA62(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6200[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               ImpactLocation;                                    // 0xA64(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ImpactNormal;                                      // 0xA70(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BeginTime;                                         // 0xA7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   NewVar_0;                                          // 0xA80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            Hit;                                               // 0xA88(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_Bullet_Galileo_Bun_C");
		return Clss;
	}

	void PlayImpactSFX(bool IsPlayer, bool IsWater_, bool Temp_bool_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class USoundBase* K2Node_Select_Default);
	void UserConstructionScript(float CallFunc_GetValueAtLevel_ReturnValue);
	void OnStop(struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FHitResult& HitResult, bool bIsOverlap);
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ReplacedByRealProjectile(class AFortProjectileAthena* RealProjectile);
	void ReplacedPredictedProjectile(class AFortProjectileBase* PredictedProjectile);
	void CheckForCreateDecal();
	void ExecuteUbergraph_B_Prj_Bullet_Galileo_Bun(int32 EntryPoint, float CallFunc_GetGameTimeInSeconds_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetMuzzleLocation_ReturnValue, class AActor* K2Node_Event_OtherActor, class UPrimitiveComponent* K2Node_Event_OtherComp, const struct FHitResult& K2Node_Event_HitResult, bool K2Node_Event_bIsOverlap, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition, float CallFunc_GetLastWaterSurfaceInfo_WaterDepth, int32 CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterVelocity, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsDedicatedServer_ReturnValue_1, class AFortAthenaWater* K2Node_DynamicCast_AsFort_Athena_Water, bool K2Node_DynamicCast_bSuccess_1, class AFortWaterBodyActor* K2Node_DynamicCast_AsFort_Water_Body_Actor, bool K2Node_DynamicCast_bSuccess_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class UPrimitiveComponent* K2Node_ComponentBoundEvent_HitComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, const struct FVector& K2Node_ComponentBoundEvent_NormalImpulse, const struct FHitResult& K2Node_ComponentBoundEvent_Hit, class ABP_PlayerPawn_Athena_Galileo_C* K2Node_DynamicCast_AsBP_Player_Pawn_Athena_Galileo, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, bool CallFunc_IsLocallyControlled_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_1, class AFortProjectileAthena* K2Node_Event_RealProjectile, class AFortProjectileBase* K2Node_Event_PredictedProjectile, bool Temp_bool_Variable, class AB_Prj_Bullet_Galileo_Bun_C* K2Node_DynamicCast_AsB_Prj_Bullet_Galileo_Bun, bool K2Node_DynamicCast_bSuccess_5, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FHitResult& K2Node_Event_Hit, class UDecalComponent* CallFunc_SpawnDecalAtLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_2, bool CallFunc_BreakHitResult_bInitialOverlap_2, float CallFunc_BreakHitResult_Time_2, float CallFunc_BreakHitResult_Distance_2, const struct FVector& CallFunc_BreakHitResult_Location_2, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_2, const struct FVector& CallFunc_BreakHitResult_Normal_2, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_2, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_2, class AActor* CallFunc_BreakHitResult_HitActor_2, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_2, class FName CallFunc_BreakHitResult_HitBoneName_2, int32 CallFunc_BreakHitResult_HitItem_2, int32 CallFunc_BreakHitResult_FaceIndex_2, const struct FVector& CallFunc_BreakHitResult_TraceStart_2, const struct FVector& CallFunc_BreakHitResult_TraceEnd_2, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_2, bool CallFunc_WasRecentlyRendered_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_3, bool CallFunc_BreakHitResult_bInitialOverlap_3, float CallFunc_BreakHitResult_Time_3, float CallFunc_BreakHitResult_Distance_3, const struct FVector& CallFunc_BreakHitResult_Location_3, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_3, const struct FVector& CallFunc_BreakHitResult_Normal_3, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_3, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_3, class AActor* CallFunc_BreakHitResult_HitActor_3, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_3, class FName CallFunc_BreakHitResult_HitBoneName_3, int32 CallFunc_BreakHitResult_HitItem_3, int32 CallFunc_BreakHitResult_FaceIndex_3, const struct FVector& CallFunc_BreakHitResult_TraceStart_3, const struct FVector& CallFunc_BreakHitResult_TraceEnd_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_WasRecentlyRendered_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_WasRecentlyRendered_ReturnValue_2, class USoundBase* K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
