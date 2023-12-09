#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Wumba_Gadget_AnimBP.Wumba_Gadget_AnimBP_C
// (None)

class UClass* UWumba_Gadget_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Wumba_Gadget_AnimBP_C");

	return Clss;
}


// Wumba_Gadget_AnimBP_C Wumba_Gadget_AnimBP.Default__Wumba_Gadget_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWumba_Gadget_AnimBP_C* UWumba_Gadget_AnimBP_C::GetDefaultObj()
{
	static class UWumba_Gadget_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWumba_Gadget_AnimBP_C*>(UWumba_Gadget_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Wumba_Gadget_AnimBP.Wumba_Gadget_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UWumba_Gadget_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Wumba_Gadget_AnimBP_C", "AnimGraph");

	Params::UWumba_Gadget_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Wumba_Gadget_AnimBP.Wumba_Gadget_AnimBP_C.BlueprintUpdateAnimation
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaTimeX                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWumba_Gadget_AnimBP_C::BlueprintUpdateAnimation(float DeltaTimeX)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Wumba_Gadget_AnimBP_C", "BlueprintUpdateAnimation");

	Params::UWumba_Gadget_AnimBP_C_BlueprintUpdateAnimation_Params Parms{};

	Parms.DeltaTimeX = DeltaTimeX;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Wumba_Gadget_AnimBP.Wumba_Gadget_AnimBP_C.ExecuteUbergraph_Wumba_Gadget_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaTimeX                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwningActor_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AB_Athena_Wumba_C*           K2Node_DynamicCast_AsB_Athena_Wumba                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWumba_Gadget_AnimBP_C::ExecuteUbergraph_Wumba_Gadget_AnimBP(int32 EntryPoint, float K2Node_Event_DeltaTimeX, class AActor* CallFunc_GetOwningActor_ReturnValue, class AB_Athena_Wumba_C* K2Node_DynamicCast_AsB_Athena_Wumba, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Wumba_Gadget_AnimBP_C", "ExecuteUbergraph_Wumba_Gadget_AnimBP");

	Params::UWumba_Gadget_AnimBP_C_ExecuteUbergraph_Wumba_Gadget_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaTimeX = K2Node_Event_DeltaTimeX;
	Parms.CallFunc_GetOwningActor_ReturnValue = CallFunc_GetOwningActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsB_Athena_Wumba = K2Node_DynamicCast_AsB_Athena_Wumba;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


