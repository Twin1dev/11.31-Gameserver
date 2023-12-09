#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17C9 (0x1AD9 - 0x310)
// AnimBlueprintGeneratedClass FloppingRabbitLayerAnimBP.FloppingRabbitLayerAnimBP_C
class UFloppingRabbitLayerAnimBP_C : public UFortItemLayerAnimInstance_FullLocomotion
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_9D54C1FE4C8BA604F2DBAF99DADC4A46; // 0x318(0x30)(None)
	float                                        Pitch;                                             // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Yaw;                                               // 0x34C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimOffsetAlpha;                                    // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_58CD[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_BF8C7DCF4D4B51329346D687D9F8920F; // 0x358(0x70)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_231FC2D24ABD39DB9AE21F9357AF24D0; // 0x3C8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_B0F85DC9427CC6103F03AFA899B28A0E; // 0x438(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_C20A030E43177AD7428667A6C8D5DF7A; // 0x468(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6CABC06C408D6AD3C1B428AB59015E6B; // 0x4D8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_BD46CEAC4922652C296EC495047C0D85; // 0x508(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_C72C9359411630B8A64A0BB7499ADCA7; // 0x580(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_0FDF39C64D19C9FA3A779A8565B79015; // 0x620(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5EFB4E7B440AD7B8CD601DBC0652E10C; // 0x698(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_C1DE94DD4364E591C099BAA2A58196AA; // 0x6C8(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3B6913F04E4665B15DADF4930526498F; // 0x740(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_CA2C18444BB2EB84444A47933FFF0CE5; // 0x7E0(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_82633773478F0B8DBF440F88E17647D2; // 0x858(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_44505C4D4F0EAA7BF88E60A8F623E7E6; // 0x888(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_D89BF890438520456A3E1C87B6A451E2; // 0x900(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_B9D25CA34FEDF27C4D8C94915E373774; // 0x9A0(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_0E69E4BA4D5087F58C8C459DBB8DFD14; // 0xA18(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6E1E336C4F451EA72015A19191E67339; // 0xA48(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_2E38C7E0442505D7B5E26AB33E738132; // 0xAC0(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_87F0D1684CACCA042AD948B4A3193BB6; // 0xB60(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_E42FE0E248DC071CA7862EB1B8D71D08; // 0xBD8(0x30)(None)
	struct FFortAnimInput_AdjustedAim            InputParam;                                        // 0xC08(0x240)(NoDestructor)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_647A44D64CE9B31AEF051A97A8CC03E5; // 0xE48(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_33AC0DC74BAB52D25D161392150FA9CE; // 0xEB8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_B01543B840D2CF0D32E71DB0203F15C5; // 0xEE8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_8C1F75E549CB40EA43D5F995CF2C4249; // 0xF58(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_94C35A5E4404A09E9BCE4984B210798E; // 0xF88(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_D958B1614E40DEA03C73ABB4D7C7BCF2; // 0xFF8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_A65C4D9547432885D0F3CCA49D581CFE; // 0x1028(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_300D69CB4278CA1E4346E38654E2490C; // 0x1058(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_AF8713684618DD506ACE0D9DDEE06853; // 0x1088(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_384F15CE44554CA7D3DC38B91D99C78C; // 0x10B8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_600B7B114655869DBE27709A91B2484F; // 0x10E8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_00D29E1E46711AAD4029C49A49E27C83; // 0x1118(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_D1CEC1D74888A9AA89811A9C318E09D5; // 0x1148(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_79FF03BE455DE5CAD5D02E8C0255F121; // 0x1178(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7BB190E84D649CF6D05F60B318C9CA3A; // 0x11A8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_084A55384FEE80240083C59591281E1D; // 0x11D8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_85816209487D8057EA546C8EC9EE3115; // 0x1208(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_E4B22F5D410F7BF05814F49D644242AE; // 0x1238(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_24727BD04606BFB45D18D89D8933B1BC; // 0x12A8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_FE5BB4B0460C1B9C0FA0DCAD99086BFD; // 0x12D8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3B3768704656047D4E26E2A29ED15FC2; // 0x1348(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_A7BF2B7D48F1F69BFA5762A3F9DED043; // 0x1378(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7F6517DB4640FDCEECF15CBA7ABC9421; // 0x13E8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_CD96D23E4AE62AB9CFD95EA6A33B75DA; // 0x1418(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_A3727C9D43BE275B546B068F4DA90F70; // 0x1488(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4DABA8A842E5C6C071384587F94A7F35; // 0x14B8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_DE2FE5164B94643AB9D4379CE21EBF69; // 0x1528(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6FC45C19492CEFBB62A2259785901C36; // 0x1558(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_02B8E8E9414549886AF52189AEADF8C2; // 0x15C8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_DDBC5FAD423C95740EC0E8960DB2AA3E; // 0x15F8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_E4081392450971A5C87604A97FE58BC4; // 0x1668(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7D86E8DD4490C9A1C575D7B41547B9A0; // 0x1698(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_ADA701154664D72028134FB148DB399A; // 0x1708(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_F43B30DF4CEB532CA0607FA029B89B0B; // 0x1738(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4662FAAB41A288ED9F18768A634E79D7; // 0x17A8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_6CBD766747A2AB6837606188DDF25A63; // 0x17D8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_532BD426463A5309F07835B18990606E; // 0x1848(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_E04FE24B4746983927D37D8D024012ED; // 0x1878(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_DFF0A97E4BD59DB1A4C069A59E2A3556; // 0x18E8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_DC0713B549A3D64DA47E5F97098D4CBC; // 0x1918(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_10E293954C4964E6641AF4936CA1F2E4; // 0x1990(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_0A3CE5794281BCB3C79028ACF23AD7EC; // 0x1A30(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_9FFFAD1544C2BE6FD27026802785567A; // 0x1AA8(0x30)(None)
	bool                                         OneHandGrip;                                       // 0x1AD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UFloppingRabbitLayerAnimBP_C* GetDefaultObj();

	void ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd);
	void ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop);
	void ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop);
	void ItemSwimJumpStartLoop(struct FPoseLink* ItemSwimJumpStartLoop);
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
	void ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* ItemLowerBodyLeanAdditive);
	void ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* ItemLowerBodyJogStart);
	void ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* ItemLowerBodyJogStop);
	void ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* ItemLowerBodyJogPrePivot);
	void ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* ItemLowerBodyJogPostPivot);
	void ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry);
	void ItemSwimJumpStart(struct FPoseLink* ItemSwimJumpStart);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void BlueprintUpdateAnimation(float DeltaTimeX);
	void ExecuteUbergraph_FloppingRabbitLayerAnimBP(int32 EntryPoint, class APawn* CallFunc_TryGetPawnOwner_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, float K2Node_Event_DeltaTimeX, class AB_FloppingRabbit_Weap_Athena_C* K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena, bool K2Node_DynamicCast_bSuccess_1);
};

}


