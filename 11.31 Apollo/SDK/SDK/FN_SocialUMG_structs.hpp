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


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x60 - 0x0)
// ScriptStruct SocialUMG.SocialChatMessageEntryTextStyle
struct FSocialChatMessageEntryTextStyle
{
public:
	struct FSlateFontInfo                        FontInfo;                                          // 0x0(0x50)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorAndOpacity;                                   // 0x50(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct SocialUMG.SocialChatMessageEntryStyle
struct FSocialChatMessageEntryStyle
{
public:
	struct FSocialChatMessageEntryTextStyle      SenderNameStyle;                                   // 0x0(0x60)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSocialChatMessageEntryTextStyle      ChannelNameStyle;                                  // 0x60(0x60)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSocialChatMessageEntryTextStyle      MessageTextStyle;                                  // 0xC0(0x60)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
