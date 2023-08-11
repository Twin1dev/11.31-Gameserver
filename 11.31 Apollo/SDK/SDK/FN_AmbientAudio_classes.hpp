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

// 0x0 (0x30 - 0x30)
// Class AmbientAudio.AmbientAudioDataAsset
class UAmbientAudioDataAsset : public UDataAsset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AmbientAudioDataAsset");
		return Clss;
	}

};

// 0x10 (0x260 - 0x250)
// Class AmbientAudio.AmbientVolume
class AAmbientVolume : public AVolume
{
public:
	int32                                        Priority;                                          // 0x250(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20F8[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAmbientAudioDataAsset*                AmbientAsset;                                      // 0x258(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AmbientVolume");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
