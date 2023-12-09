#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x368 - 0x268)
// AnimBlueprintGeneratedClass Mustache_SkBP.Mustache_SkBP_C
class UMustache_SkBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_593A[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_943F7C4A41EBACC639D9488D87C53458; // 0x278(0x48)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7E3FA46448BAA601A9D6509EF1D3E4D7; // 0x2C0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8DE767264798029C9A03DDBCA1A479BB; // 0x2F0(0x78)(None)

	static class UClass* StaticClass();
	static class UMustache_SkBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Mustache_SkBP(int32 EntryPoint);
};

}


