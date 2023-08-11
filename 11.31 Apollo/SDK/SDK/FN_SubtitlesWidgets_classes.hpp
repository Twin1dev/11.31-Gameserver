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

// 0x20 (0x48 - 0x28)
// Class SubtitlesWidgets.FortMediaSubtitlesPlayer
class UFortMediaSubtitlesPlayer : public UObject
{
public:
	uint8                                        Pad_40[0x8];                                       // Fixing Size After Last Property  [ Dumper-8 ]
	class UOverlays*                             SourceSubtitles;                                   // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41[0x10];                                      // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMediaSubtitlesPlayer");
		return Clss;
	}

	void Stop();
	void SetSubtitles(class UOverlays* Subtitles);
	void Play();
	void BindToMediaPlayer(class UMediaPlayer* InMediaPlayer);
};

// 0x308 (0x410 - 0x108)
// Class SubtitlesWidgets.SubtitleDisplay
class USubtitleDisplay : public UWidget
{
public:
	UMulticastInlineDelegateProperty_            BP_SubtitleChangedEvent;                           // 0x108(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        FontInfo;                                          // 0x118(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorAndOpacity;                                   // 0x168(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WrapTextAt;                                        // 0x178(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42[0x294];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubtitleDisplay");
		return Clss;
	}

	bool HasSubtitles();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
