#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x510 (0x838 - 0x328)
// AnimBlueprintGeneratedClass Blueprint_Paper_VIM.Blueprint_Paper_VIM_C
class UBlueprint_Paper_VIM_C : public UFortAnimInstance
{
public:
	uint8                                        Pad_5CFD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_985813CD40257121C24510B1EFA3045F; // 0x338(0x128)(None)
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_88B6F311437F6802F9D4E885AEBB612D; // 0x460(0x128)(None)
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_62132DD84DE9792F6948379FF19FE9B0; // 0x588(0x128)(None)
	struct FAnimNode_SpringBone                  AnimGraphNode_SpringBone_D9C2507C414C01F7CECC0291267407DC; // 0x6B0(0x128)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_209BCB204FB8EDDD0FE0ECAF3A14490E; // 0x7D8(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_EAD8434D41BA827A02AADFB11592B5F7; // 0x7F8(0x30)(None)
	struct FAnimNode_MeshSpaceRefPose            AnimGraphNode_MeshRefPose_12EF14484EC26A755A1F178B81B266BF; // 0x828(0x10)(None)

	static class UClass* StaticClass();
	static class UBlueprint_Paper_VIM_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Blueprint_Paper_VIM(int32 EntryPoint);
};

}


