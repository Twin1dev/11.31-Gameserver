#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x48 - 0x0)
// UserDefinedStruct WaveSpectrumSettings.WaveSpectrumSettings
struct FWaveSpectrumSettings
{
public:
	int32                                        MaxWaves_47_AD00BF8D49793419E5C91DBF5FC4E3E5;      // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Seed_44_5A20C59F49709BC4ABA138A1F35CDE74;          // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLineSeparatorNullStruct              MinusMinusMinusMinusMinusWavelengthsMinusMinusMinusMinusMinus_4_D8291BAF453D111FBB38ED86F14F7672; // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AE5[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinWavelength_7_C6EF199C44159E1369A806BA912B1646;  // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxWavelength_9_1D9584A64602B31C61015982BA077EFD;  // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WavelengthFalloff_20_9A8C28744DA185C47F0D37B9EBA36CAF; // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLineSeparatorNullStruct              MinusMinusMinusMinusMinusAmplitudesMinusMinusMinusMinusMinus_29_9B421DBF4D0FC60AB8654CB437162427; // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AE6[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        MinAmplitude_17_B33A1CC14597F4063D0218970D63971D;  // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxAmplitude_18_CAC1A8164D55C6CC0A3ED0A6A4590493;  // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AmplitudeFalloff_19_72E6C4064F70E7DFE67742BA06E0ADE5; // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLineSeparatorNullStruct              MinusMinusMinusMinusMinusDirectionsMinusMinusMinusMinusMinus_38_33B59F7C41013BF07C0BD796C8A07ABF; // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AE7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector2D                             DominantWaveDirection_40_F5412C4B4F9B44471E1FC7B1B5295B7D; // 0x2C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DirectionAngularSpread_21_966C6D764D2457F563C07993AE5A7310; // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLineSeparatorNullStruct              MinusMinusMinusMinusMinusSteepnessMinusMinusMinusMinusMinus_39_1746E5384A989CED9021B4B6340C8D36; // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6AE8[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SmallWaveSteepness_23_454E2EB64C779AFEAD5A1C9397C743D3; // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LargeWaveSteepness_24_65207D7A43BB685658EFAF8B34511A2F; // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SteepnessFalloff_26_C822870B4711F2EA3930D389A3DD8370; // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


