#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x308 - 0x268)
// AnimBlueprintGeneratedClass GalileoBun_Weapon_AnimBP.GalileoBun_Weapon_AnimBP_C
class UGalileoBun_Weapon_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_6A7B[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_69012E9949F8A085D4ADF68B8DC66B48; // 0x278(0x30)(None)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_7937EEA74160F0086EE3EFBCD3B2CB8B; // 0x2A8(0x48)(None)
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_AD6FB18F44B7FBC56BDE8D8784676C8E; // 0x2F0(0x18)(None)

	static class UClass* StaticClass();
	static class UGalileoBun_Weapon_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_GalileoBun_Weapon_AnimBP(int32 EntryPoint);
};

}


