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


// Function CrackShot_Frontend_AnimBP.CrackShot_Frontend_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UCrackShot_Frontend_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("CrackShot_Frontend_AnimBP_C", "AnimGraph");

	Params::UCrackShot_Frontend_AnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function CrackShot_Frontend_AnimBP.CrackShot_Frontend_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CrackShot_Frontend_AnimBP_AnimGraphNode_TransitionResult_C6604ADE415A07BC5D79DD8A1A32DF58
// (BlueprintEvent)
// Parameters:

void UCrackShot_Frontend_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CrackShot_Frontend_AnimBP_AnimGraphNode_TransitionResult_C6604ADE415A07BC5D79DD8A1A32DF58()
{
	static auto Func = Class->GetFunction("CrackShot_Frontend_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_CrackShot_Frontend_AnimBP_AnimGraphNode_TransitionResult_C6604ADE415A07BC5D79DD8A1A32DF58");

	Params::UCrackShot_Frontend_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CrackShot_Frontend_AnimBP_AnimGraphNode_TransitionResult_C6604ADE415A07BC5D79DD8A1A32DF58_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CrackShot_Frontend_AnimBP.CrackShot_Frontend_AnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_CrackShot_Frontend_AnimBP_AnimGraphNode_TransitionResult_93D1A9E646C8ECD8EE982F93947F0EC5
// (BlueprintEvent)
// Parameters:

void UCrackShot_Frontend_AnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_CrackShot_Frontend_AnimBP_AnimGraphNode_TransitionResult_93D1A9E646C8ECD8EE982F93947F0EC5()
{
	static auto Func = Class->GetFunction("CrackShot_Frontend_AnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_CrackShot_Frontend_AnimBP_AnimGraphNode_TransitionResult_93D1A9E646C8ECD8EE982F93947F0EC5");

	Params::UCrackShot_Frontend_AnimBP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_CrackShot_Frontend_AnimBP_AnimGraphNode_TransitionResult_93D1A9E646C8ECD8EE982F93947F0EC5_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function CrackShot_Frontend_AnimBP.CrackShot_Frontend_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrackShot_Frontend_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto Func = Class->GetFunction("CrackShot_Frontend_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UCrackShot_Frontend_AnimBP_C_BlueprintUpdateAnimation_Params Parms;

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CrackShot_Frontend_AnimBP.CrackShot_Frontend_AnimBP_C.ExecuteUbergraph_CrackShot_Frontend_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       CallFunc_GetFirstLocalFortPlayerController_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetViewTarget_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetObjectName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrackShot_Frontend_AnimBP_C::ExecuteUbergraph_CrackShot_Frontend_AnimBP(int32 EntryPoint, const struct FRotator& CallFunc_MakeRotator_ReturnValue, float CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue, float CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float K2Node_Event_DeltaTimeX, class AFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const class FString& CallFunc_GetObjectName_ReturnValue, bool CallFunc_Contains_ReturnValue, float CallFunc_GetCurveValue_ReturnValue)
{
	static auto Func = Class->GetFunction("CrackShot_Frontend_AnimBP_C", "ExecuteUbergraph_CrackShot_Frontend_AnimBP");

	Params::UCrackShot_Frontend_AnimBP_C_ExecuteUbergraph_CrackShot_Frontend_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue = CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue;
	Parms.CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1 = CallFunc_GetInstanceCurrentStateElapsedTime_ReturnValue_1;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetFirstLocalFortPlayerController_ReturnValue = CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetViewTarget_ReturnValue = CallFunc_GetViewTarget_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetObjectName_ReturnValue = CallFunc_GetObjectName_ReturnValue;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
