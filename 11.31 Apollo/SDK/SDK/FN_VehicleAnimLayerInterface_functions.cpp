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


// Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleSplitBodyOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseSplitBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPoseInPoseUpperAndLowerBody                                    (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFortAnimInput_TurnInPlace  TurnInPlace                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FPoseLink                   VehicleSplitBodyOverride                                         (Parm, OutParm, NoDestructor)

void IVehicleAnimLayerInterface_C::VehicleSplitBodyOverride(const struct FPoseLink& InPoseSplitBody, const struct FPoseLink& InPoseInPoseUpperAndLowerBody, const struct FFortAnimInput_TurnInPlace& TurnInPlace, struct FPoseLink* VehicleSplitBodyOverride)
{
	static auto Func = Class->GetFunction("VehicleAnimLayerInterface_C", "VehicleSplitBodyOverride");

	Params::IVehicleAnimLayerInterface_C_VehicleSplitBodyOverride_Params Parms;

	Parms.InPoseSplitBody = InPoseSplitBody;
	Parms.InPoseInPoseUpperAndLowerBody = InPoseInPoseUpperAndLowerBody;
	Parms.TurnInPlace = TurnInPlace;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleSplitBodyOverride != nullptr)
		*VehicleSplitBodyOverride = Parms.VehicleSplitBodyOverride;

}


// Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleLowerBodyOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyDefault                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPoseUpperBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleLowerBodyOverride                                         (Parm, OutParm, NoDestructor)

void IVehicleAnimLayerInterface_C::VehicleLowerBodyOverride(const struct FPoseLink& InPoseLowerBodyDefault, const struct FPoseLink& InPoseUpperBody, struct FPoseLink* VehicleLowerBodyOverride)
{
	static auto Func = Class->GetFunction("VehicleAnimLayerInterface_C", "VehicleLowerBodyOverride");

	Params::IVehicleAnimLayerInterface_C_VehicleLowerBodyOverride_Params Parms;

	Parms.InPoseLowerBodyDefault = InPoseLowerBodyDefault;
	Parms.InPoseUpperBody = InPoseUpperBody;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleLowerBodyOverride != nullptr)
		*VehicleLowerBodyOverride = Parms.VehicleLowerBodyOverride;

}


// Function VehicleAnimLayerInterface.VehicleAnimLayerInterface_C.VehicleFullBodyOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseFullBody                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   InPoseUpperAndLowerCachePose                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   VehicleFullBodyOverride                                          (Parm, OutParm, NoDestructor)

void IVehicleAnimLayerInterface_C::VehicleFullBodyOverride(const struct FPoseLink& InPoseFullBody, const struct FPoseLink& InPoseUpperAndLowerCachePose, struct FPoseLink* VehicleFullBodyOverride)
{
	static auto Func = Class->GetFunction("VehicleAnimLayerInterface_C", "VehicleFullBodyOverride");

	Params::IVehicleAnimLayerInterface_C_VehicleFullBodyOverride_Params Parms;

	Parms.InPoseFullBody = InPoseFullBody;
	Parms.InPoseUpperAndLowerCachePose = InPoseUpperAndLowerCachePose;

	UObject::ProcessEvent(Func, &Parms);

	if (VehicleFullBodyOverride != nullptr)
		*VehicleFullBodyOverride = Parms.VehicleFullBodyOverride;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
