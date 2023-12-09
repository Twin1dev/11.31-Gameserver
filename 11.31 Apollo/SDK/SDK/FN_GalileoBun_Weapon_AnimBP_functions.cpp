#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass GalileoBun_Weapon_AnimBP.GalileoBun_Weapon_AnimBP_C
// (None)

class UClass* UGalileoBun_Weapon_AnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GalileoBun_Weapon_AnimBP_C");

	return Clss;
}


// GalileoBun_Weapon_AnimBP_C GalileoBun_Weapon_AnimBP.Default__GalileoBun_Weapon_AnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGalileoBun_Weapon_AnimBP_C* UGalileoBun_Weapon_AnimBP_C::GetDefaultObj()
{
	static class UGalileoBun_Weapon_AnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGalileoBun_Weapon_AnimBP_C*>(UGalileoBun_Weapon_AnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GalileoBun_Weapon_AnimBP.GalileoBun_Weapon_AnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UGalileoBun_Weapon_AnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GalileoBun_Weapon_AnimBP_C", "AnimGraph");

	Params::UGalileoBun_Weapon_AnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function GalileoBun_Weapon_AnimBP.GalileoBun_Weapon_AnimBP_C.ExecuteUbergraph_GalileoBun_Weapon_AnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGalileoBun_Weapon_AnimBP_C::ExecuteUbergraph_GalileoBun_Weapon_AnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GalileoBun_Weapon_AnimBP_C", "ExecuteUbergraph_GalileoBun_Weapon_AnimBP");

	Params::UGalileoBun_Weapon_AnimBP_C_ExecuteUbergraph_GalileoBun_Weapon_AnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


