#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_EnergyComponent.BP_EnergyComponent_C
// (None)

class UClass* UBP_EnergyComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_EnergyComponent_C");

	return Clss;
}


// BP_EnergyComponent_C BP_EnergyComponent.Default__BP_EnergyComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_EnergyComponent_C* UBP_EnergyComponent_C::GetDefaultObj()
{
	static class UBP_EnergyComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_EnergyComponent_C*>(UBP_EnergyComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_EnergyComponent.BP_EnergyComponent_C.OnCurrentEnergyAttributesChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_EnergyComponent_C::OnCurrentEnergyAttributesChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnergyComponent_C", "OnCurrentEnergyAttributesChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BP_EnergyComponent.BP_EnergyComponent_C.ExecuteUbergraph_BP_EnergyComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnergyComponent_C::ExecuteUbergraph_BP_EnergyComponent(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnergyComponent_C", "ExecuteUbergraph_BP_EnergyComponent");

	Params::UBP_EnergyComponent_C_ExecuteUbergraph_BP_EnergyComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EnergyComponent.BP_EnergyComponent_C.EnergyLevelsUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_EnergyComponent_C::EnergyLevelsUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_EnergyComponent_C", "EnergyLevelsUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


