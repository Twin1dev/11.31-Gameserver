#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass KillerKillsWidget.KillerKillsWidget_C
// (None)

class UClass* UKillerKillsWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KillerKillsWidget_C");

	return Clss;
}


// KillerKillsWidget_C KillerKillsWidget.Default__KillerKillsWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKillerKillsWidget_C* UKillerKillsWidget_C::GetDefaultObj()
{
	static class UKillerKillsWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKillerKillsWidget_C*>(UKillerKillsWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KillerKillsWidget.KillerKillsWidget_C.Set Num Of Kills
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Num_Of_Kills                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKillerKillsWidget_C::Set_Num_Of_Kills(int32 Num_Of_Kills)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillerKillsWidget_C", "Set Num Of Kills");

	Params::UKillerKillsWidget_C_Set_Num_Of_Kills_Params Parms{};

	Parms.Num_Of_Kills = Num_Of_Kills;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KillerKillsWidget.KillerKillsWidget_C.ExecuteUbergraph_KillerKillsWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Num_Of_Kills                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UKillerKillsWidget_C::ExecuteUbergraph_KillerKillsWidget(int32 EntryPoint, int32 K2Node_CustomEvent_Num_Of_Kills, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillerKillsWidget_C", "ExecuteUbergraph_KillerKillsWidget");

	Params::UKillerKillsWidget_C_ExecuteUbergraph_KillerKillsWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Num_Of_Kills = K2Node_CustomEvent_Num_Of_Kills;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


