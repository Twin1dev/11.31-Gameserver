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


// Function ComOptionPreview.ComOptionPreview_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UComOptionPreview_C::BP_OnEntryReleased()
{
	static auto Func = Class->GetFunction("ComOptionPreview_C", "BP_OnEntryReleased");

	Params::UComOptionPreview_C_BP_OnEntryReleased_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionPreview.ComOptionPreview_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UComOptionPreview_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto Func = Class->GetFunction("ComOptionPreview_C", "BP_OnItemExpansionChanged");

	Params::UComOptionPreview_C_BP_OnItemExpansionChanged_Params Parms;

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionPreview.ComOptionPreview_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UComOptionPreview_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto Func = Class->GetFunction("ComOptionPreview_C", "BP_OnItemSelectionChanged");

	Params::UComOptionPreview_C_BP_OnItemSelectionChanged_Params Parms;

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionPreview.ComOptionPreview_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComOptionPreview_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto Func = Class->GetFunction("ComOptionPreview_C", "OnListItemObjectSet");

	Params::UComOptionPreview_C_OnListItemObjectSet_Params Parms;

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionPreview.ComOptionPreview_C.PlayHoveredAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UComOptionPreview_C::PlayHoveredAnimation()
{
	static auto Func = Class->GetFunction("ComOptionPreview_C", "PlayHoveredAnimation");

	Params::UComOptionPreview_C_PlayHoveredAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionPreview.ComOptionPreview_C.PlayUnhoveredAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UComOptionPreview_C::PlayUnhoveredAnimation()
{
	static auto Func = Class->GetFunction("ComOptionPreview_C", "PlayUnhoveredAnimation");

	Params::UComOptionPreview_C_PlayUnhoveredAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionPreview.ComOptionPreview_C.PlayVotingAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UComOptionPreview_C::PlayVotingAnimation()
{
	static auto Func = Class->GetFunction("ComOptionPreview_C", "PlayVotingAnimation");

	Params::UComOptionPreview_C_PlayVotingAnimation_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionPreview.ComOptionPreview_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UComOptionPreview_C::Construct()
{
	static auto Func = Class->GetFunction("ComOptionPreview_C", "Construct");

	Params::UComOptionPreview_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionPreview.ComOptionPreview_C.ExecuteUbergraph_ComOptionPreview
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComOptionPreview_C::ExecuteUbergraph_ComOptionPreview(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3)
{
	static auto Func = Class->GetFunction("ComOptionPreview_C", "ExecuteUbergraph_ComOptionPreview");

	Params::UComOptionPreview_C_ExecuteUbergraph_ComOptionPreview_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
