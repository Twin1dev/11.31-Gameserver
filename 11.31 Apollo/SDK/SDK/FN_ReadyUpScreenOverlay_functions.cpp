#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ReadyUpScreenOverlay.ReadyUpScreenOverlay_C
// (None)

class UClass* UReadyUpScreenOverlay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReadyUpScreenOverlay_C");

	return Clss;
}


// ReadyUpScreenOverlay_C ReadyUpScreenOverlay.Default__ReadyUpScreenOverlay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReadyUpScreenOverlay_C* UReadyUpScreenOverlay_C::GetDefaultObj()
{
	static class UReadyUpScreenOverlay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReadyUpScreenOverlay_C*>(UReadyUpScreenOverlay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ReadyUpScreenOverlay.ReadyUpScreenOverlay_C.UpdateExitToLobbyCountdownText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CountdownValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Round_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UReadyUpScreenOverlay_C::UpdateExitToLobbyCountdownText(float CountdownValue, int32 CallFunc_Round_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReadyUpScreenOverlay_C", "UpdateExitToLobbyCountdownText");

	Params::UReadyUpScreenOverlay_C_UpdateExitToLobbyCountdownText_Params Parms{};

	Parms.CountdownValue = CountdownValue;
	Parms.CallFunc_Round_ReturnValue = CallFunc_Round_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReadyUpScreenOverlay.ReadyUpScreenOverlay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UReadyUpScreenOverlay_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReadyUpScreenOverlay_C", "PreConstruct");

	Params::UReadyUpScreenOverlay_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReadyUpScreenOverlay.ReadyUpScreenOverlay_C.OnCountdownProgressed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UReadyUpScreenOverlay_C::OnCountdownProgressed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReadyUpScreenOverlay_C", "OnCountdownProgressed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReadyUpScreenOverlay.ReadyUpScreenOverlay_C.OnReadyUp
// (Event, Protected, BlueprintEvent)
// Parameters:

void UReadyUpScreenOverlay_C::OnReadyUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReadyUpScreenOverlay_C", "OnReadyUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReadyUpScreenOverlay.ReadyUpScreenOverlay_C.OnCancelReadyUp
// (Event, Protected, BlueprintEvent)
// Parameters:

void UReadyUpScreenOverlay_C::OnCancelReadyUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReadyUpScreenOverlay_C", "OnCancelReadyUp");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReadyUpScreenOverlay.ReadyUpScreenOverlay_C.OnMatchmakingStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UReadyUpScreenOverlay_C::OnMatchmakingStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReadyUpScreenOverlay_C", "OnMatchmakingStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReadyUpScreenOverlay.ReadyUpScreenOverlay_C.OnMatchmakingFinished
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UReadyUpScreenOverlay_C::OnMatchmakingFinished(bool bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReadyUpScreenOverlay_C", "OnMatchmakingFinished");

	Params::UReadyUpScreenOverlay_C_OnMatchmakingFinished_Params Parms{};

	Parms.bSuccess = bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReadyUpScreenOverlay.ReadyUpScreenOverlay_C.OnExitToLobbyCountdownProgressed
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              CountdownValue                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReadyUpScreenOverlay_C::OnExitToLobbyCountdownProgressed(float CountdownValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReadyUpScreenOverlay_C", "OnExitToLobbyCountdownProgressed");

	Params::UReadyUpScreenOverlay_C_OnExitToLobbyCountdownProgressed_Params Parms{};

	Parms.CountdownValue = CountdownValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReadyUpScreenOverlay.ReadyUpScreenOverlay_C.OnCountdownStarted
// (Event, Protected, BlueprintEvent)
// Parameters:

void UReadyUpScreenOverlay_C::OnCountdownStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReadyUpScreenOverlay_C", "OnCountdownStarted");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReadyUpScreenOverlay.ReadyUpScreenOverlay_C.ExecuteUbergraph_ReadyUpScreenOverlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAthenaMatchmakingWidgetLegacy*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                CallFunc_AddChildToOverlay_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bSuccess                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_CountdownValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReadyUpScreenOverlay_C::ExecuteUbergraph_ReadyUpScreenOverlay(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFortAthenaMatchmakingWidgetLegacy* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bSuccess, float K2Node_Event_CountdownValue, class FText CallFunc_GetText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReadyUpScreenOverlay_C", "ExecuteUbergraph_ReadyUpScreenOverlay");

	Params::UReadyUpScreenOverlay_C_ExecuteUbergraph_ReadyUpScreenOverlay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToOverlay_ReturnValue = CallFunc_AddChildToOverlay_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_bSuccess = K2Node_Event_bSuccess;
	Parms.K2Node_Event_CountdownValue = K2Node_Event_CountdownValue;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


