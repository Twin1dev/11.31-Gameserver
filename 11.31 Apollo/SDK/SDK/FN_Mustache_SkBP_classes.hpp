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
// AnimBlueprintGeneratedClass Mustache_SkBP.Mustache_SkBP_C
class UMustache_SkBP_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Slot                        AnimGraphNode_Slot_943F7C4A41EBACC639D9488D87C53458; // 0x278(0x48)()
	struct FAnimNode_Root                        AnimGraphNode_Root_7E3FA46448BAA601A9D6509EF1D3E4D7; // 0x2C0(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8DE767264798029C9A03DDBCA1A479BB; // 0x2F0(0x78)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Mustache_SkBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Mustache_SkBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
