#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Creative_Listener_PlayerEmote_Interface.Creative_Listener_PlayerEmote_Interface_C
// (None)

class UClass* ICreative_Listener_PlayerEmote_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Creative_Listener_PlayerEmote_Interface_C");

	return Clss;
}


// Creative_Listener_PlayerEmote_Interface_C Creative_Listener_PlayerEmote_Interface.Default__Creative_Listener_PlayerEmote_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ICreative_Listener_PlayerEmote_Interface_C* ICreative_Listener_PlayerEmote_Interface_C::GetDefaultObj()
{
	static class ICreative_Listener_PlayerEmote_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ICreative_Listener_PlayerEmote_Interface_C*>(ICreative_Listener_PlayerEmote_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Creative_Listener_PlayerEmote_Interface.Creative_Listener_PlayerEmote_Interface_C.OnPlayerEmoteEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   PlayerEmoting                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ICreative_Listener_PlayerEmote_Interface_C::OnPlayerEmoteEnded(class AFortPawn* PlayerEmoting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Listener_PlayerEmote_Interface_C", "OnPlayerEmoteEnded");

	Params::ICreative_Listener_PlayerEmote_Interface_C_OnPlayerEmoteEnded_Params Parms{};

	Parms.PlayerEmoting = PlayerEmoting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Creative_Listener_PlayerEmote_Interface.Creative_Listener_PlayerEmote_Interface_C.OnPlayerEmoteStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   PlayerEmoting                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ICreative_Listener_PlayerEmote_Interface_C::OnPlayerEmoteStarted(class AFortPawn* PlayerEmoting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Listener_PlayerEmote_Interface_C", "OnPlayerEmoteStarted");

	Params::ICreative_Listener_PlayerEmote_Interface_C_OnPlayerEmoteStarted_Params Parms{};

	Parms.PlayerEmoting = PlayerEmoting;

	UObject::ProcessEvent(Func, &Parms);

}

}


