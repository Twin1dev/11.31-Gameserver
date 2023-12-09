#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9DC (0xDCC - 0x3F0)
// AnimBlueprintGeneratedClass M_MED_Ornament_Soldier_FaceAcc_AnimBP.M_MED_Ornament_Soldier_FaceAcc_AnimBP_C
class UM_MED_Ornament_Soldier_FaceAcc_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_ED690EA04D81C0BC5CF978ADDE6C2B7A; // 0x3F8(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_A6DC051146201A368C7227B27E854B69; // 0x428(0x140)(ContainsInstancedReference)
	uint8                                        Pad_5128[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_4B03ADB64FEE010B1078949BE456F0F6; // 0x570(0x560)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_9DF711FB4AB9FFCBB8CC1D937D22D228; // 0xAD0(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_82D7F8234C3E099CCC7C329270E738C6; // 0xAF0(0x20)(None)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig_2A6805E34A4592595AAE0C94BDB132F2; // 0xB10(0x2B8)(None)
	float                                        Emoting;                                           // 0xDC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UM_MED_Ornament_Soldier_FaceAcc_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_M_MED_Ornament_Soldier_FaceAcc_AnimBP(int32 EntryPoint, float CallFunc_Conv_BoolToFloat_ReturnValue, float K2Node_Event_DeltaTimeX, float CallFunc_Subtract_FloatFloat_ReturnValue);
};

}


