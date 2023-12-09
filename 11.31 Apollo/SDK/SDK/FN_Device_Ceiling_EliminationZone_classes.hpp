#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xD90 - 0xD90)
// BlueprintGeneratedClass Device_Ceiling_EliminationZone.Device_Ceiling_EliminationZone_C
class ADevice_Ceiling_EliminationZone_C : public ADevice_Floor_EliminationZone_C
{
public:

	static class UClass* StaticClass();
	static class ADevice_Ceiling_EliminationZone_C* GetDefaultObj();

	void GetTriggerLocation(struct FVector* Location, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue);
};

}


