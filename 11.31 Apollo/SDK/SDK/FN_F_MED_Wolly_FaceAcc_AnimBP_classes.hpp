#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x728 (0x990 - 0x268)
// AnimBlueprintGeneratedClass F_MED_Wolly_FaceAcc_AnimBP.F_MED_Wolly_FaceAcc_AnimBP_C
class UF_MED_Wolly_FaceAcc_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_531[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_5EFBB2304C0ABA8D01BD5CAC99D66035; // 0x278(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_32C1AF0F4902021750C0C4B672EBBA71; // 0x2A8(0x140)(ContainsInstancedReference)
	uint8                                        Pad_532[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_2EE441584B6278DF8DFA32A34D4FC7FE; // 0x3F0(0x560)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_643C13534631229DC9EB889549775E0D; // 0x950(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_70DCC9444D4AB25D184B468CF36814EB; // 0x970(0x20)(None)

	static class UClass* StaticClass();
	static class UF_MED_Wolly_FaceAcc_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_F_MED_Wolly_FaceAcc_AnimBP(int32 EntryPoint);
};

}


