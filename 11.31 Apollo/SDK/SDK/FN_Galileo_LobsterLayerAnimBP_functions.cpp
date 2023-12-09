#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C
// (None)

class UClass* UGalileo_LobsterLayerAnimBP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Galileo_LobsterLayerAnimBP_C");

	return Clss;
}


// Galileo_LobsterLayerAnimBP_C Galileo_LobsterLayerAnimBP.Default__Galileo_LobsterLayerAnimBP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGalileo_LobsterLayerAnimBP_C* UGalileo_LobsterLayerAnimBP_C::GetDefaultObj()
{
	static class UGalileo_LobsterLayerAnimBP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGalileo_LobsterLayerAnimBP_C*>(UGalileo_LobsterLayerAnimBP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemSkeletalControl
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemSkeletalControl                                              (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemSkeletalControl(const struct FPoseLink& InPose, struct FPoseLink* ItemSkeletalControl)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemSkeletalControl");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemSkeletalControl_Params Parms{};

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemSkeletalControl != nullptr)
		*ItemSkeletalControl = std::move(Parms.ItemSkeletalControl);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemUpperBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseUpperBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFortAnimInput_AdjustedAim  InputParam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemUpperBody                                                    (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemUpperBody");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemUpperBody_Params Parms{};

	Parms.InPoseUpperBody = InPoseUpperBody;
	Parms.InputParam = InputParam;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemUpperBody != nullptr)
		*ItemUpperBody = std::move(Parms.ItemUpperBody);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemFullBodySprint
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseSprint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemFullBodySprint                                               (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemFullBodySprint(const struct FPoseLink& InPoseSprint, struct FPoseLink* ItemFullBodySprint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemFullBodySprint");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemFullBodySprint_Params Parms{};

	Parms.InPoseSprint = InPoseSprint;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFullBodySprint != nullptr)
		*ItemFullBodySprint = std::move(Parms.ItemFullBodySprint);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemIdleAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseIdleAdditive                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemIdleAdditive                                                 (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemIdleAdditive");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemIdleAdditive_Params Parms{};

	Parms.InPoseIdleAdditive = InPoseIdleAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemIdleAdditive != nullptr)
		*ItemIdleAdditive = std::move(Parms.ItemIdleAdditive);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemCrouchTurningAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemCrouchTurningAdditive                                        (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemCrouchTurningAdditive(struct FPoseLink* ItemCrouchTurningAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemCrouchTurningAdditive");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemCrouchTurningAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemCrouchTurningAdditive != nullptr)
		*ItemCrouchTurningAdditive = std::move(Parms.ItemCrouchTurningAdditive);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemSlopeSliding
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSlopeSliding                                                 (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemSlopeSliding(struct FPoseLink* ItemSlopeSliding)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemSlopeSliding");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemSlopeSliding_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSlopeSliding != nullptr)
		*ItemSlopeSliding = std::move(Parms.ItemSlopeSliding);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemJumpUpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJumpUpAdditive                                               (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemJumpUpAdditive");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemJumpUpAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpUpAdditive != nullptr)
		*ItemJumpUpAdditive = std::move(Parms.ItemJumpUpAdditive);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemJumpLoopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJumpLoopAdditive                                             (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemJumpLoopAdditive");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemJumpLoopAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpLoopAdditive != nullptr)
		*ItemJumpLoopAdditive = std::move(Parms.ItemJumpLoopAdditive);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemFallAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFallAdditive                                                 (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemFallAdditive(struct FPoseLink* ItemFallAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemFallAdditive");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemFallAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallAdditive != nullptr)
		*ItemFallAdditive = std::move(Parms.ItemFallAdditive);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemFallLandAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFallLandAdditive                                             (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemFallLandAdditive");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemFallLandAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallLandAdditive != nullptr)
		*ItemFallLandAdditive = std::move(Parms.ItemFallLandAdditive);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemJetPackStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJetPackStartAdditive                                         (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemJetPackStartAdditive");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemJetPackStartAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackStartAdditive != nullptr)
		*ItemJetPackStartAdditive = std::move(Parms.ItemJetPackStartAdditive);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemJetPackJumpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJetPackJumpAdditive                                          (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemJetPackJumpAdditive");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemJetPackJumpAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackJumpAdditive != nullptr)
		*ItemJetPackJumpAdditive = std::move(Parms.ItemJetPackJumpAdditive);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemZipLineStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemZipLineStartAdditive                                         (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemZipLineStartAdditive");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemZipLineStartAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemZipLineStartAdditive != nullptr)
		*ItemZipLineStartAdditive = std::move(Parms.ItemZipLineStartAdditive);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemFlyModeStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFlyModeStartAdditive                                         (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemFlyModeStartAdditive(struct FPoseLink* ItemFlyModeStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemFlyModeStartAdditive");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemFlyModeStartAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFlyModeStartAdditive != nullptr)
		*ItemFlyModeStartAdditive = std::move(Parms.ItemFlyModeStartAdditive);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemFlyModeLoopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFlyModeLoopAdditive                                          (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemFlyModeLoopAdditive(struct FPoseLink* ItemFlyModeLoopAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemFlyModeLoopAdditive");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemFlyModeLoopAdditive_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFlyModeLoopAdditive != nullptr)
		*ItemFlyModeLoopAdditive = std::move(Parms.ItemFlyModeLoopAdditive);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemJogStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseJogStartAdditive                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogStartAdditive                                             (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemJogStartAdditive(const struct FPoseLink& InPoseJogStartAdditive, struct FPoseLink* ItemJogStartAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemJogStartAdditive");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemJogStartAdditive_Params Parms{};

	Parms.InPoseJogStartAdditive = InPoseJogStartAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogStartAdditive != nullptr)
		*ItemJogStartAdditive = std::move(Parms.ItemJogStartAdditive);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemJogStopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseJogStopAdditive                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogStopAdditive                                              (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemJogStopAdditive(const struct FPoseLink& InPoseJogStopAdditive, struct FPoseLink* ItemJogStopAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemJogStopAdditive");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemJogStopAdditive_Params Parms{};

	Parms.InPoseJogStopAdditive = InPoseJogStopAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogStopAdditive != nullptr)
		*ItemJogStopAdditive = std::move(Parms.ItemJogStopAdditive);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemJogPrePivotAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPosePrePivotAdditive                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogPrePivotAdditive                                          (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemJogPrePivotAdditive(const struct FPoseLink& InPosePrePivotAdditive, struct FPoseLink* ItemJogPrePivotAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemJogPrePivotAdditive");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemJogPrePivotAdditive_Params Parms{};

	Parms.InPosePrePivotAdditive = InPosePrePivotAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogPrePivotAdditive != nullptr)
		*ItemJogPrePivotAdditive = std::move(Parms.ItemJogPrePivotAdditive);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemJogPostPivotAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPosePostPivotAdditive                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogPostPivotAdditive                                         (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemJogPostPivotAdditive(const struct FPoseLink& InPosePostPivotAdditive, struct FPoseLink* ItemJogPostPivotAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemJogPostPivotAdditive");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemJogPostPivotAdditive_Params Parms{};

	Parms.InPosePostPivotAdditive = InPosePostPivotAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogPostPivotAdditive != nullptr)
		*ItemJogPostPivotAdditive = std::move(Parms.ItemJogPostPivotAdditive);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemLowerBodyMovement
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyMovement                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyMovement                                            (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemLowerBodyMovement");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemLowerBodyMovement_Params Parms{};

	Parms.InPoseLowerBodyMovement = InPoseLowerBodyMovement;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyMovement != nullptr)
		*ItemLowerBodyMovement = std::move(Parms.ItemLowerBodyMovement);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemLowerBodyLeanAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyLeanAdditive                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyLeanAdditive                                        (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* ItemLowerBodyLeanAdditive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemLowerBodyLeanAdditive");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemLowerBodyLeanAdditive_Params Parms{};

	Parms.InPoseLowerBodyLeanAdditive = InPoseLowerBodyLeanAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyLeanAdditive != nullptr)
		*ItemLowerBodyLeanAdditive = std::move(Parms.ItemLowerBodyLeanAdditive);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemLowerBodyJogStart
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogStart                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogStart                                            (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* ItemLowerBodyJogStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemLowerBodyJogStart");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemLowerBodyJogStart_Params Parms{};

	Parms.InPoseLowerBodyJogStart = InPoseLowerBodyJogStart;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogStart != nullptr)
		*ItemLowerBodyJogStart = std::move(Parms.ItemLowerBodyJogStart);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemLowerBodyJogStop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogStop                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogStop                                             (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* ItemLowerBodyJogStop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemLowerBodyJogStop");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemLowerBodyJogStop_Params Parms{};

	Parms.InPoseLowerBodyJogStop = InPoseLowerBodyJogStop;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogStop != nullptr)
		*ItemLowerBodyJogStop = std::move(Parms.ItemLowerBodyJogStop);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemLowerBodyJogPrePivot
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogPrePivot                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogPrePivot                                         (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* ItemLowerBodyJogPrePivot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemLowerBodyJogPrePivot");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemLowerBodyJogPrePivot_Params Parms{};

	Parms.InPoseLowerBodyJogPrePivot = InPoseLowerBodyJogPrePivot;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogPrePivot != nullptr)
		*ItemLowerBodyJogPrePivot = std::move(Parms.ItemLowerBodyJogPrePivot);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemLowerBodyJogPostPivot
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogPostPivot                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogPostPivot                                        (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* ItemLowerBodyJogPostPivot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemLowerBodyJogPostPivot");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemLowerBodyJogPostPivot_Params Parms{};

	Parms.InPoseLowerBodyJogPostPivot = InPoseLowerBodyJogPostPivot;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogPostPivot != nullptr)
		*ItemLowerBodyJogPostPivot = std::move(Parms.ItemLowerBodyJogPostPivot);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemRelaxedEntry
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseRelaxedEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemRelaxedEntry                                                 (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemRelaxedEntry");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemRelaxedEntry_Params Parms{};

	Parms.InPoseRelaxedEntry = InPoseRelaxedEntry;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemRelaxedEntry != nullptr)
		*ItemRelaxedEntry = std::move(Parms.ItemRelaxedEntry);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemSwimJumpStart
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpStart                                                (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemSwimJumpStart(struct FPoseLink* ItemSwimJumpStart)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemSwimJumpStart");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemSwimJumpStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpStart != nullptr)
		*ItemSwimJumpStart = std::move(Parms.ItemSwimJumpStart);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemSwimJumpStartLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpStartLoop                                            (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemSwimJumpStartLoop(struct FPoseLink* ItemSwimJumpStartLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemSwimJumpStartLoop");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemSwimJumpStartLoop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpStartLoop != nullptr)
		*ItemSwimJumpStartLoop = std::move(Parms.ItemSwimJumpStartLoop);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemSwimJumpFallLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpFallLoop                                             (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemSwimJumpFallLoop");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemSwimJumpFallLoop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpFallLoop != nullptr)
		*ItemSwimJumpFallLoop = std::move(Parms.ItemSwimJumpFallLoop);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemSwimJumpSurfaceLoop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpSurfaceLoop                                          (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemSwimJumpSurfaceLoop");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemSwimJumpSurfaceLoop_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpSurfaceLoop != nullptr)
		*ItemSwimJumpSurfaceLoop = std::move(Parms.ItemSwimJumpSurfaceLoop);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ItemSwimJumpSurfaceEnd
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSwimJumpSurfaceEnd                                           (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ItemSwimJumpSurfaceEnd");

	Params::UGalileo_LobsterLayerAnimBP_C_ItemSwimJumpSurfaceEnd_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpSurfaceEnd != nullptr)
		*ItemSwimJumpSurfaceEnd = std::move(Parms.ItemSwimJumpSurfaceEnd);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UGalileo_LobsterLayerAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "AnimGraph");

	Params::UGalileo_LobsterLayerAnimBP_C_AnimGraph_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = std::move(Parms.AnimGraph);

}


// Function Galileo_LobsterLayerAnimBP.Galileo_LobsterLayerAnimBP_C.ExecuteUbergraph_Galileo_LobsterLayerAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGalileo_LobsterLayerAnimBP_C::ExecuteUbergraph_Galileo_LobsterLayerAnimBP(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Galileo_LobsterLayerAnimBP_C", "ExecuteUbergraph_Galileo_LobsterLayerAnimBP");

	Params::UGalileo_LobsterLayerAnimBP_C_ExecuteUbergraph_Galileo_LobsterLayerAnimBP_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


