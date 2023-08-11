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

// 0x1021 (0x1421 - 0x400)
// AnimBlueprintGeneratedClass Fortnite_Base_Head_Export_Skeleton_AnimBP.Fortnite_Base_Head_Export_Skeleton_AnimBP_C
class UFortnite_Base_Head_Export_Skeleton_AnimBP_C : public UHeadPartAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x400(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_PoseBlendNode               AnimGraphNode_PoseBlendNode_0E491F3A4C933A03AAE42DA602295362; // 0x408(0x98)()
	struct FAnimNode_Root                        AnimGraphNode_Root_C9D648834AA29F5B677902BB5A9DC15C; // 0x4A0(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_94E41D364E86D3FFC2D042845913D0EE; // 0x4D0(0x78)()
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh_9AC0772D481A4B85CE045AA17CE0F79E; // 0x548(0x140)(ContainsInstancedReference)
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_B0BAEC37412A3BDE897683AA32FAE4E1; // 0x688(0xC0)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_3971854A46E6B529767EA2AB708A8D46; // 0x748(0xC8)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_D687C7FB4A07645ECE24DBB182B71823; // 0x810(0xB8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_19E6568A48732F90AD2036B56ECA0D46; // 0x8C8(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_C898D19D46B0E9723DD75AA4710C2707; // 0x8F0(0x28)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_91F05C994C7B4758BA35D2B1F94A7663; // 0x918(0xB8)()
	struct FAnimNode_Slot                        AnimGraphNode_Slot_59950130431F160E70FA618201DA0ED0; // 0x9D0(0x48)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_4B2D173F4261FBC709962B837E22DAA7; // 0xA18(0xC0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_C50053764A5016625E742C8401AAD202; // 0xAD8(0xB8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_540FAC8A423311B343A66CBDD1A68E4E; // 0xB90(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5C0CA1E44DCE78D6CEF568B89CA4B27B; // 0xBB8(0x28)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_C5BEAB564689BE7F396B479553755894; // 0xBE0(0x108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_F7D256644C446D0E0E7A1FAE450C7158; // 0xCE8(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_E876E3114CDEF692F73DBF884F9BD650; // 0xD08(0x20)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_17658B34440A047EB64B94A7175013F1; // 0xD28(0xB8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_04405D3D4F8BCFD02C681D8D229C0D2E; // 0xDE0(0x28)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_C68E6B0E407D0454643482B1A7183F5B; // 0xE08(0xA0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_EDDAFEAC483866651C7E3FAC553065FD; // 0xEA8(0x28)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_08630207438BC89444088F8788608168; // 0xED0(0xB0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_0E3FE42145D747BC790D9C8B3B86A438; // 0xF80(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_534B120E48854DC8D7F075B794D33C5F; // 0xFA8(0x28)()
	struct FAnimNode_LiveLinkPose                AnimGraphNode_LiveLinkPose_99C9F7884620B6D189A49A8BB1023059; // 0xFD0(0x48)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_95CF347C4ADB97B5CCC02EBC7624BA74; // 0x1018(0xB8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4EA8B8124F7D1D8C1DB0F581D7A7DEAB; // 0x10D0(0x28)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_8656510445C1B892A18C50849268D7FC; // 0x10F8(0xC0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_0A088E06478405BA86E5B59F67858650; // 0x11B8(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_AC414E8346F5ACCBDAAB4C993054E283; // 0x11E0(0x28)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_B27B89584F01DE7E8E248E8B4633A8E1; // 0x1208(0x28)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_E0BA6A824EF4AFB0B795A18E57D78FC8; // 0x1230(0xB0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_5E4CAC884A24C38D708668807843035A; // 0x12E0(0x28)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_4E2BB3B84A3B285A2432FB82A2227BFC; // 0x1308(0xA0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6BCB673643B87A34A63E07B953BF9385; // 0x13A8(0x28)()
	struct FAnimNode_LiveLinkPose                AnimGraphNode_LiveLinkPose_94F2DE3840B96E042BF24BB617D34170; // 0x13D0(0x48)()
	class USkeletalMeshComponent*                MeshToCopy;                                        // 0x1418(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GetPlayerListUsesCustomCharacterParts;             // 0x1420(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Fortnite_Base_Head_Export_Skeleton_AnimBP_C");
		return Clss;
	}

	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintInitializeAnimation();
	void ExecuteUbergraph_Fortnite_Base_Head_Export_Skeleton_AnimBP(int32 EntryPoint, bool CallFunc_GetPlaylistUsesCustomCharacterParts_ReturnValue, class USkeletalMeshComponent* CallFunc_GetOwnerSkeletalMeshComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
