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
// AnimBlueprintGeneratedClass VehicleAnimLayerInterface.VehicleAnimLayerInterface_C
class IVehicleAnimLayerInterface_C : public IAnimLayerInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VehicleAnimLayerInterface_C");
		return Clss;
	}

	void VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseInPoseUpperAndLowerBody, const struct FFortAnimInput_TurnInPlace& TurnInPlace, struct FPoseLink* VehicleSplitBodyOverride);
	void VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* VehicleLowerBodyOverride);
	void VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, const struct FPoseLink& InPoseUpperAndLowerCachePose, struct FPoseLink* VehicleFullBodyOverride);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
