#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// UserDefinedStruct FluidForceImpulseTimedEffects.FluidForceImpulseTimedEffects
struct FFluidForceImpulseTimedEffects
{
public:
	bool                                         EnableWaterDropsEffect_39_0A7932284406807D62695D8E0927BD70; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_53FD[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        EffectRadius_30_C9A94C02422D8BF40DF6B1BB2A0D8CBC;  // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Strength_29_2CAA30794D1EFF60AE1C3491D011CECF;      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WaterDropsperSquareMeter_27_C31B527C4C367A5CA5E1DF8E49E76234; // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartTimeOffset_33_5A792CE8489A59E5D9B24F9E4DCFE94A; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Lifetime_35_C2749C1449C41D4F236BCBAF6ED34113;      // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StrengthoverLifePower_37_4FA6941A4AD024828AFEB782783DD01C; // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_53FE[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialInterface*                    MaterialOverride_42_FB856A244A1713590BB76EAA7CC7A0DF; // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
