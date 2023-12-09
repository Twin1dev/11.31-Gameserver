#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x430 (0x820 - 0x3F0)
// AnimBlueprintGeneratedClass Male_Medium_Nutcracker_Head_AnimBP.Male_Medium_Nutcracker_Head_AnimBP_C
class UMale_Medium_Nutcracker_Head_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_573CBCE44329DA842BFB608325DEBC6A; // 0x3F8(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_AE0A25A7434A1C71EABB1D9260E64B3F; // 0x428(0x140)(ContainsInstancedReference)
	struct FAnimNode_ControlRig                  AnimGraphNode_ControlRig_19C1B5A34AF439B39BF5AAB592DC1FE8; // 0x568(0x2B8)(None)

	static class UClass* StaticClass();
	static class UMale_Medium_Nutcracker_Head_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Male_Medium_Nutcracker_Head_AnimBP(int32 EntryPoint);
};

}


