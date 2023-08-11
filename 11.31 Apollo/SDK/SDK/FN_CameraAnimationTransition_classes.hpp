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

// 0xB0 (0x2C8 - 0x218)
// BlueprintGeneratedClass CameraAnimationTransition.CameraAnimationTransition_C
class ACameraAnimationTransition_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x218(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x220(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_NewTrack_0_2750533A46B9AEF2BE294F8153FE4FD4; // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_2750533A46B9AEF2BE294F8153FE4FD4; // 0x22C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55A5[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortnitePartyBackdrop_Camera_C*       CameraBR;                                          // 0x238(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CameraLocationBR;                                  // 0x240(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AFortnitePartyBackdrop_Camera_C*       CameraBR16Player;                                  // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortnitePartyBackdrop_Camera_C*       CameraCreative;                                    // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortnitePartyBackdrop_Camera_C*       CameraCreative16Player;                            // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_55A6[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTransform                            CameraLocationCreative;                            // 0x290(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        FOVPostion1;                                       // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FOVPostion2;                                       // 0x2C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CameraAnimationTransition_C");
		return Clss;
	}

	void UserConstructionScript(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, const struct FTransform& CallFunc_GetTransform_ReturnValue_1);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void MoveCameraUp();
	void MoveCameraDown();
	void ExecuteUbergraph_CameraAnimationTransition(int32 EntryPoint, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FTransform& CallFunc_TLerp_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult, bool CallFunc_K2_SetActorTransform_ReturnValue, const struct FTransform& CallFunc_TLerp_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetActorTransform_SweepHitResult_1, bool CallFunc_K2_SetActorTransform_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_2, float CallFunc_Lerp_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
