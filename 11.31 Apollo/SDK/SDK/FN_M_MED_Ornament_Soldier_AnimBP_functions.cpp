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


// Function M_MED_Ornament_Soldier_AnimBP.M_MED_Ornament_Soldier_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UM_MED_Ornament_Soldier_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("M_MED_Ornament_Soldier_AnimBP_C", "AnimGraph");

	Params::UM_MED_Ornament_Soldier_AnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function M_MED_Ornament_Soldier_AnimBP.M_MED_Ornament_Soldier_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_MED_Ornament_Soldier_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static auto Func = Class->GetFunction("M_MED_Ornament_Soldier_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UM_MED_Ornament_Soldier_AnimBP_C_BlueprintUpdateAnimation_Params Parms;

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function M_MED_Ornament_Soldier_AnimBP.M_MED_Ornament_Soldier_AnimBP_C.OnCharacterCustomizationLoaded
// (Event, Public, BlueprintEvent)
// Parameters:

void UM_MED_Ornament_Soldier_AnimBP_C::OnCharacterCustomizationLoaded()
{
	static auto Func = Class->GetFunction("M_MED_Ornament_Soldier_AnimBP_C", "OnCharacterCustomizationLoaded");

	Params::UM_MED_Ornament_Soldier_AnimBP_C_OnCharacterCustomizationLoaded_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function M_MED_Ornament_Soldier_AnimBP.M_MED_Ornament_Soldier_AnimBP_C.ExecuteUbergraph_M_MED_Ornament_Soldier_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetPartSkeletalMeshComponent_ReturnValue                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_TryGetFortPawn_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetPartSkeletalMeshComponent_ReturnValue_1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue_1             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_TryGetFortPawn_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMeshComponent*              CallFunc_Map_Find_Value                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USkeletalMeshComponent*      CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue_2             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimInstance*               CallFunc_GetAnimInstance_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetCurveValue_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckForBackbling_bIsWearingBackbling                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckForBackbling_bIsBackblingLong                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UM_MED_Ornament_Soldier_AnimBP_C::ExecuteUbergraph_M_MED_Ornament_Soldier_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue, class AFortPawn* CallFunc_TryGetFortPawn_ReturnValue, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue_1, class AFortPawn* CallFunc_TryGetFortPawn_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_1, int32 Temp_int_Variable, class UMeshComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, float CallFunc_GetCurveValue_ReturnValue_2, float CallFunc_GetCurveValue_ReturnValue_3, bool CallFunc_CheckForBackbling_bIsWearingBackbling, bool CallFunc_CheckForBackbling_bIsBackblingLong, class UMaterialInstanceDynamic* CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue)
{
	static auto Func = Class->GetFunction("M_MED_Ornament_Soldier_AnimBP_C", "ExecuteUbergraph_M_MED_Ornament_Soldier_AnimBP");

	Params::UM_MED_Ornament_Soldier_AnimBP_C_ExecuteUbergraph_M_MED_Ornament_Soldier_AnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetPartSkeletalMeshComponent_ReturnValue = CallFunc_GetPartSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_TryGetFortPawn_ReturnValue = CallFunc_TryGetFortPawn_ReturnValue;
	Parms.CallFunc_GetPartSkeletalMeshComponent_ReturnValue_1 = CallFunc_GetPartSkeletalMeshComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue;
	Parms.CallFunc_GetAnimInstance_ReturnValue = CallFunc_GetAnimInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue_1 = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue_1;
	Parms.CallFunc_TryGetFortPawn_ReturnValue_1 = CallFunc_TryGetFortPawn_ReturnValue_1;
	Parms.CallFunc_GetAnimInstance_ReturnValue_1 = CallFunc_GetAnimInstance_ReturnValue_1;
	Parms.CallFunc_GetCurveValue_ReturnValue = CallFunc_GetCurveValue_ReturnValue;
	Parms.CallFunc_GetCurveValue_ReturnValue_1 = CallFunc_GetCurveValue_ReturnValue_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue_2 = CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetAnimInstance_ReturnValue_2 = CallFunc_GetAnimInstance_ReturnValue_2;
	Parms.CallFunc_GetCurveValue_ReturnValue_2 = CallFunc_GetCurveValue_ReturnValue_2;
	Parms.CallFunc_GetCurveValue_ReturnValue_3 = CallFunc_GetCurveValue_ReturnValue_3;
	Parms.CallFunc_CheckForBackbling_bIsWearingBackbling = CallFunc_CheckForBackbling_bIsWearingBackbling;
	Parms.CallFunc_CheckForBackbling_bIsBackblingLong = CallFunc_CheckForBackbling_bIsBackblingLong;
	Parms.CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue = CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
