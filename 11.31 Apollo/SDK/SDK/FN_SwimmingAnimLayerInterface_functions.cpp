#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingDiveJumpingLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   PassThroughSwimmingDiveJumping                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingDiveJumpingLayer                                         (Parm, OutParm, NoDestructor)

void ISwimmingAnimLayerInterface_C::SwimmingDiveJumpingLayer(const struct FPoseLink& PassThroughSwimmingDiveJumping, struct FPoseLink* SwimmingDiveJumpingLayer)
{
	static auto Func = Class->GetFunction("SwimmingAnimLayerInterface_C", "SwimmingDiveJumpingLayer");

	Params::ISwimmingAnimLayerInterface_C_SwimmingDiveJumpingLayer_Params Parms;

	Parms.PassThroughSwimmingDiveJumping = PassThroughSwimmingDiveJumping;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingDiveJumpingLayer != nullptr)
		*SwimmingDiveJumpingLayer = Parms.SwimmingDiveJumpingLayer;

}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingFullBodyAdditiveLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   PassThroughFullBodyAdditive                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingFullBodyAdditiveLayer                                    (Parm, OutParm, NoDestructor)

void ISwimmingAnimLayerInterface_C::SwimmingFullBodyAdditiveLayer(const struct FPoseLink& PassThroughFullBodyAdditive, struct FPoseLink* SwimmingFullBodyAdditiveLayer)
{
	static auto Func = Class->GetFunction("SwimmingAnimLayerInterface_C", "SwimmingFullBodyAdditiveLayer");

	Params::ISwimmingAnimLayerInterface_C_SwimmingFullBodyAdditiveLayer_Params Parms;

	Parms.PassThroughFullBodyAdditive = PassThroughFullBodyAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingFullBodyAdditiveLayer != nullptr)
		*SwimmingFullBodyAdditiveLayer = Parms.SwimmingFullBodyAdditiveLayer;

}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingAdditiveLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   IdleAdditive_Cache                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   MovementAdditiveLayerPose_Cache                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   FullBody                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              PlayMeleeAttackAOLayer                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DisableArmsHeadAdditiveCurveAlphaLayer                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DisableIKRootAdditiveCurveAlphaLayer                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              LocomotionAdditiveAlphaLayer                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsDBNOLayer                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPoseLink                   UpperAndLowerBody_Cache                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SprintingPose_PostMask_Cache                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingAdditiveLayer                                            (Parm, OutParm, NoDestructor)

void ISwimmingAnimLayerInterface_C::SwimmingAdditiveLayer(const struct FPoseLink& IdleAdditive_Cache, const struct FPoseLink& MovementAdditiveLayerPose_Cache, const struct FPoseLink& FullBody, float PlayMeleeAttackAOLayer, float DisableArmsHeadAdditiveCurveAlphaLayer, float DisableIKRootAdditiveCurveAlphaLayer, float LocomotionAdditiveAlphaLayer, bool IsDBNOLayer, const struct FPoseLink& UpperAndLowerBody_Cache, const struct FPoseLink& SprintingPose_PostMask_Cache, struct FPoseLink* SwimmingAdditiveLayer)
{
	static auto Func = Class->GetFunction("SwimmingAnimLayerInterface_C", "SwimmingAdditiveLayer");

	Params::ISwimmingAnimLayerInterface_C_SwimmingAdditiveLayer_Params Parms;

	Parms.IdleAdditive_Cache = IdleAdditive_Cache;
	Parms.MovementAdditiveLayerPose_Cache = MovementAdditiveLayerPose_Cache;
	Parms.FullBody = FullBody;
	Parms.PlayMeleeAttackAOLayer = PlayMeleeAttackAOLayer;
	Parms.DisableArmsHeadAdditiveCurveAlphaLayer = DisableArmsHeadAdditiveCurveAlphaLayer;
	Parms.DisableIKRootAdditiveCurveAlphaLayer = DisableIKRootAdditiveCurveAlphaLayer;
	Parms.LocomotionAdditiveAlphaLayer = LocomotionAdditiveAlphaLayer;
	Parms.IsDBNOLayer = IsDBNOLayer;
	Parms.UpperAndLowerBody_Cache = UpperAndLowerBody_Cache;
	Parms.SprintingPose_PostMask_Cache = SprintingPose_PostMask_Cache;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingAdditiveLayer != nullptr)
		*SwimmingAdditiveLayer = Parms.SwimmingAdditiveLayer;

}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingLowerBodyLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   UpperBody_Cache                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   PreUpperBodySlot_Cache                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   PassThroughSwimmingLowerBody                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingLowerBodyLayer                                           (Parm, OutParm, NoDestructor)

