#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SocialUMG.SocialChatChannelTab
// (None)

class UClass* USocialChatChannelTab::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialChatChannelTab");

	return Clss;
}


// SocialChatChannelTab SocialUMG.Default__SocialChatChannelTab
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialChatChannelTab* USocialChatChannelTab::GetDefaultObj()
{
	static class USocialChatChannelTab* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialChatChannelTab*>(USocialChatChannelTab::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialChatContainer
// (None)

class UClass* USocialChatContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialChatContainer");

	return Clss;
}


// SocialChatContainer SocialUMG.Default__SocialChatContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialChatContainer* USocialChatContainer::GetDefaultObj()
{
	static class USocialChatContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialChatContainer*>(USocialChatContainer::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialUMG.SocialChatContainer.SendCurrentMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USocialChatContainer::SendCurrentMessage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialChatContainer", "SendCurrentMessage");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SocialUMG.SocialChatContainer.OnChatOpenChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShouldBeOpen                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialChatContainer::OnChatOpenChanged(bool bShouldBeOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialChatContainer", "OnChatOpenChanged");

	Params::USocialChatContainer_OnChatOpenChanged_Params Parms{};

	Parms.bShouldBeOpen = bShouldBeOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialUMG.SocialChatContainer.HandleRightTabPressed
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USocialChatContainer::HandleRightTabPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialChatContainer", "HandleRightTabPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SocialUMG.SocialChatContainer.HandleLeftTabPressed
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USocialChatContainer::HandleLeftTabPressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialChatContainer", "HandleLeftTabPressed");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SocialUMG.SocialChatContainer.FocusEditableText
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USocialChatContainer::FocusEditableText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialChatContainer", "FocusEditableText");



	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, nullptr);


	Func->FunctionFlags = Flgs;

}


// Function SocialUMG.SocialChatContainer.DynamicHandleMessageTextCommitted
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FText                        MessageText                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             CommitMethod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialChatContainer::DynamicHandleMessageTextCommitted(class FText& MessageText, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialChatContainer", "DynamicHandleMessageTextCommitted");

	Params::USocialChatContainer_DynamicHandleMessageTextCommitted_Params Parms{};

	Parms.MessageText = MessageText;
	Parms.CommitMethod = CommitMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SocialUMG.SocialChatEditableText
// (None)

class UClass* USocialChatEditableText::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialChatEditableText");

	return Clss;
}


