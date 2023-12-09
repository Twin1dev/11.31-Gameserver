#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x578 (0x7E0 - 0x268)
// AnimBlueprintGeneratedClass Flopper_Gadget_AnimBP.Flopper_Gadget_AnimBP_C
class UFlopper_Gadget_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_5B54[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_2F2AB8FA4E1C815767E9FF85ED9DB64C; // 0x278(0x18)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_F503A4E3403EE6E7C2EFEF835B120AE3; // 0x290(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_072C83FB4DE31E194B88C79635DBA857; // 0x2B0(0x20)(None)
	struct FAnimNode_Trail                       AnimGraphNode_Trail_31475A4D4176A843679325975216423F; // 0x2D0(0x270)(None)
	struct FAnimNode_Trail                       AnimGraphNode_Trail_BD2C0AE146BBEC3C1A4E439940E02D82; // 0x540(0x270)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_E1C0D5694227B227D5EBBDB62D4F6321; // 0x7B0(0x30)(None)

	static class UClass* StaticClass();
	static class UFlopper_Gadget_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Flopper_Gadget_AnimBP(int32 EntryPoint);
};

}


