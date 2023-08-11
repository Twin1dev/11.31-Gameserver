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

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.FullBodyOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_FullBodyOverride_Params
{
public:
	struct FPoseLink                             PassThroughFullBodyPose;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             FullBodyOverride;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingDiveJumpingLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingDiveJumpingLayer_Params
{
public:
	struct FPoseLink                             PassThroughSwimmingDiveJumping;                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingDiveJumpingLayer;                          // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingFullBodyAdditiveLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingFullBodyAdditiveLayer_Params
{
public:
	struct FPoseLink                             PassThroughFullBodyAdditive;                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingFullBodyAdditiveLayer;                     // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x78 (0x78 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingAdditiveLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingAdditiveLayer_Params
{
public:
	struct FPoseLink                             IdleAdditive_Cache;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             MovementAdditiveLayerPose_Cache;                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             FullBody;                                          // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        PlayMeleeAttackAOLayer;                            // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DisableArmsHeadAdditiveCurveAlphaLayer;            // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DisableIKRootAdditiveCurveAlphaLayer;              // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LocomotionAdditiveAlphaLayer;                      // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDBNOLayer;                                       // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BC9[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPoseLink                             UpperAndLowerBody_Cache;                           // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SprintingPose_PostMask_Cache;                      // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingAdditiveLayer;                             // 0x68(0x10)(Parm, OutParm, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingLowerBodyLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingLowerBodyLayer_Params
{
public:
	struct FPoseLink                             UpperBody_Cache;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             PreUpperBodySlot_Cache;                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             PassThroughSwimmingLowerBody;                      // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingLowerBodyLayer;                            // 0x30(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingUpperBodyPoseNonTargetingLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingUpperBodyPoseNonTargetingLayer_Params
{
public:
	struct FPoseLink                             PassThroughSwimmingUpperBodyPoseNonTargeting;      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingUpperBodyPoseNonTargetingLayer;            // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingUpperBodyPoseTargetingLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingUpperBodyPoseTargetingLayer_Params
{
public:
	struct FPoseLink                             PassThroughSwimmingUpperBodyPoseTargeting;         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingUpperBodyPoseTargetingLayer;               // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingMovementAdditiveLayerPose
struct UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingMovementAdditiveLayerPose_Params
{
public:
	struct FPoseLink                             PassThroughSwimmingMovementAdditive;               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingMovementAdditiveLayerPose;                 // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingSprintLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingSprintLayer_Params
{
public:
	struct FPoseLink                             PassThroughSwimmingSprint;                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingSprintLayer;                               // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.SwimmingLayer
struct UFortnite_M_Avg_Player_AnimBlueprint_C_SwimmingLayer_Params
{
public:
	struct FPoseLink                             MainPlayerAnimBP;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             SwimmingLayer;                                     // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleDBNOCarriedLeansOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleDBNOCarriedLeansOverride_Params
{
public:
	struct FPoseLink                             InPoseDBNOCarried;                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleDBNOCarriedLeansOverride;                   // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleDBNOJoggingOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleDBNOJoggingOverride_Params
{
public:
	struct FPoseLink                             VehicleDBNOJoggingOverride;                        // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemAimOffset
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemAimOffset_Params
{
public:
	struct FPoseLink                             InPose_AimOffset;                                  // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	float                                        AimOffsetAlpha;                                    // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Yaw;                                               // 0x14(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Pitch;                                             // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4BCA[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPoseLink                             InPose_UpperLowerPreMeleeAO;                       // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemAimOffset;                                     // 0x30(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSkeletalControl
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSkeletalControl_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemSkeletalControl;                               // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpSurfaceEnd
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceEnd_Params
{
public:
	struct FPoseLink                             ItemSwimJumpSurfaceEnd;                            // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpSurfaceLoop
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpSurfaceLoop_Params
{
public:
	struct FPoseLink                             ItemSwimJumpSurfaceLoop;                           // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpFallLoop
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpFallLoop_Params
{
public:
	struct FPoseLink                             ItemSwimJumpFallLoop;                              // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpStartLoop
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStartLoop_Params
{
public:
	struct FPoseLink                             ItemSwimJumpStartLoop;                             // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSwimJumpStart
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSwimJumpStart_Params
{
public:
	struct FPoseLink                             ItemSwimJumpStart;                                 // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyLeanAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyLeanAdditive_Params
{
public:
	struct FPoseLink                             InPoseLowerBodyLeanAdditive;                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemLowerBodyLeanAdditive;                         // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x260 (0x260 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemUpperBody
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemUpperBody_Params
{
public:
	struct FPoseLink                             InPoseUpperBody;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFortAnimInput_AdjustedAim            InputParam;                                        // 0x10(0x240)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemUpperBody;                                     // 0x250(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFullBodySprint
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFullBodySprint_Params
{
public:
	struct FPoseLink                             InPoseSprint;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemFullBodySprint;                                // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemIdleAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemIdleAdditive_Params
{
public:
	struct FPoseLink                             InPoseIdleAdditive;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemIdleAdditive;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemCrouchTurningAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemCrouchTurningAdditive_Params
{
public:
	struct FPoseLink                             ItemCrouchTurningAdditive;                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemSlopeSliding
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemSlopeSliding_Params
{
public:
	struct FPoseLink                             ItemSlopeSliding;                                  // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJumpUpAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpUpAdditive_Params
{
public:
	struct FPoseLink                             ItemJumpUpAdditive;                                // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJumpLoopAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJumpLoopAdditive_Params
{
public:
	struct FPoseLink                             ItemJumpLoopAdditive;                              // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFallAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFallAdditive_Params
{
public:
	struct FPoseLink                             ItemFallAdditive;                                  // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFallLandAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFallLandAdditive_Params
{
public:
	struct FPoseLink                             ItemFallLandAdditive;                              // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJetPackStartAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackStartAdditive_Params
{
public:
	struct FPoseLink                             ItemJetPackStartAdditive;                          // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJetPackJumpAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJetPackJumpAdditive_Params
{
public:
	struct FPoseLink                             ItemJetPackJumpAdditive;                           // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemZipLineStartAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemZipLineStartAdditive_Params
{
public:
	struct FPoseLink                             ItemZipLineStartAdditive;                          // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFlyModeStartAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFlyModeStartAdditive_Params
{
public:
	struct FPoseLink                             ItemFlyModeStartAdditive;                          // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemFlyModeLoopAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemFlyModeLoopAdditive_Params
{
public:
	struct FPoseLink                             ItemFlyModeLoopAdditive;                           // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJogStartAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJogStartAdditive_Params
{
public:
	struct FPoseLink                             InPoseJogStartAdditive;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemJogStartAdditive;                              // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJogStopAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJogStopAdditive_Params
{
public:
	struct FPoseLink                             InPoseJogStopAdditive;                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemJogStopAdditive;                               // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJogPrePivotAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJogPrePivotAdditive_Params
{
public:
	struct FPoseLink                             InPosePrePivotAdditive;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemJogPrePivotAdditive;                           // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemJogPostPivotAdditive
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemJogPostPivotAdditive_Params
{
public:
	struct FPoseLink                             InPosePostPivotAdditive;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemJogPostPivotAdditive;                          // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyMovement
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyMovement_Params
{
public:
	struct FPoseLink                             InPoseLowerBodyMovement;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemLowerBodyMovement;                             // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyJogStart
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyJogStart_Params
{
public:
	struct FPoseLink                             InPoseLowerBodyJogStart;                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemLowerBodyJogStart;                             // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyJogStop
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyJogStop_Params
{
public:
	struct FPoseLink                             InPoseLowerBodyJogStop;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemLowerBodyJogStop;                              // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyJogPrePivot
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyJogPrePivot_Params
{
public:
	struct FPoseLink                             InPoseLowerBodyJogPrePivot;                        // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemLowerBodyJogPrePivot;                          // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemLowerBodyJogPostPivot
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemLowerBodyJogPostPivot_Params
{
public:
	struct FPoseLink                             InPoseLowerBodyJogPostPivot;                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemLowerBodyJogPostPivot;                         // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ItemRelaxedEntry
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ItemRelaxedEntry_Params
{
public:
	struct FPoseLink                             InPoseRelaxedEntry;                                // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             ItemRelaxedEntry;                                  // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0xA0 (0xA0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleSplitBodyOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleSplitBodyOverride_Params
{
public:
	struct FPoseLink                             InPoseSplitBody;                                   // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InPoseInPoseUpperAndLowerBody;                     // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FFortAnimInput_TurnInPlace            TurnInPlace;                                       // 0x20(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FPoseLink                             VehicleSplitBodyOverride;                          // 0x90(0x10)(Parm, OutParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleFullBodyOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleFullBodyOverride_Params
{
public:
	struct FPoseLink                             InPoseFullBody;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InPoseUpperAndLowerCachePose;                      // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleFullBodyOverride;                           // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.VehicleLowerBodyOverride
struct UFortnite_M_Avg_Player_AnimBlueprint_C_VehicleLowerBodyOverride_Params
{
public:
	struct FPoseLink                             InPoseLowerBodyDefault;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             InPoseUpperBody;                                   // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             VehicleLowerBodyOverride;                          // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimGraph
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x168 (0x168 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ValidateDBNONativize
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ValidateDBNONativize_Params
{
public:
	class FString                                CallFunc_Conv_FloatToString_ReturnValue;           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_BoolToString_ReturnValue;            // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BCB[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_1;         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_2;         // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue;          // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BCC[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                CallFunc_Conv_BoolToString_ReturnValue_1;          // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue;            // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BCD[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue_1;          // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue_2;          // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue_3;          // 0xEA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue_4;          // 0xEB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_BoolBool_ReturnValue_5;          // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NearlyEqual_FloatFloat_ReturnValue;       // 0xED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xEE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BCE[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_3;         // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_8;              // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue_1;        // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue_2;        // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue_3;        // 0x112(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue_4;        // 0x113(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue_5;        // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BCF[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_4;         // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue_6;        // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BD0[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_9;              // 0x130(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_FloatToString_ReturnValue_5;         // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_FloatFloat_ReturnValue_7;        // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BD1[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_10;             // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_LinkedAnimLayer_2CCFA6424C53B920B00CA8B0D350ABDA
struct UFortnite_M_Avg_Player_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_LinkedAnimLayer_2CCFA6424C53B920B00CA8B0D350ABDA_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_LinkedAnimLayer_BA62CDE44B8AA6E5BF7933AB543CAED4
struct UFortnite_M_Avg_Player_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_LinkedAnimLayer_BA62CDE44B8AA6E5BF7933AB543CAED4_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_LinkedAnimLayer_41DB2C6F4305A26094FF8293F63DBF6B
struct UFortnite_M_Avg_Player_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_LinkedAnimLayer_41DB2C6F4305A26094FF8293F63DBF6B_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_855F3BD7414BE429B4FDCAACBD2428B6
struct UFortnite_M_Avg_Player_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_855F3BD7414BE429B4FDCAACBD2428B6_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_LinkedAnimLayer_72CED7AF4FEDEFE487025CB4B92A64EE
struct UFortnite_M_Avg_Player_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_LinkedAnimLayer_72CED7AF4FEDEFE487025CB4B92A64EE_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_BA8024EB48414D319D7DCEAE4D6EA7A7
struct UFortnite_M_Avg_Player_AnimBlueprint_C_EvaluateGraphExposedInputs_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_AnimGraphNode_RotationOffsetBlendSpace_BA8024EB48414D319D7DCEAE4D6EA7A7_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_L_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_R_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.CharPartEvent
struct UFortnite_M_Avg_Player_AnimBlueprint_C_CharPartEvent_Params
{
public:
	class UFortPlayerAnimInstance*               CharPart;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_playFacialAnim
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_playFacialAnim_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_IndigoLaunch
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_IndigoLaunch_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L_End
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_L_End_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R_End
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_R_End_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_L_2
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_L_2_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_Melee_Swing_R_2
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_Melee_Swing_R_2_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimJumpSurfaceEnd_Exit
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimJumpSurfaceEnd_Exit_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimJumpStart_Exited
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimJumpStart_Exited_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimSprintSlow_Entered
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimSprintSlow_Entered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimSprint_Entered
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimSprint_Entered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimSprintStart_Exited
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimSprintStart_Exited_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimSprintStart_Entered
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimSprintStart_Entered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimStartAdditive_Entered
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimStartAdditive_Entered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimMovementAccelAdditive_Exited
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimMovementAccelAdditive_Exited_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_SwimJumpSurfaceLoop_Exited
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_SwimJumpSurfaceLoop_Exited_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_CreateToolFlyModeLoop_Entered
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_CreateToolFlyModeLoop_Entered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_CreateToolFlyModeStart_Entered
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_CreateToolFlyModeStart_Entered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_OpenGlider
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_OpenGlider_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_HeldObjectPlace
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_HeldObjectPlace_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.AnimNotify_HeldObjectPickUp
struct UFortnite_M_Avg_Player_AnimBlueprint_C_AnimNotify_HeldObjectPickUp_Params
{
public:
};

// 0x141 (0x141 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint
struct UFortnite_M_Avg_Player_AnimBlueprint_C_ExecuteUbergraph_Fortnite_M_Avg_Player_AnimBlueprint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable; // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BD2[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue_1;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BD3[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_1;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BD4[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn;        // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BD5[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn_1;      // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BD6[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerAnimInstance*               K2Node_CustomEvent_CharPart;                       // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateZone*                    K2Node_DynamicCast_AsFort_Game_State_Zone;         // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BD7[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue_2;            // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue_3;            // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_2;                  // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BD8[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_3;                  // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BD9[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn_2;      // 0xB8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BDA[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn_3;      // 0xD0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BDB[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue_4;            // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_TryGetPawnOwner_ReturnValue_5;            // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_4;                  // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BDC[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_5;                  // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BDD[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn_4;      // 0x118(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4BDE[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TScriptInterface<class IInterfacePlayerPawn_C> K2Node_DynamicCast_AsInterface_Player_Pawn_5;      // 0x130(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.Indigo_Boost__DelegateSignature
struct UFortnite_M_Avg_Player_AnimBlueprint_C_Indigo_Boost__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Fortnite_M_Avg_Player_AnimBlueprint.Fortnite_M_Avg_Player_AnimBlueprint_C.MenuScreenDispatcher__DelegateSignature
struct UFortnite_M_Avg_Player_AnimBlueprint_C_MenuScreenDispatcher__DelegateSignature_Params
{
public:
	class UFortPlayerAnimInstance*               CharPart;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
