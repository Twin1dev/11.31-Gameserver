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

// 0x650 (0xA40 - 0x3F0)
// AnimBlueprintGeneratedClass Mint_Miner_Axe_Skeleton_AnimBlueprint.Mint_Miner_Axe_Skeleton_AnimBlueprint_C
class UMint_Miner_Axe_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_15AFDCFB4192349DA4E3CBAE65ECE7C2; // 0x3F8(0x30)()
	uint8                                        Pad_5A12[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_2DE4BFCF49A7866934AC8DA5EF00C277; // 0x430(0x560)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7AA84B674DF91FE6E5406CBDEA5D6380; // 0x990(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_E87AF81741257BC760FF2CA6DF06C37E; // 0x9B0(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_118DEAC44F6453AE5763B5B9F30BFA20; // 0x9D0(0x70)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Mint_Miner_Axe_Skeleton_AnimBlueprint_C");
		return Clss;
	}

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Mint_Miner_Axe_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
