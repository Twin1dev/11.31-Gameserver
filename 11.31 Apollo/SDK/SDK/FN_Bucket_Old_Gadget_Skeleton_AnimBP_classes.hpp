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

// 0x758 (0xB48 - 0x3F0)
// AnimBlueprintGeneratedClass Bucket_Old_Gadget_Skeleton_AnimBP.Bucket_Old_Gadget_Skeleton_AnimBP_C
class UBucket_Old_Gadget_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	uint8                                        Pad_53FA[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_100A68464EFD27B24AC5D39A7070E7BB; // 0x400(0x560)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_D9CDABBC42AEDAD1965D0BBA81A7D90E; // 0x960(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7B76CF1B466C82BF33D73CA3A143B952; // 0x980(0x20)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput_5665FF0E4A879C97D18D2881B5897A6D; // 0x9A0(0x70)()
	struct FAnimNode_Root                        AnimGraphNode_Root_3EE1C4B34CE43804012628A05F924445; // 0xA10(0x30)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_DEC1B9EF40E29A24759C37BAFB571A61; // 0xA40(0x108)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Bucket_Old_Gadget_Skeleton_AnimBP_C");
		return Clss;
	}

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Bucket_Old_Gadget_Skeleton_AnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
