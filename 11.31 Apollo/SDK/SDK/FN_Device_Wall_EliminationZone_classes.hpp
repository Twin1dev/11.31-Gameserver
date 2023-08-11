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

// 0x0 (0xD90 - 0xD90)
// BlueprintGeneratedClass Device_Wall_EliminationZone.Device_Wall_EliminationZone_C
class ADevice_Wall_EliminationZone_C : public ADevice_Floor_EliminationZone_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Device_Wall_EliminationZone_C");
		return Clss;
	}

	void GetTriggerLocation(struct FVector* Location, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