// SocialChatEditableText SocialUMG.Default__SocialChatEditableText
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialChatEditableText* USocialChatEditableText::GetDefaultObj()
{
	static class USocialChatEditableText* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialChatEditableText*>(USocialChatEditableText::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialChatMessageEntry
// (None)

class UClass* USocialChatMessageEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialChatMessageEntry");

	return Clss;
}


// SocialChatMessageEntry SocialUMG.Default__SocialChatMessageEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialChatMessageEntry* USocialChatMessageEntry::GetDefaultObj()
{
	static class USocialChatMessageEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialChatMessageEntry*>(USocialChatMessageEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialUMG.SocialChatMessageEntry.OnMessageSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialChatMessageEntry::OnMessageSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialChatMessageEntry", "OnMessageSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SocialUMG.SocialChatMessageEntry.CanInteract
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USocialChatMessageEntry::CanInteract()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialChatMessageEntry", "CanInteract");

	Params::USocialChatMessageEntry_CanInteract_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SocialUMG.SocialChatMessageList
// (None)

class UClass* USocialChatMessageList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialChatMessageList");

	return Clss;
}


// SocialChatMessageList SocialUMG.Default__SocialChatMessageList
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialChatMessageList* USocialChatMessageList::GetDefaultObj()
{
	static class USocialChatMessageList* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialChatMessageList*>(USocialChatMessageList::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialGroupListEntry
// (None)

class UClass* USocialGroupListEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialGroupListEntry");

	return Clss;
}


// SocialGroupListEntry SocialUMG.Default__SocialGroupListEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialGroupListEntry* USocialGroupListEntry::GetDefaultObj()
{
	static class USocialGroupListEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialGroupListEntry*>(USocialGroupListEntry::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialUMG.SocialGroupListEntry.HandleGetMenuContent
// (Final, Native, Protected)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* USocialGroupListEntry::HandleGetMenuContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialGroupListEntry", "HandleGetMenuContent");

	Params::USocialGroupListEntry_HandleGetMenuContent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SocialUMG.SocialGroupTreeView
// (None)

class UClass* USocialGroupTreeView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialGroupTreeView");

	return Clss;
}


// SocialGroupTreeView SocialUMG.Default__SocialGroupTreeView
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialGroupTreeView* USocialGroupTreeView::GetDefaultObj()
{
	static class USocialGroupTreeView* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialGroupTreeView*>(USocialGroupTreeView::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialInteractionButton
// (None)

class UClass* USocialInteractionButton::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialInteractionButton");

	return Clss;
}


// SocialInteractionButton SocialUMG.Default__SocialInteractionButton
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialInteractionButton* USocialInteractionButton::GetDefaultObj()
{
	static class USocialInteractionButton* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialInteractionButton*>(USocialInteractionButton::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialUMG.SocialInteractionButton.OnInteractionSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialInteractionButton::OnInteractionSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialInteractionButton", "OnInteractionSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SocialUMG.SocialInteractionButton.IsPlatformOnlyFriend
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USocialInteractionButton::IsPlatformOnlyFriend()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialInteractionButton", "IsPlatformOnlyFriend");

	Params::USocialInteractionButton_IsPlatformOnlyFriend_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function SocialUMG.SocialInteractionButton.GetInteractionName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName USocialInteractionButton::GetInteractionName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialInteractionButton", "GetInteractionName");

	Params::USocialInteractionButton_GetInteractionName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SocialUMG.SocialActionMenu
// (None)

class UClass* USocialActionMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialActionMenu");

	return Clss;
}


// SocialActionMenu SocialUMG.Default__SocialActionMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialActionMenu* USocialActionMenu::GetDefaultObj()
{
	static class USocialActionMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialActionMenu*>(USocialActionMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialUMG.SocialActionMenu.OnOpened
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialActionMenu::OnOpened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialActionMenu", "OnOpened");



	UObject::ProcessEvent(Func, nullptr);

}


// Class SocialUMG.SocialInteractionMenu
// (None)

class UClass* USocialInteractionMenu::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialInteractionMenu");

	return Clss;
}


// SocialInteractionMenu SocialUMG.Default__SocialInteractionMenu
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialInteractionMenu* USocialInteractionMenu::GetDefaultObj()
{
	static class USocialInteractionMenu* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialInteractionMenu*>(USocialInteractionMenu::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialUMG.SocialInteractionMenu.OnToggleConfirmation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsVisible                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialInteractionMenu::OnToggleConfirmation(bool bIsVisible)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialInteractionMenu", "OnToggleConfirmation");

	Params::USocialInteractionMenu_OnToggleConfirmation_Params Parms{};

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialUMG.SocialInteractionMenu.HandleMenuAnchorOpenChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsOpen                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialInteractionMenu::HandleMenuAnchorOpenChanged(bool bIsOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialInteractionMenu", "HandleMenuAnchorOpenChanged");

	Params::USocialInteractionMenu_HandleMenuAnchorOpenChanged_Params Parms{};

	Parms.bIsOpen = bIsOpen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SocialUMG.SocialInteractionMenu.GetFirstEntryToCenter
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* USocialInteractionMenu::GetFirstEntryToCenter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialInteractionMenu", "GetFirstEntryToCenter");

	Params::USocialInteractionMenu_GetFirstEntryToCenter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SocialUMG.SocialNameTextBlock
// (None)

class UClass* USocialNameTextBlock::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialNameTextBlock");

	return Clss;
}


// SocialNameTextBlock SocialUMG.Default__SocialNameTextBlock
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialNameTextBlock* USocialNameTextBlock::GetDefaultObj()
{
	static class USocialNameTextBlock* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialNameTextBlock*>(USocialNameTextBlock::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.DesignerPreviewChatChannel
// (None)

class UClass* UDesignerPreviewChatChannel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DesignerPreviewChatChannel");

	return Clss;
}


// DesignerPreviewChatChannel SocialUMG.Default__DesignerPreviewChatChannel
// (Public, ClassDefaultObject, ArchetypeObject)

class UDesignerPreviewChatChannel* UDesignerPreviewChatChannel::GetDefaultObj()
{
	static class UDesignerPreviewChatChannel* Default = nullptr;

	if (!Default)
		Default = static_cast<UDesignerPreviewChatChannel*>(UDesignerPreviewChatChannel::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialListEntryBase
// (None)

class UClass* USocialListEntryBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialListEntryBase");

	return Clss;
}


// SocialListEntryBase SocialUMG.Default__SocialListEntryBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialListEntryBase* USocialListEntryBase::GetDefaultObj()
{
	static class USocialListEntryBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialListEntryBase*>(USocialListEntryBase::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialListInteractableEntryBase
// (None)

class UClass* USocialListInteractableEntryBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialListInteractableEntryBase");

	return Clss;
}


// SocialListInteractableEntryBase SocialUMG.Default__SocialListInteractableEntryBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialListInteractableEntryBase* USocialListInteractableEntryBase::GetDefaultObj()
{
	static class USocialListInteractableEntryBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialListInteractableEntryBase*>(USocialListInteractableEntryBase::StaticClass()->DefaultObject);

	return Default;
}


// Function SocialUMG.SocialListInteractableEntryBase.HandleMenuOpenChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsMenuOpen                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialListInteractableEntryBase::HandleMenuOpenChanged(bool bIsMenuOpen)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialListInteractableEntryBase", "HandleMenuOpenChanged");

	Params::USocialListInteractableEntryBase_HandleMenuOpenChanged_Params Parms{};

	Parms.bIsMenuOpen = bIsMenuOpen;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SocialUMG.SocialListInteractableEntryBase.HandleGetMenuContent
// (Final, Native, Protected)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* USocialListInteractableEntryBase::HandleGetMenuContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SocialListInteractableEntryBase", "HandleGetMenuContent");

	Params::USocialListInteractableEntryBase_HandleGetMenuContent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SocialUMG.SocialListUserEntryBase
// (None)

class UClass* USocialListUserEntryBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialListUserEntryBase");

	return Clss;
}


// SocialListUserEntryBase SocialUMG.Default__SocialListUserEntryBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialListUserEntryBase* USocialListUserEntryBase::GetDefaultObj()
{
	static class USocialListUserEntryBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialListUserEntryBase*>(USocialListUserEntryBase::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialUserListHeaderEntry
// (None)

class UClass* USocialUserListHeaderEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialUserListHeaderEntry");

	return Clss;
}


// SocialUserListHeaderEntry SocialUMG.Default__SocialUserListHeaderEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialUserListHeaderEntry* USocialUserListHeaderEntry::GetDefaultObj()
{
	static class USocialUserListHeaderEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialUserListHeaderEntry*>(USocialUserListHeaderEntry::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialUserListViewBase
// (None)

class UClass* USocialUserListViewBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialUserListViewBase");

	return Clss;
}


// SocialUserListViewBase SocialUMG.Default__SocialUserListViewBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialUserListViewBase* USocialUserListViewBase::GetDefaultObj()
{
	static class USocialUserListViewBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialUserListViewBase*>(USocialUserListViewBase::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialUserListView
// (None)

class UClass* USocialUserListView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialUserListView");

	return Clss;
}


// SocialUserListView SocialUMG.Default__SocialUserListView
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialUserListView* USocialUserListView::GetDefaultObj()
{
	static class USocialUserListView* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialUserListView*>(USocialUserListView::StaticClass()->DefaultObject);

	return Default;
}


// Class SocialUMG.SocialUserTreeView
// (None)

class UClass* USocialUserTreeView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SocialUserTreeView");

	return Clss;
}


// SocialUserTreeView SocialUMG.Default__SocialUserTreeView
// (Public, ClassDefaultObject, ArchetypeObject)

class USocialUserTreeView* USocialUserTreeView::GetDefaultObj()
{
	static class USocialUserTreeView* Default = nullptr;

	if (!Default)
		Default = static_cast<USocialUserTreeView*>(USocialUserTreeView::StaticClass()->DefaultObject);

	return Default;
}

}


