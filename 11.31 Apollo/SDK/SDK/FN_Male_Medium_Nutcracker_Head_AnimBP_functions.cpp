#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Male_Medium_Nutcracker_Head_AnimBP.Male_Medium_Nutcracker_Head_AnimBP_C
// (None)

class UClass* UMale_Medium_Nutcracker_Head_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Male_Medium_Nutcracker_Head_AnimBP_C");

	return Clss;
}


// Male_Medium_Nutcracker_Head_AnimBP_C Male_Medium_Nutcracker_Head_AnimBP.Default__Male_Medium_Nutcracker_Head_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMale_Medium_Nutcracker_Head_AnimBP_C* UMale_Medium_Nutcracker_Head_AnimBP_C::GetDefaultObj()
{
	static class UMale_Medium_Nutcracker_Head_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMale_Medium_Nutcracker_Head_AnimBP_C*>(UMale_Medium_Nutcracker_Head_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Male_Medium_Nutcracker_Head_AnimBP.Male_Medium_Nutcracker_Head_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMale_Medium_Nutcracker_Head_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Male_Medium_Nutcracker_Head_AnimBP_C", "AnimGraph");

	Params::UMale_Medium_Nutcracker_Head_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Male_Medium_Nutcracker_Head_AnimBP.Male_Medium_Nutcracker_Head_AnimBP_C.ExecuteUbergraph_Male_Medium_Nutcracker_Head_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMale_Medium_Nutcracker_Head_AnimBP_C::ExecuteUbergraph_Male_Medium_Nutcracker_Head_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Male_Medium_Nutcracker_Head_AnimBP_C", "ExecuteUbergraph_Male_Medium_Nutcracker_Head_AnimBP");

	Params::UMale_Medium_Nutcracker_Head_AnimBP_C_ExecuteUbergraph_Male_Medium_Nutcracker_Head_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


