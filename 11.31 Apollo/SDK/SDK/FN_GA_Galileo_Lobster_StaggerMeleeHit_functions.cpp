#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Galileo_Lobster_StaggerMeleeHit.GA_Galileo_Lobster_StaggerMeleeHit_C
// (None)

class UClass* UGA_Galileo_Lobster_StaggerMeleeHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Galileo_Lobster_StaggerMeleeHit_C");

	return Clss;
}


// GA_Galileo_Lobster_StaggerMeleeHit_C GA_Galileo_Lobster_StaggerMeleeHit.Default__GA_Galileo_Lobster_StaggerMeleeHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Galileo_Lobster_StaggerMeleeHit_C* UGA_Galileo_Lobster_StaggerMeleeHit_C::GetDefaultObj()
{
	static class UGA_Galileo_Lobster_StaggerMeleeHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Galileo_Lobster_StaggerMeleeHit_C*>(UGA_Galileo_Lobster_StaggerMeleeHit_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Galileo_Lobster_StaggerMeleeHit.GA_Galileo_Lobster_StaggerMeleeHit_C.Completed_C74ABBE842C11F9B9741D5BF7D4C4CE6
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Galileo_Lobster_StaggerMeleeHit_C::Completed_C74ABBE842C11F9B9741D5BF7D4C4CE6(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Galileo_Lobster_StaggerMeleeHit_C", "Completed_C74ABBE842C11F9B9741D5BF7D4C4CE6");

	Params::UGA_Galileo_Lobster_StaggerMeleeHit_C_Completed_C74ABBE842C11F9B9741D5BF7D4C4CE6_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_StaggerMeleeHit.GA_Galileo_Lobster_StaggerMeleeHit_C.Cancelled_C74ABBE842C11F9B9741D5BF7D4C4CE6
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Galileo_Lobster_StaggerMeleeHit_C::Cancelled_C74ABBE842C11F9B9741D5BF7D4C4CE6(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Galileo_Lobster_StaggerMeleeHit_C", "Cancelled_C74ABBE842C11F9B9741D5BF7D4C4CE6");

	Params::UGA_Galileo_Lobster_StaggerMeleeHit_C_Cancelled_C74ABBE842C11F9B9741D5BF7D4C4CE6_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_StaggerMeleeHit.GA_Galileo_Lobster_StaggerMeleeHit_C.Triggered_C74ABBE842C11F9B9741D5BF7D4C4CE6
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayAbilityTargetDataHandleTargetData                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayTag                ApplicationTag                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UGA_Galileo_Lobster_StaggerMeleeHit_C::Triggered_C74ABBE842C11F9B9741D5BF7D4C4CE6(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Galileo_Lobster_StaggerMeleeHit_C", "Triggered_C74ABBE842C11F9B9741D5BF7D4C4CE6");

	Params::UGA_Galileo_Lobster_StaggerMeleeHit_C_Triggered_C74ABBE842C11F9B9741D5BF7D4C4CE6_Params Parms{};

	Parms.TargetData = TargetData;
	Parms.ApplicationTag = ApplicationTag;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_Galileo_Lobster_StaggerMeleeHit.GA_Galileo_Lobster_StaggerMeleeHit_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Galileo_Lobster_StaggerMeleeHit_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Galileo_Lobster_StaggerMeleeHit_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Galileo_Lobster_StaggerMeleeHit.GA_Galileo_Lobster_StaggerMeleeHit_C.ExecuteUbergraph_GA_Galileo_Lobster_StaggerMeleeHit
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_2                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_2                              (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData_1                                  (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag_1                              (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FGameplayAbilityTargetDataHandleK2Node_CustomEvent_TargetData                                    (ConstParm)
// struct FGameplayTag                K2Node_CustomEvent_ApplicationTag                                (NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleTemp_struct_Variable_1                                           (None)
// class UFortAbilityTask_PlayMontageWaitTarget*CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Galileo_Lobster_StaggerMeleeHit_C::ExecuteUbergraph_GA_Galileo_Lobster_StaggerMeleeHit(int32 EntryPoint, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_2, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable_1, class UFortAbilityTask_PlayMontageWaitTarget* CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Galileo_Lobster_StaggerMeleeHit_C", "ExecuteUbergraph_GA_Galileo_Lobster_StaggerMeleeHit");

	Params::UGA_Galileo_Lobster_StaggerMeleeHit_C_ExecuteUbergraph_GA_Galileo_Lobster_StaggerMeleeHit_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_TargetData_2 = K2Node_CustomEvent_TargetData_2;
	Parms.K2Node_CustomEvent_ApplicationTag_2 = K2Node_CustomEvent_ApplicationTag_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_TargetData_1 = K2Node_CustomEvent_TargetData_1;
	Parms.K2Node_CustomEvent_ApplicationTag_1 = K2Node_CustomEvent_ApplicationTag_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_TargetData = K2Node_CustomEvent_TargetData;
	Parms.K2Node_CustomEvent_ApplicationTag = K2Node_CustomEvent_ApplicationTag;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue = CallFunc_PlayMontageInfoAndWaitForTrigger_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


