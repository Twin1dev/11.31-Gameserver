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

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass AnimNotifyState_StopMontagePlayInPlace.AnimNotifyState_StopMontagePlayInPlace_C
class UAnimNotifyState_StopMontagePlayInPlace_C : public UAnimNotifyState
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotifyState_StopMontagePlayInPlace_C");
		return Clss;
	}

	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, class UAnimMontage* K2Node_DynamicCast_AsAnim_Montage, bool K2Node_DynamicCast_bSuccess, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UFortnite_M_Avg_Player_AnimBlueprint_C* K2Node_DynamicCast_AsFortnite_M_Avg_Player_Anim_Blueprint, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_GetCurrentAcceleration_ReturnValue, float CallFunc_VSize_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
