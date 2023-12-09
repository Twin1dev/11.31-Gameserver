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

// 0x50 (0x50 - 0x0)
// UserDefinedStruct FluidForceImpulse.FluidForceImpulse
struct FFluidForceImpulse
{
public:
	struct FVector                               WorldPosition_32_C9A94C02422D8BF40DF6B1BB2A0D8CBC; // 0x0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ForceRadius_31_C31B527C4C367A5CA5E1DF8E49E76234;   // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ForceStrength_30_2CAA30794D1EFF60AE1C3491D011CECF; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5886[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    MaterialOverride_24_5A792CE8489A59E5D9B24F9E4DCFE94A; // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Lifetime_34_C2749C1449C41D4F236BCBAF6ED34113;      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StrengthoverLifePower_41_85B52C994A7ED323A34BF4BBCB0DFA0F; // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFluidForceImpulseTimedEffects        TimedWaterDropSplashes_38_2CB1456B483AEF3A52677AAF4152E31E; // 0x28(0x28)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

}


