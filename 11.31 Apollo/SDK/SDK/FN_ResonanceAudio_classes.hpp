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

// 0x8 (0x30 - 0x28)
// Class ResonanceAudio.ResonanceAudioAmbisonicsSettings
class UResonanceAudioAmbisonicsSettings : public UAmbisonicsSubmixSettingsBase
{
public:
	enum class EAmbisonicsOrder                  AmbisonicsOrder;                                   // 0x28(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2206[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ResonanceAudioAmbisonicsSettings");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class ResonanceAudio.ResonanceAudioBlueprintFunctionLibrary
class UResonanceAudioBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ResonanceAudioBlueprintFunctionLibrary");
		return Clss;
	}

	void SetGlobalReverbPreset(class UResonanceAudioReverbPluginPreset* InPreset);
	class UResonanceAudioReverbPluginPreset* GetGlobalReverbPreset();
};

// 0x80 (0x298 - 0x218)
// Class ResonanceAudio.ResonanceAudioDirectivityVisualizer
class AResonanceAudioDirectivityVisualizer : public AActor
{
public:
	uint8                                        Pad_2207[0x70];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterial*                             Material;                                          // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UResonanceAudioSpatializationSourceSettings* Settings;                                          // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ResonanceAudioDirectivityVisualizer");
		return Clss;
	}

};

// 0xD0 (0x110 - 0x40)
// Class ResonanceAudio.ResonanceAudioReverbPluginPreset
class UResonanceAudioReverbPluginPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_2208[0x80];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	struct FResonanceAudioReverbPluginSettings   Settings;                                          // 0xC0(0x50)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ResonanceAudioReverbPluginPreset");
		return Clss;
	}

	void SetRoomRotation(struct FQuat& InRotation);
	void SetRoomPosition(struct FVector& InPosition);
	void SetRoomMaterials(TArray<enum class ERaMaterialName>& InMaterials);
	void SetRoomDimensions(struct FVector& InDimensions);
	void SetReverbTimeModifier(float InReverbTimeModifier);
	void SetReverbGain(float InReverbGain);
	void SetReverbBrightness(float InReverbBrightness);
	void SetReflectionScalar(float InReflectionScalar);
	void SetEnableRoomEffects(bool bInEnableRoomEffects);
};

// 0x38 (0x60 - 0x28)
// Class ResonanceAudio.ResonanceAudioSettings
class UResonanceAudioSettings : public UObject
{
public:
	enum class ERaQualityMode                    QualityMode;                                       // 0x28(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2209[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSoftObjectPath                       GlobalReverbPreset;                                // 0x30(0x18)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       GlobalSourcePreset;                                // 0x48(0x18)(Edit, ZeroConstructor, Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ResonanceAudioSettings");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class ResonanceAudio.ResonanceAudioSpatializationSourceSettings
class UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{
public:
	enum class ERaSpatializationMethod           SpatializationMethod;                              // 0x28(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_220A[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        Pattern;                                           // 0x2C(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Sharpness;                                         // 0x30(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bToggleVisualization;                              // 0x34(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_220B[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        Scale;                                             // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Spread;                                            // 0x3C(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERaDistanceRolloffModel           Rolloff;                                           // 0x40(0x1)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_220C[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        MinDistance;                                       // 0x44(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxDistance;                                       // 0x48(0x4)(Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_220D[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ResonanceAudioSpatializationSourceSettings");
		return Clss;
	}

	void SetSoundSourceSpread(float InSpread);
	void SetSoundSourceDirectivity(float InPattern, float InSharpness);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
