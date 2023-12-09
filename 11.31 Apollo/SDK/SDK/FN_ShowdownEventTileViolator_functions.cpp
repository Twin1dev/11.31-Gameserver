#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ShowdownEventTileViolator.ShowdownEventTileViolator_C
// (None)

class UClass* UShowdownEventTileViolator_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ShowdownEventTileViolator_C");

	return Clss;
}


// ShowdownEventTileViolator_C ShowdownEventTileViolator.Default__ShowdownEventTileViolator_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShowdownEventTileViolator_C* UShowdownEventTileViolator_C::GetDefaultObj()
{
	static class UShowdownEventTileViolator_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShowdownEventTileViolator_C*>(UShowdownEventTileViolator_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ShowdownEventTileViolator.ShowdownEventTileViolator_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UShowdownEventTileViolator_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTileViolator_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownEventTileViolator.ShowdownEventTileViolator_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UShowdownEventTileViolator_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTileViolator_C", "RefreshDataBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownEventTileViolator.ShowdownEventTileViolator_C.RefreshViolatorData
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UShowdownEventTileViolator_C::RefreshViolatorData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTileViolator_C", "RefreshViolatorData");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ShowdownEventTileViolator.ShowdownEventTileViolator_C.ExecuteUbergraph_ShowdownEventTileViolator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetTournamentNextEvent_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEventId_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortShowdownEventState CallFunc_GetEventTimeState_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetWindowRoundDisplayString_ReturnValue                 (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// bool                               CallFunc_DoDisplayRoundNumber_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UShowdownEventTileViolator_C::ExecuteUbergraph_ShowdownEventTileViolator(int32 EntryPoint, int32 Temp_int_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, const class FString& CallFunc_GetTournamentNextEvent_ReturnValue, const class FString& CallFunc_GetEventId_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_2, enum class EFortShowdownEventState CallFunc_GetEventTimeState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_GetWindowRoundDisplayString_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, bool CallFunc_DoDisplayRoundNumber_ReturnValue, int32 K2Node_Select_Default_1, int32 K2Node_Select_Default_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ShowdownEventTileViolator_C", "ExecuteUbergraph_ShowdownEventTileViolator");

	Params::UShowdownEventTileViolator_C_ExecuteUbergraph_ShowdownEventTileViolator_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_GetTournamentNextEvent_ReturnValue = CallFunc_GetTournamentNextEvent_ReturnValue;
	Parms.CallFunc_GetEventId_ReturnValue = CallFunc_GetEventId_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetEventTimeState_ReturnValue = CallFunc_GetEventTimeState_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetWindowRoundDisplayString_ReturnValue = CallFunc_GetWindowRoundDisplayString_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_DoDisplayRoundNumber_ReturnValue = CallFunc_DoDisplayRoundNumber_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


