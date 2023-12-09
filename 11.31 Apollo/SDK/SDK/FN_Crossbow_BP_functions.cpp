#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Crossbow_BP.Crossbow_BP_C
// (None)

class UClass* UCrossbow_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Crossbow_BP_C");

	return Clss;
}


// Crossbow_BP_C Crossbow_BP.Default__Crossbow_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCrossbow_BP_C* UCrossbow_BP_C::GetDefaultObj()
{
	static class UCrossbow_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCrossbow_BP_C*>(UCrossbow_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Crossbow_BP.Crossbow_BP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UCrossbow_BP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crossbow_BP_C", "AnimGraph");

	Params::UCrossbow_BP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Crossbow_BP.Crossbow_BP_C.ExecuteUbergraph_Crossbow_BP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCrossbow_BP_C::ExecuteUbergraph_Crossbow_BP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Crossbow_BP_C", "ExecuteUbergraph_Crossbow_BP");

	Params::UCrossbow_BP_C_ExecuteUbergraph_Crossbow_BP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


