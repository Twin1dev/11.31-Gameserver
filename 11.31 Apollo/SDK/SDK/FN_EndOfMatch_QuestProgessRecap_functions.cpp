#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EndOfMatch_QuestProgessRecap.EndOfMatch_QuestProgessRecap_C
// (None)

class UClass* UEndOfMatch_QuestProgessRecap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EndOfMatch_QuestProgessRecap_C");

	return Clss;
}


// EndOfMatch_QuestProgessRecap_C EndOfMatch_QuestProgessRecap.Default__EndOfMatch_QuestProgessRecap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEndOfMatch_QuestProgessRecap_C* UEndOfMatch_QuestProgessRecap_C::GetDefaultObj()
{
	static class UEndOfMatch_QuestProgessRecap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEndOfMatch_QuestProgessRecap_C*>(UEndOfMatch_QuestProgessRecap_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EndOfMatch_QuestProgessRecap.EndOfMatch_QuestProgessRecap_C.RunIntroAnim
// (Event, Public, BlueprintEvent)
// Parameters:

void UEndOfMatch_QuestProgessRecap_C::RunIntroAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EndOfMatch_QuestProgessRecap_C", "RunIntroAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EndOfMatch_QuestProgessRecap.EndOfMatch_QuestProgessRecap_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UEndOfMatch_QuestProgessRecap_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EndOfMatch_QuestProgessRecap_C", "PreConstruct");

	Params::UEndOfMatch_QuestProgessRecap_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EndOfMatch_QuestProgessRecap.EndOfMatch_QuestProgessRecap_C.ExecuteUbergraph_EndOfMatch_QuestProgessRecap
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UEndOfMatch_QuestProgessRecap_C::ExecuteUbergraph_EndOfMatch_QuestProgessRecap(int32 EntryPoint, int32 Temp_int_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool K2Node_Event_IsDesignTime, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EndOfMatch_QuestProgessRecap_C", "ExecuteUbergraph_EndOfMatch_QuestProgessRecap");

	Params::UEndOfMatch_QuestProgessRecap_C_ExecuteUbergraph_EndOfMatch_QuestProgessRecap_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


