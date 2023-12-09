#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Flopper_Gadget_AnimBP.Flopper_Gadget_AnimBP_C
// (None)

class UClass* UFlopper_Gadget_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Flopper_Gadget_AnimBP_C");

	return Clss;
}


// Flopper_Gadget_AnimBP_C Flopper_Gadget_AnimBP.Default__Flopper_Gadget_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFlopper_Gadget_AnimBP_C* UFlopper_Gadget_AnimBP_C::GetDefaultObj()
{
	static class UFlopper_Gadget_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFlopper_Gadget_AnimBP_C*>(UFlopper_Gadget_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Flopper_Gadget_AnimBP.Flopper_Gadget_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UFlopper_Gadget_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Flopper_Gadget_AnimBP_C", "AnimGraph");

	Params::UFlopper_Gadget_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Flopper_Gadget_AnimBP.Flopper_Gadget_AnimBP_C.ExecuteUbergraph_Flopper_Gadget_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFlopper_Gadget_AnimBP_C::ExecuteUbergraph_Flopper_Gadget_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Flopper_Gadget_AnimBP_C", "ExecuteUbergraph_Flopper_Gadget_AnimBP");

	Params::UFlopper_Gadget_AnimBP_C_ExecuteUbergraph_Flopper_Gadget_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


