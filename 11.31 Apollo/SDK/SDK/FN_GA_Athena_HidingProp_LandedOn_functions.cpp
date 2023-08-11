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


// Function GA_Athena_HidingProp_LandedOn.GA_Athena_HidingProp_LandedOn_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Athena_HidingProp_LandedOn_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GA_Athena_HidingProp_LandedOn_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Athena_HidingProp_LandedOn_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Athena_HidingProp_LandedOn.GA_Athena_HidingProp_LandedOn_C.ExecuteUbergraph_GA_Athena_HidingProp_LandedOn
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_HidingProp_LandedOn_C::ExecuteUbergraph_GA_Athena_HidingProp_LandedOn(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, float CallFunc_GetValueAtLevel_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, bool CallFunc_EqualEqual_FloatFloat_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_Athena_HidingProp_LandedOn_C", "ExecuteUbergraph_GA_Athena_HidingProp_LandedOn");

	Params::UGA_Athena_HidingProp_LandedOn_C_ExecuteUbergraph_GA_Athena_HidingProp_LandedOn_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
