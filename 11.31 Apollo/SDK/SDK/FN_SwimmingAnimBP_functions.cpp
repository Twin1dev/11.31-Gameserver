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


// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingDiveJumpingLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PassThroughSwimmingDiveJumping                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingDiveJumpingLayer                                         (Parm, OutParm, NoDestructor)

void USwimmingAnimBP_C::SwimmingDiveJumpingLayer(const struct FPoseLink& PassThroughSwimmingDiveJumping, struct FPoseLink* SwimmingDiveJumpingLayer)
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "SwimmingDiveJumpingLayer");

	Params::USwimmingAnimBP_C_SwimmingDiveJumpingLayer_Params Parms;

	Parms.PassThroughSwimmingDiveJumping = PassThroughSwimmingDiveJumping;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingDiveJumpingLayer != nullptr)
		*SwimmingDiveJumpingLayer = Parms.SwimmingDiveJumpingLayer;

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingFullBodyAdditiveLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PassThroughFullBodyAdditive                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingFullBodyAdditiveLayer                                    (Parm, OutParm, NoDestructor)

void USwimmingAnimBP_C::SwimmingFullBodyAdditiveLayer(const struct FPoseLink& PassThroughFullBodyAdditive, struct FPoseLink* SwimmingFullBodyAdditiveLayer)
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "SwimmingFullBodyAdditiveLayer");

	Params::USwimmingAnimBP_C_SwimmingFullBodyAdditiveLayer_Params Parms;

	Parms.PassThroughFullBodyAdditive = PassThroughFullBodyAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingFullBodyAdditiveLayer != nullptr)
		*SwimmingFullBodyAdditiveLayer = Parms.SwimmingFullBodyAdditiveLayer;

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingAdditiveLayer
// (HasOutParams, BlueprintCallable)
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

void USwimmingAnimBP_C::SwimmingAdditiveLayer(const struct FPoseLink& IdleAdditive_Cache, const struct FPoseLink& MovementAdditiveLayerPose_Cache, const struct FPoseLink& FullBody, float PlayMeleeAttackAOLayer, float DisableArmsHeadAdditiveCurveAlphaLayer, float DisableIKRootAdditiveCurveAlphaLayer, float LocomotionAdditiveAlphaLayer, bool IsDBNOLayer, const struct FPoseLink& UpperAndLowerBody_Cache, const struct FPoseLink& SprintingPose_PostMask_Cache, struct FPoseLink* SwimmingAdditiveLayer)
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "SwimmingAdditiveLayer");

	Params::USwimmingAnimBP_C_SwimmingAdditiveLayer_Params Parms;

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


// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingLowerBodyLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   UpperBody_Cache                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   PreUpperBodySlot_Cache                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   PassThroughSwimmingLowerBody                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingLowerBodyLayer                                           (Parm, OutParm, NoDestructor)

void USwimmingAnimBP_C::SwimmingLowerBodyLayer(const struct FPoseLink& UpperBody_Cache, const struct FPoseLink& PreUpperBodySlot_Cache, const struct FPoseLink& PassThroughSwimmingLowerBody, struct FPoseLink* SwimmingLowerBodyLayer)
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "SwimmingLowerBodyLayer");

	Params::USwimmingAnimBP_C_SwimmingLowerBodyLayer_Params Parms;

	Parms.UpperBody_Cache = UpperBody_Cache;
	Parms.PreUpperBodySlot_Cache = PreUpperBodySlot_Cache;
	Parms.PassThroughSwimmingLowerBody = PassThroughSwimmingLowerBody;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingLowerBodyLayer != nullptr)
		*SwimmingLowerBodyLayer = Parms.SwimmingLowerBodyLayer;

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingUpperBodyPoseNonTargetingLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PassThroughSwimmingUpperBodyPoseNonTargeting                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingUpperBodyPoseNonTargetingLayer                           (Parm, OutParm, NoDestructor)

