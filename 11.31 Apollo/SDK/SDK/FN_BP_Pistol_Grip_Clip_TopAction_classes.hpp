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
// AnimBlueprintGeneratedClass BP_Pistol_Grip_Clip_TopAction.BP_Pistol_Grip_Clip_TopAction_C
class UBP_Pistol_Grip_Clip_TopAction_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_6047A5F5443C843C1EB16F90E772A9EC; // 0x278(0x30)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_1C444D924AC74067230DFA9A23E9CEE2; // 0x2A8(0x48)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_FE7CFCE944C6521565A6F7AC0C7064A1; // 0x2F0(0x18)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Pistol_Grip_Clip_TopAction_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BP_Pistol_Grip_Clip_TopAction(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
