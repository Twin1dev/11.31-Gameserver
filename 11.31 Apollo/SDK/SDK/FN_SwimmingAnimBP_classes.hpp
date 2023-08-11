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

// 0x5129 (0x56D9 - 0x5B0)
// AnimBlueprintGeneratedClass SwimmingAnimBP.SwimmingAnimBP_C
class USwimmingAnimBP_C : public UFortSwimmingLayerAnimInstance
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FAnimNode_Root                        AnimGraphNode_Root_F0F6709748247CD82DBA488E8407C643; // 0x5B8(0x30)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_31176DC44F950E6BDB9A4BB22E893527; // 0x5E8(0xA0)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_362D7522458569CEC79FC3A68D88C8CB; // 0x688(0xA0)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_2C58D2BC43F6700222529F9D2E9B3474; // 0x728(0x188)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_A45A191B46972818111502AF37849040; // 0x8B0(0x188)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_96C940054F41137A3FAD36A2FF30294A; // 0xA38(0x70)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1714286A4B3D616348D176BB0E052AD8; // 0xAA8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_E178C7984B20980B29948283672FDF01; // 0xAD0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_CA7EDDD9404AFE68D2A6538A84891DA0; // 0xAF8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_F06A53824EBFE8B29316AEA596264F96; // 0xB20(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_09B7FC9740730D8210455FA0C2FF647C; // 0xB48(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_800F7A794EF9F866F163CF94AE509857; // 0xBC0(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_B9B690024C2AC0A5972416AF166CE61E; // 0xBF0(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_A7D55E914A4313C1D976879F7BA5059A; // 0xC68(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_9031EB91499FD29625FF30B83A25F60A; // 0xC98(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_FA1AA6E1489A707073DD9F91C30DE963; // 0xD10(0x30)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_2DA4E3AF43A8E7A2ED354086812271A4; // 0xD40(0xB0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_67CC03D04FCB2B6318CB09AE0DDF26D5; // 0xDF0(0x30)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_25C8D44842049C49158C80A7E8D9D2D7; // 0xE20(0x70)()
	struct FAnimNode_Root                        AnimGraphNode_Root_710AFA8746603B6C2B04C695FDA28CE6; // 0xE90(0x30)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_FA5129F540C24931B4163CB809D8A454; // 0xEC0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_44171A4D45377CE1463BFE99782F6642; // 0xEE8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8388E16C4DF1E4A799051B90C3058A72; // 0xF10(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_F99E78A04ECCEA82E935D7B313CF2775; // 0xF38(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_D2B3630B49E77CFD54AE74925CD1A586; // 0xF60(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_E6B49F01423E469AF176989D25F6BA2A; // 0xF88(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8B1076EA41B10B8DE5A8C980A155EC63; // 0xFB0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_05839FF847CE20F42B3BC78973F52E6A; // 0xFD8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_418F0CC342EB2242B7FC8280B83DAD7F; // 0x1000(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8EBC0D2B44F76DC34E7287AB1D546BEE; // 0x1028(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_3E5534EB4BB975A8D270558B0018E00A; // 0x1050(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9CDA086E4F72027B534FCB9637883A73; // 0x10C8(0x30)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_57C658324890DD80F36F7AB07E2BE699; // 0x10F8(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_58AF146F46612588CD830FB1EB2B8490; // 0x11D8(0x30)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_68D30B2546F70BEE377A638BB9053754; // 0x1208(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_3D10F5A2472B4FFBA885F7BA80A6E576; // 0x12E8(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_C9963D60496FD21E718C40B128D2FC03; // 0x1318(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_A1852DC74017FC566A996BBE7A98A580; // 0x1390(0x30)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_C86231344672E77C9BD7E09286336F8E; // 0x13C0(0x28)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_EC95D7884CF81AE5CF3307BFF920FC50; // 0x13E8(0x30)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_8DF58B4A44C64B6EC1BB5A96D069E27D; // 0x1418(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_39CBA3B344CCA6B5F11FF8AD771AFE84; // 0x14F8(0x30)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_ADDDF34A4BF9B0E89E28F98C8C229221; // 0x1528(0xB0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_0D3C1045459C2B743CFABE96DFC8E3B1; // 0x15D8(0x70)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_FB89F9CF401AF89BECF8848F67648B03; // 0x1648(0xB8)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_3B277C224391591F1CC7D38A532594B8; // 0x1700(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_5AD3DBA84E5F2618EFA903A917E32A9D; // 0x1770(0xA0)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_9A43971341D9787E3B1ADCA1A0AA2529; // 0x1810(0xC0)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_59D3E0EE4AF35A25C315AD87701C7762; // 0x18D0(0x18)()
	bool                                         IsDBNOLayer;                                       // 0x18E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BB2[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        LocomotionAdditiveAlphaLayer;                      // 0x18EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DisableIKRootAdditiveCurveAlphaLayer;              // 0x18F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DisableArmsHeadAdditiveCurveAlphaLayer;            // 0x18F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayMeleeAttackAOLayer;                            // 0x18F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BB3[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_7548FF52405616FC8F4E188EB4D04929; // 0x1900(0x70)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_353526F14BAF64FF3F6766A5FEC5CF62; // 0x1970(0xB8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_3AF057CB4490CDB8D295D4BAA1DBAF60; // 0x1A28(0x28)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_FDACFAF54BA6A418B0E18D9DAD10FF6E; // 0x1A50(0xA0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_FC7EA5D445EB916518718886ACF8ED0D; // 0x1AF0(0xB8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_D9D2A2A2400D61C706807784D35970D4; // 0x1BA8(0x28)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_C388B2744DEBBC320E1531A5C9E40B17; // 0x1BD0(0xC0)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_1A7C474C41F1E6C8A538FF9FC1CE62E3; // 0x1C90(0x18)()
	struct FAnimNode_LayeredBoneBlend            AnimGraphNode_LayeredBoneBlend_2035F1904C072BE5887B8D9A25E4BE52; // 0x1CA8(0xC0)()
	struct FAnimNode_RefPose                     AnimGraphNode_IdentityPose_43478DF947CBB13CF4AB989289E625AE; // 0x1D68(0x18)()
	struct FAnimNode_ApplyAdditive               AnimGraphNode_ApplyAdditive_D15630094D91FB09EC4581BBC47EFBF5; // 0x1D80(0xC8)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_033254684F79901E761731ACACCB5134; // 0x1E48(0x70)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_4E2FE5D6476B446E298C528FCC117D0C; // 0x1EB8(0xB8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_59CC99484C118C9143BAC9A25FB8986A; // 0x1F70(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5CF817A647DED10E3B41D0BC6ABB33C1; // 0x1F98(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_19C70B4843591539F748388DCC561150; // 0x1FC0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_32428F9A4F0818CFB302C9834FABF15D; // 0x1FE8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_D4F8D924412F679DAF853C851768983A; // 0x2010(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1C68B2EC492224DBB7CE2D8C340FA49D; // 0x2038(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_EEC9699C4F9FD14B3C08838637D9DD03; // 0x2060(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3865A37A4D755DA0C42E268DE591C325; // 0x2088(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_DF5630724DC5A785CBE1458C3C2B9D9D; // 0x20B0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_79DA4959449F8C0ACBE2D2B16983314C; // 0x20D8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_8C84C43843AA6609E2AE338A8BB40140; // 0x2100(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_0314F2D54EBC935B348275BB1EA51074; // 0x2128(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_11AF46C24B159A31A8933CAB7169ED4A; // 0x2150(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6AB8606C43120443175757AA133A4C26; // 0x2178(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_6446EA5E4B2E3D81036ECC85A9656F9E; // 0x21A0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1DC6EFFC4B99329AAC2579884BF5C568; // 0x21C8(0x28)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6126203043ACB031A3D9F68BE959E712; // 0x21F0(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_D535654947F3A2DEE67CB0BA6A09D6CC; // 0x2210(0x108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_FE8F29E8417F36280CE46B94F43B7FE6; // 0x2318(0x20)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_3F6E20924E62358E50E892BABC2B12CF; // 0x2338(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_48557DE2414B7A1668692CAACE747249; // 0x2360(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_CA6ACE87461F23810E7A37BD5AE607FA; // 0x2388(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_D399A6FC45764E85ABAF13829649AA93; // 0x23B0(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_6D7F050E47F69D966DA5F68499AC425A; // 0x23D8(0x78)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_B25C06A44288E7FA1693A4A3FB7484DE; // 0x2450(0xA0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_711C33514A7F7D70BEDFF3810226F8E5; // 0x24F0(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_36BF09D448D2D616CC381485FE7A0C3F; // 0x2568(0x30)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_4025A7F8430B5AFA2531AEB692934995; // 0x2598(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_9361DD5442D8C86331510393B514221C; // 0x2678(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_A4856D43412A0C1534407D9881D8F1D5; // 0x26A8(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_1BE5564F4D2707D950217AB98C41D43A; // 0x2720(0x30)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_9A40071E46446EB544BDABB2F3BD5177; // 0x2750(0xB0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_AE1E81DD4A190699BEBBDE81FF235BC4; // 0x2800(0x30)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_77301CAE43275B041BBAFFA4BA43BFE1; // 0x2830(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_49C832AC4FBBCDC9105B94A8DB33DDD7; // 0x2858(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_4AC1ED4C4FDBC21BCF494EB1E4D4CE66; // 0x28D0(0x30)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_7C4F1C8244510CE16D47588E7D967457; // 0x2900(0x28)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7FBDCE00426E0D03B93781B142113830; // 0x2928(0x30)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_376A9D9848B74C8FA95813B2A6A021FF; // 0x2958(0x28)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_7462DE0347BE0B8F18B9C3BF63DCF34E; // 0x2980(0x30)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_7312A6EB41503FBAF366FEAFCBA0A7C5; // 0x29B0(0xB0)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_6BCA3BD246A4F1541AB1D093B77476FF; // 0x2A60(0xB8)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_223F57914F49D8B18CBFEEB47F1FE218; // 0x2B18(0x70)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_1C18245F4C23164D75E543B2E91814CB; // 0x2B88(0xB8)()
	struct FAnimNode_Root                        AnimGraphNode_Root_18397C214134ECAAC423F4B29D7634D3; // 0x2C40(0x30)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_226DB2604F819709CE15A09387EBA8F0; // 0x2C70(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_35A805A84DB60D822F2DFC834B11683A; // 0x2C98(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_078B59CA46BACFA455F2369DB470E597; // 0x2CC0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_CDFBE54A412B2AFB6CDA6A8DEB732DED; // 0x2CE8(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5A84413846677945F269AD815AE5A1F1; // 0x2D10(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_166D7F544A5D8710E0993DA80DB5B164; // 0x2D38(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_163B15464E0288A1108A1CAF8CF70A2D; // 0x2D60(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_1F26CF564CA12A10825E7CA2FA2AD831; // 0x2D88(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5830B69443C9B79B5F980CAE5DEC8E36; // 0x2DB0(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_BE234A11468409EE1D2F04B0D2E51AF9; // 0x2DD8(0x28)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_33C64A0A4D9B86EB40A4A6A24C080474; // 0x2E00(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_95F377364EE81279339C11B9139919CA; // 0x2E78(0x30)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_FC17FB344138AC52DD62FA84C9C1824F; // 0x2EA8(0x188)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_E57CC6FD4B97DE6903F4EDB5572070F1; // 0x3030(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_EBDFB6E6404C54780AAABC882E064B99; // 0x3050(0x108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_79C0D9CE43CD9E2BBA2499AC828C6F1E; // 0x3158(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_8B02D49948E08278922803A9D9652569; // 0x3178(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_71536385488A5197C565188160D829EB; // 0x3258(0x30)()
	struct FAnimNode_RotationOffsetBlendSpace    AnimGraphNode_RotationOffsetBlendSpace_FFFA4CE94368759A872BDBBB4B841FAE; // 0x3288(0x188)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_AB6BC2BD4E340783904A85A7C20441B5; // 0x3410(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_E8B734F1415FC44BA876EAB735D45635; // 0x3430(0x108)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_C2CD265C4984B371786349870264AD7E; // 0x3538(0x20)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_465700CE445A468D127A748F054B760C; // 0x3558(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_D05AE2D9440FBFAD6047BFA0D1CBA823; // 0x3638(0x30)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_BE8D3107452D180FCBAE67BB838D79AF; // 0x3668(0x78)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_C37CB9454676C71195F7FF92D19A92C3; // 0x36E0(0x30)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_3CBAB39A4783F2CF50E09AA2FE1D83C0; // 0x3710(0x108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4EA45D44478F4C666EE9FF95CAE0BA6F; // 0x3818(0x20)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_71DC483142EB61DCDC42E7941153583F; // 0x3838(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_DA287C4E40770A834FC4D1AC480F90D4; // 0x3858(0x108)()
	struct FAnimNode_ModifyCurve                 AnimGraphNode_ModifyCurve_5CF8C6704DDB0899472AE9B938299621; // 0x3960(0x58)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_4E6EBA3C4EC2BAF543CC6685343E37F1; // 0x39B8(0x28)()
	struct FAnimNode_TwoWayBlend                 AnimGraphNode_TwoWayBlend_28C2F5D04411F00614BCB392E8AB081A; // 0x39E0(0xC8)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_B70908844B729D7A1E65D4837ED5CA15; // 0x3AA8(0x28)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_0A2B631B43B9807FC9D2BA94DEC8312A; // 0x3AD0(0xA0)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_6E7E6D8846C266E2C327D8A8D667BD5E; // 0x3B70(0x28)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_E42CB2AE44F4FC624B6DF89130AC847F; // 0x3B98(0xA0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_9B4D649C43E96AB0A1A087AF320BA12A; // 0x3C38(0x20)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_D45D99164B28D3ECE673C9B0E74A5E92; // 0x3C58(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_F039C6F54DF3BC16380BB280D13028F5; // 0x3C78(0x108)()
	struct FAnimNode_UseCachedPose               AnimGraphNode_UseCachedPose_F935F9C9467424FAAC509F959FF939B2; // 0x3D80(0x28)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_389DC3E741275051E6DD1084B04813D0; // 0x3DA8(0x30)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_50CFF70E4415025AE266BF8F3B10401A; // 0x3DD8(0xB0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_4F238561427EADF6AB1A3CBFE326A6B9; // 0x3E88(0x70)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_DB420E2241D90347A2F194AB1E9E4AFF; // 0x3EF8(0xB8)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_EF340F2C428C8242D2358E9A8F63AB00; // 0x3FB0(0x70)()
	struct FAnimNode_SaveCachedPose              AnimGraphNode_SaveCachedPose_017BC5014C9AE51DEA4FF0A581D854F4; // 0x4020(0xB8)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_8A03F2AA4C2E760A370527B66586FCB9; // 0x40D8(0xE0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_F16896F9460D0116B742D786DBB72E9F; // 0x41B8(0xA0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_A001F2C844CEC8052E3D1289C695262E; // 0x4258(0xA0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_53C6BF01458B27639DDAFBA96AC4AC0D; // 0x42F8(0x70)()
	struct FAnimNode_Root                        AnimGraphNode_Root_631FF32A453BAFD6B8E39F8A684EB8DF; // 0x4368(0x30)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_3526105344AEB9F2594453BB406AB2D8; // 0x4398(0x48)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_F932CE27452B279D6D993887D0119CAE; // 0x43E0(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_1FBE977E433E304D6429CE938E0117F7; // 0x4450(0xA0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_1AEC048A4036A013E8F5D99516CEF56C; // 0x44F0(0x30)()
	struct FAnimNode_SequenceEvaluator           AnimGraphNode_SequenceEvaluator_E2278E264537D30C178898A759D86E1C; // 0x4520(0x48)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_5CC00134446A349090F1D480085F5E18; // 0x4568(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_3B71DA37497BEC033C857C901CEE33E8; // 0x45D8(0xA0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_226536A549EA13C802C273823CF166A9; // 0x4678(0x30)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_5CACF6FB44F92E08E07B81B1A77640A0; // 0x46A8(0xE0)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_39D7C1054A76AFDF9E3B5A9171D6C4FA; // 0x4788(0xE0)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_39808F7B4D2DEE9406B4EE83F15C54BF; // 0x4868(0xA0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_8A669CD44C927E0E3D7EF6B98072A226; // 0x4908(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_D4B1CE5A44186DF1CF305DB3B04B12D5; // 0x4978(0xA0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_0526BFFF4DA0C4ED6C290A917B112975; // 0x4A18(0x30)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_A89EF84F48B635C953147890B3259019; // 0x4A48(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_5D5EBA52449E47DD6F2C3F99C302D73E; // 0x4A70(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_A5CE592547C46CBED40D96B9C175792E; // 0x4A98(0x28)()
	struct FAnimNode_TransitionResult            AnimGraphNode_TransitionResult_B6ECCA594D093886D88607B97230AB02; // 0x4AC0(0x28)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_6B41B87E44A14832F3795785D043649C; // 0x4AE8(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_17C28D94417D1CD4EF2997ACDE4A36C2; // 0x4BC8(0x30)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_864E07D7487D30C40AE80283FE29D5E5; // 0x4BF8(0xE0)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_64C542E64DBCB878132749902F0B44F3; // 0x4CD8(0xB0)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_07FD28F14B665FAD29C27A9A854D00AA; // 0x4D88(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_D48AFAAD46208C1BCB2851BD6DB7585E; // 0x4E68(0x30)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_D5E3EC684AFE2C01EBCDFDBB7EB22255; // 0x4E98(0xE0)()
	struct FAnimNode_BlendListByEnum             AnimGraphNode_BlendListByEnum_74FABB95406C7C412DBF11A415594D4F; // 0x4F78(0xB0)()
	struct FAnimNode_BlendSpacePlayer            AnimGraphNode_BlendSpacePlayer_E488E5C446E75BD69B1CDBB6214CA5F4; // 0x5028(0xE0)()
	struct FAnimNode_StateResult                 AnimGraphNode_StateResult_8EA70B8443D529AC9D45ED92F06DBFA3; // 0x5108(0x30)()
	struct FAnimNode_StateMachine                AnimGraphNode_StateMachine_1E162FDD4B4E6367605EEE880760532C; // 0x5138(0xB0)()
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_44AFDEF44F63CCD99D2AC2B3DFD6D954; // 0x51E8(0x20)()
	struct FAnimNode_ModifyBone                  AnimGraphNode_ModifyBone_7A98879244913BB57AB94F91A0EC7433; // 0x5208(0x108)()
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_FF497EEE49F1CAC1CEB456830D02CD57; // 0x5310(0x20)()
	struct FAnimNode_RotateRootBone              AnimGraphNode_RotateRootBone_E8F7A293426E4893D37466B69FFB216D; // 0x5330(0xA0)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_809D38C04C77FF5655E7FEAC7A7230EF; // 0x53D0(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_0CEFE8B3486A68B1B83B119E869A584C; // 0x5440(0xA0)()
	struct FAnimNode_Root                        AnimGraphNode_Root_52F973694E5C6B9F9CAEA2981CD1A5D2; // 0x54E0(0x30)()
	struct FAnimNode_LinkedInputPose             AnimGraphNode_LinkedInputPose_51D8C2EB4D4B1C13490129B913B8EC36; // 0x5510(0x70)()
	struct FAnimNode_BlendListByBool             AnimGraphNode_BlendListByBool_53CDAF7646AE8B30D58454B757C88E2C; // 0x5580(0xA0)()
	struct FAnimNode_SequencePlayer              AnimGraphNode_SequencePlayer_31F7E510400F9BD1D9928C92FECFEDDB; // 0x5620(0x78)()
	struct FAnimNode_Root                        AnimGraphNode_Root_EFF1406749CF7E0C80DDEF8B368BFDD7; // 0x5698(0x30)()
	bool                                         AllowSprintStop;                                   // 0x56C8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SwimSprintSlow_EnoughTimePassed;                   // 0x56C9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         ChangeMovementToVelocityFromAccel;                 // 0x56CA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BB4[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        LocalAccelYawAngleAtStart;                         // 0x56CC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PlayMeleeAttackAO;                                 // 0x56D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PivotAngle;                                        // 0x56D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortWeaponCoreAnimation          WeaponCoreAnim;                                    // 0x56D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SwimmingAnimBP_C");
		return Clss;
	}

	void SwimmingDiveJumpingLayer(const struct FPoseLink& PassThroughSwimmingDiveJumping, struct FPoseLink* SwimmingDiveJumpingLayer);
	void SwimmingFullBodyAdditiveLayer(const struct FPoseLink& PassThroughFullBodyAdditive, struct FPoseLink* SwimmingFullBodyAdditiveLayer);
	void SwimmingAdditiveLayer(const struct FPoseLink& IdleAdditive_Cache, const struct FPoseLink& MovementAdditiveLayerPose_Cache, const struct FPoseLink& FullBody, float PlayMeleeAttackAOLayer, float DisableArmsHeadAdditiveCurveAlphaLayer, float DisableIKRootAdditiveCurveAlphaLayer, float LocomotionAdditiveAlphaLayer, bool IsDBNOLayer, const struct FPoseLink& UpperAndLowerBody_Cache, const struct FPoseLink& SprintingPose_PostMask_Cache, struct FPoseLink* SwimmingAdditiveLayer);
	void SwimmingLowerBodyLayer(const struct FPoseLink& UpperBody_Cache, const struct FPoseLink& PreUpperBodySlot_Cache, const struct FPoseLink& PassThroughSwimmingLowerBody, struct FPoseLink* SwimmingLowerBodyLayer);
	void SwimmingUpperBodyPoseNonTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseNonTargeting, struct FPoseLink* SwimmingUpperBodyPoseNonTargetingLayer);
	void SwimmingUpperBodyPoseTargetingLayer(const struct FPoseLink& PassThroughSwimmingUpperBodyPoseTargeting, struct FPoseLink* SwimmingUpperBodyPoseTargetingLayer);
	void SwimmingMovementAdditiveLayerPose(const struct FPoseLink& PassThroughSwimmingMovementAdditive, struct FPoseLink* SwimmingMovementAdditiveLayerPose);
	void SwimmingSprintLayer(const struct FPoseLink& PassThroughSwimmingSprint, struct FPoseLink* SwimmingSprintLayer);
	void SwimmingLayer(const struct FPoseLink& MainPlayerAnimBP, struct FPoseLink* SwimmingLayer);
	void AnimGraph(struct FPoseLink* AnimGraph);
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_E6B49F01423E469AF176989D25F6BA2A();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_LayeredBoneBlend_C388B2744DEBBC320E1531A5C9E40B17();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_LayeredBoneBlend_2035F1904C072BE5887B8D9A25E4BE52();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_ApplyAdditive_D15630094D91FB09EC4581BBC47EFBF5();
	void AnimNotify_SwimSprintStart_Entered_Layer();
	void AnimNotify_SwimSprintStart_Exited_Layer();
	void AnimNotify_SwimSprint_Entered_Layer();
	void AnimNotify_SwimSprintSlow_Entered_Layer();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_SwimmingAnimBP_AnimGraphNode_TransitionResult_5830B69443C9B79B5F980CAE5DEC8E36();
	void AnimNotify_SwimStartAdditive_Entered_Layer();
	void AnimNotify_SwimMovementAccelAdditive_Exited_Layer();
	void ExecuteUbergraph_SwimmingAnimBP(int32 EntryPoint, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, float CallFunc_GetRelevantAnimTime_ReturnValue, float CallFunc_GetRelevantAnimTime_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
