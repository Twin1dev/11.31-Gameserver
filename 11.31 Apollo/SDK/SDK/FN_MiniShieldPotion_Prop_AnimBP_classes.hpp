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

// 0xC8 (0x338 - 0x270)
// AnimBlueprintGeneratedClass MiniShieldPotion_Prop_AnimBP.MiniShieldPotion_Prop_AnimBP_C
class UMiniShieldPotion_Prop_AnimBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_ADBF5B5247A0D734AE3EC09836B87FFF; // 0x278(0x30)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_78F97BF7428BE467D018D1901FBFBB3A; // 0x2A8(0x48)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_DEA6199B4A26B8CAFD657EBD48FFDB7E; // 0x2F0(0x48)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MiniShieldPotion_Prop_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_MiniShieldPotion_Prop_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
