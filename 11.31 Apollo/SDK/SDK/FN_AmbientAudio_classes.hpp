#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class UAmbientAudioDataAsset* GetDefaultObj();

};

// 0x10 (0x260 - 0x250)
// Class AmbientAudio.AmbientVolume
class AAmbientVolume : public AVolume
{
public:
	int32                                        Priority;                                          // 0x250(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1556[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAmbientAudioDataAsset*                AmbientAsset;                                      // 0x258(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AAmbientVolume* GetDefaultObj();

};

}


