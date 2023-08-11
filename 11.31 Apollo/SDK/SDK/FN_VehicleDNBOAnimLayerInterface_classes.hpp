#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// AnimBlueprintGeneratedClass VehicleDNBOAnimLayerInterface.VehicleDNBOAnimLayerInterface_C
class IVehicleDNBOAnimLayerInterface_C : public IAnimLayerInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VehicleDNBOAnimLayerInterface_C");
		return Clss;
	}

	void VehicleDBNOJoggingOverride(struct FPoseLink* VehicleDBNOJoggingOverride);
	void VehicleDBNOCarriedLeansOverride(const struct FPoseLink& InPoseDBNOCarried, struct FPoseLink* VehicleDBNOCarriedLeansOverride);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
