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

// 0x720 (0x990 - 0x270)
// AnimBlueprintGeneratedClass F_MED_Wolly_FaceAcc_AnimBP.F_MED_Wolly_FaceAcc_AnimBP_C
class UF_MED_Wolly_FaceAcc_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_5EFBB2304C0ABA8D01BD5CAC99D66035; // 0x278(0x30)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_32C1AF0F4902021750C0C4B672EBBA71; // 0x2A8(0x140)(ContainsInstancedReference)
	uint8                                        Pad_661F[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_2EE441584B6278DF8DFA32A34D4FC7FE; // 0x3F0(0x560)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_643C13534631229DC9EB889549775E0D; // 0x950(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_70DCC9444D4AB25D184B468CF36814EB; // 0x970(0x20)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("F_MED_Wolly_FaceAcc_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_F_MED_Wolly_FaceAcc_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
