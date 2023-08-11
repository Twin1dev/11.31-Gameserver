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

// 0x1B0 (0x9E8 - 0x838)
// BlueprintGeneratedClass B_Prj_Athena_PlaysetGrenade.B_Prj_Athena_PlaysetGrenade_C
class AB_Prj_Athena_PlaysetGrenade_C : public AFortProjectileBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x838(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       PopupGrenade_ThrowLoop_AudioComponent;             // 0x840(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              ParticleSystem;                                    // 0x848(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Mesh;                                              // 0x850(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class URotatingMovementComponent*            RotatingMovement;                                  // 0x858(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FVector                               BaseDestination;                                   // 0x860(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A48[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UParticleSystem*                       P_BuildBuilding;                                   // 0x870(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_CloseSound;                                    // 0x878(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Cue_DistantSound;                                  // 0x880(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GridExplosionOffset;                               // 0x888(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GridSizeXY;                                        // 0x894(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GridSizeZ;                                         // 0x898(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GridYOffset;                                       // 0x89C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GridZOffset;                                       // 0x8A0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ECardinalDirection                CardinalDirection;                                 // 0x8A4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A49[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TMap<enum class ECardinalDirection, float>   OrientationYawOffsets;                             // 0x8A8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TMap<enum class ECardinalDirection, struct FVector> OrientationLocationOffsets;                        // 0x8F8(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	struct FVector                               LastBounceLocation;                                // 0x948(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinBounceDistance;                                 // 0x954(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastBounceTime;                                    // 0x958(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinTimeBetweenBounces;                             // 0x95C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            BounceSound;                                       // 0x960(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BuildDelay;                                        // 0x968(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A4A[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TMap<enum class ECardinalDirection, struct FVector> OrientationDoortraceOffsets;                       // 0x970(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class USoundBase*                            InAirLoopSound;                                    // 0x9C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       InAirLoopComponent;                                // 0x9C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BounceTimeout;                                     // 0x9D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5A4B[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortPlaysetItemDefinition*            CachedPlayset;                                     // 0x9D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                PlayspaceActorToSpawn;                             // 0x9E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_Prj_Athena_PlaysetGrenade_C");
		return Clss;
	}

	void SetPlaysetData(class UFortPlaysetItemDefinition* NewPlayset);
	void CalculateCardinalDirection(class APawn* CallFunc_GetInstigator_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Abs_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Abs_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue_2);
	void SetBaseDestination(struct FHitResult& Hit, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, int32 CallFunc_Round_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue);
	void OnLoaded_3645F4484F4ECED813C69D92F55C7A1F(class UObject* Loaded);
	void OnStop(struct FHitResult& Hit);
	void OnExploded(TArray<class AActor*>& HitActors, TArray<struct FHitResult>& HitResults);
	void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, const struct FVector& HitLocation, const struct FVector& HitNormal, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void SpawnPlayspaceServer(class UFortPlaysetItemDefinition* Playset, const struct FVector& Location, const struct FRotator& Rotation);
	void Play_Spawn_Prefab_Sound(const struct FVector& Location);
	void ExecuteUbergraph_B_Prj_Athena_PlaysetGrenade(int32 EntryPoint, class UObject* K2Node_CustomEvent_Loaded, TArray<class AActor*>& K2Node_Event_HitActors, TArray<struct FHitResult>& K2Node_Event_HitResults, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UPrimitiveComponent* K2Node_Event_MyComp, class AActor* K2Node_Event_Other, class UPrimitiveComponent* K2Node_Event_OtherComp, bool K2Node_Event_bSelfMoved, const struct FVector& K2Node_Event_HitLocation, const struct FVector& K2Node_Event_HitNormal, const struct FVector& K2Node_Event_NormalImpulse, const struct FHitResult& K2Node_Event_Hit, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, int32 CallFunc_Round_ReturnValue_2, float CallFunc_Multiply_IntFloat_ReturnValue_2, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& K2Node_Event_Hit_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_IsClosed_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortPlaysetItemDefinition* K2Node_CustomEvent_Playset, const struct FVector& K2Node_CustomEvent_Location_1, const struct FRotator& K2Node_CustomEvent_Rotation, float CallFunc_Map_Find_Value_1, bool CallFunc_Map_Find_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, class AFortVolumeManager* CallFunc_GetVolumeManager_OutVolumeManager, enum class EVolumeValidityResult CallFunc_GetVolumeManager_OutIsValid, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FVector& CallFunc_AdjustToFinalLocation_ReturnValue, class AFortVolume* CallFunc_SpawnVolume_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess, class AFortVolume* CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume, bool CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class UObject* Temp_object_Variable, const struct FVector& K2Node_CustomEvent_Location, class USoundBase* K2Node_DynamicCast_AsSound_Base, bool K2Node_DynamicCast_bSuccess_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
