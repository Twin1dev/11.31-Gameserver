#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x26E9 (0x2AD9 - 0x3F0)
// AnimBlueprintGeneratedClass M_MED_Ornament_Soldier_AnimBP.M_MED_Ornament_Soldier_AnimBP_C
class UM_MED_Ornament_Soldier_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_5DAD28E74928BDE88ED60BB59C4C7B28; // 0x3F8(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_BE0330E54680C81A218BF894932C2981; // 0x428(0x140)(ContainsInstancedReference)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig_56AA93E9495D918377140A94AFA75881; // 0x568(0x2B8)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6AC68B264A8E84F7A5E448B8A47D94ED; // 0x820(0xB8)(None)
	uint8                                        Pad_6D7A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_5D846C424759AA53784EDB9982E63EFE; // 0x8E0(0x560)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_511E9FCE4C0C0FB7D86E04ACC2FF9AF7; // 0xE40(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_E4286D59426A1A16142885BD05902FA0; // 0xE60(0x20)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_20F0B3D5490619389F0D83A09AEA4297; // 0xE80(0xA0)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_4EEF47534F625BE1B30AF4BFBE96E7AD; // 0xF20(0x560)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3571C338477FA1D89F58318C5CCCFFD8; // 0x1480(0x20)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_77A7B4164D1B8C05A3CA818504780E53; // 0x14A0(0x28)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5FA1FE0F486E803212B784A62BFCE13F; // 0x14C8(0x28)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_B0B62EC24F49F8EAC524F9AE986B2E31; // 0x14F0(0x20)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_4E1F79BF4697754E53A56E8BE7D72C0B; // 0x1510(0x560)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_C4E728A44687DC744C4070ADB92C6F94; // 0x1A70(0x560)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_857E1D144517F18C854B50A7308D2251; // 0x1FD0(0x560)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_65E270E242815A2CF39F1F9029EF1218; // 0x2530(0x560)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4D7F60014338103DFD7751B111F75435; // 0x2A90(0x20)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_D0C423FB458BA842A1428CB8DDC2BCB9; // 0x2AB0(0x20)(None)
	float                                        UseScalarParameterForBlink;                        // 0x2AD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BlinkControl;                                      // 0x2AD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WearingBackbling;                                  // 0x2AD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UM_MED_Ornament_Soldier_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void OnCharacterCustomizationLoaded();
	void ExecuteUbergraph_M_MED_Ornament_Soldier_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue, class AFortPawn* CallFunc_TryGetFortPawn_ReturnValue, class USkeletalMeshComponent* CallFunc_GetPartSkeletalMeshComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue_1, class AFortPawn* CallFunc_TryGetFortPawn_ReturnValue_1, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_1, float CallFunc_GetCurveValue_ReturnValue, float CallFunc_GetCurveValue_ReturnValue_1, int32 Temp_int_Variable, class UMeshComponent* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_4, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue_2, float CallFunc_GetCurveValue_ReturnValue_2, float CallFunc_GetCurveValue_ReturnValue_3, bool CallFunc_CheckForBackbling_bIsWearingBackbling, bool CallFunc_CheckForBackbling_bIsBackblingLong, class UMaterialInstanceDynamic* CallFunc_GetMIDForSkeletalMeshComponent_ReturnValue);
};

}


