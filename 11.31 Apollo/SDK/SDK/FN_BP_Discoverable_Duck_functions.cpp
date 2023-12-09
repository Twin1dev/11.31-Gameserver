#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Discoverable_Duck.BP_Discoverable_Duck_C
// (Actor)

class UClass* ABP_Discoverable_Duck_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Discoverable_Duck_C");

	return Clss;
}


// BP_Discoverable_Duck_C BP_Discoverable_Duck.Default__BP_Discoverable_Duck_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_Discoverable_Duck_C* ABP_Discoverable_Duck_C::GetDefaultObj()
{
	static class ABP_Discoverable_Duck_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_Discoverable_Duck_C*>(ABP_Discoverable_Duck_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Discoverable_Duck.BP_Discoverable_Duck_C.Poof
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Discoverable_Duck_C::Poof()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Discoverable_Duck_C", "Poof");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Discoverable_Duck.BP_Discoverable_Duck_C.Commit_OnSpecialInteraction
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Discoverable_Duck_C::Commit_OnSpecialInteraction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Discoverable_Duck_C", "Commit_OnSpecialInteraction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_Discoverable_Duck.BP_Discoverable_Duck_C.ExecuteUbergraph_BP_Discoverable_Duck
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_Discoverable_Duck_C::ExecuteUbergraph_BP_Discoverable_Duck(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Discoverable_Duck_C", "ExecuteUbergraph_BP_Discoverable_Duck");

	Params::ABP_Discoverable_Duck_C_ExecuteUbergraph_BP_Discoverable_Duck_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


