#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ComOptionPreview.ComOptionPreview_C
// (None)

class UClass* UComOptionPreview_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComOptionPreview_C");

	return Clss;
}


// ComOptionPreview_C ComOptionPreview.Default__ComOptionPreview_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UComOptionPreview_C* UComOptionPreview_C::GetDefaultObj()
{
	static class UComOptionPreview_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UComOptionPreview_C*>(UComOptionPreview_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ComOptionPreview.ComOptionPreview_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UComOptionPreview_C::BP_OnEntryReleased()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComOptionPreview_C", "BP_OnEntryReleased");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ComOptionPreview.ComOptionPreview_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UComOptionPreview_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComOptionPreview_C", "BP_OnItemExpansionChanged");

	Params::UComOptionPreview_C_BP_OnItemExpansionChanged_Params Parms{};

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionPreview.ComOptionPreview_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UComOptionPreview_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComOptionPreview_C", "BP_OnItemSelectionChanged");

	Params::UComOptionPreview_C_BP_OnItemSelectionChanged_Params Parms{};

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionPreview.ComOptionPreview_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UComOptionPreview_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComOptionPreview_C", "OnListItemObjectSet");

	Params::UComOptionPreview_C_OnListItemObjectSet_Params Parms{};

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ComOptionPreview.ComOptionPreview_C.PlayHoveredAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UComOptionPreview_C::PlayHoveredAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComOptionPreview_C", "PlayHoveredAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ComOptionPreview.ComOptionPreview_C.PlayUnhoveredAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UComOptionPreview_C::PlayUnhoveredAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComOptionPreview_C", "PlayUnhoveredAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ComOptionPreview.ComOptionPreview_C.PlayVotingAnimation
// (Event, Public, BlueprintEvent)
// Parameters:

void UComOptionPreview_C::PlayVotingAnimation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComOptionPreview_C", "PlayVotingAnimation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ComOptionPreview.ComOptionPreview_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UComOptionPreview_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComOptionPreview_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComOptionPreview_C", "ExecuteUbergraph_ComOptionPreview");

	Params::UComOptionPreview_C_ExecuteUbergraph_ComOptionPreview_Params Parms{};

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


