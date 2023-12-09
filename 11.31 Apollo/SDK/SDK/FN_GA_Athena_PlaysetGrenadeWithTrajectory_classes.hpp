#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x22 (0xE0A - 0xDE8)
// BlueprintGeneratedClass GA_Athena_PlaysetGrenadeWithTrajectory.GA_Athena_PlaysetGrenadeWithTrajectory_C
class UGA_Athena_PlaysetGrenadeWithTrajectory_C : public UGA_Athena_UtilityGrenade_WithTrajectory_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDE8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_ProjectileTrajectory_C*            ProjectileTrajectoryRed;                           // 0xDF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                RedIndicatorClass;                                 // 0xDF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlaysetItemDefinition*            DefaultPlayset;                                    // 0xE00(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldNotThrow;                                   // 0xE08(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanConsume;                                        // 0xE09(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UGA_Athena_PlaysetGrenadeWithTrajectory_C* GetDefaultObj();

	void DestroyProjectileTrajectory(bool CallFunc_IsValid_ReturnValue);
	void CalculateRotation(class UFortPlaysetItemDefinition* Playset, const struct FRotator& Rotation, struct FRotator* NewRotation, const struct FRotator& PlaysetRotation, const struct FRotator& YawOffset, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, float CallFunc_Abs_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2, const struct FRotator& CallFunc_ComposeRotators_ReturnValue);
	void SetActivePlaysetOnPlayer(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UFortPlaysetItemDefinition* CallFunc_GetActivePlaysetData_OutData, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess);
	void SetPlaysetData(class AFortProjectileBase* Projectile_Reference, class UFortPlaysetItemDefinition* CallFunc_GetActivePlaysetData_OutData, class AB_Prj_Athena_PlaysetGrenade_C* K2Node_DynamicCast_AsB_Prj_Athena_Playset_Grenade, bool K2Node_DynamicCast_bSuccess);
	void GetActivePlaysetData(class UFortPlaysetItemDefinition** OutData, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortPlaysetItemDefinition* CallFunc_GetPlayset_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetupDummyProjectileRed(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, class ABP_ProjectileTrajectory_Athena_SnapBoxToGrid_C* K2Node_DynamicCast_AsBP_Projectile_Trajectory_Athena_Snap_Box_to_Grid, bool K2Node_DynamicCast_bSuccess, class ABP_ProjectileTrajectory_C* K2Node_DynamicCast_AsBP_Projectile_Trajectory, bool K2Node_DynamicCast_bSuccess_1, class USplineMeshComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateTrajectorySpline();
	void K2_ActivateAbility();
	void CleanupTrajectoryDisplay();
	void Server_SpawnProjectile(const struct FVector& Location, const struct FRotator& Direction);
	void InitTrajectoryVariables();
	void AthenaProjectileSpawned(class AFortProjectileBase* ProjectileReference);
	void OnAbilityInputReleased();
	void ExecuteUbergraph_GA_Athena_PlaysetGrenadeWithTrajectory(int32 EntryPoint, const struct FVector& CallFunc_SpawnLocationAndRotation_OutLoc, const struct FRotator& CallFunc_SpawnLocationAndRotation_OutRot, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_CalcGrenadeSpeedFromPitch_GrenadeSpeed, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_SelectFloat_ReturnValue, float CallFunc_FMax_ReturnValue, const struct FHitResult& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutHitResult, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplinePoints, TArray<struct FVector>& CallFunc_CalculateProjectileTrajectorySplineWithHit_OutSplineTangents, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue, int32 CallFunc_Round_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, int32 CallFunc_Round_ReturnValue_1, int32 CallFunc_Round_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue, bool Temp_bool_Variable, const struct FVector& K2Node_Event_Location, const struct FRotator& K2Node_Event_Direction, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTagContainer& CallFunc_GetAthenaPlaylistContextTags_ReturnValue, bool CallFunc_HasTag_ReturnValue, class AFortProjectileBase* K2Node_Event_ProjectileReference, class UFortPlaysetItemDefinition* CallFunc_GetActivePlaysetData_OutData, const struct FRotator& CallFunc_CalculateRotation_NewRotation, bool CallFunc_CanCreatePlayset_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class ABP_ProjectileTrajectory_C* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool Temp_bool_Variable_1, class ABP_ProjectileTrajectory_C* K2Node_Select_Default_1);
};

}


