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

// 0x0 (0xDD1 - 0xDD1)
// BlueprintGeneratedClass Device_Ceiling_NoWeaponZone.Device_Ceiling_NoWeaponZone_C
class ADevice_Ceiling_NoWeaponZone_C : public ADevice_Floor_NoWeaponZone_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Device_Ceiling_NoWeaponZone_C");
		return Clss;
	}

	void GetTriggerLocation(struct FVector* Location, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
