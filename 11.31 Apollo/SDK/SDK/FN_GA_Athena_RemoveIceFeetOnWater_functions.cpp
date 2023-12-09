#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Athena_RemoveIceFeetOnWater.GA_Athena_RemoveIceFeetOnWater_C
// (None)

class UClass* UGA_Athena_RemoveIceFeetOnWater_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Athena_RemoveIceFeetOnWater_C");

	return Clss;
}


// GA_Athena_RemoveIceFeetOnWater_C GA_Athena_RemoveIceFeetOnWater.Default__GA_Athena_RemoveIceFeetOnWater_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Athena_RemoveIceFeetOnWater_C* UGA_Athena_RemoveIceFeetOnWater_C::GetDefaultObj()
{
	static class UGA_Athena_RemoveIceFeetOnWater_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Athena_RemoveIceFeetOnWater_C*>(UGA_Athena_RemoveIceFeetOnWater_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GA_Athena_RemoveIceFeetOnWater.GA_Athena_RemoveIceFeetOnWater_C.Added_ABAD1DEE46A337533ED461815C2B7BED
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGA_Athena_RemoveIceFeetOnWater_C::Added_ABAD1DEE46A337533ED461815C2B7BED()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_RemoveIceFeetOnWater_C", "Added_ABAD1DEE46A337533ED461815C2B7BED");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_RemoveIceFeetOnWater.GA_Athena_RemoveIceFeetOnWater_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_Athena_RemoveIceFeetOnWater_C::K2_ActivateAbility()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_RemoveIceFeetOnWater_C", "K2_ActivateAbility");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GA_Athena_RemoveIceFeetOnWater.GA_Athena_RemoveIceFeetOnWater_C.ExecuteUbergraph_GA_Athena_RemoveIceFeetOnWater
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UAbilityTask_WaitGameplayTagAdded*CallFunc_WaitGameplayTagAdd_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGA_Athena_RemoveIceFeetOnWater_C::ExecuteUbergraph_GA_Athena_RemoveIceFeetOnWater(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GA_Athena_RemoveIceFeetOnWater_C", "ExecuteUbergraph_GA_Athena_RemoveIceFeetOnWater");

	Params::UGA_Athena_RemoveIceFeetOnWater_C_ExecuteUbergraph_GA_Athena_RemoveIceFeetOnWater_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_WaitGameplayTagAdd_ReturnValue = CallFunc_WaitGameplayTagAdd_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


