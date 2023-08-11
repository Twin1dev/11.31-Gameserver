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
// AnimBlueprintGeneratedClass BP_AssaultRifle_FrontClip_SideAction.BP_AssaultRifle_FrontClip_SideAction_C
class UBP_AssaultRifle_FrontClip_SideAction_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_BA9A03134DBA089D49100DBE71EF86F5; // 0x278(0x30)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_4E27AC5C48BE291AEB818BA0DAEA04EB; // 0x2A8(0x48)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_B63DE5144515FA5CE71B26B8581D7149; // 0x2F0(0x18)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_AssaultRifle_FrontClip_SideAction_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BP_AssaultRifle_FrontClip_SideAction(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
