#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C
// (None)

class UClass* UAthenaPlayersLeftWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaPlayersLeftWidget_C");

	return Clss;
}


// AthenaPlayersLeftWidget_C AthenaPlayersLeftWidget.Default__AthenaPlayersLeftWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaPlayersLeftWidget_C* UAthenaPlayersLeftWidget_C::GetDefaultObj()
{
	static class UAthenaPlayersLeftWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaPlayersLeftWidget_C*>(UAthenaPlayersLeftWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C.SetPlayersLeftText
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        PlayersText                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaPlayersLeftWidget_C::SetPlayersLeftText(class FText& PlayersText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaPlayersLeftWidget_C", "SetPlayersLeftText");

	Params::UAthenaPlayersLeftWidget_C_SetPlayersLeftText_Params Parms{};

	Parms.PlayersText = PlayersText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaPlayersLeftWidget.AthenaPlayersLeftWidget_C.ExecuteUbergraph_AthenaPlayersLeftWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_PlayersText                                         (ConstParm)

void UAthenaPlayersLeftWidget_C::ExecuteUbergraph_AthenaPlayersLeftWidget(int32 EntryPoint, class FText K2Node_Event_PlayersText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaPlayersLeftWidget_C", "ExecuteUbergraph_AthenaPlayersLeftWidget");

	Params::UAthenaPlayersLeftWidget_C_ExecuteUbergraph_AthenaPlayersLeftWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PlayersText = K2Node_Event_PlayersText;

	UObject::ProcessEvent(Func, &Parms);

}

}


