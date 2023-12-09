#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Mint_Miner_Axe_Skeleton_AnimBlueprint.Mint_Miner_Axe_Skeleton_AnimBlueprint_C
// (None)

class UClass* UMint_Miner_Axe_Skeleton_AnimBlueprint_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Mint_Miner_Axe_Skeleton_AnimBlueprint_C");

	return Clss;
}


// Mint_Miner_Axe_Skeleton_AnimBlueprint_C Mint_Miner_Axe_Skeleton_AnimBlueprint.Default__Mint_Miner_Axe_Skeleton_AnimBlueprint_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMint_Miner_Axe_Skeleton_AnimBlueprint_C* UMint_Miner_Axe_Skeleton_AnimBlueprint_C::GetDefaultObj()
{
	static class UMint_Miner_Axe_Skeleton_AnimBlueprint_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMint_Miner_Axe_Skeleton_AnimBlueprint_C*>(UMint_Miner_Axe_Skeleton_AnimBlueprint_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Mint_Miner_Axe_Skeleton_AnimBlueprint.Mint_Miner_Axe_Skeleton_AnimBlueprint_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UMint_Miner_Axe_Skeleton_AnimBlueprint_C::AnimGraph(const struct FPoseLink& InPose, struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mint_Miner_Axe_Skeleton_AnimBlueprint_C", "AnimGraph");

	Params::UMint_Miner_Axe_Skeleton_AnimBlueprint_C_AnimGraph_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Mint_Miner_Axe_Skeleton_AnimBlueprint.Mint_Miner_Axe_Skeleton_AnimBlueprint_C.ExecuteUbergraph_Mint_Miner_Axe_Skeleton_AnimBlueprint
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMint_Miner_Axe_Skeleton_AnimBlueprint_C::ExecuteUbergraph_Mint_Miner_Axe_Skeleton_AnimBlueprint(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Mint_Miner_Axe_Skeleton_AnimBlueprint_C", "ExecuteUbergraph_Mint_Miner_Axe_Skeleton_AnimBlueprint");

	Params::UMint_Miner_Axe_Skeleton_AnimBlueprint_C_ExecuteUbergraph_Mint_Miner_Axe_Skeleton_AnimBlueprint_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


