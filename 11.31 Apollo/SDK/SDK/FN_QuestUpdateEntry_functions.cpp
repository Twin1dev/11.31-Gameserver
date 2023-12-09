#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass QuestUpdateEntry.QuestUpdateEntry_C
// (None)

class UClass* UQuestUpdateEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestUpdateEntry_C");

	return Clss;
}


// QuestUpdateEntry_C QuestUpdateEntry.Default__QuestUpdateEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQuestUpdateEntry_C* UQuestUpdateEntry_C::GetDefaultObj()
{
	static class UQuestUpdateEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestUpdateEntry_C*>(UQuestUpdateEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestUpdateEntry.QuestUpdateEntry_C.StartQuestIntroBP
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestUpdateEntry_C::StartQuestIntroBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestUpdateEntry_C", "StartQuestIntroBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestUpdateEntry.QuestUpdateEntry_C.SetupAsAnnouncement
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestUpdateEntry_C::SetupAsAnnouncement()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestUpdateEntry_C", "SetupAsAnnouncement");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestUpdateEntry.QuestUpdateEntry_C.QuestItemSet
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortQuestItem*              QuestItemToCheck                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestUpdateEntry_C::QuestItemSet(class UFortQuestItem* QuestItemToCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestUpdateEntry_C", "QuestItemSet");

	Params::UQuestUpdateEntry_C_QuestItemSet_Params Parms{};

	Parms.QuestItemToCheck = QuestItemToCheck;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestUpdateEntry.QuestUpdateEntry_C.StartQuestOutro
// (Event, Public, BlueprintEvent)
// Parameters:

void UQuestUpdateEntry_C::StartQuestOutro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestUpdateEntry_C", "StartQuestOutro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestUpdateEntry.QuestUpdateEntry_C.StartQuestIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void UQuestUpdateEntry_C::StartQuestIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestUpdateEntry_C", "StartQuestIntro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestUpdateEntry.QuestUpdateEntry_C.ExecuteUbergraph_QuestUpdateEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_GetContentSlot_ReturnValue                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBorderSlot*                 K2Node_DynamicCast_AsBorder_Slot                                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortQuestItem*              K2Node_Event_QuestItemToCheck                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestItemDefinition*    CallFunc_GetQuestDefinitionBP_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)

void UQuestUpdateEntry_C::ExecuteUbergraph_QuestUpdateEntry(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1, class UPanelSlot* CallFunc_GetContentSlot_ReturnValue, class UBorderSlot* K2Node_DynamicCast_AsBorder_Slot, bool K2Node_DynamicCast_bSuccess, class UFortQuestItem* K2Node_Event_QuestItemToCheck, class UFortQuestItemDefinition* CallFunc_GetQuestDefinitionBP_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestUpdateEntry_C", "ExecuteUbergraph_QuestUpdateEntry");

	Params::UQuestUpdateEntry_C_ExecuteUbergraph_QuestUpdateEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue = CallFunc_SlotAsVerticalBoxSlot_ReturnValue;
	Parms.CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1 = CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1;
	Parms.CallFunc_GetContentSlot_ReturnValue = CallFunc_GetContentSlot_ReturnValue;
	Parms.K2Node_DynamicCast_AsBorder_Slot = K2Node_DynamicCast_AsBorder_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_QuestItemToCheck = K2Node_Event_QuestItemToCheck;
	Parms.CallFunc_GetQuestDefinitionBP_ReturnValue = CallFunc_GetQuestDefinitionBP_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestUpdateEntry.QuestUpdateEntry_C.AllQuestUpdatesFinished_0__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UQuestUpdateEntry_C*         UpdateWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestUpdateEntry_C::AllQuestUpdatesFinished_0__DelegateSignature(class UQuestUpdateEntry_C* UpdateWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestUpdateEntry_C", "AllQuestUpdatesFinished_0__DelegateSignature");

	Params::UQuestUpdateEntry_C_AllQuestUpdatesFinished_0__DelegateSignature_Params Parms{};

	Parms.UpdateWidget = UpdateWidget;

	UObject::ProcessEvent(Func, &Parms);

}

}


