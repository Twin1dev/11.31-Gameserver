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

// 0xF (0xDE0 - 0xDD1)
// BlueprintGeneratedClass Device_Wall_NoWeaponZone.Device_Wall_NoWeaponZone_C
class ADevice_Wall_NoWeaponZone_C : public ADevice_Floor_NoWeaponZone_C
{
public:
	uint8                                        Pad_5B45[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xDD8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Device_Wall_NoWeaponZone_C");
		return Clss;
	}

	void GetTriggerLocation(struct FVector* Location, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
	void UpdateVolumeSize();
	void ExecuteUbergraph_Device_Wall_NoWeaponZone(int32 EntryPoint, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorFloat_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