void ISwimmingAnimLayerInterface_C::SwimmingLowerBodyLayer(const struct FPoseLink& UpperBody_Cache, const struct FPoseLink& PreUpperBodySlot_Cache, const struct FPoseLink& PassThroughSwimmingLowerBody, struct FPoseLink* SwimmingLowerBodyLayer)
{
	static auto Func = Class->GetFunction("SwimmingAnimLayerInterface_C", "SwimmingLowerBodyLayer");

	Params::ISwimmingAnimLayerInterface_C_SwimmingLowerBodyLayer_Params Parms;

	Parms.UpperBody_Cache = UpperBody_Cache;
	Parms.PreUpperBodySlot_Cache = PreUpperBodySlot_Cache;
	Parms.PassThroughSwimmingLowerBody = PassThroughSwimmingLowerBody;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingLowerBodyLayer != nullptr)
		*SwimmingLowerBodyLayer = Parms.SwimmingLowerBodyLayer;

}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingUpperBodyPoseNonTargetingLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   PassThroughSwimmingUpperBodyPoseNonTargeting                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingUpperBodyPoseNonTargetingLayer                           (Parm, OutParm, NoDestructor)

void ISwimmingAnimLayerInterface_C::SwimmingUpperBodyPoseNonTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseNonTargeting, struct FPoseLink* SwimmingUpperBodyPoseNonTargetingLayer)
{
	static auto Func = Class->GetFunction("SwimmingAnimLayerInterface_C", "SwimmingUpperBodyPoseNonTargetingLayer");

	Params::ISwimmingAnimLayerInterface_C_SwimmingUpperBodyPoseNonTargetingLayer_Params Parms;

	Parms.PassThroughSwimmingUpperBodyPoseNonTargeting = PassThroughSwimmingUpperBodyPoseNonTargeting;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingUpperBodyPoseNonTargetingLayer != nullptr)
		*SwimmingUpperBodyPoseNonTargetingLayer = Parms.SwimmingUpperBodyPoseNonTargetingLayer;

}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingUpperBodyPoseTargetingLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   PassThroughSwimmingUpperBodyPoseTargeting                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingUpperBodyPoseTargetingLayer                              (Parm, OutParm, NoDestructor)

void ISwimmingAnimLayerInterface_C::SwimmingUpperBodyPoseTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseTargeting, struct FPoseLink* SwimmingUpperBodyPoseTargetingLayer)
{
	static auto Func = Class->GetFunction("SwimmingAnimLayerInterface_C", "SwimmingUpperBodyPoseTargetingLayer");

	Params::ISwimmingAnimLayerInterface_C_SwimmingUpperBodyPoseTargetingLayer_Params Parms;

	Parms.PassThroughSwimmingUpperBodyPoseTargeting = PassThroughSwimmingUpperBodyPoseTargeting;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingUpperBodyPoseTargetingLayer != nullptr)
		*SwimmingUpperBodyPoseTargetingLayer = Parms.SwimmingUpperBodyPoseTargetingLayer;

}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingSprintLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   PassThroughSwimmingSprint                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingSprintLayer                                              (Parm, OutParm, NoDestructor)

void ISwimmingAnimLayerInterface_C::SwimmingSprintLayer(const struct FPoseLink& PassThroughSwimmingSprint, struct FPoseLink* SwimmingSprintLayer)
{
	static auto Func = Class->GetFunction("SwimmingAnimLayerInterface_C", "SwimmingSprintLayer");

	Params::ISwimmingAnimLayerInterface_C_SwimmingSprintLayer_Params Parms;

	Parms.PassThroughSwimmingSprint = PassThroughSwimmingSprint;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingSprintLayer != nullptr)
		*SwimmingSprintLayer = Parms.SwimmingSprintLayer;

}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingMovementAdditiveLayerPose
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   PassThroughSwimmingMovementAdditive                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingMovementAdditiveLayerPose                                (Parm, OutParm, NoDestructor)

void ISwimmingAnimLayerInterface_C::SwimmingMovementAdditiveLayerPose(const struct FPoseLink& PassThroughSwimmingMovementAdditive, struct FPoseLink* SwimmingMovementAdditiveLayerPose)
{
	static auto Func = Class->GetFunction("SwimmingAnimLayerInterface_C", "SwimmingMovementAdditiveLayerPose");

	Params::ISwimmingAnimLayerInterface_C_SwimmingMovementAdditiveLayerPose_Params Parms;

	Parms.PassThroughSwimmingMovementAdditive = PassThroughSwimmingMovementAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingMovementAdditiveLayerPose != nullptr)
		*SwimmingMovementAdditiveLayerPose = Parms.SwimmingMovementAdditiveLayerPose;

}


// Function SwimmingAnimLayerInterface.SwimmingAnimLayerInterface_C.SwimmingLayer
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   MainPlayerAnimBP                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingLayer                                                    (Parm, OutParm, NoDestructor)

void ISwimmingAnimLayerInterface_C::SwimmingLayer(const struct FPoseLink& MainPlayerAnimBP, struct FPoseLink* SwimmingLayer)
{
	static auto Func = Class->GetFunction("SwimmingAnimLayerInterface_C", "SwimmingLayer");

	Params::ISwimmingAnimLayerInterface_C_SwimmingLayer_Params Parms;

	Parms.MainPlayerAnimBP = MainPlayerAnimBP;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingLayer != nullptr)
		*SwimmingLayer = Parms.SwimmingLayer;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
