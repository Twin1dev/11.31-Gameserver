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
// AnimBlueprintGeneratedClass BP_Shotgun_SG_BFPA.BP_Shotgun_SG_BFPA_C
class UBP_Shotgun_SG_BFPA_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_4F6329394B95E045DDC6838AB743FA3F; // 0x278(0x30)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_58DF360140B29B2553BE3DB3DD1B36FB; // 0x2A8(0x48)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_87A69A934D766ABE8EC875A0703F52BB; // 0x2F0(0x18)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Shotgun_SG_BFPA_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BP_Shotgun_SG_BFPA(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
