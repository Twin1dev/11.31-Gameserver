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

// 0x1E78 (0x2278 - 0x400)
// AnimBlueprintGeneratedClass SK_M_Med_Soldier_04_Skeleton_AnimBP.SK_M_Med_Soldier_04_Skeleton_AnimBP_C
class USK_M_Med_Soldier_04_Skeleton_AnimBP_C : public UCustomCharacterPartAnimInstance_Soldier
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_78EB935A430054ADF5E2E89005D9D000; // 0x408(0x30)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_D3F10A774DCEBBC7CF6FACA843FAA56D; // 0x438(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_F50D097B4AF8FD409EBDB7A56995EB71; // 0x458(0x20)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_5984D2B3487D5E3495C1419E61FA91AE; // 0x478(0x140)(ContainsInstancedReference)
	uint8                                        Pad_66E5[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_49D024DD4CCCDA28D4E6A4B218DA8C95; // 0x5C0(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_1252AA6E4C48E209E99F5A858FD09EF0; // 0xA00(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_5645113E4C1291E8D49232A713F4ACB6; // 0xE40(0x440)()
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_7025D9B24B8BA7A8E064D7B07EC6034E; // 0x1280(0x560)()
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_AACA95D84AFEC4086FC1A294A265E59E; // 0x17E0(0x108)()
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_3B7EFFCF4949BFB2B690A2B232DA2BD0; // 0x18E8(0x108)()
	struct FAnimNode_Constraint                  AnimGraphNode_Constraint_DE441F9C4EAE45FE6F0458939F735DCA; // 0x19F0(0x108)()
	uint8                                        Pad_66E6[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody_60A9D728443B8E8A1C2F5384040F6558; // 0x1B00(0x560)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_48ED4F1E49CCF0DEC16791B6E89B3DD1; // 0x2060(0x108)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_E37B2EA54DA6F595A76726885D479DC1; // 0x2168(0x108)()
	float                                        Crouching_alpha;                                   // 0x2270(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Jump_alpha;                                        // 0x2274(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SK_M_Med_Soldier_04_Skeleton_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void OnBeginCrouching();
	void OnEndCrouching();
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_SK_M_Med_Soldier_04_Skeleton_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
