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

// 0xC0 (0x5C0 - 0x500)
// BlueprintGeneratedClass BP_CozyLodge_InteractablePresent.BP_CozyLodge_InteractablePresent_C
class ABP_CozyLodge_InteractablePresent_C : public AFortNavigationActor_OpenablePresent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x500(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  EditorMesh;                                        // 0x508(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_PresentOpen;                                     // 0x510(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_Fade_BB524F6E42F2A624CC0B84AC8D294C44;  // 0x518(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_Progress_BB524F6E42F2A624CC0B84AC8D294C44; // 0x51C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_BB524F6E42F2A624CC0B84AC8D294C44; // 0x520(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6497[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x528(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_OpenPresent_Normalizedprogress_39F9A61A44F1139A40CE36BBBBE093FE; // 0x530(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_OpenPresent__Direction_39F9A61A44F1139A40CE36BBBBE093FE; // 0x534(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6498[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTimelineComponent*                    Timeline_OpenPresent;                              // 0x538(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Shake_Normalized_Falloff_3DF5D44E49EEF851120BA190BB01B84E; // 0x540(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_Shake_Normalized_TimeProgression_3DF5D44E49EEF851120BA190BB01B84E; // 0x544(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_Shake__Direction_3DF5D44E49EEF851120BA190BB01B84E; // 0x548(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6499[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTimelineComponent*                    Timeline_Shake;                                    // 0x550(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RotationSpeed;                                     // 0x558(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        IntensityShake;                                    // 0x55C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxShakeIntensity;                                 // 0x560(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShakeFrequency;                                    // 0x564(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RotateFrequency;                                   // 0x568(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RotationBias;                                      // 0x56C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_Present;                                       // 0x570(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bLockRotation;                                     // 0x578(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_649A[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        DistanceFromCamera;                                // 0x57C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BlockOpening;                                      // 0x580(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_649B[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundBase*                            Play_Shake_Sound;                                  // 0x588(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Opening_Sound_Component;                           // 0x590(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Play_Opening_Sound;                                // 0x598(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Open_End_Sound;                                    // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       Shake_Audio_Component;                             // 0x5A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              GalileoUnwrapFX;                                   // 0x5B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            ShakeSound;                                        // 0x5B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_CozyLodge_InteractablePresent_C");
		return Clss;
	}

	void Timeline_OpenPresent__FinishedFunc();
	void Timeline_OpenPresent__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_0__TriggerFX__EventFunc();
	void Timeline_Shake__FinishedFunc();
	void Timeline_Shake__UpdateFunc();
	void OnShakePresent(class UFortItemDefinition* ItemDef);
	void OnOpenPresent(bool bActionCancelled);
	void OnResetPresent();
	void TestOpen();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CozyLodge_InteractablePresent(int32 EntryPoint, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetPI_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, float CallFunc_GetTimeSeconds_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue_3, float CallFunc_Sin_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_4, float CallFunc_Multiply_FloatFloat_ReturnValue_5, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_AddWorldRotation_SweepHitResult, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetWorldDeltaSeconds_ReturnValue, const struct FRotator& CallFunc_RInterpTo_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class UFortItemDefinition* K2Node_Event_ItemDef, bool K2Node_Event_bActionCancelled, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, const struct FVector& CallFunc_Conv_LinearColorToVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue, float CallFunc_FClamp_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool K2Node_DynamicCast_bSuccess, class UAudioComponent* CallFunc_SpawnSoundAtLocation_ReturnValue_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, TArray<class UGSC_DynamicLevelStreaming_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UGSC_DynamicLevelStreaming_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AFortEventLevelNavigationActor* CallFunc_GetLastNavObject_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class ABP_CozyLodge_SelectablePresent_C* K2Node_DynamicCast_AsBP_Cozy_Lodge_Selectable_Present, bool K2Node_DynamicCast_bSuccess_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
