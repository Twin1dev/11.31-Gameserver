#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x12C8 (0x16C8 - 0x400)
// AnimBlueprintGeneratedClass M_MED_Banana_Skeleton_AnimBlueprint.M_MED_Banana_Skeleton_AnimBlueprint_C
class UM_MED_Banana_Skeleton_AnimBlueprint_C : public UCustomCharacterPartAnimInstance_BananaBody
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_B751D6D441F175A228BEA7BA8188EFC9; // 0x408(0x30)(None)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_1F68181A4B370DA880C6EB99815B7BB9; // 0x438(0x140)(ContainsInstancedReference)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_33A94661489C5680D1EA86ABC2814B6B; // 0x578(0xB8)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_AA5485C643E27A8422C219A71F46A71C; // 0x630(0x28)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_D3E44A2044ED5AD7408D2DB8422A185F; // 0x658(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_0AF52C7648B24737F6F7B8878E327B3D; // 0x760(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_868F0F9E424D6464EFC43ABEFB550143; // 0x868(0x20)(None)
	uint8                                        Pad_57FD[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_78F284234C03BA2DA342EBB25E32E3D8; // 0x890(0x560)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_48B59A834DFE3AF243082783FF0B562D; // 0xDF0(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_103A969B42490F1266B3258CF1558AA1; // 0xE10(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_7EED124C4A7CF6CFBC301183412CBD8D; // 0xF18(0x20)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_D7D13BB9409A9ECFB164258B509172B9; // 0xF38(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_9BB764F74016D5B5E6B08B94178C243F; // 0xF58(0x108)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_A8E58535443324F42680619507ED92D8; // 0x1060(0x560)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_AFE3E20544AF3DE80797EAA1CCF4B5C2; // 0x15C0(0x108)(None)

	static class UClass* StaticClass();
	static class UM_MED_Banana_Skeleton_AnimBlueprint_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_M_MED_Banana_Skeleton_AnimBlueprint(int32 EntryPoint);
};

}


