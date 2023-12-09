#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GAB_NotIdling.GAB_NotIdling_C
// (None)

class UClass* UGAB_NotIdling_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GAB_NotIdling_C");

	return Clss;
}


// GAB_NotIdling_C GAB_NotIdling.Default__GAB_NotIdling_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGAB_NotIdling_C* UGAB_NotIdling_C::GetDefaultObj()
{
	static class UGAB_NotIdling_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGAB_NotIdling_C*>(UGAB_NotIdling_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GAB_NotIdling.GAB_NotIdling_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_NotIdling_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_NotIdling_C", "K2_ActivateAbilityFromEvent");

	Params::UGAB_NotIdling_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_NotIdling.GAB_NotIdling_C.ExecuteUbergraph_GAB_NotIdling
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_CommitAbility_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)

void UGAB_NotIdling_C::ExecuteUbergraph_GAB_NotIdling(int32 EntryPoint, bool CallFunc_K2_CommitAbility_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GAB_NotIdling_C", "ExecuteUbergraph_GAB_NotIdling");

	Params::UGAB_NotIdling_C_ExecuteUbergraph_GAB_NotIdling_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_K2_CommitAbility_ReturnValue = CallFunc_K2_CommitAbility_ReturnValue;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;

	UObject::ProcessEvent(Func, &Parms);

}

}


