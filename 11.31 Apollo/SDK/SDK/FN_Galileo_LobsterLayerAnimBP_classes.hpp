#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2548 (0x2858 - 0x310)
// AnimBlueprintGeneratedClass Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C
class UGalileo_LobsterLayerAnimBP_C : public UFortItemLayerAnimInstance_Lobster
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_4976712443B1DBA15B4C9FBB8390D26F; // 0x318(0x30)(None)
	float                                        Pitch;                                             // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Yaw;                                               // 0x34C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AimOffsetAlpha;                                    // 0x350(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_32CB[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_D8E898CA4A4DF97CB711CC910EC682B3; // 0x358(0x70)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_502AF18049272601FC33E69B457B1A0A; // 0x3C8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_A5FF1D694196ABB46687129C0DF36DB5; // 0x438(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_B645C8184EB5B0BF3857F3AB946AA9FA; // 0x468(0x70)(None)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_C2E79FF34167CA7D726A038A556BC6DB; // 0x4D8(0x20)(None)
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_8FFF530D4BB174A30949C5A85DBA5B4E; // 0x4F8(0x108)(None)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_DA9D7D21417186159DCD07B10C9A8043; // 0x600(0x20)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7F1F50EC47B660D12A37BFA1F0D43482; // 0x620(0x30)(None)
	struct FFortAnimInput_AdjustedAim            InputParam;                                        // 0x650(0x240)(NoDestructor)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_34477DF243AE16B9906090B13D52EB9C; // 0x890(0x70)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1245557742F6E48AF0E0A1BAF4CCBEA9; // 0x900(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2591083948BC656401506991D1C85121; // 0x928(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_E4A42AF743BAADD63B73D6B6C36CAF13; // 0x950(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_F04988474FC30652963961AF27CC5136; // 0x978(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1858D2E748EC56C55458039997F52347; // 0x9A0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_25B6D33941B870CC3DE4AAA52346E17F; // 0x9C8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_4416215E4C7D12DBCEA4FEB441027B1F; // 0x9F0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_049339594E14BB2A7CBD75951580FDB7; // 0xA18(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_C649DF534C49896B5A9861A6009E940A; // 0xA40(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_2F8EE2D94F46CC351AE13A8976528928; // 0xA68(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_FB698D2B4479A9995A4AB4B593B31820; // 0xA90(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_9C95C96C4DB30781AFE310B24274CF39; // 0xAB8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_B30D6E7149EBB54BEA2C4395408BE059; // 0xAE0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1D391B4E4EB9CD98CA7B78875D4D881F; // 0xB08(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_44482EB84EE168712BF3C7884E897414; // 0xB30(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_616E5F3949A03CA4B0FDFDB40D7286DC; // 0xB58(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_CA89BEB145073E58043713A3CFA689A7; // 0xB80(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_52436802421E62610986CAA23CBB2BB9; // 0xBA8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_26F9BF1F4AE919B723443B825E2BDEBD; // 0xBD0(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_573A71DE462EF0682E42048429128661; // 0xBF8(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_45436AD7417B435027DD03AD1EAAFD7E; // 0xC20(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_72D0336F48DEEA5375AFF2830E118B19; // 0xC48(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_BA4FEDC64DC5C18DBE5BECACB0DE7E6D; // 0xC70(0x28)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_014AFF204658922AE2BA0D89C6F33B74; // 0xC98(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_BC3619E143A7DDFE584465A25EC496D7; // 0xCC0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_955C1B6D45820236D307E8A2C6126E04; // 0xD38(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_739168E14E63EAC2B4139D8E4E2CF270; // 0xD68(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_66D6BB9A4052F6D6F6EB489E4BA82592; // 0xDE0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_49A45B6F44FF0F381474A190B273BE72; // 0xE10(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_D86256BE49D0417EB6865E89EBBD225D; // 0xE88(0x30)(None)
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_0390FCD94C0739B94BB582BB659263DF; // 0xEB8(0x28)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_D8DA55B44AD2CA3C3DCB6F89662179F6; // 0xEE0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_B90AAF5344B8F694F6597583B508AAF3; // 0xF58(0x30)(None)
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_BC3FADA6440F0C09D2B8E3816F0C0F8F; // 0xF88(0x28)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_802856374C7B4ACDA7D0B4921D4C1CB7; // 0xFB0(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_BC5574A145F285DF052071971A36B9DC; // 0xFE0(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_2A49B953440E123C91F9AB87D7C2EC07; // 0x1058(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15B2DD834797286C14660DA454B717FE; // 0x1088(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8146829A4052BFE3C5399BBCE003F97F; // 0x1100(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_81A11BD14EA3C72BFCB386BC4EEF9AE0; // 0x1130(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3C7D83A040C6E7D45301DFB3276E2EF0; // 0x11A8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_780279CE4640B9B7DB4739B3BF6B0122; // 0x11D8(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_70E953DA4AE54237F37717AC36F94998; // 0x1250(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_EBE4735949DCBAD0641A7591C8956C5E; // 0x1280(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7F249F214CAE55350430EA8C3A73F008; // 0x12F8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_15089345431BF55D8173E9B0C56A964E; // 0x1328(0x78)(None)
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_6295C80340CE2AA639A3E2A5304FDFAC; // 0x13A0(0x30)(None)
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_143CDB004F1C1A28F635D5BD298E178F; // 0x13D0(0xB0)(None)
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_90B63CD7414EF6B2741BB4BB78F5A740; // 0x1480(0xB8)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_4F91CE6843D5E6709C0AF983AB16BA5A; // 0x1538(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8F50D43A4BE3E686F8FB38BEB6003063; // 0x1568(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2509DC204C42A9B124960F9095D2CB7E; // 0x15D8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5122DE2C426E5E41606F0C96F177F92D; // 0x1608(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_CFF8CB2F47A9B5563A79EAA714F08E34; // 0x1678(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_7A4470AC43EC8E3E9E96D3A1FF9648E3; // 0x16A8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_BD92D0804665546F7CA274BB5A32B72A; // 0x16D8(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3A2968094A84FEE4EBD300AAB33EA4B9; // 0x1708(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_7C6FAB9D4F02ACAD2281DFA7A257102D; // 0x1780(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_716A56194CF50AD5CE7DC8A45236D687; // 0x1820(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_B1186C584C37F498B2485ABD93156028; // 0x1898(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_135F4FD741A165C87CC712A7D7DC69C0; // 0x18C8(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_6E16116347B27B766A8A4587B46E62F8; // 0x1940(0xA0)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_8AAD41D14DBEE815FBB488AD7FF7B9FE; // 0x19E0(0x78)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_28D346A24F52A50BE7EAD18206F405B9; // 0x1A58(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6583C8474188EC64B473A89E2E918E22; // 0x1A88(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_85274445439A7159BB89A08B11DE1162; // 0x1B00(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_BAEC8073453466B9509C2BA603C9F74D; // 0x1B78(0xA0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_44BCBA5C4C2BC07554EC089F69D35C70; // 0x1C18(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_795FCE044FDA48EE8AFC3AAB793ECEF2; // 0x1C48(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_F6D7E67B408AA7F0A35A19AD817FA88F; // 0x1C78(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_42F12EA84C00B8C89730B89B57E67E77; // 0x1CA8(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_A12326214EDEE637555BA687D1A07C49; // 0x1D20(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_49A8BC2B437F4B85A71C06A4BD9A9409; // 0x1D98(0xA0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_9FAE25C94CEF041374AC8183510E9CAA; // 0x1E38(0x30)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9C01348843426A101CFACEB3F014B7AB; // 0x1E68(0x78)(None)
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_4CC2495F4FA13995A75271B6F2855551; // 0x1EE0(0x78)(None)
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_195438B4495CC370CEE3DBADFDA446D5; // 0x1F58(0xA0)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_2031F9D8468DBCD5F337B1A7AEA1BC21; // 0x1FF8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6DE6334F449AD49CBCC9919EAEE9F906; // 0x2028(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5C9D46FE4452544C59DB0CA57A9549CD; // 0x2058(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_468BB6BD44EEFBD9A426B9BC4DE898F2; // 0x2088(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_08D1C4D743874B89D2981B84D6C82C7C; // 0x20F8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_D4E0501D4A8336799F50629170363682; // 0x2128(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3D6D6BE04830D189362605B794DDC34C; // 0x2198(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_AEEBE8324F3525189D972A8A56531B54; // 0x21C8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_37405DC3451A8F0819A62FA3D889E41A; // 0x2238(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_B5EDC9F54DF662813DCC1B9E3BDFDF54; // 0x2268(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6100337F4BBEEA4D9636B99E3FE33789; // 0x22D8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_BC0BAF784DE4067CF0C56EAC0D946BD5; // 0x2308(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_D4E2FA4845D3D536B87F8E8B9AD1FB63; // 0x2378(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_AAA4AD974A7B24CA87BC05AE550AF771; // 0x23A8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_844BBEF94408F66E689E589E5BAB9F88; // 0x2418(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_C690E313431077624F0914855CD6C564; // 0x2448(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_33FE50EC48F66360693A56AE34FAC627; // 0x24B8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7284FC304687F394915171A9C07AF3B3; // 0x24E8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_5A191AB94B65500980B2F79897D78B37; // 0x2558(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7D98DB9C4C42A5CB49D5819BB003B488; // 0x2588(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_3572620947A9902C49187382B5735390; // 0x25F8(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_95D0D85B4B5250EA2A88C3AD3C123A0F; // 0x2628(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_F3FC39C54360E23698BEFB9B139AE340; // 0x2698(0x30)(None)
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_F50C9401420796DFD1BFB2BB2B31A628; // 0x26C8(0x70)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_927ABA75449EC3A33B62969853281D29; // 0x2738(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_6A2FAE2C4380F63249EAFBA33FBC034D; // 0x2768(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_B613264B448D54CB186C039BC1321739; // 0x2798(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_B8821BF548E8D720FAF137B83537D6D5; // 0x27C8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_A13B58E34B37647DF05FAF8B4B05472D; // 0x27F8(0x30)(None)
	struct FAnimNode_Root                        AnimGraphNode_Root_FB5286BA46229126F09B50A1A197A45A; // 0x2828(0x30)(None)

	static class UClass* StaticClass();
	static class UGalileo_LobsterLayerAnimBP_C* GetDefaultObj();

	void ItemSkeletalControl(const struct FPoseLink& InPose, struct FPoseLink* ItemSkeletalControl);
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
	void ItemSwimJumpStartLoop(struct FPoseLink* ItemSwimJumpStartLoop);
	void ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop);
	void ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop);
	void ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void ExecuteUbergraph_Galileo_LobsterLayerAnimBP(int32 EntryPoint);
};

}


