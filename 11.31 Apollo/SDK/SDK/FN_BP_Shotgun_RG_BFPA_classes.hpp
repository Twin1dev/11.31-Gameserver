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
// AnimBlueprintGeneratedClass BP_Shotgun_RG_BFPA.BP_Shotgun_RG_BFPA_C
class UBP_Shotgun_RG_BFPA_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_447289EE478D0375649725A287B7BD4C; // 0x278(0x30)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_76185EE8467A3505F3E23E89565E7CB8; // 0x2A8(0x48)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_BE887AC24A08313E787615BA25555A93; // 0x2F0(0x18)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Shotgun_RG_BFPA_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BP_Shotgun_RG_BFPA(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
