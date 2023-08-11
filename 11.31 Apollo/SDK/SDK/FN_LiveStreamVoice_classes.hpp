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

// 0x0 (0x80 - 0x80)
// Class LiveStreamVoice.LiveStreamVoiceChannel
class ULiveStreamVoiceChannel : public UVoiceChannel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveStreamVoiceChannel");
		return Clss;
	}

};

// 0x28 (0x58 - 0x30)
// Class LiveStreamVoice.LiveStreamVoiceSubsystem
class ULiveStreamVoiceSubsystem : public UGameInstanceSubsystem
{
public:
	struct FVoiceSettings                        PlaybackSettings;                                  // 0x30(0x18)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F72[0x10];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveStreamVoiceSubsystem");
		return Clss;
	}

	void SetVoiceSettings(struct FVoiceSettings& InSettings);
	void EnableLocalVoiceProcessing(uint8 LocalUserNum, bool bEnable);
	void ClearVoiceSettings();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