void USwimmingAnimBP_C::SwimmingUpperBodyPoseNonTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseNonTargeting, struct FPoseLink* SwimmingUpperBodyPoseNonTargetingLayer)
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "SwimmingUpperBodyPoseNonTargetingLayer");

	Params::USwimmingAnimBP_C_SwimmingUpperBodyPoseNonTargetingLayer_Params Parms;

	Parms.PassThroughSwimmingUpperBodyPoseNonTargeting = PassThroughSwimmingUpperBodyPoseNonTargeting;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingUpperBodyPoseNonTargetingLayer != nullptr)
		*SwimmingUpperBodyPoseNonTargetingLayer = Parms.SwimmingUpperBodyPoseNonTargetingLayer;

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingUpperBodyPoseTargetingLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PassThroughSwimmingUpperBodyPoseTargeting                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingUpperBodyPoseTargetingLayer                              (Parm, OutParm, NoDestructor)

void USwimmingAnimBP_C::SwimmingUpperBodyPoseTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseTargeting, struct FPoseLink* SwimmingUpperBodyPoseTargetingLayer)
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "SwimmingUpperBodyPoseTargetingLayer");

	Params::USwimmingAnimBP_C_SwimmingUpperBodyPoseTargetingLayer_Params Parms;

	Parms.PassThroughSwimmingUpperBodyPoseTargeting = PassThroughSwimmingUpperBodyPoseTargeting;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingUpperBodyPoseTargetingLayer != nullptr)
		*SwimmingUpperBodyPoseTargetingLayer = Parms.SwimmingUpperBodyPoseTargetingLayer;

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingMovementAdditiveLayerPose
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PassThroughSwimmingMovementAdditive                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingMovementAdditiveLayerPose                                (Parm, OutParm, NoDestructor)

void USwimmingAnimBP_C::SwimmingMovementAdditiveLayerPose(const struct FPoseLink& PassThroughSwimmingMovementAdditive, struct FPoseLink* SwimmingMovementAdditiveLayerPose)
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "SwimmingMovementAdditiveLayerPose");

	Params::USwimmingAnimBP_C_SwimmingMovementAdditiveLayerPose_Params Parms;

	Parms.PassThroughSwimmingMovementAdditive = PassThroughSwimmingMovementAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingMovementAdditiveLayerPose != nullptr)
		*SwimmingMovementAdditiveLayerPose = Parms.SwimmingMovementAdditiveLayerPose;

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingSprintLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   PassThroughSwimmingSprint                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingSprintLayer                                              (Parm, OutParm, NoDestructor)

void USwimmingAnimBP_C::SwimmingSprintLayer(const struct FPoseLink& PassThroughSwimmingSprint, struct FPoseLink* SwimmingSprintLayer)
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "SwimmingSprintLayer");

	Params::USwimmingAnimBP_C_SwimmingSprintLayer_Params Parms;

	Parms.PassThroughSwimmingSprint = PassThroughSwimmingSprint;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingSprintLayer != nullptr)
		*SwimmingSprintLayer = Parms.SwimmingSprintLayer;

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.SwimmingLayer
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   MainPlayerAnimBP                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   SwimmingLayer                                                    (Parm, OutParm, NoDestructor)

void USwimmingAnimBP_C::SwimmingLayer(const struct FPoseLink& MainPlayerAnimBP, struct FPoseLink* SwimmingLayer)
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "SwimmingLayer");

	Params::USwimmingAnimBP_C_SwimmingLayer_Params Parms;

	Parms.MainPlayerAnimBP = MainPlayerAnimBP;

	UObject::ProcessEvent(Func, &Parms);

	if (SwimmingLayer != nullptr)
		*SwimmingLayer = Parms.SwimmingLayer;

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void USwimmingAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "AnimGraph");

	Params::USwimmingAnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_E6B49F01423E469AF176989D25F6BA2A
// (BlueprintEvent)
// Parameters:

void USwimmingAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_E6B49F01423E469AF176989D25F6BA2A()
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_E6B49F01423E469AF176989D25F6BA2A");

	Params::USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_E6B49F01423E469AF176989D25F6BA2A_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_LayeredBoneBlend_C388B2744DEBBC320E1531A5C9E40B17
// (BlueprintEvent)
// Parameters:

void USwimmingAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_LayeredBoneBlend_C388B2744DEBBC320E1531A5C9E40B17()
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_LayeredBoneBlend_C388B2744DEBBC320E1531A5C9E40B17");

	Params::USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_LayeredBoneBlend_C388B2744DEBBC320E1531A5C9E40B17_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_LayeredBoneBlend_2035F1904C072BE5887B8D9A25E4BE52
// (BlueprintEvent)
// Parameters:

void USwimmingAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_LayeredBoneBlend_2035F1904C072BE5887B8D9A25E4BE52()
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_LayeredBoneBlend_2035F1904C072BE5887B8D9A25E4BE52");

	Params::USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_LayeredBoneBlend_2035F1904C072BE5887B8D9A25E4BE52_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_ApplyAdditive_D15630094D91FB09EC4581BBC47EFBF5
// (BlueprintEvent)
// Parameters:

void USwimmingAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_ApplyAdditive_D15630094D91FB09EC4581BBC47EFBF5()
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_ApplyAdditive_D15630094D91FB09EC4581BBC47EFBF5");

	Params::USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_ApplyAdditive_D15630094D91FB09EC4581BBC47EFBF5_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintStart_Entered_Layer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USwimmingAnimBP_C::AnimNotify_SwimSprintStart_Entered_Layer()
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "AnimNotify_SwimSprintStart_Entered_Layer");

	Params::USwimmingAnimBP_C_AnimNotify_SwimSprintStart_Entered_Layer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintStart_Exited_Layer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USwimmingAnimBP_C::AnimNotify_SwimSprintStart_Exited_Layer()
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "AnimNotify_SwimSprintStart_Exited_Layer");

	Params::USwimmingAnimBP_C_AnimNotify_SwimSprintStart_Exited_Layer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprint_Entered_Layer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USwimmingAnimBP_C::AnimNotify_SwimSprint_Entered_Layer()
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "AnimNotify_SwimSprint_Entered_Layer");

	Params::USwimmingAnimBP_C_AnimNotify_SwimSprint_Entered_Layer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimSprintSlow_Entered_Layer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USwimmingAnimBP_C::AnimNotify_SwimSprintSlow_Entered_Layer()
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "AnimNotify_SwimSprintSlow_Entered_Layer");

	Params::USwimmingAnimBP_C_AnimNotify_SwimSprintSlow_Entered_Layer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_5830B69443C9B79B5F980CAE5DEC8E36
// (BlueprintEvent)
// Parameters:

void USwimmingAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_5830B69443C9B79B5F980CAE5DEC8E36()
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_5830B69443C9B79B5F980CAE5DEC8E36");

	Params::USwimmingAnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_5830B69443C9B79B5F980CAE5DEC8E36_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimStartAdditive_Entered_Layer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USwimmingAnimBP_C::AnimNotify_SwimStartAdditive_Entered_Layer()
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "AnimNotify_SwimStartAdditive_Entered_Layer");

	Params::USwimmingAnimBP_C_AnimNotify_SwimStartAdditive_Entered_Layer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.AnimNotify_SwimMovementAccelAdditive_Exited_Layer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void USwimmingAnimBP_C::AnimNotify_SwimMovementAccelAdditive_Exited_Layer()
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "AnimNotify_SwimMovementAccelAdditive_Exited_Layer");

	Params::USwimmingAnimBP_C_AnimNotify_SwimMovementAccelAdditive_Exited_Layer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SwimmingAnimBP.SwimmingAnimBP_C.ExecuteUbergraph_SwimmingAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetRelevantAnimTime_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetRelevantAnimTime_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void USwimmingAnimBP_C::ExecuteUbergraph_SwimmingAnimBP(int32 EntryPoint, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, float CallFunc_GetRelevantAnimTime_ReturnValue, float CallFunc_GetRelevantAnimTime_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable)
{
	static auto Func = Class->GetFunction("SwimmingAnimBP_C", "ExecuteUbergraph_SwimmingAnimBP");

	Params::USwimmingAnimBP_C_ExecuteUbergraph_SwimmingAnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable = Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable;
	Parms.CallFunc_GetRelevantAnimTime_ReturnValue = CallFunc_GetRelevantAnimTime_ReturnValue;
	Parms.CallFunc_GetRelevantAnimTime_ReturnValue_1 = CallFunc_GetRelevantAnimTime_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
