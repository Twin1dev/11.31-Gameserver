#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x78 - 0x28)
// Class MaterialShaderQualitySettings.MaterialShaderQualitySettings
class UMaterialShaderQualitySettings : public UObject
{
public:
	TMap<class FName, class UShaderPlatformQualitySettings*> ForwardSettingMap;                                 // 0x28(0x50)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMaterialShaderQualitySettings* GetDefaultObj();

};

// 0x28 (0x50 - 0x28)
// Class MaterialShaderQualitySettings.ShaderPlatformQualitySettings
class UShaderPlatformQualitySettings : public UObject
{
public:
	struct FMaterialQualityOverrides             QualityOverrides[0x3];                             // 0x28(0x18)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2042[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UShaderPlatformQualitySettings* GetDefaultObj();

};

}


