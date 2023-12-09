#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C
// (None)

class UClass* ULobbyPlayerAddPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LobbyPlayerAddPlayer_C");

	return Clss;
}


// LobbyPlayerAddPlayer_C LobbyPlayerAddPlayer.Default__LobbyPlayerAddPlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULobbyPlayerAddPlayer_C* ULobbyPlayerAddPlayer_C::GetDefaultObj()
{
	static class ULobbyPlayerAddPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULobbyPlayerAddPlayer_C*>(ULobbyPlayerAddPlayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULobbyPlayerAddPlayer_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPlayerAddPlayer_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULobbyPlayerAddPlayer_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPlayerAddPlayer_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LobbyPlayerAddPlayer.LobbyPlayerAddPlayer_C.ExecuteUbergraph_LobbyPlayerAddPlayer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULobbyPlayerAddPlayer_C::ExecuteUbergraph_LobbyPlayerAddPlayer(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LobbyPlayerAddPlayer_C", "ExecuteUbergraph_LobbyPlayerAddPlayer");

	Params::ULobbyPlayerAddPlayer_C_ExecuteUbergraph_LobbyPlayerAddPlayer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


