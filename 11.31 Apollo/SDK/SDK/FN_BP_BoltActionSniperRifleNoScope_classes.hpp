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
// AnimBlueprintGeneratedClass BP_BoltActionSniperRifleNoScope.BP_BoltActionSniperRifleNoScope_C
class UBP_BoltActionSniperRifleNoScope_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_80F88762449D5790C18126A73190A30A; // 0x278(0x30)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_3F9AE2D64A1081980E00CE94E79DD708; // 0x2A8(0x48)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_F813E2B842B7262277782F9EC5A3917A; // 0x2F0(0x78)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_BoltActionSniperRifleNoScope_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_BP_BoltActionSniperRifleNoScope(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
