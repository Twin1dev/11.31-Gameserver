#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x70 - 0x48)
// BlueprintGeneratedClass StormCameraModifier.StormCameraModifier_C
class UStormCameraModifier_C : public UStormCameraModifier
{
public:
	uint8                                        Pad_1802[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector4                              Saturation;                                        // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                              Contrast;                                          // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStormCameraModifier_C* GetDefaultObj();

	void BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings);
};

}


