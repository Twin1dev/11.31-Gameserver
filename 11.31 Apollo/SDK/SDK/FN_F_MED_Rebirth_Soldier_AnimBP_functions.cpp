#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass F_MED_Rebirth_Soldier_AnimBP.F_MED_Rebirth_Soldier_AnimBP_C
// (None)

class UClass* UF_MED_Rebirth_Soldier_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("F_MED_Rebirth_Soldier_AnimBP_C");

	return Clss;
}


// F_MED_Rebirth_Soldier_AnimBP_C F_MED_Rebirth_Soldier_AnimBP.Default__F_MED_Rebirth_Soldier_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UF_MED_Rebirth_Soldier_AnimBP_C* UF_MED_Rebirth_Soldier_AnimBP_C::GetDefaultObj()
{
	static class UF_MED_Rebirth_Soldier_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UF_MED_Rebirth_Soldier_AnimBP_C*>(UF_MED_Rebirth_Soldier_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function F_MED_Rebirth_Soldier_AnimBP.F_MED_Rebirth_Soldier_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UF_MED_Rebirth_Soldier_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_MED_Rebirth_Soldier_AnimBP_C", "AnimGraph");

	Params::UF_MED_Rebirth_Soldier_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function F_MED_Rebirth_Soldier_AnimBP.F_MED_Rebirth_Soldier_AnimBP_C.ExecuteUbergraph_F_MED_Rebirth_Soldier_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UF_MED_Rebirth_Soldier_AnimBP_C::ExecuteUbergraph_F_MED_Rebirth_Soldier_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("F_MED_Rebirth_Soldier_AnimBP_C", "ExecuteUbergraph_F_MED_Rebirth_Soldier_AnimBP");

	Params::UF_MED_Rebirth_Soldier_AnimBP_C_ExecuteUbergraph_F_MED_Rebirth_Soldier_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


