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


// Function ComOptionDetails.ComOptionDetails_C.PlayeFadeOut
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComOptionDetails_C::PlayeFadeOut(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("ComOptionDetails_C", "PlayeFadeOut");

	Params::UComOptionDetails_C_PlayeFadeOut_Params Parms;

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionDetails.ComOptionDetails_C.PlayeFadeIn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComOptionDetails_C::PlayeFadeIn(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("ComOptionDetails_C", "PlayeFadeIn");

	Params::UComOptionDetails_C_PlayeFadeIn_Params Parms;

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionDetails.ComOptionDetails_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UComOptionDetails_C::BP_OnEntryReleased()
{
	static auto Func = Class->GetFunction("ComOptionDetails_C", "BP_OnEntryReleased");

	Params::UComOptionDetails_C_BP_OnEntryReleased_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionDetails.ComOptionDetails_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UComOptionDetails_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto Func = Class->GetFunction("ComOptionDetails_C", "BP_OnItemExpansionChanged");

	Params::UComOptionDetails_C_BP_OnItemExpansionChanged_Params Parms;

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionDetails.ComOptionDetails_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UComOptionDetails_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto Func = Class->GetFunction("ComOptionDetails_C", "BP_OnItemSelectionChanged");

	Params::UComOptionDetails_C_BP_OnItemSelectionChanged_Params Parms;

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionDetails.ComOptionDetails_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComOptionDetails_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto Func = Class->GetFunction("ComOptionDetails_C", "OnListItemObjectSet");

	Params::UComOptionDetails_C_OnListItemObjectSet_Params Parms;

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionDetails.ComOptionDetails_C.FadeOutFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UComOptionDetails_C::FadeOutFinished()
{
	static auto Func = Class->GetFunction("ComOptionDetails_C", "FadeOutFinished");

	Params::UComOptionDetails_C_FadeOutFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionDetails.ComOptionDetails_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UComOptionDetails_C::Construct()
{
	static auto Func = Class->GetFunction("ComOptionDetails_C", "Construct");

	Params::UComOptionDetails_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionDetails.ComOptionDetails_C.ExecuteUbergraph_ComOptionDetails
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UComOptionDetails_C::ExecuteUbergraph_ComOptionDetails(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static auto Func = Class->GetFunction("ComOptionDetails_C", "ExecuteUbergraph_ComOptionDetails");

	Params::UComOptionDetails_C_ExecuteUbergraph_ComOptionDetails_Params Parms;

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
