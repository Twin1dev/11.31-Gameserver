#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C
// (None)

class UClass* UGA_Ninja_SwordHitsHeal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Ninja_SwordHitsHeal_C");

	return Clss;
}


// GA_Ninja_SwordHitsHeal_C GA_Ninja_SwordHitsHeal.Default__GA_Ninja_SwordHitsHeal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Ninja_SwordHitsHeal_C* UGA_Ninja_SwordHitsHeal_C::GetDefaultObj()
{
	static class UGA_Ninja_SwordHitsHeal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Ninja_SwordHitsHeal_C*>(UGA_Ninja_SwordHitsHeal_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.SetupAbility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAbilitySystemComponent*     AbilitySystem                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_Ninja_SwordHitsHeal_C::SetupAbility(class UAbilitySystemComponent* AbilitySystem)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Ninja_SwordHitsHeal_C", "SetupAbility");

	Params::UGA_Ninja_SwordHitsHeal_C_SetupAbility_Params Parms{};

	Parms.AbilitySystem = AbilitySystem;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.K2_ShouldAbilityRespondToEvent
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayEventData          Payload                                                          (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldSwordHitsHealRespondToEvent_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UGA_Ninja_SwordHitsHeal_C::K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool CallFunc_ShouldSwordHitsHealRespondToEvent_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Ninja_SwordHitsHeal_C", "K2_ShouldAbilityRespondToEvent");

	Params::UGA_Ninja_SwordHitsHeal_C_K2_ShouldAbilityRespondToEvent_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.Payload = Payload;
	Parms.CallFunc_ShouldSwordHitsHealRespondToEvent_ReturnValue = CallFunc_ShouldSwordHitsHealRespondToEvent_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGA_Ninja_SwordHitsHeal_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Ninja_SwordHitsHeal_C", "K2_ActivateAbilityFromEvent");

	Params::UGA_Ninja_SwordHitsHeal_C_K2_ActivateAbilityFromEvent_Params Parms{};

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Ninja_SwordHitsHeal.GA_Ninja_SwordHitsHeal_C.ExecuteUbergraph_GA_Ninja_SwordHitsHeal
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)

void UGA_Ninja_SwordHitsHeal_C::ExecuteUbergraph_GA_Ninja_SwordHitsHeal(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Ninja_SwordHitsHeal_C", "ExecuteUbergraph_GA_Ninja_SwordHitsHeal");

	Params::UGA_Ninja_SwordHitsHeal_C_ExecuteUbergraph_GA_Ninja_SwordHitsHeal_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;

	UObject::ProcessEvent(Func, &Parms);

}

}


