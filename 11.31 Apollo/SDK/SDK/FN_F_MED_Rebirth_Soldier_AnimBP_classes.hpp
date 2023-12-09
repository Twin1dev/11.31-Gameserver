#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xE90 (0x1290 - 0x400)
// AnimBlueprintGeneratedClass F_MED_Rebirth_Soldier_AnimBP.F_MED_Rebirth_Soldier_AnimBP_C
class UF_MED_Rebirth_Soldier_AnimBP_C : public UCustomCharacterPartAnimInstance_Rebirth_Soldier_F
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	uint8                                        Pad_5FED[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_8286AAEE45E6C7D86F39D8803C56EFFA; // 0x410(0x560)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_B09FF35743564C2061669CBEF947AFDA; // 0x970(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_26C38C044CF4EEC0B17A2FB72FF06596; // 0x990(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_1BD01B374D7A375B3E5191857EE5D979; // 0x9B0(0x108)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_16B97E634C52C4AEF5E37C860333AD7C; // 0xAB8(0x108)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_B7C9E2B44149C99B9BA4749C9CFD3906; // 0xBC0(0x560)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_94BA9143486FD7E5349856B659561042; // 0x1120(0x140)(ContainsInstancedReference)
	struct FAnimNode_Root                        AnimGraphNode_Root_77392F9F4B3A15D515A07285AEFC647A; // 0x1260(0x30)(None)

	static class UClass* StaticClass();
	static class UF_MED_Rebirth_Soldier_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_F_MED_Rebirth_Soldier_AnimBP(int32 EntryPoint);
};

}


