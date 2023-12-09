#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xDD1 - 0xDD1)
// BlueprintGeneratedClass Device_Ceiling_NoWeaponZone.Device_Ceiling_NoWeaponZone_C
class ADevice_Ceiling_NoWeaponZone_C : public ADevice_Floor_NoWeaponZone_C
{
public:

	static class UClass* StaticClass();
	static class ADevice_Ceiling_NoWeaponZone_C* GetDefaultObj();

	void GetTriggerLocation(struct FVector* Location, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue);
};

}


