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

// 0x1691 (0x1A81 - 0x3F0)
// AnimBlueprintGeneratedClass F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP.F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C
class UF_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C : public UCustomCharacterPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_966722F040605A529996238D427F43D4; // 0x3F8(0x30)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput_706F137147C60FF00343D1942C15960B; // 0x428(0x70)()
	uint8                                        Pad_5A90[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_18FA112E46ABA0D05274AA95C741D095; // 0x4A0(0x440)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6B89CDA04ED040E5B4E7049182772646; // 0x8E0(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2F8266E641D30F638E18F9AD63452CB2; // 0x900(0x20)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_20B56F374DE380A7E12409AE93F8D7F9; // 0x920(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_8B2A53064649ECCBE2C488A1BFAA1ABC; // 0xD60(0x440)()
	struct FAnimNode_AnimDynamics                AnimGraphNode_AnimDynamics_912B846445FBAD349FA22EBCF5DB5505; // 0x11A0(0x440)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_A51E3A934B8D907BC2DA37A7CE8355D3; // 0x15E0(0xB8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_E6FD1209434285325183BFB8C8B047D7; // 0x1698(0x28)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_90E87AEB4216ABCCD1A7C288696B4405; // 0x16C0(0xA0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_890553D14E92A2709A57D6913EA2991E; // 0x1760(0x28)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_67B8CD8B4C9B959DED2F5E89ACE6FB1C; // 0x1788(0x108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4881F0674D460CEDDEC22E99FDCBD724; // 0x1890(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_1A528F7A47B3D4714707ED96B298D1D0; // 0x18B0(0x20)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3077CAF64E1F65744AFBB18F63376A75; // 0x18D0(0xA0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4DCAC5274BDE487C996AF2AFD9A6ABD9; // 0x1970(0x28)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_90029CC74EF407C0DD580FA80F444EA3; // 0x1998(0xB8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_8B1399FF43838183D1B4EAA73C086674; // 0x1A50(0x28)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x1A78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GetPlayerListUsesCustomCharacterParts;             // 0x1A80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP_C");
		return Clss;
	}

	void AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_F_MED_HIS_Ramirez_Head_01_Dyn_AnimBP(int32 EntryPoint, bool CallFunc_GetPlaylistUsesCustomCharacterParts_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
