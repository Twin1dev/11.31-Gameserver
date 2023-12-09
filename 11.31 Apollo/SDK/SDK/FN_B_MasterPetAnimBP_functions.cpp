#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass B_MasterPetAnimBP.B_MasterPetAnimBP_C
// (None)

class UClass* UB_MasterPetAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_MasterPetAnimBP_C");

	return Clss;
}


// B_MasterPetAnimBP_C B_MasterPetAnimBP.Default__B_MasterPetAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_MasterPetAnimBP_C* UB_MasterPetAnimBP_C::GetDefaultObj()
{
	static class UB_MasterPetAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_MasterPetAnimBP_C*>(UB_MasterPetAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UB_MasterPetAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimGraph");

	Params::UB_MasterPetAnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_3C816C0C48CA2CAFFBF09392A11667F5
// (BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_3C816C0C48CA2CAFFBF09392A11667F5()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_3C816C0C48CA2CAFFBF09392A11667F5");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_E0DEFD6D4A6F7885EF0C1ABF6CCDE727
// (BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_E0DEFD6D4A6F7885EF0C1ABF6CCDE727()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_E0DEFD6D4A6F7885EF0C1ABF6CCDE727");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_FE9887D54DE05D68FF6E8193A157347B
// (BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_FE9887D54DE05D68FF6E8193A157347B()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_FE9887D54DE05D68FF6E8193A157347B");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_685F2EBC4468C9B009E6B8B7D3AE964F
// (BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_685F2EBC4468C9B009E6B8B7D3AE964F()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_685F2EBC4468C9B009E6B8B7D3AE964F");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_BF172D7F484DFFB51CE2DA86C34FBFFB
// (BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_BF172D7F484DFFB51CE2DA86C34FBFFB()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_BF172D7F484DFFB51CE2DA86C34FBFFB");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_9E2754D640022DD00B4C618375D7CDE8
// (BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_9E2754D640022DD00B4C618375D7CDE8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_9E2754D640022DD00B4C618375D7CDE8");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_LayeredBoneBlend_8F44D9504941E8105FB3BFBD14102B06
// (BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_LayeredBoneBlend_8F44D9504941E8105FB3BFBD14102B06()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_LayeredBoneBlend_8F44D9504941E8105FB3BFBD14102B06");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_7514C8CF49770043B15C23B4C927EF86
// (BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_7514C8CF49770043B15C23B4C927EF86()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "EvaluateGraphExposedInputs_ExecuteUbergraph_B_MasterPetAnimBP_AnimGraphNode_TransitionResult_7514C8CF49770043B15C23B4C927EF86");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_RollRandomIdle
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_RollRandomIdle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_RollRandomIdle");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_RollRandomIdle2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_RollRandomIdle2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_RollRandomIdle2");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_StartJump_Entered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_StartJump_Entered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_StartJump_Entered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_StartJump_Entered_Test
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_StartJump_Entered_Test()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_StartJump_Entered_Test");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_CrouchIdle1_FullyBlended
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_CrouchIdle1_FullyBlended()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_CrouchIdle1_FullyBlended");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_CrouchIdle2_FullyBlended
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_CrouchIdle2_FullyBlended()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_CrouchIdle2_FullyBlended");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_Entered_Crouching
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_Entered_Crouching()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_Entered_Crouching");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.AnimNotify_Entered_DownSightsToCrouch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::AnimNotify_Entered_DownSightsToCrouch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "AnimNotify_Entered_DownSightsToCrouch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.LobbySkyDive_IsDiving
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::LobbySkyDive_IsDiving()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "LobbySkyDive_IsDiving");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.LobbySkyDive_IsGliding
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_MasterPetAnimBP_C::LobbySkyDive_IsGliding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "LobbySkyDive_IsGliding");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_MasterPetAnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "BlueprintUpdateAnimation");

	Params::UB_MasterPetAnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_MasterPetAnimBP.B_MasterPetAnimBP_C.ExecuteUbergraph_B_MasterPetAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Clamp_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_1         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UB_MasterPetAnimBP_C::ExecuteUbergraph_B_MasterPetAnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_GetCurveValue_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_2, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Clamp_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, float CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_6)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_MasterPetAnimBP_C", "ExecuteUbergraph_B_MasterPetAnimBP");

	Params::UB_MasterPetAnimBP_C_ExecuteUbergraph_B_MasterPetAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue = CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Clamp_ReturnValue = CallFunc_Clamp_ReturnValue;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_1 = CallFunc_GetInstanceAssetPlayerTimeFromEnd_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_6 = CallFunc_BooleanAND_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}

}


