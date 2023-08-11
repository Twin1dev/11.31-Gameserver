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

// 0x10D0 (0x14D0 - 0x400)
// AnimBlueprintGeneratedClass M_MED_Banana_FaceAcc_Head_AnimBP.M_MED_Banana_FaceAcc_Head_AnimBP_C
class UM_MED_Banana_FaceAcc_Head_AnimBP_C : public UCustomCharacterPartAnimInstance_BananaHead
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_9D5F83734088B37966DBEBA6DEA9612D; // 0x408(0x30)()
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_F965B3624BE0BE6AEAE523A0FF891CB0; // 0x438(0x108)()
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_DA6D2B55436D2553FB5DBA8EDE74045F; // 0x540(0x108)()
	uint8                                        Pad_66E7[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_3E2E6E8645C99E8586C3AFBC62844189; // 0x650(0x560)()
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_2E294ABE43C1A0BBA0C2E7B857AE63F8; // 0xBB0(0x560)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_E4BE242948DA2D9CA0F3BC9A2FC2A43A; // 0x1110(0x108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_E285DC514CA3E821DC99DC82F90A7C23; // 0x1218(0x20)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_5D4398984FBE64450DFABCBBEEE359B1; // 0x1238(0x140)(ContainsInstancedReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_0CA12C204D6871199AE2E2B55042720A; // 0x1378(0x20)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_C9DF64C745268E42C5391A841F2D4498; // 0x1398(0x78)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_0017230148119646B824F98B7066F7A8; // 0x1410(0xC0)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("M_MED_Banana_FaceAcc_Head_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M_MED_Banana_FaceAcc_Head_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
