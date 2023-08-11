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
// AnimBlueprintGeneratedClass SK_MachineGun_Clip_Skeleton_AnimBlueprint.SK_MachineGun_Clip_Skeleton_AnimBlueprint_C
class USK_MachineGun_Clip_Skeleton_AnimBlueprint_C : public UAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_3869FE004A7A40326F179A99947D40FD; // 0x278(0x30)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_42C4DC6D490B221E6A9F9A92B3FEA82E; // 0x2A8(0x48)()
	struct FAnimNode_RefPose                     AnimGraphNode_LocalRefPose_844915D14C4D660AA45FB1B5C63743BF; // 0x2F0(0x18)()

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_MachineGun_Clip_Skeleton_AnimBlueprint_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_SK_MachineGun_Clip_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
