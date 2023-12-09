#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Discoverable_MusicPlayer.BP_Discoverable_MusicPlayer_C
// (Actor)

class UClass* ABP_Discoverable_MusicPlayer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Discoverable_MusicPlayer_C");

	return Clss;
}


// BP_Discoverable_MusicPlayer_C BP_Discoverable_MusicPlayer.Default__BP_Discoverable_MusicPlayer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Discoverable_MusicPlayer_C* ABP_Discoverable_MusicPlayer_C::GetDefaultObj()
{
	static class ABP_Discoverable_MusicPlayer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Discoverable_MusicPlayer_C*>(ABP_Discoverable_MusicPlayer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Discoverable_MusicPlayer.BP_Discoverable_MusicPlayer_C.NotifiedByDiscoverable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                ActionTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CameraTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               bIsStart                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Discoverable_MusicPlayer_C::NotifiedByDiscoverable(const struct FGameplayTag& ActionTag, const struct FGameplayTag& CameraTag, bool bIsStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Discoverable_MusicPlayer_C", "NotifiedByDiscoverable");

	Params::ABP_Discoverable_MusicPlayer_C_NotifiedByDiscoverable_Params Parms{};

	Parms.ActionTag = ActionTag;
	Parms.CameraTag = CameraTag;
	Parms.bIsStart = bIsStart;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Discoverable_MusicPlayer.BP_Discoverable_MusicPlayer_C.ExecuteUbergraph_BP_Discoverable_MusicPlayer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_ActionTag                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Event_CameraTag                                           (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsStart                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Discoverable_MusicPlayer_C::ExecuteUbergraph_BP_Discoverable_MusicPlayer(int32 EntryPoint, const struct FGameplayTag& K2Node_Event_ActionTag, const struct FGameplayTag& K2Node_Event_CameraTag, bool K2Node_Event_bIsStart, bool CallFunc_EqualEqual_GameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Discoverable_MusicPlayer_C", "ExecuteUbergraph_BP_Discoverable_MusicPlayer");

	Params::ABP_Discoverable_MusicPlayer_C_ExecuteUbergraph_BP_Discoverable_MusicPlayer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ActionTag = K2Node_Event_ActionTag;
	Parms.K2Node_Event_CameraTag = K2Node_Event_CameraTag;
	Parms.K2Node_Event_bIsStart = K2Node_Event_bIsStart;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


