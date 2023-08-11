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


// Function ComOptionVote.ComOptionVote_C.PlayFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComOptionVote_C::PlayFadeOut(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("ComOptionVote_C", "PlayFadeOut");

	Params::UComOptionVote_C_PlayFadeOut_Params Parms;

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionVote.ComOptionVote_C.PlayFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComOptionVote_C::PlayFadeIn(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("ComOptionVote_C", "PlayFadeIn");

	Params::UComOptionVote_C_PlayFadeIn_Params Parms;

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionVote.ComOptionVote_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UComOptionVote_C::BP_OnEntryReleased()
{
	static auto Func = Class->GetFunction("ComOptionVote_C", "BP_OnEntryReleased");

	Params::UComOptionVote_C_BP_OnEntryReleased_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionVote.ComOptionVote_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UComOptionVote_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto Func = Class->GetFunction("ComOptionVote_C", "BP_OnItemExpansionChanged");

	Params::UComOptionVote_C_BP_OnItemExpansionChanged_Params Parms;

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionVote.ComOptionVote_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UComOptionVote_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto Func = Class->GetFunction("ComOptionVote_C", "BP_OnItemSelectionChanged");

	Params::UComOptionVote_C_BP_OnItemSelectionChanged_Params Parms;

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionVote.ComOptionVote_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComOptionVote_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto Func = Class->GetFunction("ComOptionVote_C", "OnListItemObjectSet");

	Params::UComOptionVote_C_OnListItemObjectSet_Params Parms;

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionVote.ComOptionVote_C.FadeOutFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComOptionVote_C::FadeOutFinished()
{
	static auto Func = Class->GetFunction("ComOptionVote_C", "FadeOutFinished");

	Params::UComOptionVote_C_FadeOutFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionVote.ComOptionVote_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UComOptionVote_C::Construct()
{
	static auto Func = Class->GetFunction("ComOptionVote_C", "Construct");

	Params::UComOptionVote_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionVote.ComOptionVote_C.ExecuteUbergraph_ComOptionVote
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UComOptionVote_C::ExecuteUbergraph_ComOptionVote(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("ComOptionVote_C", "ExecuteUbergraph_ComOptionVote");

	Params::UComOptionVote_C_ExecuteUbergraph_ComOptionVote_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
