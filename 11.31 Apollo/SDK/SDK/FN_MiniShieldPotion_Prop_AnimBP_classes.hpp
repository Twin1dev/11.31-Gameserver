#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x338 - 0x268)
// AnimBlueprintGeneratedClass MiniShieldPotion_Prop_AnimBP.MiniShieldPotion_Prop_AnimBP_C
class UMiniShieldPotion_Prop_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_55F[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_ADBF5B5247A0D734AE3EC09836B87FFF; // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_78F97BF7428BE467D018D1901FBFBB3A; // 0x2A8(0x48)(None)
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_DEA6199B4A26B8CAFD657EBD48FFDB7E; // 0x2F0(0x48)(None)

	static class UClass* StaticClass();
	static class UMiniShieldPotion_Prop_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_MiniShieldPotion_Prop_AnimBP(int32 EntryPoint);
};

}


