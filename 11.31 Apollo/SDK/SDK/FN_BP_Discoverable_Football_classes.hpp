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

// 0x40 (0x508 - 0x4C8)
// BlueprintGeneratedClass BP_Discoverable_Football.BP_Discoverable_Football_C
class ABP_Discoverable_Football_C : public ABP_Cozy_Discoverable_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortProjectileMovementComponent*      FortProjectileMovement;                            // 0x4D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_Float_283873D741B49A911EB4E79054D84F17; // 0x4D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_283873D741B49A911EB4E79054D84F17; // 0x4DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_66C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x4E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               InitLoc;                                           // 0x4E8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMovieSceneSequencePlaybackSettings   NewVar_1;                                          // 0x4F4(0x14)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Discoverable_Football_C");
		return Clss;
	}

	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Commit_OnSpecialInteraction();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Discoverable_Football(int32 EntryPoint, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FHitResult& CallFunc_K2_SetActorLocation_SweepHitResult, bool CallFunc_K2_SetActorLocation_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
