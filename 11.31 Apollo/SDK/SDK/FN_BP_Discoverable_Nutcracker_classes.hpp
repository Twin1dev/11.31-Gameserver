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

// 0x79 (0x541 - 0x4C8)
// BlueprintGeneratedClass BP_Discoverable_Nutcracker.BP_Discoverable_Nutcracker_C
class ABP_Discoverable_Nutcracker_C : public ABP_Cozy_Discoverable_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Head;                                              // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x4D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_1_Wobble_EF4D53BC4E4CFAD1E9B10EB7CF179775; // 0x4E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_1__Direction_EF4D53BC4E4CFAD1E9B10EB7CF179775; // 0x4E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66CC[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTimelineComponent*                    Timeline_1;                                        // 0x4E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_NewTrack_0_AE4E128C42D70841E2ECE3B5D87EE6C6; // 0x4F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_AE4E128C42D70841E2ECE3B5D87EE6C6; // 0x4F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66CD[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x4F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        HeadBoop_NewTrack_0_9607B22844F765DC22372E820B81BD2D; // 0x500(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                HeadBoop__Direction_9607B22844F765DC22372E820B81BD2D; // 0x504(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66CE[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTimelineComponent*                    HeadBoop;                                          // 0x508(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            InitTransform;                                     // 0x510(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bHeadAsMesh;                                       // 0x540(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Discoverable_Nutcracker_C");
		return Clss;
	}

	void HeadBoop__FinishedFunc();
	void HeadBoop__UpdateFunc();
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void Commit_OnSpecialInteraction();
	void SaxDance(bool bIsStart);
	void NotifiedByDiscoverable(const struct FGameplayTag& ActionTag, const struct FGameplayTag& CameraTag, bool bIsStart);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Discoverable_Nutcracker(int32 EntryPoint, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, class AActor* K2Node_Event_OtherActor, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool K2Node_CustomEvent_bIsStart, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, float CallFunc_Add_FloatFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FRotator& CallFunc_RLerp_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, float CallFunc_Add_FloatFloat_ReturnValue_1, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FRotator& CallFunc_RLerp_ReturnValue_1, const struct FGameplayTag& K2Node_Event_ActionTag, const struct FGameplayTag& K2Node_Event_CameraTag, bool K2Node_Event_bIsStart, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location_2, const struct FRotator& CallFunc_BreakTransform_Rotation_2, const struct FVector& CallFunc_BreakTransform_Scale_2, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, float CallFunc_BreakRotator_Roll_2, float CallFunc_BreakRotator_Pitch_2, float CallFunc_BreakRotator_Yaw_2, const struct FVector& CallFunc_VLerp_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_4, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FRotator& CallFunc_RLerp_ReturnValue_2, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldTransform_SweepHitResult);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
