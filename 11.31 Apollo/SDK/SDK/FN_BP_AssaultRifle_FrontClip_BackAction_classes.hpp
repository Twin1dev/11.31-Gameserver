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

// 0x98 (0x308 - 0x270)
// AnimBlueprintGeneratedClass BP_AssaultRifle_FrontClip_BackAction.BP_AssaultRifle_FrontClip_BackAction_C
class UBP_AssaultRifle_FrontClip_BackAction_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_093BD79B4AD87188F29729836AA06276; // 0x278(0x30)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_A31555D842D75C0905B639846DA94151; // 0x2A8(0x18)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_6E68D2AF43B0D536C012ED82940BED48; // 0x2C0(0x48)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_AssaultRifle_FrontClip_BackAction_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BP_AssaultRifle_FrontClip_BackAction(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
