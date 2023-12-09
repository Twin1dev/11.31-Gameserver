#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class ULiveStreamVoiceChannel* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class LiveStreamVoice.LiveStreamVoiceSubsystem
class ULiveStreamVoiceSubsystem : public UGameInstanceSubsystem
{
public:
	struct FVoiceSettings                        PlaybackSettings;                                  // 0x30(0x18)(NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1156[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class ULiveStreamVoiceSubsystem* GetDefaultObj();

	void SetVoiceSettings(struct FVoiceSettings& InSettings);
	void EnableLocalVoiceProcessing(uint8 LocalUserNum, bool bEnable);
	void ClearVoiceSettings();
};

}


