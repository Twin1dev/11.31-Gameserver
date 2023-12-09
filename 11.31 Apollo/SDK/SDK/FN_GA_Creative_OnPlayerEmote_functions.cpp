#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Creative_OnPlayerEmote.GA_Creative_OnPlayerEmote_C
// (None)

class UClass* UGA_Creative_OnPlayerEmote_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Creative_OnPlayerEmote_C");

	return Clss;
}


// GA_Creative_OnPlayerEmote_C GA_Creative_OnPlayerEmote.Default__GA_Creative_OnPlayerEmote_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Creative_OnPlayerEmote_C* UGA_Creative_OnPlayerEmote_C::GetDefaultObj()
{
	static class UGA_Creative_OnPlayerEmote_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Creative_OnPlayerEmote_C*>(UGA_Creative_OnPlayerEmote_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Creative_OnPlayerEmote.GA_Creative_OnPlayerEmote_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Creative_OnPlayerEmote_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Creative_OnPlayerEmote_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Creative_OnPlayerEmote.GA_Creative_OnPlayerEmote_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Creative_OnPlayerEmote_C::K2_OnEndAbility(bool bWasCancelled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Creative_OnPlayerEmote_C", "K2_OnEndAbility");

	Params::UGA_Creative_OnPlayerEmote_C_K2_OnEndAbility_Params Parms{};

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Creative_OnPlayerEmote.GA_Creative_OnPlayerEmote_C.ExecuteUbergraph_GA_Creative_OnPlayerEmote
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEffectContextHandleCallFunc_GetGrantedByEffectContext_ReturnValue                   (None)
// class UObject*                     CallFunc_EffectContextGetSourceObject_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_GetGrantedByEffectContext_ReturnValue_1                 (None)
// TScriptInterface<class ICreative_Listener_PlayerEmote_Interface_C>K2Node_DynamicCast_AsCreative_Listener_Player_Emote_Interface    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_EffectContextGetSourceObject_ReturnValue_1              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class ICreative_Listener_PlayerEmote_Interface_C>K2Node_DynamicCast_AsCreative_Listener_Player_Emote_Interface_1  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Creative_OnPlayerEmote_C::ExecuteUbergraph_GA_Creative_OnPlayerEmote(int32 EntryPoint, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, bool K2Node_Event_bWasCancelled, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_GetGrantedByEffectContext_ReturnValue_1, TScriptInterface<class ICreative_Listener_PlayerEmote_Interface_C> K2Node_DynamicCast_AsCreative_Listener_Player_Emote_Interface, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue_1, TScriptInterface<class ICreative_Listener_PlayerEmote_Interface_C> K2Node_DynamicCast_AsCreative_Listener_Player_Emote_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Creative_OnPlayerEmote_C", "ExecuteUbergraph_GA_Creative_OnPlayerEmote");

	Params::UGA_Creative_OnPlayerEmote_C_ExecuteUbergraph_GA_Creative_OnPlayerEmote_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.CallFunc_GetGrantedByEffectContext_ReturnValue = CallFunc_GetGrantedByEffectContext_ReturnValue;
	Parms.CallFunc_EffectContextGetSourceObject_ReturnValue = CallFunc_EffectContextGetSourceObject_ReturnValue;
	Parms.CallFunc_GetGrantedByEffectContext_ReturnValue_1 = CallFunc_GetGrantedByEffectContext_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCreative_Listener_Player_Emote_Interface = K2Node_DynamicCast_AsCreative_Listener_Player_Emote_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EffectContextGetSourceObject_ReturnValue_1 = CallFunc_EffectContextGetSourceObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCreative_Listener_Player_Emote_Interface_1 = K2Node_DynamicCast_AsCreative_Listener_Player_Emote_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_1 = CallFunc_GetActivatingPawn_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


