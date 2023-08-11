#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function SocialUMG.SocialChatContainer.SendCurrentMessage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USocialChatContainer::SendCurrentMessage()
{
	static auto Func = Class->GetFunction("SocialChatContainer", "SendCurrentMessage");

	Params::USocialChatContainer_SendCurrentMessage_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SocialUMG.SocialChatContainer.OnChatOpenChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShouldBeOpen                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialChatContainer::OnChatOpenChanged(bool bShouldBeOpen)
{
	static auto Func = Class->GetFunction("SocialChatContainer", "OnChatOpenChanged");

	Params::USocialChatContainer_OnChatOpenChanged_Params Parms;

	Parms.bShouldBeOpen = bShouldBeOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialUMG.SocialChatContainer.HandleRightTabPressed
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USocialChatContainer::HandleRightTabPressed()
{
	static auto Func = Class->GetFunction("SocialChatContainer", "HandleRightTabPressed");

	Params::USocialChatContainer_HandleRightTabPressed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SocialUMG.SocialChatContainer.HandleLeftTabPressed
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USocialChatContainer::HandleLeftTabPressed()
{
	static auto Func = Class->GetFunction("SocialChatContainer", "HandleLeftTabPressed");

	Params::USocialChatContainer_HandleLeftTabPressed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SocialUMG.SocialChatContainer.FocusEditableText
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USocialChatContainer::FocusEditableText()
{
	static auto Func = Class->GetFunction("SocialChatContainer", "FocusEditableText");

	Params::USocialChatContainer_FocusEditableText_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SocialUMG.SocialChatContainer.DynamicHandleMessageTextCommitted
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FText                        MessageText                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETextCommit             CommitMethod                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialChatContainer::DynamicHandleMessageTextCommitted(class FText& MessageText, enum class ETextCommit CommitMethod)
{
	static auto Func = Class->GetFunction("SocialChatContainer", "DynamicHandleMessageTextCommitted");

	Params::USocialChatContainer_DynamicHandleMessageTextCommitted_Params Parms;

	Parms.MessageText = MessageText;
	Parms.CommitMethod = CommitMethod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SocialUMG.SocialChatMessageEntry.OnMessageSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialChatMessageEntry::OnMessageSet()
{
	static auto Func = Class->GetFunction("SocialChatMessageEntry", "OnMessageSet");

	Params::USocialChatMessageEntry_OnMessageSet_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialUMG.SocialChatMessageEntry.CanInteract
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USocialChatMessageEntry::CanInteract()
{
	static auto Func = Class->GetFunction("SocialChatMessageEntry", "CanInteract");

	Params::USocialChatMessageEntry_CanInteract_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SocialUMG.SocialGroupListEntry.HandleGetMenuContent
// (Final, Native, Protected)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* USocialGroupListEntry::HandleGetMenuContent()
{
	static auto Func = Class->GetFunction("SocialGroupListEntry", "HandleGetMenuContent");

	Params::USocialGroupListEntry_HandleGetMenuContent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SocialUMG.SocialInteractionButton.OnInteractionSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialInteractionButton::OnInteractionSet()
{
	static auto Func = Class->GetFunction("SocialInteractionButton", "OnInteractionSet");

	Params::USocialInteractionButton_OnInteractionSet_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialUMG.SocialInteractionButton.IsPlatformOnlyFriend
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USocialInteractionButton::IsPlatformOnlyFriend()
{
	static auto Func = Class->GetFunction("SocialInteractionButton", "IsPlatformOnlyFriend");

	Params::USocialInteractionButton_IsPlatformOnlyFriend_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SocialUMG.SocialInteractionButton.GetInteractionName
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName USocialInteractionButton::GetInteractionName()
{
	static auto Func = Class->GetFunction("SocialInteractionButton", "GetInteractionName");

	Params::USocialInteractionButton_GetInteractionName_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SocialUMG.SocialActionMenu.OnOpened
// (Event, Protected, BlueprintEvent)
// Parameters:

void USocialActionMenu::OnOpened()
{
	static auto Func = Class->GetFunction("SocialActionMenu", "OnOpened");

	Params::USocialActionMenu_OnOpened_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialUMG.SocialInteractionMenu.OnToggleConfirmation
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsVisible                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialInteractionMenu::OnToggleConfirmation(bool bIsVisible)
{
	static auto Func = Class->GetFunction("SocialInteractionMenu", "OnToggleConfirmation");

	Params::USocialInteractionMenu_OnToggleConfirmation_Params Parms;

	Parms.bIsVisible = bIsVisible;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SocialUMG.SocialInteractionMenu.HandleMenuAnchorOpenChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsOpen                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialInteractionMenu::HandleMenuAnchorOpenChanged(bool bIsOpen)
{
	static auto Func = Class->GetFunction("SocialInteractionMenu", "HandleMenuAnchorOpenChanged");

	Params::USocialInteractionMenu_HandleMenuAnchorOpenChanged_Params Parms;

	Parms.bIsOpen = bIsOpen;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SocialUMG.SocialInteractionMenu.GetFirstEntryToCenter
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* USocialInteractionMenu::GetFirstEntryToCenter()
{
	static auto Func = Class->GetFunction("SocialInteractionMenu", "GetFirstEntryToCenter");

	Params::USocialInteractionMenu_GetFirstEntryToCenter_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SocialUMG.SocialListInteractableEntryBase.HandleMenuOpenChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsMenuOpen                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USocialListInteractableEntryBase::HandleMenuOpenChanged(bool bIsMenuOpen)
{
	static auto Func = Class->GetFunction("SocialListInteractableEntryBase", "HandleMenuOpenChanged");

	Params::USocialListInteractableEntryBase_HandleMenuOpenChanged_Params Parms;

	Parms.bIsMenuOpen = bIsMenuOpen;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SocialUMG.SocialListInteractableEntryBase.HandleGetMenuContent
// (Final, Native, Protected)
// Parameters:
// class UWidget*                     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UWidget* USocialListInteractableEntryBase::HandleGetMenuContent()
{
	static auto Func = Class->GetFunction("SocialListInteractableEntryBase", "HandleGetMenuContent");

	Params::USocialListInteractableEntryBase_HandleGetMenuContent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
