#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaServerShutdownWidget.AthenaServerShutdownWidget_C
// (None)

class UClass* UAthenaServerShutdownWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaServerShutdownWidget_C");

	return Clss;
}


// AthenaServerShutdownWidget_C AthenaServerShutdownWidget.Default__AthenaServerShutdownWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaServerShutdownWidget_C* UAthenaServerShutdownWidget_C::GetDefaultObj()
{
	static class UAthenaServerShutdownWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaServerShutdownWidget_C*>(UAthenaServerShutdownWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaServerShutdownWidget.AthenaServerShutdownWidget_C.SetCountdownText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              RemainingTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UAthenaServerShutdownWidget_C::SetCountdownText(float RemainingTime, int32 CallFunc_Round_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaServerShutdownWidget_C", "SetCountdownText");

	Params::UAthenaServerShutdownWidget_C_SetCountdownText_Params Parms{};

	Parms.RemainingTime = RemainingTime;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaServerShutdownWidget.AthenaServerShutdownWidget_C.OnUpdateCountdown
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              RemainingTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaServerShutdownWidget_C::OnUpdateCountdown(float RemainingTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaServerShutdownWidget_C", "OnUpdateCountdown");

	Params::UAthenaServerShutdownWidget_C_OnUpdateCountdown_Params Parms{};

	Parms.RemainingTime = RemainingTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaServerShutdownWidget.AthenaServerShutdownWidget_C.OnStartShowing
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              RemainingTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaServerShutdownWidget_C::OnStartShowing(float RemainingTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaServerShutdownWidget_C", "OnStartShowing");

	Params::UAthenaServerShutdownWidget_C_OnStartShowing_Params Parms{};

	Parms.RemainingTime = RemainingTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaServerShutdownWidget.AthenaServerShutdownWidget_C.OnStopShowing
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              RemainingTime                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaServerShutdownWidget_C::OnStopShowing(float RemainingTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaServerShutdownWidget_C", "OnStopShowing");

	Params::UAthenaServerShutdownWidget_C_OnStopShowing_Params Parms{};

	Parms.RemainingTime = RemainingTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaServerShutdownWidget.AthenaServerShutdownWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaServerShutdownWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaServerShutdownWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaServerShutdownWidget.AthenaServerShutdownWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaServerShutdownWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaServerShutdownWidget_C", "PreConstruct");

	Params::UAthenaServerShutdownWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaServerShutdownWidget.AthenaServerShutdownWidget_C.ExecuteUbergraph_AthenaServerShutdownWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_RemainingTime                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_RemainingTime_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_RemainingTime_2                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaServerShutdownWidget_C::ExecuteUbergraph_AthenaServerShutdownWidget(int32 EntryPoint, float K2Node_Event_RemainingTime, float K2Node_Event_RemainingTime_1, bool K2Node_Event_IsDesignTime, float K2Node_Event_RemainingTime_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaServerShutdownWidget_C", "ExecuteUbergraph_AthenaServerShutdownWidget");

	Params::UAthenaServerShutdownWidget_C_ExecuteUbergraph_AthenaServerShutdownWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_RemainingTime = K2Node_Event_RemainingTime;
	Parms.K2Node_Event_RemainingTime_1 = K2Node_Event_RemainingTime_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_RemainingTime_2 = K2Node_Event_RemainingTime_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


