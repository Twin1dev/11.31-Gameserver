#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0xB80 - 0xB70)
// Class SocialUMG.SocialChatChannelTab
class USocialChatChannelTab : public UCommonButton
{
public:
	class USocialChatChannel*                    ChatChannel;                                       // 0xB70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      CommonText_ChannelName;                            // 0xB78(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialChatChannelTab* GetDefaultObj();

};

// 0x58 (0x288 - 0x230)
// Class SocialUMG.SocialChatContainer
class USocialChatContainer : public UUserWidget
{
public:
	class USocialChatManager*                    ChatManager;                                       // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class USocialChatChannel*>            JoinedChannels;                                    // 0x238(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class USocialChatChannel*                    ActiveChannel;                                     // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonGroup*                    TabButtonGroup;                                    // 0x250(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_141E[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialChatMessageList*                ChatList_Messages;                                 // 0x260(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USocialChatEditableText*               ChatEditableText_MessageEntry;                     // 0x268(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         Button_SendMessage;                                // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_JoinedChannels;                           // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScrollBox*                            ScrollBox_Channels;                                // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialChatContainer* GetDefaultObj();

	void SendCurrentMessage();
	void OnChatOpenChanged(bool bShouldBeOpen);
	void HandleRightTabPressed();
	void HandleLeftTabPressed();
	void FocusEditableText();
	void DynamicHandleMessageTextCommitted(class FText& MessageText, enum class ETextCommit CommitMethod);
};

// 0x4E0 (0x5E8 - 0x108)
// Class SocialUMG.SocialChatEditableText
class USocialChatEditableText : public UWidget
{
public:
	uint8                                        Pad_1421[0x20];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FEditableTextStyle                    EditableTextStyle;                                 // 0x128(0x218)(Edit, NativeAccessSpecifierPrivate)
	struct FTextBlockStyle                       AutoCompleteStyle;                                 // 0x340(0x268)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1422[0x40];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialChatEditableText* GetDefaultObj();

};

// 0x148 (0x378 - 0x230)
// Class SocialUMG.SocialChatMessageEntry
class USocialChatMessageEntry : public UUserWidget
{
public:
	uint8                                        Pad_1423[0x18];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSocialChatMessageEntryStyle          DefaultStyle;                                      // 0x248(0x120)(Edit, Protected, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                  RichText_Message;                                  // 0x368(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UButton*                               Button_MessageButton;                              // 0x370(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialChatMessageEntry* GetDefaultObj();

	void OnMessageSet();
	bool CanInteract();
};

// 0xF0 (0x308 - 0x218)
// Class SocialUMG.SocialChatMessageList
class USocialChatMessageList : public UListViewBase
{
public:
	uint8                                        Pad_1425[0xC0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bIsFocusable;                                      // 0x2D8(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1427[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialChatChannel*                    ActiveChannel;                                     // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1428[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialChatMessageList* GetDefaultObj();

};

// 0x28 (0xB98 - 0xB70)
// Class SocialUMG.SocialGroupListEntry
class USocialGroupListEntry : public UCommonButton
{
public:
	uint8                                        Pad_1429[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class USocialActionMenu>         ActionMenuClass;                                   // 0xB78(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialGroupChannel*                   SocialGroup;                                       // 0xB80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            Text_GroupName;                                    // 0xB88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                           MenuAnchor_Actions;                                // 0xB90(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialGroupListEntry* GetDefaultObj();

	class UWidget* HandleGetMenuContent();
};

// 0x20 (0x3E0 - 0x3C0)
// Class SocialUMG.SocialGroupTreeView
class USocialGroupTreeView : public UTreeView
{
public:
	TSubclassOf<class USocialGroupListEntry>     GroupEntryWidgetClass;                             // 0x3C0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USocialListUserEntryBase>  UserEntryWidgetClass;                              // 0x3C8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USocialInteractionMenu>    ActionMenuClass;                                   // 0x3D0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USocialInteractionMenu*                ActionMenu;                                        // 0x3D8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialGroupTreeView* GetDefaultObj();

};

// 0x60 (0xBD0 - 0xB70)
// Class SocialUMG.SocialInteractionButton
class USocialInteractionButton : public UCommonButton
{
public:
	struct FLinearColor                          DefaultIndicatorColor;                             // 0xB70(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          AlertingIndicatorColor;                            // 0xB80(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_143F[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UCommonTextBlock*                      Text_InteractionName;                              // 0xBC0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBorder*                               Border_InteractionIndicator;                       // 0xBC8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialInteractionButton* GetDefaultObj();

	void OnInteractionSet();
	bool IsPlatformOnlyFriend();
	class FName GetInteractionName();
};

// 0x20 (0x2F0 - 0x2D0)
// Class SocialUMG.SocialActionMenu
class USocialActionMenu : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_1440[0x20];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialActionMenu* GetDefaultObj();

