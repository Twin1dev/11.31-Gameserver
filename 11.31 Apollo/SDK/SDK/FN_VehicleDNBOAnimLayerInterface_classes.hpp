#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class IVehicleDNBOAnimLayerInterface_C* GetDefaultObj();

	void VehicleDBNOJoggingOverride(struct FPoseLink* VehicleDBNOJoggingOverride);
	void VehicleDBNOCarriedLeansOverride(const struct FPoseLink& InPoseDBNOCarried, struct FPoseLink* VehicleDBNOCarriedLeansOverride);
};

}


