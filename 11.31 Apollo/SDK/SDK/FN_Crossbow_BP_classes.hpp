#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x368 - 0x268)
// AnimBlueprintGeneratedClass Crossbow_BP.Crossbow_BP_C
class UCrossbow_BP_C : public UAnimInstance
{
public:
	uint8                                        Pad_5B08[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_C2CE56F348B7595774725785CADC3973; // 0x278(0x48)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_F1B1D70144C41EE177919293C033515D; // 0x2C0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_DB6FD6CD480FD66D7D67B3BB318137F7; // 0x2F0(0x78)(None)

	static class UClass* StaticClass();
	static class UCrossbow_BP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Crossbow_BP(int32 EntryPoint);
};

}


