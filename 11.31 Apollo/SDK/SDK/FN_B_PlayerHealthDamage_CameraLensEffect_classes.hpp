#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x2D8 - 0x2D0)
// BlueprintGeneratedClass B_PlayerHealthDamage_CameraLensEffect.B_PlayerHealthDamage_CameraLensEffect_C
class AB_PlayerHealthDamage_CameraLensEffect_C : public AEmitterCameraLensEffectBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AB_PlayerHealthDamage_CameraLensEffect_C* GetDefaultObj();

	void PassParticle_Parameter(float NewParam, bool First_Hit);
	void ExecuteUbergraph_B_PlayerHealthDamage_CameraLensEffect(int32 EntryPoint, float K2Node_CustomEvent_NewParam, bool K2Node_CustomEvent_First_Hit, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1);
};

}


