#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1600 (0x19F0 - 0x3F0)
// AnimBlueprintGeneratedClass F_MED_Wolly_AnimBP.F_MED_Wolly_AnimBP_C
class UF_MED_Wolly_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_82D56E68445DC7963516258834370840; // 0x3F8(0x140)(ContainsInstancedReference)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_7A495B384D6E5771FD0635ACDE494321; // 0x538(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_284C766249A680AF2D9A7AB6D540649D; // 0x640(0x108)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_CDB21BBD44AAF40E142DEDAB9762C020; // 0x748(0x108)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6E9DB6F24144BB99F4DCBC8F6861B41C; // 0x850(0x20)(None)
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_AAB7F62743E1811319FEC993DD3B3CB3; // 0x870(0x108)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5FC03ACA46BB4437D23FA6BB537C01B2; // 0x978(0x30)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2708EF6743A98AD2390CB3871844F8B2; // 0x9A8(0x20)(None)
	uint8                                        Pad_6D73[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_19569B454BA9D5832C9ECBB9CCDE8E40; // 0x9D0(0x560)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_6BE23D964F98305585DA9B99C5BE32DC; // 0xF30(0x560)(None)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_6DD5373041D9FA7C8708D9B55B3A2784; // 0x1490(0x560)(None)

	static class UClass* StaticClass();
	static class UF_MED_Wolly_AnimBP_C* GetDefaultObj();

	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_F_MED_Wolly_AnimBP(int32 EntryPoint);
};

}


