#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C
// (None)

class UClass* IPlayerAnimOverrideLayerInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerAnimOverrideLayerInterface_C");

	return Clss;
}


// PlayerAnimOverrideLayerInterface_C PlayerAnimOverrideLayerInterface.Default__PlayerAnimOverrideLayerInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IPlayerAnimOverrideLayerInterface_C* IPlayerAnimOverrideLayerInterface_C::GetDefaultObj()
{
	static class IPlayerAnimOverrideLayerInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IPlayerAnimOverrideLayerInterface_C*>(IPlayerAnimOverrideLayerInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerAnimOverrideLayerInterface.PlayerAnimOverrideLayerInterface_C.FullBodyOverride
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   PassThroughFullBodyPose                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   FullBodyOverride                                                 (Parm, OutParm, NoDestructor)

void IPlayerAnimOverrideLayerInterface_C::FullBodyOverride(const struct FPoseLink& PassThroughFullBodyPose, struct FPoseLink* FullBodyOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerAnimOverrideLayerInterface_C", "FullBodyOverride");

	Params::IPlayerAnimOverrideLayerInterface_C_FullBodyOverride_Params Parms{};

	Parms.PassThroughFullBodyPose = PassThroughFullBodyPose;

	UObject::ProcessEvent(Func, &Parms);

	if (FullBodyOverride != nullptr)
		*FullBodyOverride = std::move(Parms.FullBodyOverride);

}

}