	void OnOpened();
};

// 0x68 (0x358 - 0x2F0)
// Class SocialUMG.SocialInteractionMenu
class USocialInteractionMenu : public USocialActionMenu
{
public:
	uint8                                        Pad_144C[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class UDynamicEntryBox*                      EntryBox_PositiveInteractions;                     // 0x320(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicEntryBox*                      EntryBox_NegativeInteractions;                     // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpacer*                               Spacer_InteractionSeparator;                       // 0x330(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonWidgetSwitcher*                 Switcher_Confirmation;                             // 0x338(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            Text_ConfirmationLabel;                            // 0x340(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         Button_Confirm;                                    // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButton*                         Button_Decline;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialInteractionMenu* GetDefaultObj();

	void OnToggleConfirmation(bool bIsVisible);
	void HandleMenuAnchorOpenChanged(bool bIsOpen);
	class UWidget* GetFirstEntryToCenter();
};

// 0x20 (0x6C0 - 0x6A0)
// Class SocialUMG.SocialNameTextBlock
class USocialNameTextBlock : public UCommonRichTextBlock
{
public:
	class USocialUser*                           SocialUser;                                        // 0x6A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinDesiredSize;                                    // 0x6A8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxDesiredSize;                                    // 0x6AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowSecondName;                                   // 0x6B0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPlatformIconDisplayRule          PlatformIconDisplayRule;                           // 0x6B1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWrapToNextLine;                                   // 0x6B2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1453[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FColor                                SecondNameColor;                                   // 0x6B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SecondNameFontSize;                                // 0x6B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1455[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialNameTextBlock* GetDefaultObj();

};

// 0x68 (0x150 - 0xE8)
// Class SocialUMG.DesignerPreviewChatChannel
class UDesignerPreviewChatChannel : public USocialChatChannel
{
public:
	uint8                                        Pad_1459[0x68];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UDesignerPreviewChatChannel* GetDefaultObj();

};

// 0x18 (0xB88 - 0xB70)
// Class SocialUMG.SocialListEntryBase
class USocialListEntryBase : public UCommonButton
{
public:
	uint8                                        Pad_145B[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialListEntryBase* GetDefaultObj();

};

// 0x10 (0xB98 - 0xB88)
// Class SocialUMG.SocialListInteractableEntryBase
class USocialListInteractableEntryBase : public USocialListEntryBase
{
public:
	TSubclassOf<class USocialActionMenu>         ActionMenuClass;                                   // 0xB88(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                           MenuAnchor_Actions;                                // 0xB90(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialListInteractableEntryBase* GetDefaultObj();

	void HandleMenuOpenChanged(bool bIsMenuOpen);
	class UWidget* HandleGetMenuContent();
};

// 0x18 (0xBB0 - 0xB98)
// Class SocialUMG.SocialListUserEntryBase
class USocialListUserEntryBase : public USocialListInteractableEntryBase
{
public:
	uint8                                        Pad_1464[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialNameTextBlock*                  Text_SocialName;                                   // 0xBA0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                  Text_RichPresence;                                 // 0xBA8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialListUserEntryBase* GetDefaultObj();

};

// 0x10 (0xB98 - 0xB88)
// Class SocialUMG.SocialUserListHeaderEntry
class USocialUserListHeaderEntry : public USocialListEntryBase
{
public:
	class UTextBlock*                            Text_ListName;                                     // 0xB88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextBlock*                            Text_NumEntries;                                   // 0xB90(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialUserListHeaderEntry* GetDefaultObj();

};

// 0xE8 (0x300 - 0x218)
// Class SocialUMG.SocialUserListViewBase
class USocialUserListViewBase : public UListViewBase
{
public:
	uint8                                        Pad_1467[0xE0];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        EntrySpacing;                                      // 0x2F8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1468[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialUserListViewBase* GetDefaultObj();

};

// 0x80 (0x380 - 0x300)
// Class SocialUMG.SocialUserListView
class USocialUserListView : public USocialUserListViewBase
{
public:
	uint8                                        Pad_1469[0x28];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	class USocialActionMenu*                     ActiveActionMenu;                                  // 0x328(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class USocialActionMenu>, class USocialActionMenu*> CachedActionMenuPool;                              // 0x330(0x50)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialUserListView* GetDefaultObj();

};

// 0x90 (0x410 - 0x380)
// Class SocialUMG.SocialUserTreeView
class USocialUserTreeView : public USocialUserListView
{
public:
	uint8                                        Pad_146A[0x70];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class USocialListUserEntryBase>  UserEntryWidgetClass;                              // 0x3F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USocialListUserEntryBase>  InviteEntryWidgetClass;                            // 0x3F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_146C[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USocialUserTreeView* GetDefaultObj();

};

}


