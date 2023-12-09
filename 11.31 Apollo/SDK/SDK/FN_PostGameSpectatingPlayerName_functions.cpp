#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PostGameSpectatingPlayerName.PostGameSpectatingPlayerName_C
// (None)

class UClass* UPostGameSpectatingPlayerName_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PostGameSpectatingPlayerName_C");

	return Clss;
}


// PostGameSpectatingPlayerName_C PostGameSpectatingPlayerName.Default__PostGameSpectatingPlayerName_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPostGameSpectatingPlayerName_C* UPostGameSpectatingPlayerName_C::GetDefaultObj()
{
	static class UPostGameSpectatingPlayerName_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPostGameSpectatingPlayerName_C*>(UPostGameSpectatingPlayerName_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PostGameSpectatingPlayerName.PostGameSpectatingPlayerName_C.ShowWidget
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      PlayerID                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UPostGameSpectatingPlayerName_C::ShowWidget(const class FString& PlayerName, const class FString& PlayerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PostGameSpectatingPlayerName_C", "ShowWidget");

	Params::UPostGameSpectatingPlayerName_C_ShowWidget_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.PlayerID = PlayerID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PostGameSpectatingPlayerName.PostGameSpectatingPlayerName_C.ExecuteUbergraph_PostGameSpectatingPlayerName
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_PlayerName                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_Event_PlayerID                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

void UPostGameSpectatingPlayerName_C::ExecuteUbergraph_PostGameSpectatingPlayerName(int32 EntryPoint, const class FString& K2Node_Event_PlayerName, const class FString& K2Node_Event_PlayerID, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PostGameSpectatingPlayerName_C", "ExecuteUbergraph_PostGameSpectatingPlayerName");

	Params::UPostGameSpectatingPlayerName_C_ExecuteUbergraph_PostGameSpectatingPlayerName_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PlayerName = K2Node_Event_PlayerName;
	Parms.K2Node_Event_PlayerID = K2Node_Event_PlayerID;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


