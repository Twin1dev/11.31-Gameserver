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

// 0x0 (0x28 - 0x28)
// AnimBlueprintGeneratedClass SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C
class ISwimmingAnimLayerInterface_C : public IAnimLayerInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SwimmingAnimLayerInterface_C");
		return Clss;
	}

	void SwimmingDiveJumpingLayer(const struct FPoseLink& PassThroughSwimmingDiveJumping, struct FPoseLink* SwimmingDiveJumpingLayer);
	void SwimmingFullBodyAdditiveLayer(const struct FPoseLink& PassThroughFullBodyAdditive, struct FPoseLink* SwimmingFullBodyAdditiveLayer);
	void SwimmingAdditiveLayer(const struct FPoseLink& IdleAdditive_Cache, const struct FPoseLink& MovementAdditiveLayerPose_Cache, const struct FPoseLink& FullBody, float PlayMeleeAttackAOLayer, float DisableArmsHeadAdditiveCurveAlphaLayer, float DisableIKRootAdditiveCurveAlphaLayer, float LocomotionAdditiveAlphaLayer, bool IsDBNOLayer, const struct FPoseLink& UpperAndLowerBody_Cache, const struct FPoseLink& SprintingPose_PostMask_Cache, struct FPoseLink* SwimmingAdditiveLayer);
	void SwimmingLowerBodyLayer(const struct FPoseLink& UpperBody_Cache, const struct FPoseLink& PreUpperBodySlot_Cache, const struct FPoseLink& PassThroughSwimmingLowerBody, struct FPoseLink* SwimmingLowerBodyLayer);
	void SwimmingUpperBodyPoseNonTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseNonTargeting, struct FPoseLink* SwimmingUpperBodyPoseNonTargetingLayer);
	void SwimmingUpperBodyPoseTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseTargeting, struct FPoseLink* SwimmingUpperBodyPoseTargetingLayer);
	void SwimmingSprintLayer(const struct FPoseLink& PassThroughSwimmingSprint, struct FPoseLink* SwimmingSprintLayer);
	void SwimmingMovementAdditiveLayerPose(const struct FPoseLink& PassThroughSwimmingMovementAdditive, struct FPoseLink* SwimmingMovementAdditiveLayerPose);
	void SwimmingLayer(const struct FPoseLink& MainPlayerAnimBP, struct FPoseLink* SwimmingLayer);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
