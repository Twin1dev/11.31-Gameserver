#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass VehicleDNBOAnimLayerInterface.VehicleDNBOAnimLayerInterface_C
// (None)

class UClass* IVehicleDNBOAnimLayerInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VehicleDNBOAnimLayerInterface_C");

	return Clss;
}


// VehicleDNBOAnimLayerInterface_C VehicleDNBOAnimLayerInterface.Default__VehicleDNBOAnimLayerInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IVehicleDNBOAnimLayerInterface_C* IVehicleDNBOAnimLayerInterface_C::GetDefaultObj()
{
	static class IVehicleDNBOAnimLayerInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IVehicleDNBOAnimLayerInterface_C*>(IVehicleDNBOAnimLayerInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VehicleDNBOAnimLayerInterface.VehicleDNBOAnimLayerInterface_C.VehicleDBNOJoggingOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   VehicleDBNOJoggingOverride                                       (Parm, OutParm, NoDestructor)

void IVehicleDNBOAnimLayerInterface_C::VehicleDBNOJoggingOverride(struct FPoseLink* VehicleDBNOJoggingOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleDNBOAnimLayerInterface_C", "VehicleDBNOJoggingOverride");

	Params::IVehicleDNBOAnimLayerInterface_C_VehicleDBNOJoggingOverride_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (VehicleDBNOJoggingOverride != nullptr)
		*VehicleDBNOJoggingOverride = std::move(Parms.VehicleDBNOJoggingOverride);

}


// Function VehicleDNBOAnimLayerInterface.VehicleDNBOAnimLayerInterface_C.VehicleDBNOCarriedLeansOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseDBNOCarried                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleDBNOCarriedLeansOverride                                  (Parm, OutParm, NoDestructor)

void IVehicleDNBOAnimLayerInterface_C::VehicleDBNOCarriedLeansOverride(const struct FPoseLink& InPoseDBNOCarried, struct FPoseLink* VehicleDBNOCarriedLeansOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VehicleDNBOAnimLayerInterface_C", "VehicleDBNOCarriedLeansOverride");

	Params::IVehicleDNBOAnimLayerInterface_C_VehicleDBNOCarriedLeansOverride_Params Parms{};

	Parms.InPoseDBNOCarried = InPoseDBNOCarried;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleDBNOCarriedLeansOverride != nullptr)
		*VehicleDBNOCarriedLeansOverride = std::move(Parms.VehicleDBNOCarriedLeansOverride);

}

}


