#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function Creative_Listener_PlayerEmote_Interface.Creative_Listener_PlayerEmote_Interface_C.OnPlayerEmoteEnded
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   PlayerEmoting                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ICreative_Listener_PlayerEmote_Interface_C::OnPlayerEmoteEnded(class AFortPawn* PlayerEmoting)
{
	static auto Func = Class->GetFunction("Creative_Listener_PlayerEmote_Interface_C", "OnPlayerEmoteEnded");

	Params::ICreative_Listener_PlayerEmote_Interface_C_OnPlayerEmoteEnded_Params Parms;

	Parms.PlayerEmoting = PlayerEmoting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Creative_Listener_PlayerEmote_Interface.Creative_Listener_PlayerEmote_Interface_C.OnPlayerEmoteStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   PlayerEmoting                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ICreative_Listener_PlayerEmote_Interface_C::OnPlayerEmoteStarted(class AFortPawn* PlayerEmoting)
{
	static auto Func = Class->GetFunction("Creative_Listener_PlayerEmote_Interface_C", "OnPlayerEmoteStarted");

	Params::ICreative_Listener_PlayerEmote_Interface_C_OnPlayerEmoteStarted_Params Parms;

	Parms.PlayerEmoting = PlayerEmoting;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
