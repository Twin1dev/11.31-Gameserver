#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function BP_EnergyComponent.BP_EnergyComponent_C.OnCurrentEnergyAttributesChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_EnergyComponent_C::OnCurrentEnergyAttributesChanged()
{
	static auto Func = Class->GetFunction("BP_EnergyComponent_C", "OnCurrentEnergyAttributesChanged");

	Params::UBP_EnergyComponent_C_OnCurrentEnergyAttributesChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EnergyComponent.BP_EnergyComponent_C.ExecuteUbergraph_BP_EnergyComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_EnergyComponent_C::ExecuteUbergraph_BP_EnergyComponent(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("BP_EnergyComponent_C", "ExecuteUbergraph_BP_EnergyComponent");

	Params::UBP_EnergyComponent_C_ExecuteUbergraph_BP_EnergyComponent_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_EnergyComponent.BP_EnergyComponent_C.EnergyLevelsUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_EnergyComponent_C::EnergyLevelsUpdated__DelegateSignature()
{
	static auto Func = Class->GetFunction("BP_EnergyComponent_C", "EnergyLevelsUpdated__DelegateSignature");

	Params::UBP_EnergyComponent_C_EnergyLevelsUpdated__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
