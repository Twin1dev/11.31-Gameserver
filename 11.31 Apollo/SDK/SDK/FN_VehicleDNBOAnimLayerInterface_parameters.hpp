#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// Function VehicleDNBOAnimLayerInterface.VehicleDNBOAnimLayerInterface_C.VehicleDBNOJoggingOverride
struct IVehicleDNBOAnimLayerInterface_C_VehicleDBNOJoggingOverride_Params
{
public:
	struct FPoseLink                             VehicleDBNOJoggingOverride;                        // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function VehicleDNBOAnimLayerInterface.VehicleDNBOAnimLayerInterface_C.VehicleDBNOCarriedLeansOverride
struct IVehicleDNBOAnimLayerInterface_C_VehicleDBNOCarriedLeansOverride_Params
{
public:
	struct FPoseLink                             InPoseDBNOCarried;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleDBNOCarriedLeansOverride;                   // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

}
}


