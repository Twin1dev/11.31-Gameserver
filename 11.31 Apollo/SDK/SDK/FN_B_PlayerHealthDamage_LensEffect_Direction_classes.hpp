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

// 0x8 (0x300 - 0x2F8)
// BlueprintGeneratedClass B_PlayerHealthDamage_LensEffect_Direction.B_PlayerHealthDamage_LensEffect_Direction_C
class AB_PlayerHealthDamage_LensEffect_Direction_C : public AFortEmitterCameraLensEffectDirectional
{
public:
	uint8                                        Pad_4B2B[0x8];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("B_PlayerHealthDamage_LensEffect_Direction_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
