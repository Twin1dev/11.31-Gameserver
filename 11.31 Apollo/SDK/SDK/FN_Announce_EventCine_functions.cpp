#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Announce_EventCine.Announce_EventCine_C
// (Actor)

class UClass* AAnnounce_EventCine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Announce_EventCine_C");

	return Clss;
}


// Announce_EventCine_C Announce_EventCine.Default__Announce_EventCine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AAnnounce_EventCine_C* AAnnounce_EventCine_C::GetDefaultObj()
{
	static class AAnnounce_EventCine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AAnnounce_EventCine_C*>(AAnnounce_EventCine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Announce_EventCine.Announce_EventCine_C.OnClientAnnouncementStop
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void AAnnounce_EventCine_C::OnClientAnnouncementStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_EventCine_C", "OnClientAnnouncementStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Announce_EventCine.Announce_EventCine_C.OnPlayerSkippedCutscene
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void AAnnounce_EventCine_C::OnPlayerSkippedCutscene()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_EventCine_C", "OnPlayerSkippedCutscene");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Announce_EventCine.Announce_EventCine_C.HandleClientEvent_CinematicFinishedPlaying
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     EventSource                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     EventFocus                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            ClientEvent                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void AAnnounce_EventCine_C::HandleClientEvent_CinematicFinishedPlaying(class UObject* EventSource, class UObject* EventFocus, struct FFortClientEvent& ClientEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_EventCine_C", "HandleClientEvent_CinematicFinishedPlaying");

	Params::AAnnounce_EventCine_C_HandleClientEvent_CinematicFinishedPlaying_Params Parms{};

	Parms.EventSource = EventSource;
	Parms.EventFocus = EventFocus;
	Parms.ClientEvent = ClientEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Announce_EventCine.Announce_EventCine_C.HandleAllowSkip
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AAnnounce_EventCine_C::HandleAllowSkip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_EventCine_C", "HandleAllowSkip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Announce_EventCine.Announce_EventCine_C.OnEnteredCinematicState
// (Event, Protected, BlueprintEvent)
// Parameters:

void AAnnounce_EventCine_C::OnEnteredCinematicState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_EventCine_C", "OnEnteredCinematicState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Announce_EventCine.Announce_EventCine_C.ExecuteUbergraph_Announce_EventCine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_HandleClientEvent_EventSource                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_HandleClientEvent_EventFocus                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortClientEvent            K2Node_HandleClientEvent_ClientEvent                             (ConstParm, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class UFortMediaInfo*              CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AAnnounce_EventCine_C::ExecuteUbergraph_Announce_EventCine(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, class UObject* K2Node_HandleClientEvent_EventSource, class UObject* K2Node_HandleClientEvent_EventFocus, const struct FFortClientEvent& K2Node_HandleClientEvent_ClientEvent, bool Temp_bool_Has_Been_Initd_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UFortMediaInfo* CallFunc_SpawnObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Announce_EventCine_C", "ExecuteUbergraph_Announce_EventCine");

	Params::AAnnounce_EventCine_C_ExecuteUbergraph_Announce_EventCine_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.K2Node_HandleClientEvent_EventSource = K2Node_HandleClientEvent_EventSource;
	Parms.K2Node_HandleClientEvent_EventFocus = K2Node_HandleClientEvent_EventFocus;
	Parms.K2Node_HandleClientEvent_ClientEvent = K2Node_HandleClientEvent_ClientEvent;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


