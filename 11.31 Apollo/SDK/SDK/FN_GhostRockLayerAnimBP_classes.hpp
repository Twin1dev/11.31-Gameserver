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

// 0x31D4 (0x34E4 - 0x310)
// AnimBlueprintGeneratedClass GhostRockLayerAnimBP.GhostRockLayerAnimBP_C
class UGhostRockLayerAnimBP_C : public UFortItemLayerAnimInstance_FullLocomotion
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_567CFAC0429DD47745D5808A15476989; // 0x318(0x30)()
	float                                        Pitch;                                             // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Yaw;                                               // 0x34C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimOffsetAlpha;                                    // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5730[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7B67FAEA490CF9146DDB0FB47FCAB046; // 0x358(0x70)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_D6681F114DC41753D5C1EAB5C1E0AFB6; // 0x3C8(0x70)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2FE7BF98400B0262BCDFACA4304A4246; // 0x438(0x30)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7D3F204D4B20B7F13F8BD597578A0F75; // 0x468(0x70)()
	struct FAnimNode_Root                        AnimGraphNode_Root_346328CC4977D406142F268BD083D4D4; // 0x4D8(0x30)()
	struct FAnimNode_Root                        AnimGraphNode_Root_021DBE5649B4ADDD3807099E10088E09; // 0x508(0x30)()
	struct FAnimNode_Root                        AnimGraphNode_Root_E0765B4D4DDF330393A75997D95309F8; // 0x538(0x30)()
	struct FAnimNode_Root                        AnimGraphNode_Root_393809C74F0D3EA4724E1C9C12E246B5; // 0x568(0x30)()
	struct FAnimNode_Root                        AnimGraphNode_Root_136FC1714083D71E0E535899E7105D3F; // 0x598(0x30)()
	struct FAnimNode_Root                        AnimGraphNode_Root_A80CE893477C9DA41D6C0A857385B94A; // 0x5C8(0x30)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_EF774E68407E5771BE297B873F3DBDA8; // 0x5F8(0x70)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_B1E23D7F410B959B94ACCEB3D00934B4; // 0x668(0x18)()
	struct FAnimNode_Root                        AnimGraphNode_Root_58FC8BC0430AB3B279CA089995714BA9; // 0x680(0x30)()
	struct FFortAnimInput_AdjustedAim            InputParam;                                        // 0x6B0(0x240)(NoDestructor)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3895A01140EB0D67BE4D4F9E50FD80BE; // 0x8F0(0x70)()
	struct FAnimNode_Root                        AnimGraphNode_Root_706CADDB4F57CE4117E8B5A150FDF665; // 0x960(0x30)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_0902FF2A48CD458442C46B8348ACC401; // 0x990(0x70)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_AF6A5F264B633714634508B4816D39C1; // 0xA00(0xC8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_3F847D7B47FA7C415D5B689F76CC87DF; // 0xAC8(0xE0)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26989FD6429526C7E7A421B57521A606; // 0xBA8(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_926AA0494F3C234989FEA680D93D3975; // 0xBD0(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6C3FBE344D18E023F0488D829534387D; // 0xC48(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_E6626C0040586652C4B37380F7FD4266; // 0xC78(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_906A53E74D71C29727355ABEF5055763; // 0xCF0(0x30)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_CCE1429F4668E4CA6221A5A4B0ABDBC9; // 0xD20(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_2481C64143FC2F8172022388954CB779; // 0xDD0(0x30)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6BE4045E46C612393F73E7A353823C22; // 0xE00(0x70)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_973DF69643E0AD2AE6A14196DEE1D362; // 0xE70(0x78)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_D733366B4DDA3B3305CB459028265AF0; // 0xEE8(0xA0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_A17AB3B641B9DC86738ACAA510CECB88; // 0xF88(0x30)()
	struct FAnimNode_Root                        AnimGraphNode_Root_346557A44FE8F2C1B18194A8988B0093; // 0xFB8(0x30)()
	struct FAnimNode_Root                        AnimGraphNode_Root_1C7F30694BB27BC534D138A36B98E39C; // 0xFE8(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_FE57551345E42232FC7E208B54195AA2; // 0x1018(0x78)()
	struct FAnimNode_Root                        AnimGraphNode_Root_AC95FB2947EC850766BD57B60C83ED85; // 0x1090(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_064D3E2B4B1A8A8732A3AF860A4B6A6A; // 0x10C0(0x78)()
	struct FAnimNode_Root                        AnimGraphNode_Root_4E4B0F31442C293B23E9E38172CAD21C; // 0x1138(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_45E4136849D0D1DBAC17648C4F497340; // 0x1168(0x78)()
	struct FAnimNode_Root                        AnimGraphNode_Root_F6E4ED234F07ECC8DCF7189ECFBD0D94; // 0x11E0(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3B24A1134CCC14BA1B19B0AF18174365; // 0x1210(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_AC2A616342F9DB8BC43B3AB90012947A; // 0x1288(0x78)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6372A724454673DF1D8ADC9B98A9D1E3; // 0x1300(0xA0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_BD517F6644FEE0361BE029A763AF1442; // 0x13A0(0x30)()
	struct FAnimNode_Root                        AnimGraphNode_Root_B5B6FFF947122F2BA3414CBA5E539638; // 0x13D0(0x30)()
	struct FAnimNode_Root                        AnimGraphNode_Root_6CA502AC419863E0583C4A8A1B456C0E; // 0x1400(0x30)()
	struct FAnimNode_Root                        AnimGraphNode_Root_4B54FCBD45C8B5B225E01D8906C80ABB; // 0x1430(0x30)()
	struct FAnimNode_Root                        AnimGraphNode_Root_D2EB708D46D8716E7A3FD5885790E29F; // 0x1460(0x30)()
	struct FAnimNode_Root                        AnimGraphNode_Root_FBAF4A134E56D3B8CA92DEB7F7C1B3C7; // 0x1490(0x30)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9B2DE6CB438AEA1C735A7FAA10EE40C6; // 0x14C0(0x70)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_1A0BC4EF4B81925481C50FBF93B6244B; // 0x1530(0xB0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_84CEEA8D4382367864DD4FAB73F2D714; // 0x15E0(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_859B2A124A7E7D3950408FB486ED7480; // 0x1658(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_0C34FF60426256612E888DB27B3DDBCB; // 0x16D0(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_42872ED04DEAAD02A3758AAF44E883E7; // 0x1748(0x78)()
	struct FAnimNode_Root                        AnimGraphNode_Root_970A88D34C39796C522244B7E959B43F; // 0x17C0(0x30)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6F4F00944068A9A440155AA45716446F; // 0x17F0(0x70)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_0C0B07FA4D34BB8562FA4693096362A2; // 0x1860(0xB0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_39F6E2934EDF2FEC0936A093C224F13F; // 0x1910(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_338397524FF67ACE848437A77FCF970A; // 0x1988(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_C973963F4E6AEEEC184204A311EBBA65; // 0x1A00(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_E0B3E124499EA89EAB0D0BA564F4CBE1; // 0x1A78(0x78)()
	struct FAnimNode_Root                        AnimGraphNode_Root_1C9F2302471587635810A08C030E0B45; // 0x1AF0(0x30)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3B575CB54C14B6F5FA67F99DFAECDBC5; // 0x1B20(0x70)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_3A55108940F46FCA353ABCB9BED8D2EC; // 0x1B90(0xB0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_CDCABC6C4501CE8C3F7BFBB65DCBA3B7; // 0x1C40(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9D2C8579439D66210710989931A7EB2A; // 0x1CB8(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_1B1A97E34C54B32DE005ABBF191E9D09; // 0x1D30(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6091F2124E4899A6F4A37BAF566C7952; // 0x1DA8(0x78)()
	struct FAnimNode_Root                        AnimGraphNode_Root_1FD3B077442999A35F9C45BC711D3044; // 0x1E20(0x30)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_FBA2404E4E3F036643F345A799E52412; // 0x1E50(0x70)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_744F3FF64A7F1A671A6EEE83719EC2BE; // 0x1EC0(0xB0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_BA8746B7484860F3A28C31BAEE40DDE7; // 0x1F70(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_116D102D4676E8C31FB2B28DE85EBEC0; // 0x1FE8(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_5CCA2AC041E1BBC4515D58AE012EDAD6; // 0x2060(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_B08824F74B03C49A687669A62153DA2A; // 0x20D8(0x78)()
	struct FAnimNode_Root                        AnimGraphNode_Root_92CF7BE144123F5A866FBD95E225F270; // 0x2150(0x30)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_FDB35BDF48CF4C4B77CFFD88DADABD07; // 0x2180(0x70)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_FA80E3BD412D7B79C39E10A40F3B3C93; // 0x21F0(0xE0)()
	struct FFortAnimNode_SpeedWarping            FortAnimGraphNode_SpeedWarping_F3FA589847D55B75524D87AD713908F6; // 0x22D0(0x1B8)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_1634B39B4C545E09F86918B5257AE50F; // 0x2488(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_B2BB87EA4045A00305131E849E152255; // 0x24A8(0x20)()
	struct FAnimNode_Root                        AnimGraphNode_Root_744BB2174505C47AA486EEABC95BA655; // 0x24C8(0x30)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_9D5999844018EDB7FCC65F8751CF63AD; // 0x24F8(0x70)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_AD923D2B4D825A9C0EA3B9ACFE1453AB; // 0x2568(0xA0)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_B9D448C9405A2A52266DDD98A5C82D67; // 0x2608(0xA0)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_704155FC4230728DFF6317AAE7785EDF; // 0x26A8(0xA0)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_0BCD6CF449EDA79C91B382A2E056B854; // 0x2748(0xA0)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_B95919B9470FCDD407A01EB9D3952FB3; // 0x27E8(0xB0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_A105EEBF4B74EC3154FEE3A1564E2C60; // 0x2898(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_0C25BB3845D53814DA41D5AD35AA95D4; // 0x2910(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_E7EA18884DC12DAFCBF145AEE19AC8CF; // 0x2988(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_87F38FD44A01519CD615C18A4F64536F; // 0x2A00(0x78)()
	struct FAnimNode_Root                        AnimGraphNode_Root_C2CC4D4840A96931F27DEDB83B622B05; // 0x2A78(0x30)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_BF6C1C094FE293E127657B882B8630F1; // 0x2AA8(0x70)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_2C0466AB47DB480D67E0AA838601E8E0; // 0x2B18(0xB0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_98D2C23C439C9CEE0EBD63B836CF82B4; // 0x2BC8(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_93D4CD024FE00595FB2FD48C597F5C65; // 0x2C40(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_2BF844C34E1D695A25619090660BBEF1; // 0x2CB8(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_AEA88AB64033909860AA948E405E3510; // 0x2D30(0x78)()
	struct FAnimNode_Root                        AnimGraphNode_Root_B6CF2B344AE63AF53BC6678C670DC02B; // 0x2DA8(0x30)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_D6C9C50E415C805C3558D2B0682647CA; // 0x2DD8(0x70)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_81CA0F4042E1E5191B4585B4222CFF54; // 0x2E48(0xB0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_A472F3DC4870D5B37432BAA0E7360360; // 0x2EF8(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_D23015834CAF07B67E9DCBB571E1B01A; // 0x2F70(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_67AC93774BDE5B8FFE547094FA1C5B99; // 0x2FE8(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_7BF0C0924D5CE51C5BA24FA6E9CDA9F3; // 0x3060(0x78)()
	struct FAnimNode_Root                        AnimGraphNode_Root_1FFBE19547BA3FAD35058486EB70FE76; // 0x30D8(0x30)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_F961C9B0468BE019C7A40994165E3BD1; // 0x3108(0x70)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_866243CD49EEFB53E65DE7888B571DB1; // 0x3178(0xB0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_21E604784636740FC18187A23873CAE5; // 0x3228(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_E55B9CEE47B49B656C2443B6C8E780EF; // 0x32A0(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3364235141D3BE7B60029288232F60D2; // 0x3318(0x78)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_02C0B373499D962AE539EBACC0A7ADE0; // 0x3390(0x78)()
	struct FAnimNode_Root                        AnimGraphNode_Root_3EDE947147A2936A35C01D95BAECF338; // 0x3408(0x30)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_SubInput_2B56CE984A65A800DB1B2A84A1491BE8; // 0x3438(0x70)()
	struct FAnimNode_Root                        AnimGraphNode_Root_968407F442A5578A2966EC9A39E6D5FD; // 0x34A8(0x30)()
	float                                        JogStartPosition;                                  // 0x34D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartBlendTime;                                    // 0x34DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PivotAnimBlendTime;                                // 0x34E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GhostRockLayerAnimBP_C");
		return Clss;
	}

	void ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* ItemLowerBodyLeanAdditive);
	void ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody);
	void ItemFullBodySprint(const struct FPoseLink& InPoseSprint, struct FPoseLink* ItemFullBodySprint);
	void ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive);
	void ItemCrouchTurningAdditive(struct FPoseLink* ItemCrouchTurningAdditive);
	void ItemSlopeSliding(struct FPoseLink* ItemSlopeSliding);
	void ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive);
	void ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive);
	void ItemFallAdditive(struct FPoseLink* ItemFallAdditive);
	void ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive);
	void ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive);
	void ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive);
	void ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive);
	void ItemFlyModeStartAdditive(struct FPoseLink* ItemFlyModeStartAdditive);
	void ItemFlyModeLoopAdditive(struct FPoseLink* ItemFlyModeLoopAdditive);
	void ItemJogStartAdditive(const struct FPoseLink& InPoseJogStartAdditive, struct FPoseLink* ItemJogStartAdditive);
	void ItemJogStopAdditive(const struct FPoseLink& InPoseJogStopAdditive, struct FPoseLink* ItemJogStopAdditive);
	void ItemJogPrePivotAdditive(const struct FPoseLink& InPosePrePivotAdditive, struct FPoseLink* ItemJogPrePivotAdditive);
	void ItemJogPostPivotAdditive(const struct FPoseLink& InPosePostPivotAdditive, struct FPoseLink* ItemJogPostPivotAdditive);
	void ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement);
	void ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* ItemLowerBodyJogStart);
	void ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* ItemLowerBodyJogStop);
	void ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* ItemLowerBodyJogPrePivot);
	void ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* ItemLowerBodyJogPostPivot);
	void ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_GhostRockLayerAnimBP(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
