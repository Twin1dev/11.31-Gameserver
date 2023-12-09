#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x308 - 0x268)
// AnimBlueprintGeneratedClass BP_PDW.BP_PDW_C
class UBP_PDW_C : public UAnimInstance
{
public:
	uint8                                        Pad_2A65[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_0562F6184C86E34D2BBC87BBF67B4E94; // 0x278(0x30)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_8DF0F768443238A6FA9CD39C6A756B6D; // 0x2A8(0x18)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1186B52041A8BE0BBE0BB29197667B1A; // 0x2C0(0x48)(None)

	static class UClass* StaticClass();
	static class UBP_PDW_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BP_PDW(int32 EntryPoint);
};

}


