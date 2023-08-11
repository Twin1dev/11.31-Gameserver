#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
