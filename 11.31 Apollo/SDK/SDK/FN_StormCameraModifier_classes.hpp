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

// 0x28 (0x70 - 0x48)
// BlueprintGeneratedClass StormCameraModifier.StormCameraModifier_C
class UStormCameraModifier_C : public UStormCameraModifier
{
public:
	uint8                                        Pad_5670[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector4                              Saturation;                                        // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector4                              Contrast;                                          // 0x60(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StormCameraModifier_C");
		return Clss;
	}

	void BlueprintModifyPostProcess(float DeltaTime, float* PostProcessBlendWeight, struct FPostProcessSettings* PostProcessSettings, const struct FPostProcessSettings& K2Node_MakeStruct_PostProcessSettings);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
