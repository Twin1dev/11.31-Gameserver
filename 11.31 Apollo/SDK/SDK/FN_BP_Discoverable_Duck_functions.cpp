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


// Function BP_Discoverable_Duck.BP_Discoverable_Duck_C.Poof
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Discoverable_Duck_C::Poof()
{
	static auto Func = Class->GetFunction("BP_Discoverable_Duck_C", "Poof");

	Params::ABP_Discoverable_Duck_C_Poof_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Discoverable_Duck.BP_Discoverable_Duck_C.Commit_OnSpecialInteraction
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void ABP_Discoverable_Duck_C::Commit_OnSpecialInteraction()
{
	static auto Func = Class->GetFunction("BP_Discoverable_Duck_C", "Commit_OnSpecialInteraction");

	Params::ABP_Discoverable_Duck_C_Commit_OnSpecialInteraction_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

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
	static auto Func = Class->GetFunction("BP_Discoverable_Duck_C", "ExecuteUbergraph_BP_Discoverable_Duck");

	Params::ABP_Discoverable_Duck_C_ExecuteUbergraph_BP_Discoverable_Duck_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
