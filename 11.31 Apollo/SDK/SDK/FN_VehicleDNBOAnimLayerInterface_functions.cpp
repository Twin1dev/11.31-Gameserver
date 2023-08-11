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


// Function VehicleDNBOAnimLayerInterface.VehicleDNBOAnimLayerInterface_C.VehicleDBNOJoggingOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   VehicleDBNOJoggingOverride                                       (Parm, OutParm, NoDestructor)

void IVehicleDNBOAnimLayerInterface_C::VehicleDBNOJoggingOverride(struct FPoseLink* VehicleDBNOJoggingOverride)
{
	static auto Func = Class->GetFunction("VehicleDNBOAnimLayerInterface_C", "VehicleDBNOJoggingOverride");

	Params::IVehicleDNBOAnimLayerInterface_C_VehicleDBNOJoggingOverride_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (VehicleDBNOJoggingOverride != nullptr)
		*VehicleDBNOJoggingOverride = Parms.VehicleDBNOJoggingOverride;

}


// Function VehicleDNBOAnimLayerInterface.VehicleDNBOAnimLayerInterface_C.VehicleDBNOCarriedLeansOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseDBNOCarried                                                (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleDBNOCarriedLeansOverride                                  (Parm, OutParm, NoDestructor)

void IVehicleDNBOAnimLayerInterface_C::VehicleDBNOCarriedLeansOverride(const struct FPoseLink& InPoseDBNOCarried, struct FPoseLink* VehicleDBNOCarriedLeansOverride)
{
	static auto Func = Class->GetFunction("VehicleDNBOAnimLayerInterface_C", "VehicleDBNOCarriedLeansOverride");

	Params::IVehicleDNBOAnimLayerInterface_C_VehicleDBNOCarriedLeansOverride_Params Parms;

	Parms.InPoseDBNOCarried = InPoseDBNOCarried;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleDBNOCarriedLeansOverride != nullptr)
		*VehicleDBNOCarriedLeansOverride = Parms.VehicleDBNOCarriedLeansOverride;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
