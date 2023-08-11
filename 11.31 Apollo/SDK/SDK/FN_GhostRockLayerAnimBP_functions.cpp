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


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemLowerBodyLeanAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyLeanAdditive                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyLeanAdditive                                        (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemLowerBodyLeanAdditive(const struct FPoseLink& InPoseLowerBodyLeanAdditive, struct FPoseLink* ItemLowerBodyLeanAdditive)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemLowerBodyLeanAdditive");

	Params::UGhostRockLayerAnimBP_C_ItemLowerBodyLeanAdditive_Params Parms;

	Parms.InPoseLowerBodyLeanAdditive = InPoseLowerBodyLeanAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyLeanAdditive != nullptr)
		*ItemLowerBodyLeanAdditive = Parms.ItemLowerBodyLeanAdditive;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemUpperBody
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseUpperBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FFortAnimInput_AdjustedAim  InputParam                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemUpperBody                                                    (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemUpperBody(const struct FPoseLink& InPoseUpperBody, const struct FFortAnimInput_AdjustedAim& InputParam, struct FPoseLink* ItemUpperBody)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemUpperBody");

	Params::UGhostRockLayerAnimBP_C_ItemUpperBody_Params Parms;

	Parms.InPoseUpperBody = InPoseUpperBody;
	Parms.InputParam = InputParam;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemUpperBody != nullptr)
		*ItemUpperBody = Parms.ItemUpperBody;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemFullBodySprint
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseSprint                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemFullBodySprint                                               (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemFullBodySprint(const struct FPoseLink& InPoseSprint, struct FPoseLink* ItemFullBodySprint)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemFullBodySprint");

	Params::UGhostRockLayerAnimBP_C_ItemFullBodySprint_Params Parms;

	Parms.InPoseSprint = InPoseSprint;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemFullBodySprint != nullptr)
		*ItemFullBodySprint = Parms.ItemFullBodySprint;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemIdleAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseIdleAdditive                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemIdleAdditive                                                 (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemIdleAdditive(const struct FPoseLink& InPoseIdleAdditive, struct FPoseLink* ItemIdleAdditive)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemIdleAdditive");

	Params::UGhostRockLayerAnimBP_C_ItemIdleAdditive_Params Parms;

	Parms.InPoseIdleAdditive = InPoseIdleAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemIdleAdditive != nullptr)
		*ItemIdleAdditive = Parms.ItemIdleAdditive;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemCrouchTurningAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemCrouchTurningAdditive                                        (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemCrouchTurningAdditive(struct FPoseLink* ItemCrouchTurningAdditive)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemCrouchTurningAdditive");

	Params::UGhostRockLayerAnimBP_C_ItemCrouchTurningAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemCrouchTurningAdditive != nullptr)
		*ItemCrouchTurningAdditive = Parms.ItemCrouchTurningAdditive;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemSlopeSliding
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemSlopeSliding                                                 (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemSlopeSliding(struct FPoseLink* ItemSlopeSliding)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemSlopeSliding");

	Params::UGhostRockLayerAnimBP_C_ItemSlopeSliding_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemSlopeSliding != nullptr)
		*ItemSlopeSliding = Parms.ItemSlopeSliding;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemJumpUpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJumpUpAdditive                                               (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemJumpUpAdditive(struct FPoseLink* ItemJumpUpAdditive)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemJumpUpAdditive");

	Params::UGhostRockLayerAnimBP_C_ItemJumpUpAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpUpAdditive != nullptr)
		*ItemJumpUpAdditive = Parms.ItemJumpUpAdditive;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemJumpLoopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJumpLoopAdditive                                             (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemJumpLoopAdditive(struct FPoseLink* ItemJumpLoopAdditive)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemJumpLoopAdditive");

	Params::UGhostRockLayerAnimBP_C_ItemJumpLoopAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJumpLoopAdditive != nullptr)
		*ItemJumpLoopAdditive = Parms.ItemJumpLoopAdditive;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemFallAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFallAdditive                                                 (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemFallAdditive(struct FPoseLink* ItemFallAdditive)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemFallAdditive");

	Params::UGhostRockLayerAnimBP_C_ItemFallAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallAdditive != nullptr)
		*ItemFallAdditive = Parms.ItemFallAdditive;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemFallLandAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFallLandAdditive                                             (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemFallLandAdditive(struct FPoseLink* ItemFallLandAdditive)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemFallLandAdditive");

	Params::UGhostRockLayerAnimBP_C_ItemFallLandAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFallLandAdditive != nullptr)
		*ItemFallLandAdditive = Parms.ItemFallLandAdditive;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemJetPackStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJetPackStartAdditive                                         (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemJetPackStartAdditive(struct FPoseLink* ItemJetPackStartAdditive)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemJetPackStartAdditive");

	Params::UGhostRockLayerAnimBP_C_ItemJetPackStartAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackStartAdditive != nullptr)
		*ItemJetPackStartAdditive = Parms.ItemJetPackStartAdditive;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemJetPackJumpAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemJetPackJumpAdditive                                          (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemJetPackJumpAdditive(struct FPoseLink* ItemJetPackJumpAdditive)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemJetPackJumpAdditive");

	Params::UGhostRockLayerAnimBP_C_ItemJetPackJumpAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemJetPackJumpAdditive != nullptr)
		*ItemJetPackJumpAdditive = Parms.ItemJetPackJumpAdditive;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemZipLineStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemZipLineStartAdditive                                         (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemZipLineStartAdditive(struct FPoseLink* ItemZipLineStartAdditive)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemZipLineStartAdditive");

	Params::UGhostRockLayerAnimBP_C_ItemZipLineStartAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemZipLineStartAdditive != nullptr)
		*ItemZipLineStartAdditive = Parms.ItemZipLineStartAdditive;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemFlyModeStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFlyModeStartAdditive                                         (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemFlyModeStartAdditive(struct FPoseLink* ItemFlyModeStartAdditive)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemFlyModeStartAdditive");

	Params::UGhostRockLayerAnimBP_C_ItemFlyModeStartAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFlyModeStartAdditive != nullptr)
		*ItemFlyModeStartAdditive = Parms.ItemFlyModeStartAdditive;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemFlyModeLoopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   ItemFlyModeLoopAdditive                                          (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemFlyModeLoopAdditive(struct FPoseLink* ItemFlyModeLoopAdditive)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemFlyModeLoopAdditive");

	Params::UGhostRockLayerAnimBP_C_ItemFlyModeLoopAdditive_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (ItemFlyModeLoopAdditive != nullptr)
		*ItemFlyModeLoopAdditive = Parms.ItemFlyModeLoopAdditive;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemJogStartAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseJogStartAdditive                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogStartAdditive                                             (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemJogStartAdditive(const struct FPoseLink& InPoseJogStartAdditive, struct FPoseLink* ItemJogStartAdditive)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemJogStartAdditive");

	Params::UGhostRockLayerAnimBP_C_ItemJogStartAdditive_Params Parms;

	Parms.InPoseJogStartAdditive = InPoseJogStartAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogStartAdditive != nullptr)
		*ItemJogStartAdditive = Parms.ItemJogStartAdditive;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemJogStopAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseJogStopAdditive                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogStopAdditive                                              (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemJogStopAdditive(const struct FPoseLink& InPoseJogStopAdditive, struct FPoseLink* ItemJogStopAdditive)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemJogStopAdditive");

	Params::UGhostRockLayerAnimBP_C_ItemJogStopAdditive_Params Parms;

	Parms.InPoseJogStopAdditive = InPoseJogStopAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogStopAdditive != nullptr)
		*ItemJogStopAdditive = Parms.ItemJogStopAdditive;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemJogPrePivotAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPosePrePivotAdditive                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogPrePivotAdditive                                          (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemJogPrePivotAdditive(const struct FPoseLink& InPosePrePivotAdditive, struct FPoseLink* ItemJogPrePivotAdditive)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemJogPrePivotAdditive");

	Params::UGhostRockLayerAnimBP_C_ItemJogPrePivotAdditive_Params Parms;

	Parms.InPosePrePivotAdditive = InPosePrePivotAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogPrePivotAdditive != nullptr)
		*ItemJogPrePivotAdditive = Parms.ItemJogPrePivotAdditive;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemJogPostPivotAdditive
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPosePostPivotAdditive                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemJogPostPivotAdditive                                         (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemJogPostPivotAdditive(const struct FPoseLink& InPosePostPivotAdditive, struct FPoseLink* ItemJogPostPivotAdditive)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemJogPostPivotAdditive");

	Params::UGhostRockLayerAnimBP_C_ItemJogPostPivotAdditive_Params Parms;

	Parms.InPosePostPivotAdditive = InPosePostPivotAdditive;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemJogPostPivotAdditive != nullptr)
		*ItemJogPostPivotAdditive = Parms.ItemJogPostPivotAdditive;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemLowerBodyMovement
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyMovement                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyMovement                                            (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemLowerBodyMovement(const struct FPoseLink& InPoseLowerBodyMovement, struct FPoseLink* ItemLowerBodyMovement)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemLowerBodyMovement");

	Params::UGhostRockLayerAnimBP_C_ItemLowerBodyMovement_Params Parms;

	Parms.InPoseLowerBodyMovement = InPoseLowerBodyMovement;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyMovement != nullptr)
		*ItemLowerBodyMovement = Parms.ItemLowerBodyMovement;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemLowerBodyJogStart
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogStart                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogStart                                            (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemLowerBodyJogStart(const struct FPoseLink& InPoseLowerBodyJogStart, struct FPoseLink* ItemLowerBodyJogStart)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemLowerBodyJogStart");

	Params::UGhostRockLayerAnimBP_C_ItemLowerBodyJogStart_Params Parms;

	Parms.InPoseLowerBodyJogStart = InPoseLowerBodyJogStart;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogStart != nullptr)
		*ItemLowerBodyJogStart = Parms.ItemLowerBodyJogStart;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemLowerBodyJogStop
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogStop                                           (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogStop                                             (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemLowerBodyJogStop(const struct FPoseLink& InPoseLowerBodyJogStop, struct FPoseLink* ItemLowerBodyJogStop)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemLowerBodyJogStop");

	Params::UGhostRockLayerAnimBP_C_ItemLowerBodyJogStop_Params Parms;

	Parms.InPoseLowerBodyJogStop = InPoseLowerBodyJogStop;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogStop != nullptr)
		*ItemLowerBodyJogStop = Parms.ItemLowerBodyJogStop;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemLowerBodyJogPrePivot
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogPrePivot                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogPrePivot                                         (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemLowerBodyJogPrePivot(const struct FPoseLink& InPoseLowerBodyJogPrePivot, struct FPoseLink* ItemLowerBodyJogPrePivot)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemLowerBodyJogPrePivot");

	Params::UGhostRockLayerAnimBP_C_ItemLowerBodyJogPrePivot_Params Parms;

	Parms.InPoseLowerBodyJogPrePivot = InPoseLowerBodyJogPrePivot;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogPrePivot != nullptr)
		*ItemLowerBodyJogPrePivot = Parms.ItemLowerBodyJogPrePivot;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemLowerBodyJogPostPivot
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseLowerBodyJogPostPivot                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemLowerBodyJogPostPivot                                        (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemLowerBodyJogPostPivot(const struct FPoseLink& InPoseLowerBodyJogPostPivot, struct FPoseLink* ItemLowerBodyJogPostPivot)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemLowerBodyJogPostPivot");

	Params::UGhostRockLayerAnimBP_C_ItemLowerBodyJogPostPivot_Params Parms;

	Parms.InPoseLowerBodyJogPostPivot = InPoseLowerBodyJogPostPivot;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemLowerBodyJogPostPivot != nullptr)
		*ItemLowerBodyJogPostPivot = Parms.ItemLowerBodyJogPostPivot;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ItemRelaxedEntry
// (HasOutParams, BlueprintCallable)
// Parameters:
// struct FPoseLink                   InPoseRelaxedEntry                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// struct FPoseLink                   ItemRelaxedEntry                                                 (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::ItemRelaxedEntry(const struct FPoseLink& InPoseRelaxedEntry, struct FPoseLink* ItemRelaxedEntry)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ItemRelaxedEntry");

	Params::UGhostRockLayerAnimBP_C_ItemRelaxedEntry_Params Parms;

	Parms.InPoseRelaxedEntry = InPoseRelaxedEntry;

	UObject::ProcessEvent(Func, &Parms);

	if (ItemRelaxedEntry != nullptr)
		*ItemRelaxedEntry = Parms.ItemRelaxedEntry;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.AnimGraph
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPoseLink                   AnimGraph                                                        (Parm, OutParm, NoDestructor)

void UGhostRockLayerAnimBP_C::AnimGraph(struct FPoseLink* AnimGraph)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "AnimGraph");

	Params::UGhostRockLayerAnimBP_C_AnimGraph_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (AnimGraph != nullptr)
		*AnimGraph = Parms.AnimGraph;

}


// Function GhostRockLayerAnimBP.GhostRockLayerAnimBP_C.ExecuteUbergraph_GhostRockLayerAnimBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGhostRockLayerAnimBP_C::ExecuteUbergraph_GhostRockLayerAnimBP(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GhostRockLayerAnimBP_C", "ExecuteUbergraph_GhostRockLayerAnimBP");

	Params::UGhostRockLayerAnimBP_C_ExecuteUbergraph_GhostRockLayerAnimBP_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
