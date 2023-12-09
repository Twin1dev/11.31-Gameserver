#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass BP_PDW.BP_PDW_C
// (None)

class UClass* UBP_PDW_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_PDW_C");

	return Clss;
}


// BP_PDW_C BP_PDW.Default__BP_PDW_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_PDW_C* UBP_PDW_C::GetDefaultObj()
{
	static class UBP_PDW_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_PDW_C*>(UBP_PDW_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_PDW.BP_PDW_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UBP_PDW_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PDW_C", "AnimGraph");

	Params::UBP_PDW_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function BP_PDW.BP_PDW_C.ExecuteUbergraph_BP_PDW
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PDW_C::ExecuteUbergraph_BP_PDW(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_PDW_C", "ExecuteUbergraph_BP_PDW");

	Params::UBP_PDW_C_ExecuteUbergraph_BP_PDW_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


