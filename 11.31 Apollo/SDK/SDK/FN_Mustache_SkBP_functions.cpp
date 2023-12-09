#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Mustache_SkBP.Mustache_SkBP_C
// (None)

class UClass* UMustache_SkBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mustache_SkBP_C");

	return Clss;
}


// Mustache_SkBP_C Mustache_SkBP.Default__Mustache_SkBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMustache_SkBP_C* UMustache_SkBP_C::GetDefaultObj()
{
	static class UMustache_SkBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMustache_SkBP_C*>(UMustache_SkBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Mustache_SkBP.Mustache_SkBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMustache_SkBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mustache_SkBP_C", "AnimGraph");

	Params::UMustache_SkBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Mustache_SkBP.Mustache_SkBP_C.ExecuteUbergraph_Mustache_SkBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMustache_SkBP_C::ExecuteUbergraph_Mustache_SkBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mustache_SkBP_C", "ExecuteUbergraph_Mustache_SkBP");

	Params::UMustache_SkBP_C_ExecuteUbergraph_Mustache_SkBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


