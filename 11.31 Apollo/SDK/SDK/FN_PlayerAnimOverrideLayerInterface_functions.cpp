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


// Function PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C.FullBodyOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   PassThroughFullBodyPose                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   FullBodyOverride                                                 (Parm, OutParm, NoDestructor)

void IPlayerAnimOverrideLayerInterface_C::FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride)
{
	static auto Func = Class->GetFunction("PlayerAnimOverrideLayerInterface_C", "FullBodyOverride");

	Params::IPlayerAnimOverrideLayerInterface_C_FullBodyOverride_Params Parms;

	Parms.PassThroughFullBodyPose = PassThroughFullBodyPose;

	UObject::ProcessEvent(Func, &Parms);

	if (FullBodyOverride != nullptr)
		*FullBodyOverride = Parms.FullBodyOverride;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
