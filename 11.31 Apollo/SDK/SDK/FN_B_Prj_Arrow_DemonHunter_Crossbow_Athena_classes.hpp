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

// 0xD8 (0xA18 - 0x940)
// BlueprintGeneratedClass B_Prj_Arrow_DemonHunter_Crossbow_Athena.B_Prj_Arrow_DemonHunter_Crossbow_Athena_C
class AB_Prj_Arrow_DemonHunter_Crossbow_Athena_C : public AFortProjectileAthena
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x940(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBulletWhipTrackerComponent_Crossbow_C* BulletWhipTrackerComponent_Crossbow;               // 0x948(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Crossbow_Projectile;                             // 0x950(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       HitDeimosEffect;                                   // 0x958(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       HitPlayerEffect;                                   // 0x960(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NewVar_0;                                          // 0x968(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A77[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            BoltStuck;                                         // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            BoltBreak;                                         // 0x978(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Bolt_Surface_Impact;                               // 0x980(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitResult;                                         // 0x988(0x88)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UParticleSystem*                       WaterImpactFX;                                     // 0xA10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_Arrow_DemonHunter_Crossbow_Athena_C");
		return Clss;
	}

	void OnTouched(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, struct FHitResult& HitResult, bool bIsOverlap);
	void ExecuteUbergraph_B_Prj_Arrow_DemonHunter_Crossbow_Athena(int32 EntryPoint, class USoundBase* Temp_object_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, int32 Temp_int_Variable_4, int32 Temp_int_Variable_5, int32 Temp_int_Variable_6, int32 Temp_int_Variable_7, int32 Temp_int_Variable_8, int32 Temp_int_Variable_9, int32 Temp_int_Variable_10, int32 Temp_int_Variable_11, int32 Temp_int_Variable_12, int32 Temp_int_Variable_13, int32 Temp_int_Variable_14, int32 Temp_int_Variable_15, int32 Temp_int_Variable_16, int32 Temp_int_Variable_17, int32 Temp_int_Variable_18, int32 Temp_int_Variable_19, int32 Temp_int_Variable_20, int32 Temp_int_Variable_21, int32 Temp_int_Variable_22, int32 Temp_int_Variable_23, class AActor* K2Node_Event_OtherActor, class UPrimitiveComponent* K2Node_Event_OtherComp, const struct FHitResult& K2Node_Event_HitResult, bool K2Node_Event_bIsOverlap, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, int32 Temp_int_Variable_24, int32 Temp_int_Variable_25, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue_1, bool Temp_bool_Variable, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_1, enum class EPhysicalSurface Temp_byte_Variable, class FName Temp_name_Variable, bool Temp_bool_Variable_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterPlaneLocation, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterPlaneNormal, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterSurfacePosition, float CallFunc_GetLastWaterSurfaceInfo_WaterDepth, int32 CallFunc_GetLastWaterSurfaceInfo_WaterBodyIdx, const struct FVector& CallFunc_GetLastWaterSurfaceInfo_WaterVelocity, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit_1, bool CallFunc_BreakHitResult_bInitialOverlap_1, float CallFunc_BreakHitResult_Time_1, float CallFunc_BreakHitResult_Distance_1, const struct FVector& CallFunc_BreakHitResult_Location_1, const struct FVector& CallFunc_BreakHitResult_ImpactPoint_1, const struct FVector& CallFunc_BreakHitResult_Normal_1, const struct FVector& CallFunc_BreakHitResult_ImpactNormal_1, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat_1, class AActor* CallFunc_BreakHitResult_HitActor_1, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent_1, class FName CallFunc_BreakHitResult_HitBoneName_1, int32 CallFunc_BreakHitResult_HitItem_1, int32 CallFunc_BreakHitResult_FaceIndex_1, const struct FVector& CallFunc_BreakHitResult_TraceStart_1, const struct FVector& CallFunc_BreakHitResult_TraceEnd_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class ADeimos_Fiend_C* K2Node_DynamicCast_AsDeimos_Fiend, bool K2Node_DynamicCast_bSuccess_1, class FName CallFunc_Temp_FindClosestBone_ClosestBone, class USoundBase* K2Node_Select_Default, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_2, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_FindClosestBone_K2_BoneLocation, class FName CallFunc_FindClosestBone_K2_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, enum class EPhysicalSurface CallFunc_GetSurfaceType_ReturnValue, class FName K2Node_Select_Default_1, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, int32 K2Node_Select_Default_2, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1, bool CallFunc_Greater_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
