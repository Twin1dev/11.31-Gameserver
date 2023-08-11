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


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemAimOffset
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose_AimOffset                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// float                              AimOffsetAlpha                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Yaw                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Pitch                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPoseLink                   InPose_UpperLowerPreMeleeAO                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemAimOffset                                                    (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemAimOffset(const struct FPoseLink& InPose_AimOffset, float AimOffsetAlpha, float Yaw, float Pitch, const struct FPoseLink& InPose_UpperLowerPreMeleeAO, struct FPoseLink* ItemAimOffset)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemAimOffset");

	Params::IItemAnimLayerInterface_C_ItemAimOffset_Params Parms;

	Parms.InPose_AimOffset = InPose_AimOffset;
	Parms.AimOffsetAlpha = AimOffsetAlpha;
	Parms.Yaw = Yaw;
	Parms.Pitch = Pitch;
	Parms.InPose_UpperLowerPreMeleeAO = InPose_UpperLowerPreMeleeAO;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemAimOffset != nullptr)
		*ItemAimOffset = Parms.ItemAimOffset;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSkeletalControl
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPose                                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemSkeletalControl                                              (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemSkeletalControl(const struct FPoseLink& InPose, struct FPoseLink* ItemSkeletalControl)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemSkeletalControl");

	Params::IItemAnimLayerInterface_C_ItemSkeletalControl_Params Parms;

	Parms.InPose = InPose;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemSkeletalControl != nullptr)
		*ItemSkeletalControl = Parms.ItemSkeletalControl;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpSurfaceEnd
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemSwimJumpSurfaceEnd                                           (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemSwimJumpSurfaceEnd(struct FPoseLink* ItemSwimJumpSurfaceEnd)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemSwimJumpSurfaceEnd");

	Params::IItemAnimLayerInterface_C_ItemSwimJumpSurfaceEnd_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpSurfaceEnd != nullptr)
		*ItemSwimJumpSurfaceEnd = Parms.ItemSwimJumpSurfaceEnd;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpSurfaceLoop
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemSwimJumpSurfaceLoop                                          (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemSwimJumpSurfaceLoop(struct FPoseLink* ItemSwimJumpSurfaceLoop)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemSwimJumpSurfaceLoop");

	Params::IItemAnimLayerInterface_C_ItemSwimJumpSurfaceLoop_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpSurfaceLoop != nullptr)
		*ItemSwimJumpSurfaceLoop = Parms.ItemSwimJumpSurfaceLoop;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpFallLoop
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemSwimJumpFallLoop                                             (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemSwimJumpFallLoop(struct FPoseLink* ItemSwimJumpFallLoop)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemSwimJumpFallLoop");

	Params::IItemAnimLayerInterface_C_ItemSwimJumpFallLoop_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpFallLoop != nullptr)
		*ItemSwimJumpFallLoop = Parms.ItemSwimJumpFallLoop;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpStartLoop
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemSwimJumpStartLoop                                            (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemSwimJumpStartLoop(struct FPoseLink* ItemSwimJumpStartLoop)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemSwimJumpStartLoop");

	Params::IItemAnimLayerInterface_C_ItemSwimJumpStartLoop_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpStartLoop != nullptr)
		*ItemSwimJumpStartLoop = Parms.ItemSwimJumpStartLoop;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSwimJumpStart
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemSwimJumpStart                                                (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemSwimJumpStart(struct FPoseLink* ItemSwimJumpStart)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemSwimJumpStart");

	Params::IItemAnimLayerInterface_C_ItemSwimJumpStart_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSwimJumpStart != nullptr)
		*ItemSwimJumpStart = Parms.ItemSwimJumpStart;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemRelaxedEntry
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseRelaxedEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemRelaxedEntry                                                 (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemRelaxedEntry");

	Params::IItemAnimLayerInterface_C_ItemRelaxedEntry_Params Parms;

	Parms.InPoseRelaxedEntry = InPoseRelaxedEntry;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemRelaxedEntry != nullptr)
		*ItemRelaxedEntry = Parms.ItemRelaxedEntry;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyJogPostPivot
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogPostPivot                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogPostPivot                                        (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* ItemLowerBodyJogPostPivot)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemLowerBodyJogPostPivot");

	Params::IItemAnimLayerInterface_C_ItemLowerBodyJogPostPivot_Params Parms;

	Parms.InPoseLowerBodyJogPostPivot = InPoseLowerBodyJogPostPivot;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogPostPivot != nullptr)
		*ItemLowerBodyJogPostPivot = Parms.ItemLowerBodyJogPostPivot;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyJogPrePivot
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogPrePivot                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogPrePivot                                         (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* ItemLowerBodyJogPrePivot)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemLowerBodyJogPrePivot");

	Params::IItemAnimLayerInterface_C_ItemLowerBodyJogPrePivot_Params Parms;

	Parms.InPoseLowerBodyJogPrePivot = InPoseLowerBodyJogPrePivot;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogPrePivot != nullptr)
		*ItemLowerBodyJogPrePivot = Parms.ItemLowerBodyJogPrePivot;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyJogStop
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogStop                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogStop                                             (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* ItemLowerBodyJogStop)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemLowerBodyJogStop");

	Params::IItemAnimLayerInterface_C_ItemLowerBodyJogStop_Params Parms;

	Parms.InPoseLowerBodyJogStop = InPoseLowerBodyJogStop;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogStop != nullptr)
		*ItemLowerBodyJogStop = Parms.ItemLowerBodyJogStop;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyJogStart
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogStart                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogStart                                            (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* ItemLowerBodyJogStart)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemLowerBodyJogStart");

	Params::IItemAnimLayerInterface_C_ItemLowerBodyJogStart_Params Parms;

	Parms.InPoseLowerBodyJogStart = InPoseLowerBodyJogStart;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogStart != nullptr)
		*ItemLowerBodyJogStart = Parms.ItemLowerBodyJogStart;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyLeanAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyLeanAdditive                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyLeanAdditive                                        (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* ItemLowerBodyLeanAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemLowerBodyLeanAdditive");

	Params::IItemAnimLayerInterface_C_ItemLowerBodyLeanAdditive_Params Parms;

	Parms.InPoseLowerBodyLeanAdditive = InPoseLowerBodyLeanAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyLeanAdditive != nullptr)
		*ItemLowerBodyLeanAdditive = Parms.ItemLowerBodyLeanAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemLowerBodyMovement
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyMovement                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyMovement                                            (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemLowerBodyMovement");

	Params::IItemAnimLayerInterface_C_ItemLowerBodyMovement_Params Parms;

	Parms.InPoseLowerBodyMovement = InPoseLowerBodyMovement;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyMovement != nullptr)
		*ItemLowerBodyMovement = Parms.ItemLowerBodyMovement;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJogPostPivotAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPosePostPivotAdditive                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogPostPivotAdditive                                         (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemJogPostPivotAdditive(const struct FPoseLink& InPosePostPivotAdditive, struct FPoseLink* ItemJogPostPivotAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemJogPostPivotAdditive");

	Params::IItemAnimLayerInterface_C_ItemJogPostPivotAdditive_Params Parms;

	Parms.InPosePostPivotAdditive = InPosePostPivotAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogPostPivotAdditive != nullptr)
		*ItemJogPostPivotAdditive = Parms.ItemJogPostPivotAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJogPrePivotAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPosePrePivotAdditive                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogPrePivotAdditive                                          (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemJogPrePivotAdditive(const struct FPoseLink& InPosePrePivotAdditive, struct FPoseLink* ItemJogPrePivotAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemJogPrePivotAdditive");

	Params::IItemAnimLayerInterface_C_ItemJogPrePivotAdditive_Params Parms;

	Parms.InPosePrePivotAdditive = InPosePrePivotAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogPrePivotAdditive != nullptr)
		*ItemJogPrePivotAdditive = Parms.ItemJogPrePivotAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJogStopAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseJogStopAdditive                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogStopAdditive                                              (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemJogStopAdditive(const struct FPoseLink& InPoseJogStopAdditive, struct FPoseLink* ItemJogStopAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemJogStopAdditive");

	Params::IItemAnimLayerInterface_C_ItemJogStopAdditive_Params Parms;

	Parms.InPoseJogStopAdditive = InPoseJogStopAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogStopAdditive != nullptr)
		*ItemJogStopAdditive = Parms.ItemJogStopAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJogStartAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseJogStartAdditive                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogStartAdditive                                             (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemJogStartAdditive(const struct FPoseLink& InPoseJogStartAdditive, struct FPoseLink* ItemJogStartAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemJogStartAdditive");

	Params::IItemAnimLayerInterface_C_ItemJogStartAdditive_Params Parms;

	Parms.InPoseJogStartAdditive = InPoseJogStartAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogStartAdditive != nullptr)
		*ItemJogStartAdditive = Parms.ItemJogStartAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFlyModeLoopAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemFlyModeLoopAdditive                                          (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemFlyModeLoopAdditive(struct FPoseLink* ItemFlyModeLoopAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemFlyModeLoopAdditive");

	Params::IItemAnimLayerInterface_C_ItemFlyModeLoopAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFlyModeLoopAdditive != nullptr)
		*ItemFlyModeLoopAdditive = Parms.ItemFlyModeLoopAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFlyModeStartAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemFlyModeStartAdditive                                         (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemFlyModeStartAdditive(struct FPoseLink* ItemFlyModeStartAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemFlyModeStartAdditive");

	Params::IItemAnimLayerInterface_C_ItemFlyModeStartAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFlyModeStartAdditive != nullptr)
		*ItemFlyModeStartAdditive = Parms.ItemFlyModeStartAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemZipLineStartAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemZipLineStartAdditive                                         (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemZipLineStartAdditive");

	Params::IItemAnimLayerInterface_C_ItemZipLineStartAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemZipLineStartAdditive != nullptr)
		*ItemZipLineStartAdditive = Parms.ItemZipLineStartAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJetPackJumpAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemJetPackJumpAdditive                                          (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemJetPackJumpAdditive");

	Params::IItemAnimLayerInterface_C_ItemJetPackJumpAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackJumpAdditive != nullptr)
		*ItemJetPackJumpAdditive = Parms.ItemJetPackJumpAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJetPackStartAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemJetPackStartAdditive                                         (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemJetPackStartAdditive");

	Params::IItemAnimLayerInterface_C_ItemJetPackStartAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackStartAdditive != nullptr)
		*ItemJetPackStartAdditive = Parms.ItemJetPackStartAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFallLandAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemFallLandAdditive                                             (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemFallLandAdditive");

	Params::IItemAnimLayerInterface_C_ItemFallLandAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallLandAdditive != nullptr)
		*ItemFallLandAdditive = Parms.ItemFallLandAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFallAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemFallAdditive                                                 (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemFallAdditive(struct FPoseLink* ItemFallAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemFallAdditive");

	Params::IItemAnimLayerInterface_C_ItemFallAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallAdditive != nullptr)
		*ItemFallAdditive = Parms.ItemFallAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJumpLoopAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemJumpLoopAdditive                                             (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemJumpLoopAdditive");

	Params::IItemAnimLayerInterface_C_ItemJumpLoopAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpLoopAdditive != nullptr)
		*ItemJumpLoopAdditive = Parms.ItemJumpLoopAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemJumpUpAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemJumpUpAdditive                                               (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemJumpUpAdditive");

	Params::IItemAnimLayerInterface_C_ItemJumpUpAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpUpAdditive != nullptr)
		*ItemJumpUpAdditive = Parms.ItemJumpUpAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemSlopeSliding
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemSlopeSliding                                                 (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemSlopeSliding(struct FPoseLink* ItemSlopeSliding)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemSlopeSliding");

	Params::IItemAnimLayerInterface_C_ItemSlopeSliding_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSlopeSliding != nullptr)
		*ItemSlopeSliding = Parms.ItemSlopeSliding;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemCrouchTurningAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   ItemCrouchTurningAdditive                                        (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemCrouchTurningAdditive(struct FPoseLink* ItemCrouchTurningAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemCrouchTurningAdditive");

	Params::IItemAnimLayerInterface_C_ItemCrouchTurningAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemCrouchTurningAdditive != nullptr)
		*ItemCrouchTurningAdditive = Parms.ItemCrouchTurningAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemIdleAdditive
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseIdleAdditive                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemIdleAdditive                                                 (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemIdleAdditive");

	Params::IItemAnimLayerInterface_C_ItemIdleAdditive_Params Parms;

	Parms.InPoseIdleAdditive = InPoseIdleAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemIdleAdditive != nullptr)
		*ItemIdleAdditive = Parms.ItemIdleAdditive;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemFullBodySprint
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseSprint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemFullBodySprint                                               (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemFullBodySprint(const struct FPoseLink& InPoseSprint, struct FPoseLink* ItemFullBodySprint)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemFullBodySprint");

	Params::IItemAnimLayerInterface_C_ItemFullBodySprint_Params Parms;

	Parms.InPoseSprint = InPoseSprint;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFullBodySprint != nullptr)
		*ItemFullBodySprint = Parms.ItemFullBodySprint;

}


// Function ItemAnimLayerInterface.ItemAnimLayerInterface_C.ItemUpperBody
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   InPoseUpperBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFortAnimInput_AdjustedAim  InputParam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemUpperBody                                                    (Parm, OutParm, NoDestructor)

void IItemAnimLayerInterface_C::ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody)
{
	static auto Func = Class->GetFunction("ItemAnimLayerInterface_C", "ItemUpperBody");

	Params::IItemAnimLayerInterface_C_ItemUpperBody_Params Parms;

	Parms.InPoseUpperBody = InPoseUpperBody;
	Parms.InputParam = InputParam;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemUpperBody != nullptr)
		*ItemUpperBody = Parms.ItemUpperBody;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
