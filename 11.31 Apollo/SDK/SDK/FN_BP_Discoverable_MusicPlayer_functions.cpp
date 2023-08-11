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


// Function BP_Discoverable_MusicPlayer.BP_Discoverable_MusicPlayer_C.NotifiedByDiscoverable
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                ActionTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CameraTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// bool                               bIsStart                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ABP_Discoverable_MusicPlayer_C::NotifiedByDiscoverable(const struct FGameplayTag& ActionTag, const struct FGameplayTag& CameraTag, bool bIsStart)
{
	static auto Func = Class->GetFunction("BP_Discoverable_MusicPlayer_C", "NotifiedByDiscoverable");

	Params::ABP_Discoverable_MusicPlayer_C_NotifiedByDiscoverable_Params Parms;

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
	static auto Func = Class->GetFunction("BP_Discoverable_MusicPlayer_C", "ExecuteUbergraph_BP_Discoverable_MusicPlayer");

	Params::ABP_Discoverable_MusicPlayer_C_ExecuteUbergraph_BP_Discoverable_MusicPlayer_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ActionTag = K2Node_Event_ActionTag;
	Parms.K2Node_Event_CameraTag = K2Node_Event_CameraTag;
	Parms.K2Node_Event_bIsStart = K2Node_Event_bIsStart;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
