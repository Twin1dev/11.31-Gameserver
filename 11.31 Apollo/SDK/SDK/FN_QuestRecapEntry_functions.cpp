#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass QuestRecapEntry.QuestRecapEntry_C
// (None)

class UClass* UQuestRecapEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("QuestRecapEntry_C");

	return Clss;
}


// QuestRecapEntry_C QuestRecapEntry.Default__QuestRecapEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UQuestRecapEntry_C* UQuestRecapEntry_C::GetDefaultObj()
{
	static class UQuestRecapEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UQuestRecapEntry_C*>(UQuestRecapEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function QuestRecapEntry.QuestRecapEntry_C.UpdateProgressBar
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              StartingPercent                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              EndingPercent                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRecapEntry_C::UpdateProgressBar(float StartingPercent, float EndingPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRecapEntry_C", "UpdateProgressBar");

	Params::UQuestRecapEntry_C_UpdateProgressBar_Params Parms{};

	Parms.StartingPercent = StartingPercent;
	Parms.EndingPercent = EndingPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestRecapEntry.QuestRecapEntry_C.EventSetBarVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              StartValue                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewValue                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UQuestRecapEntry_C::EventSetBarVisuals(float StartValue, float NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRecapEntry_C", "EventSetBarVisuals");

	Params::UQuestRecapEntry_C_EventSetBarVisuals_Params Parms{};

	Parms.StartValue = StartValue;
	Parms.NewValue = NewValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestRecapEntry.QuestRecapEntry_C.EventFillComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UQuestRecapEntry_C::EventFillComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRecapEntry_C", "EventFillComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestRecapEntry.QuestRecapEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UQuestRecapEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRecapEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestRecapEntry.QuestRecapEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UQuestRecapEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRecapEntry_C", "PreConstruct");

	Params::UQuestRecapEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function QuestRecapEntry.QuestRecapEntry_C.StartOutroAnim
// (Event, Public, BlueprintEvent)
// Parameters:

void UQuestRecapEntry_C::StartOutroAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRecapEntry_C", "StartOutroAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestRecapEntry.QuestRecapEntry_C.StartIntroAnim
// (Event, Public, BlueprintEvent)
// Parameters:

void UQuestRecapEntry_C::StartIntroAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRecapEntry_C", "StartIntroAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function QuestRecapEntry.QuestRecapEntry_C.ExecuteUbergraph_QuestRecapEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_StartValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_StartingPercent                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_EndingPercent                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UQuestRecapEntry_C::ExecuteUbergraph_QuestRecapEntry(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2, bool K2Node_Event_IsDesignTime, float K2Node_CustomEvent_StartValue, float K2Node_CustomEvent_NewValue, float K2Node_Event_StartingPercent, float K2Node_Event_EndingPercent, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("QuestRecapEntry_C", "ExecuteUbergraph_QuestRecapEntry");

	Params::UQuestRecapEntry_C_ExecuteUbergraph_QuestRecapEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_StartValue = K2Node_CustomEvent_StartValue;
	Parms.K2Node_CustomEvent_NewValue = K2Node_CustomEvent_NewValue;
	Parms.K2Node_Event_StartingPercent = K2Node_Event_StartingPercent;
	Parms.K2Node_Event_EndingPercent = K2Node_Event_EndingPercent;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}

}


