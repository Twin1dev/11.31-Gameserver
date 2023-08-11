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

// 0xF8 (0x368 - 0x270)
// AnimBlueprintGeneratedClass BP_StormTrackerSniper.BP_StormTrackerSniper_C
class UBP_StormTrackerSniper_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_CA710771444DF8885B4F9FB936275484; // 0x278(0x30)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_68BAA34A4C6C07F75B85C1B356032405; // 0x2A8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4A2DB29A40112E01E2D75898F47237F9; // 0x2F0(0x78)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_StormTrackerSniper_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BP_StormTrackerSniper(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
