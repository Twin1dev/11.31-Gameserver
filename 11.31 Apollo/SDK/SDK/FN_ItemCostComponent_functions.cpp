#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ItemCostComponent.ItemCostComponent_C
// (None)

class UClass* UItemCostComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemCostComponent_C");

	return Clss;
}


// ItemCostComponent_C ItemCostComponent.Default__ItemCostComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemCostComponent_C* UItemCostComponent_C::GetDefaultObj()
{
	static class UItemCostComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemCostComponent_C*>(UItemCostComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemCostComponent.ItemCostComponent_C.GetCost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TMap<enum class EFortResourceType, int32>Cost                                                             (Parm, OutParm, ZeroConstructor)

void UItemCostComponent_C::GetCost(TMap<enum class EFortResourceType, int32>* Cost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemCostComponent_C", "GetCost");

	Params::UItemCostComponent_C_GetCost_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Cost != nullptr)
		*Cost = Parms.Cost;

}

}


