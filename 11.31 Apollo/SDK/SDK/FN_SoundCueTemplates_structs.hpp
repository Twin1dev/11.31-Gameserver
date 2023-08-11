#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESoundContainerType : uint8
{
	Concatenate                    = 0,
	Randomize                      = 1,
	Mix                            = 2,
	ESoundContainerType_MAX        = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct SoundCueTemplates.SoundCueCrossfadeInfo
struct FSoundCueCrossfadeInfo
{
public:
	struct FDistanceDatum                        DistanceInfo;                                      // 0x0(0x14)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1647[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundWave*                            Sound;                                             // 0x18(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct SoundCueTemplates.SoundCueTemplateQualitySettings
struct FSoundCueTemplateQualitySettings
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, EditConst, NativeAccessSpecifierPublic)
	int32                                        MaxConcatenatedVariations;                         // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxRandomizedVariations;                           // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxMixVariations;                                  // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1648[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
