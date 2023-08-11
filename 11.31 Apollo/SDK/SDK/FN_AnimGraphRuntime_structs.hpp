#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ESphericalLimitType : uint8
{
	Inner                          = 0,
	Outer                          = 1,
	ESphericalLimitType_MAX        = 2,
};

enum class EAnimPhysSimSpaceType : uint8
{
	Component                      = 0,
	Actor                          = 1,
	World                          = 2,
	RootRelative                   = 3,
	BoneRelative                   = 4,
	AnimPhysSimSpaceType_MAX       = 5,
};

enum class EAnimPhysLinearConstraintType : uint8
{
	Free                           = 0,
	Limited                        = 1,
	AnimPhysLinearConstraintType_MAX = 2,
};

enum class EAnimPhysAngularConstraintType : uint8
{
	Angular                        = 0,
	Cone                           = 1,
	AnimPhysAngularConstraintType_MAX = 2,
};

enum class EDrivenDestinationMode : uint8
{
	Bone                           = 0,
	MorphTarget                    = 1,
	MaterialParameter              = 2,
	EDrivenDestinationMode_MAX     = 3,
};

enum class EDrivenBoneModificationMode : uint8
{
	AddToInput                     = 0,
	ReplaceComponent               = 1,
	AddToRefPose                   = 2,
	EDrivenBoneModificationMode_MAX = 3,
};

enum class EConstraintOffsetOption : uint8
{
	None                           = 0,
	Offset_RefPose                 = 1,
	EConstraintOffsetOption_MAX    = 2,
};

enum class ECopyBoneDeltaMode : uint8
{
	Accumulate                     = 0,
	Copy                           = 1,
	CopyBoneDeltaMode_MAX          = 2,
};

enum class EInterpolationBlend : uint8
{
	Linear                         = 0,
	Cubic                          = 1,
	Sinusoidal                     = 2,
	EaseInOutExponent2             = 3,
	EaseInOutExponent3             = 4,
	EaseInOutExponent4             = 5,
	EaseInOutExponent5             = 6,
	MAX                            = 7,
};

enum class EBoneModificationMode : uint8
{
	BMM_Ignore                     = 0,
	BMM_Replace                    = 1,
	BMM_Additive                   = 2,
	BMM_MAX                        = 3,
};

enum class EModifyCurveApplyMode : uint8
{
	Add                            = 0,
	Scale                          = 1,
	Blend                          = 2,
	WeightedMovingAverage          = 3,
	RemapCurve                     = 4,
	EModifyCurveApplyMode_MAX      = 5,
};

enum class EPoseDriverOutput : uint8
{
	DrivePoses                     = 0,
	DriveCurves                    = 1,
	EPoseDriverOutput_MAX          = 2,
};

enum class EPoseDriverSource : uint8
{
	Rotation                       = 0,
	Translation                    = 1,
	EPoseDriverSource_MAX          = 2,
};

enum class EPoseDriverType : uint8
{
	SwingAndTwist                  = 0,
	SwingOnly                      = 1,
	Translation                    = 2,
	EPoseDriverType_MAX            = 3,
};

enum class ESnapshotSourceMode : uint8
{
	NamedSnapshot                  = 0,
	SnapshotPin                    = 1,
	ESnapshotSourceMode_MAX        = 2,
};

enum class ERefPoseType : uint8
{
	EIT_LocalSpace                 = 0,
	EIT_Additive                   = 1,
	EIT_MAX                        = 2,
};

enum class ESimulationSpace : uint8
{
	ComponentSpace                 = 0,
	WorldSpace                     = 1,
	BaseBoneSpace                  = 2,
	ESimulationSpace_MAX           = 3,
};

enum class EScaleChainInitialLength : uint8
{
	FixedDefaultLengthValue        = 0,
	Distance                       = 1,
	ChainLength                    = 2,
	EScaleChainInitialLength_MAX   = 3,
};

enum class ESequenceEvalReinit : uint8
{
	NoReset                        = 0,
	StartPosition                  = 1,
	ExplicitTime                   = 2,
	ESequenceEvalReinit_MAX        = 3,
};

enum class ESplineBoneAxis : uint8
{
	X                              = 1,
	Y                              = 2,
	Z                              = 3,
	ESplineBoneAxis_MAX            = 4,
};

enum class ERotationComponent : uint8
{
	EulerX                         = 0,
	EulerY                         = 1,
	EulerZ                         = 2,
	QuaternionAngle                = 3,
	SwingAngle                     = 4,
	TwistAngle                     = 5,
	ERotationComponent_MAX         = 6,
};

enum class EEasingFuncType : uint8
{
	Linear                         = 0,
	Sinusoidal                     = 1,
	Cubic                          = 2,
	QuadraticInOut                 = 3,
	CubicInOut                     = 4,
	HermiteCubic                   = 5,
	QuarticInOut                   = 6,
	QuinticInOut                   = 7,
	CircularIn                     = 8,
	CircularOut                    = 9,
	CircularInOut                  = 10,
	ExpIn                          = 11,
	ExpOut                         = 12,
	ExpInOut                       = 13,
	CustomCurve                    = 14,
	EEasingFuncType_MAX            = 15,
};

enum class ERBFNormalizeMethod : uint8
{
	OnlyNormalizeAboveOne          = 0,
	AlwaysNormalize                = 1,
	NormalizeWithinMedian          = 2,
	ERBFNormalizeMethod_MAX        = 3,
};

enum class ERBFDistanceMethod : uint8
{
	Euclidean                      = 0,
	Quaternion                     = 1,
	SwingAngle                     = 2,
	DefaultMethod                  = 3,
	ERBFDistanceMethod_MAX         = 4,
};

enum class ERBFFunctionType : uint8
{
	Gaussian                       = 0,
	Exponential                    = 1,
	Linear                         = 2,
	Cubic                          = 3,
	Quintic                        = 4,
	DefaultFunction                = 5,
	ERBFFunctionType_MAX           = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x250 (0x930 - 0x6E0)
// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
struct FAnimSequencerInstanceProxy : public FAnimInstanceProxy
{
public:
	uint8                                        Pad_1CEF[0x250];                                   // Fixing Size Of Struct [ Dumper-8 ]
};

// 0xB8 (0xC8 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
struct FAnimNode_SkeletalControlBase : public FAnimNode_Base
{
public:
	struct FComponentSpacePoseLink               ComponentPose;                                     // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ActualAlpha;                                       // 0x24(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlphaBoolEnabled;                                 // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF0[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        Alpha;                                             // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x30(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x38(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AlphaCurveName;                                    // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x88(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF1[0x10];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
struct FRandomPlayerSequenceEntry
{
public:
	class UAnimSequence*                         Sequence;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ChanceToPlay;                                      // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinLoopCount;                                      // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLoopCount;                                      // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinPlayrate;                                       // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxPlayrate;                                       // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF2[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FAlphaBlend                           BlendIn;                                           // 0x20(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x58 (0x68 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
struct FAnimNode_RandomPlayer : public FAnimNode_Base
{
public:
	TArray<struct FRandomPlayerSequenceEntry>    Entries;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF3[0x44];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	bool                                         bShuffleMode;                                      // 0x64(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF4[0x3];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0xB0 (0xE0 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
struct FAnimNode_BlendSpacePlayer : public FAnimNode_AssetPlayerBase
{
public:
	float                                        X;                                                 // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Y;                                                 // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Z;                                                 // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoop;                                             // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetPlayTimeWhenBlendSpaceChanges;               // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF5[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        StartPosition;                                     // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendSpaceBase*                       BlendSpace;                                        // 0x48(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF6[0x88];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	class UBlendSpaceBase*                       PreviousBlendSpace;                                // 0xD8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0xD0 (0x1B0 - 0xE0)
// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
struct FAnimNode_AimOffsetLookAt : public FAnimNode_BlendSpacePlayer
{
public:
	uint8                                        Pad_1CF7[0x60];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPoseLink                             BasePose;                                          // 0x140(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceSocketName;                                  // 0x154(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PivotSocketName;                                   // 0x15C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LookAtLocation;                                    // 0x164(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SocketAxis;                                        // 0x170(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x17C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF8[0x30];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x24 (0x24 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
struct FAnimPhysSphericalLimit
{
public:
	struct FBoneReference                        DrivingBone;                                       // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               SphereLocalOffset;                                 // 0x10(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LimitRadius;                                       // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESphericalLimitType               LimitType;                                         // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CF9[0x3];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x48 (0x48 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
struct FAnimPhysConstraintSetup
{
public:
	enum class EAnimPhysLinearConstraintType     LinearXLimitType;                                  // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysLinearConstraintType     LinearYLimitType;                                  // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysLinearConstraintType     LinearZLimitType;                                  // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CFA[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               LinearAxesMin;                                     // 0x4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LinearAxesMax;                                     // 0x10(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysAngularConstraintType    AngularConstraintType;                             // 0x1C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysTwistAxis                TwistAxis;                                         // 0x1D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysTwistAxis                AngularTargetAxis;                                 // 0x1E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CFB[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        ConeAngle;                                         // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularLimitsMin;                                  // 0x24(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularLimitsMax;                                  // 0x30(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AngularTarget;                                     // 0x3C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
struct FAnimPhysPlanarLimit
{
public:
	struct FBoneReference                        DrivingBone;                                       // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            PlaneTransform;                                    // 0x10(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
struct FRotationRetargetingInfo
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CFC[0xF];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTransform                            Source;                                            // 0x10(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            Target;                                            // 0x40(0x30)(Edit, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	enum class ERotationComponent                RotationComponent;                                 // 0x70(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CFD[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               TwistAxis;                                         // 0x74(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAbsoluteAngle;                                 // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CFE[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        SourceMinimum;                                     // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceMaximum;                                     // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMinimum;                                     // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TargetMaximum;                                     // 0x90(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEasingFuncType                   EasingType;                                        // 0x94(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CFF[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRuntimeFloatCurve                    CustomCurve;                                       // 0x98(0x88)(Edit, NativeAccessSpecifierPublic)
	bool                                         bFlipEasing;                                       // 0x120(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D00[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        EasingWeight;                                      // 0x124(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClamp;                                            // 0x128(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D01[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x378 (0x440 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
struct FAnimNode_AnimDynamics : public FAnimNode_SkeletalControlBase
{
public:
	float                                        LinearDampingOverride;                             // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularDampingOverride;                            // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D02[0x60];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	struct FBoneReference                        RelativeSpaceBone;                                 // 0x130(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        BoundBone;                                         // 0x140(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        ChainEnd;                                          // 0x150(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               BoxExtents;                                        // 0x160(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LocalJointOffset;                                  // 0x16C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GravityScale;                                      // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               GravityOverride;                                   // 0x17C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LinearSpringConstant;                              // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularSpringConstant;                             // 0x18C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WindScale;                                         // 0x190(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ComponentLinearAccScale;                           // 0x194(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ComponentLinearVelScale;                           // 0x1A0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ComponentAppliedLinearAccClamp;                    // 0x1AC(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AngularBiasOverride;                               // 0x1B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSolverIterationsPreUpdate;                      // 0x1BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumSolverIterationsPostUpdate;                     // 0x1C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimPhysConstraintSetup              ConstraintSetup;                                   // 0x1C4(0x48)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D03[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<struct FAnimPhysSphericalLimit>       SphericalLimits;                                   // 0x210(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        SphereCollisionRadius;                             // 0x220(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ExternalForce;                                     // 0x224(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimPhysPlanarLimit>          PlanarLimits;                                      // 0x230(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EAnimPhysCollisionType            CollisionType;                                     // 0x240(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAnimPhysSimSpaceType             SimulationSpace;                                   // 0x241(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D04[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	uint8                                        bUseSphericalLimits : 1;                           // Mask: 0x1, PropSize: 0x10x244(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsePlanarLimit : 1;                               // Mask: 0x2, PropSize: 0x10x244(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDoUpdate : 1;                                     // Mask: 0x4, PropSize: 0x10x244(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDoEval : 1;                                       // Mask: 0x8, PropSize: 0x10x244(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideLinearDamping : 1;                        // Mask: 0x10, PropSize: 0x10x244(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideAngularBias : 1;                          // Mask: 0x20, PropSize: 0x10x244(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideAngularDamping : 1;                       // Mask: 0x40, PropSize: 0x10x244(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableWind : 1;                                   // Mask: 0x80, PropSize: 0x10x244(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_17E : 1;                                    // Fixing Bit-Field Size  [ Dumper-8 ]
	uint8                                        bUseGravityOverride : 1;                           // Mask: 0x2, PropSize: 0x10x245(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLinearSpring : 1;                                 // Mask: 0x4, PropSize: 0x10x245(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAngularSpring : 1;                                // Mask: 0x8, PropSize: 0x10x245(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bChain : 1;                                        // Mask: 0x10, PropSize: 0x10x245(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_17F : 3;                                    // Fixing Bit-Field Size  [ Dumper-8 ]
	uint8                                        Pad_1D05[0xA];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRotationRetargetingInfo              RetargetingSettings;                               // 0x250(0x130)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D06[0xC0];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0xB8 (0xC8 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
struct FAnimNode_ApplyAdditive : public FAnimNode_Base
{
public:
	struct FPoseLink                             Base;                                              // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                             Additive;                                          // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x34(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x40(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AlphaCurveName;                                    // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x90(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D07[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0xC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlphaBoolEnabled;                                 // 0xC5(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D08[0x2];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AnimGraphRuntime.AngularRangeLimit
struct FAngularRangeLimit
{
public:
	struct FVector                               LimitMin;                                          // 0x0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LimitMax;                                          // 0xC(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        Bone;                                              // 0x18(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0xE8 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
struct FAnimNode_ApplyLimits : public FAnimNode_SkeletalControlBase
{
public:
	TArray<struct FAngularRangeLimit>            AngularRangeLimits;                                // 0xC8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       AngularOffsets;                                    // 0xD8(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x24 (0x24 - 0x0)
// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
struct FBlendBoneByChannelEntry
{
public:
	struct FBoneReference                        SourceBone;                                        // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        TargetBone;                                        // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bBlendTranslation;                                 // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlendRotation;                                    // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlendScale;                                       // 0x22(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D09[0x1];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x58 (0x68 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
struct FAnimNode_BlendBoneByChannel : public FAnimNode_Base
{
public:
	struct FPoseLink                             A;                                                 // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                             B;                                                 // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBlendBoneByChannelEntry>      BoneDefinitions;                                   // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0A[0x10];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        Alpha;                                             // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0B[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x58(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 TransformsSpace;                                   // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0C[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x88 (0x98 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
struct FAnimNode_BlendListBase : public FAnimNode_Base
{
public:
	TArray<struct FPoseLink>                     BlendPose;                                         // 0x10(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                BlendTime;                                         // 0x20(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class EAlphaBlendOption                 BlendType;                                         // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResetChildOnActivation;                           // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D0D[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCurveFloat*                           CustomBlendCurve;                                  // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UBlendProfile*                         BlendProfile;                                      // 0x40(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0E[0x50];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x8 (0xA0 - 0x98)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
struct FAnimNode_BlendListByBool : public FAnimNode_BlendListBase
{
public:
	bool                                         bActiveValue;                                      // 0x98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0F[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x18 (0xB0 - 0x98)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
struct FAnimNode_BlendListByEnum : public FAnimNode_BlendListBase
{
public:
	TArray<int32>                                EnumToPoseIndex;                                   // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        ActiveEnumValue;                                   // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D10[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x8 (0xA0 - 0x98)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
struct FAnimNode_BlendListByInt : public FAnimNode_BlendListBase
{
public:
	int32                                        ActiveChildIndex;                                  // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D11[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x8 (0xE8 - 0xE0)
// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
struct FAnimNode_BlendSpaceEvaluator : public FAnimNode_BlendSpacePlayer
{
public:
	float                                        NormalizedTime;                                    // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D12[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x50 (0x118 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
struct FAnimNode_BoneDrivenController : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SourceBone;                                        // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UCurveFloat*                           DrivingCurve;                                      // 0xD8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Multiplier;                                        // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangeMin;                                          // 0xE4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RangeMax;                                          // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemappedMin;                                       // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemappedMax;                                       // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParameterName;                                     // 0xF4(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        TargetBone;                                        // 0xFC(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EDrivenDestinationMode            DestinationMode;                                   // 0x10C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EDrivenBoneModificationMode       ModificationMode;                                  // 0x10D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentType                    SourceComponent;                                   // 0x10E(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseRange : 1;                                     // Mask: 0x1, PropSize: 0x10x10F(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetTranslationX : 1;                     // Mask: 0x2, PropSize: 0x10x10F(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetTranslationY : 1;                     // Mask: 0x4, PropSize: 0x10x10F(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetTranslationZ : 1;                     // Mask: 0x8, PropSize: 0x10x10F(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetRotationX : 1;                        // Mask: 0x10, PropSize: 0x10x10F(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetRotationY : 1;                        // Mask: 0x20, PropSize: 0x10x10F(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetRotationZ : 1;                        // Mask: 0x40, PropSize: 0x10x10F(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetScaleX : 1;                           // Mask: 0x80, PropSize: 0x10x10F(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetScaleY : 1;                           // Mask: 0x1, PropSize: 0x10x110(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectTargetScaleZ : 1;                           // Mask: 0x2, PropSize: 0x10x110(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D13[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x40 (0x40 - 0x0)
// ScriptStruct AnimGraphRuntime.SocketReference
struct FSocketReference
{
public:
	uint8                                        Pad_1D14[0x30];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  SocketName;                                        // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D15[0x8];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x60 (0x60 - 0x0)
// ScriptStruct AnimGraphRuntime.BoneSocketTarget
struct FBoneSocketTarget
{
public:
	bool                                         bUseSocket;                                        // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D16[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FBoneReference                        BoneReference;                                     // 0x4(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D17[0xC];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSocketReference                      SocketReference;                                   // 0x20(0x40)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xB8 (0x180 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
struct FAnimNode_CCDIK : public FAnimNode_SkeletalControlBase
{
public:
	struct FVector                               EffectorLocation;                                  // 0xC8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 EffectorLocationSpace;                             // 0xD4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D18[0xB];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FBoneSocketTarget                     EffectorTarget;                                    // 0xE0(0x60)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        TipBone;                                           // 0x140(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        RootBone;                                          // 0x150(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x160(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0x164(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStartFromTail;                                    // 0x168(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRotationLimit;                              // 0x169(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D19[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<float>                                RotationLimitPerJoints;                            // 0x170(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct AnimGraphRuntime.Constraint
struct FConstraint
{
public:
	struct FBoneReference                        TargetBone;                                        // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EConstraintOffsetOption           OffsetOption;                                      // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETransformConstraintType          TransformType;                                     // 0x11(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFilterOptionPerAxis                  PerAxis;                                           // 0x12(0x3)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1A[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x40 (0x108 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
struct FAnimNode_Constraint : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToModify;                                      // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FConstraint>                   ConstraintSetup;                                   // 0xD8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                ConstraintWeights;                                 // 0xE8(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1B[0x10];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x28 (0xF0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
struct FAnimNode_CopyBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SourceBone;                                        // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        TargetBone;                                        // 0xD8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCopyTranslation;                                  // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyRotation;                                     // 0xE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyScale;                                        // 0xEA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 ControlSpace;                                      // 0xEB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1C[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x30 (0xF8 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
struct FAnimNode_CopyBoneDelta : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SourceBone;                                        // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        TargetBone;                                        // 0xD8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bCopyTranslation;                                  // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyRotation;                                     // 0xE9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyScale;                                        // 0xEA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECopyBoneDeltaMode                CopyMode;                                          // 0xEB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TranslationMultiplier;                             // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RotationMultiplier;                                // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScaleMultiplier;                                   // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x130 (0x140 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
struct FAnimNode_CopyPoseFromMesh : public FAnimNode_Base
{
public:
	TWeakObjectPtr<class USkeletalMeshComponent> SourceMeshComponent;                               // 0x10(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAttachedParent;                                // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCopyCurves;                                       // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1D[0x126];                                   // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x30 (0x40 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
struct FAnimNode_CurveSource : public FAnimNode_Base
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  SourceBinding;                                     // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D1E[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TScriptInterface<class ICurveSourceInterface> CurveSource;                                       // 0x30(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0xC8 (0x190 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
struct FAnimNode_Fabrik : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_1D1F[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTransform                            EffectorTransform;                                 // 0xD0(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneSocketTarget                     EffectorTarget;                                    // 0x100(0x60)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        TipBone;                                           // 0x160(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        RootBone;                                          // 0x170(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x180(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0x184(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 EffectorTransformSpace;                            // 0x188(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneRotationSource               EffectorRotationSource;                            // 0x189(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D20[0x6];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x58 (0x120 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
struct FAnimNode_HandIKRetargeting : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        RightHandFK;                                       // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        LeftHandFK;                                        // 0xD8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        RightHandIK;                                       // 0xE8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        LeftHandIK;                                        // 0xF8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                IKBonesToMove;                                     // 0x108(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        HandFKWeight;                                      // 0x118(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D21[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0xB0 (0xC0 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
struct FAnimNode_LayeredBoneBlend : public FAnimNode_Base
{
public:
	struct FPoseLink                             BasePose;                                          // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FPoseLink>                     BlendPoses;                                        // 0x20(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FInputBlendPose>               LayerSetup;                                        // 0x30(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                BlendWeights;                                      // 0x40(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bMeshSpaceRotationBlend;                           // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMeshSpaceScaleBlend;                              // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ECurveBlendOption                 CurveBlendOption;                                  // 0x52(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bBlendRootMotionBasedOnRootBone;                   // 0x53(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D22[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        LODThreshold;                                      // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D23[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<struct FPerBoneBlendWeight>           PerBoneBlendWeights;                               // 0x60(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FGuid                                 SkeletonGuid;                                      // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 VirtualBoneGuid;                                   // 0x80(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1D24[0x30];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x2C (0x2C - 0x0)
// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
struct FAnimLegIKDefinition
{
public:
	struct FBoneReference                        IKFootBone;                                        // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        FKFootBone;                                        // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        NumBonesInLimb;                                    // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinRotationAngle;                                  // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             FootBoneForwardAxis;                               // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             HingeRotationAxis;                                 // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableRotationLimit;                              // 0x2A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableKneeTwistCorrection;                        // 0x2B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0xF8 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
struct FAnimNode_LegIK : public FAnimNode_SkeletalControlBase
{
public:
	float                                        ReachPrecision;                                    // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIterations;                                     // 0xCC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAnimLegIKDefinition>          LegsDefinition;                                    // 0xD0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D25[0x18];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct AnimGraphRuntime.AnimLegIKData
struct FAnimLegIKData
{
public:
	uint8                                        Pad_1D26[0xA0];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x38 (0x38 - 0x0)
// ScriptStruct AnimGraphRuntime.IKChain
struct FIKChain
{
public:
	uint8                                        Pad_1D27[0x38];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x3C (0x3C - 0x0)
// ScriptStruct AnimGraphRuntime.IKChainLink
struct FIKChainLink
{
public:
	uint8                                        Pad_1D28[0x3C];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0xE8 (0x1B0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
struct FAnimNode_LookAt : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToModify;                                      // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D29[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FBoneSocketTarget                     LookAtTarget;                                      // 0xE0(0x60)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               LookAtLocation;                                    // 0x140(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAxis                                 LookAt_Axis;                                       // 0x14C(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bUseLookUpAxis;                                    // 0x15C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterpolationBlend               InterpolationType;                                 // 0x15D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D2A[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FAxis                                 LookUp_Axis;                                       // 0x160(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LookAtClamp;                                       // 0x170(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpolationTime;                                 // 0x174(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpolationTriggerThreashold;                    // 0x178(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D2B[0x34];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x28 (0x38 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
struct FAnimNode_MakeDynamicAdditive : public FAnimNode_Base
{
public:
	struct FPoseLink                             Base;                                              // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                             Additive;                                          // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bMeshSpaceAdditive;                                // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D2C[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x40 (0x108 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
struct FAnimNode_ModifyBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToModify;                                      // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Translation;                                       // 0xD8(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xE4(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0xF0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             TranslationMode;                                   // 0xFC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             RotationMode;                                      // 0xFD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneModificationMode             ScaleMode;                                         // 0xFE(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 TranslationSpace;                                  // 0xFF(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 RotationSpace;                                     // 0x100(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 ScaleSpace;                                        // 0x101(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D2D[0x6];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x48 (0x58 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
struct FAnimNode_ModifyCurve : public FAnimNode_Base
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x10(0x10)(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	TArray<float>                                CurveValues;                                       // 0x20(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          CurveNames;                                        // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D2E[0x10];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        Alpha;                                             // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EModifyCurveApplyMode             ApplyMode;                                         // 0x54(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D2F[0x3];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x40 (0x50 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
struct FAnimNode_MultiWayBlend : public FAnimNode_Base
{
public:
	TArray<struct FPoseLink>                     Poses;                                             // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DesiredAlphas;                                     // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D30[0x10];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x40(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bAdditiveNode;                                     // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNormalizeAlpha;                                   // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D31[0x6];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x38 (0x100 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
struct FAnimNode_ObserveBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        BoneToObserve;                                     // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 DisplaySpace;                                      // 0xD8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRelativeToRefPose;                                // 0xD9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D32[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               Translation;                                       // 0xDC(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0xE8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0xF4(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x78 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
struct FAnimNode_PoseHandler : public FAnimNode_AssetPlayerBase
{
public:
	class UPoseAsset*                            PoseAsset;                                         // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D33[0x40];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x20 (0x98 - 0x78)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
struct FAnimNode_PoseBlendNode : public FAnimNode_PoseHandler
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x78(0x10)(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAlphaBlendOption                 BlendOption;                                       // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D34[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCurveFloat*                           CustomCurve;                                       // 0x90(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x90 - 0x78)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
struct FAnimNode_PoseByName : public FAnimNode_PoseHandler
{
public:
	class FName                                  PoseName;                                          // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PoseWeight;                                        // 0x80(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D35[0xC];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AnimGraphRuntime.PoseDriverTransform
struct FPoseDriverTransform
{
public:
	struct FVector                               TargetTranslation;                                 // 0x0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              TargetRotation;                                    // 0xC(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct AnimGraphRuntime.PoseDriverTarget
struct FPoseDriverTarget
{
public:
	TArray<struct FPoseDriverTransform>          BoneTransforms;                                    // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FRotator                              TargetRotation;                                    // 0x10(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        TargetScale;                                       // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFDistanceMethod                DistanceMethod;                                    // 0x20(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFFunctionType                  FunctionType;                                      // 0x21(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyCustomCurve;                                 // 0x22(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D36[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRichCurve                            CustomCurve;                                       // 0x28(0x80)(Edit, NativeAccessSpecifierPublic)
	class FName                                  DrivenName;                                        // 0xA8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D37[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	bool                                         bIsHidden;                                         // 0xB8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D38[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AnimGraphRuntime.RBFParams
struct FRBFParams
{
public:
	int32                                        TargetDimensions;                                  // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Radius;                                            // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFFunctionType                  Function;                                          // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFDistanceMethod                DistanceMethod;                                    // 0x9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneAxis                         TwistAxis;                                         // 0xA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D39[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        WeightThreshold;                                   // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFNormalizeMethod               NormalizeMethod;                                   // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D3A[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               MedianReference;                                   // 0x14(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MedianMin;                                         // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MedianMax;                                         // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0x128 - 0x78)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
struct FAnimNode_PoseDriver : public FAnimNode_PoseHandler
{
public:
	struct FPoseLink                             SourcePose;                                        // 0x78(0x10)(Edit, BlueprintVisible, EditFixedSize, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                SourceBones;                                       // 0x88(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FBoneReference>                OnlyDriveBones;                                    // 0x98(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FPoseDriverTarget>             PoseTargets;                                       // 0xA8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D3B[0x30];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	struct FBoneReference                        EvalSpaceBone;                                     // 0xE8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FRBFParams                            RBFParams;                                         // 0xF8(0x28)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EPoseDriverSource                 DriveSource;                                       // 0x120(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPoseDriverOutput                 DriveOutput;                                       // 0x121(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOnlyDriveSelectedBones : 1;                       // Mask: 0x1, PropSize: 0x10x122(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D3C[0x5];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x80 (0x90 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
struct FAnimNode_PoseSnapshot : public FAnimNode_Base
{
public:
	class FName                                  SnapshotName;                                      // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPoseSnapshot                         Snapshot;                                          // 0x18(0x38)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	enum class ESnapshotSourceMode               Mode;                                              // 0x50(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D3D[0x3F];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x0 (0x10 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
struct FAnimNode_MeshSpaceRefPose : public FAnimNode_Base
{
public:
};

// 0x8 (0x18 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
struct FAnimNode_RefPose : public FAnimNode_Base
{
public:
	enum class ERefPoseType                      RefPoseType;                                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D3E[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x10 (0xD8 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
struct FAnimNode_ResetRoot : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_1D3F[0x10];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x498 (0x560 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
struct FAnimNode_RigidBody : public FAnimNode_SkeletalControlBase
{
public:
	class UPhysicsAsset*                         OverridePhysicsAsset;                              // 0xC8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D40[0x98];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector                               OverrideWorldGravity;                              // 0x168(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ExternalForce;                                     // 0x174(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ComponentLinearAccScale;                           // 0x180(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ComponentLinearVelScale;                           // 0x18C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ComponentAppliedLinearAccClamp;                    // 0x198(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CachedBoundsScale;                                 // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        BaseBoneRef;                                       // 0x1A8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 OverlapChannel;                                    // 0x1B8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESimulationSpace                  SimulationSpace;                                   // 0x1B9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceDisableCollisionBetweenConstraintBodies;     // 0x1BA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D41[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	uint8                                        bEnableWorldGeometry : 1;                          // Mask: 0x1, PropSize: 0x10x1BC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideWorldGravity : 1;                         // Mask: 0x2, PropSize: 0x10x1BC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTransferBoneVelocities : 1;                       // Mask: 0x4, PropSize: 0x10x1BC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFreezeIncomingPoseOnStart : 1;                    // Mask: 0x8, PropSize: 0x10x1BC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bClampLinearTranslationLimitToRefPose : 1;         // Mask: 0x10, PropSize: 0x10x1BC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D42[0x3A3];                                   // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x498 (0x560 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody_Chaos
struct FAnimNode_RigidBody_Chaos : public FAnimNode_SkeletalControlBase
{
public:
	class UPhysicsAsset*                         OverridePhysicsAsset;                              // 0xC8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OverrideWorldGravity;                              // 0xD0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ExternalForce;                                     // 0xDC(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ComponentLinearAccScale;                           // 0xE8(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ComponentLinearVelScale;                           // 0xF4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               ComponentAppliedLinearAccClamp;                    // 0x100(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CachedBoundsScale;                                 // 0x10C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        BaseBoneRef;                                       // 0x110(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class ECollisionChannel                 OverlapChannel;                                    // 0x120(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESimulationSpace                  SimulationSpace;                                   // 0x121(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceDisableCollisionBetweenConstraintBodies;     // 0x122(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableWorldGeometry : 1;                          // Mask: 0x1, PropSize: 0x10x123(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideWorldGravity : 1;                         // Mask: 0x2, PropSize: 0x10x123(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTransferBoneVelocities : 1;                       // Mask: 0x4, PropSize: 0x10x123(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFreezeIncomingPoseOnStart : 1;                    // Mask: 0x8, PropSize: 0x10x123(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bClampLinearTranslationLimitToRefPose : 1;         // Mask: 0x10, PropSize: 0x10x123(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D43[0x43C];                                   // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x90 (0xA0 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
struct FAnimNode_RotateRootBone : public FAnimNode_Base
{
public:
	struct FPoseLink                             BasePose;                                          // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Pitch;                                             // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Yaw;                                               // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  PitchScaleBiasClamp;                               // 0x28(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  YawScaleBiasClamp;                                 // 0x58(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FRotator                              MeshToComponent;                                   // 0x88(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D44[0xC];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x28 (0xF0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
struct FAnimNode_RotationMultiplier : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        TargetBone;                                        // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        SourceBone;                                        // 0xD8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Multiplier;                                        // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneAxis                         RotationAxisToRefer;                               // 0xEC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAdditive;                                       // 0xED(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D45[0x2];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0xA8 (0x188 - 0xE0)
// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
struct FAnimNode_RotationOffsetBlendSpace : public FAnimNode_BlendSpacePlayer
{
public:
	struct FPoseLink                             BasePose;                                          // 0xE0(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        LODThreshold;                                      // 0xF0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0xF4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0xF8(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x100(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AlphaCurveName;                                    // 0x148(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x150(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D46[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x184(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlphaBoolEnabled;                                 // 0x185(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D47[0x2];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x68 (0x78 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
struct FAnimNode_ScaleChainLength : public FAnimNode_Base
{
public:
	struct FPoseLink                             InputPose;                                         // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        DefaultChainLength;                                // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        ChainStartBone;                                    // 0x24(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        ChainEndBone;                                      // 0x34(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               TargetLocation;                                    // 0x44(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Alpha;                                             // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D48[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x58(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EScaleChainInitialLength          ChainInitialLength;                                // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D49[0x17];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x18 (0x48 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
struct FAnimNode_SequenceEvaluator : public FAnimNode_AssetPlayerBase
{
public:
	class UAnimSequenceBase*                     Sequence;                                          // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ExplicitTime;                                      // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldLoop;                                       // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTeleportToExplicitTime;                           // 0x3D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESequenceEvalReinit               ReinitializationBehavior;                          // 0x3E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4A[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        StartPosition;                                     // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4B[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x38 (0x48 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_Slot
struct FAnimNode_Slot : public FAnimNode_Base
{
public:
	struct FPoseLink                             Source;                                            // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  SlotName;                                          // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAlwaysUpdateSourcePose;                           // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4C[0x1F];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x198 (0x260 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
struct FAnimNode_SplineIK : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        StartBone;                                         // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FBoneReference                        EndBone;                                           // 0xD8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class ESplineBoneAxis                   BoneAxis;                                          // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoCalculateSpline;                              // 0xE9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4D[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        PointCount;                                        // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTransform>                    ControlPoints;                                     // 0xF0(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Roll;                                              // 0x100(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TwistStart;                                        // 0x104(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TwistEnd;                                          // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4E[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FAlphaBlend                           TwistBlend;                                        // 0x110(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        Stretch;                                           // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Offset;                                            // 0x144(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4F[0x118];                                   // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x14 (0x14 - 0x0)
// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
struct FSplineIKCachedBoneData
{
public:
	struct FBoneReference                        Bone;                                              // 0x0(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	int32                                        RefSkeletonIndex;                                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x128 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
struct FAnimNode_SpringBone : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        SpringBone;                                        // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MaxDisplacement;                                   // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringStiffness;                                   // 0xDC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpringDamping;                                     // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ErrorResetThresh;                                  // 0xE4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D50[0x3C];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	uint8                                        bLimitDisplacement : 1;                            // Mask: 0x1, PropSize: 0x10x124(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTranslateX : 1;                                   // Mask: 0x2, PropSize: 0x10x124(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTranslateY : 1;                                   // Mask: 0x4, PropSize: 0x10x124(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTranslateZ : 1;                                   // Mask: 0x8, PropSize: 0x10x124(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRotateX : 1;                                      // Mask: 0x10, PropSize: 0x10x124(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRotateY : 1;                                      // Mask: 0x20, PropSize: 0x10x124(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRotateZ : 1;                                      // Mask: 0x40, PropSize: 0x10x124(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D51[0x3];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x0 (0x30 - 0x30)
// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
struct FAnimNode_StateResult : public FAnimNode_Root
{
public:
};

// 0x18 (0x18 - 0x0)
// ScriptStruct AnimGraphRuntime.RotationLimit
struct FRotationLimit
{
public:
	struct FVector                               LimitMin;                                          // 0x0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LimitMax;                                          // 0xC(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1A8 (0x270 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_Trail
struct FAnimNode_Trail : public FAnimNode_SkeletalControlBase
{
public:
	uint8                                        Pad_1D52[0x38];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	struct FBoneReference                        TrailBone;                                         // 0x100(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        ChainLength;                                       // 0x110(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAxis                             ChainBoneAxis;                                     // 0x114(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInvertChainBoneAxis : 1;                          // Mask: 0x1, PropSize: 0x10x115(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLimitStretch : 1;                                 // Mask: 0x2, PropSize: 0x10x115(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLimitRotation : 1;                                // Mask: 0x4, PropSize: 0x10x115(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsePlanarLimit : 1;                               // Mask: 0x8, PropSize: 0x10x115(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bActorSpaceFakeVel : 1;                            // Mask: 0x10, PropSize: 0x10x115(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReorientParentToChild : 1;                        // Mask: 0x20, PropSize: 0x10x115(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_180 : 2;                                    // Fixing Bit-Field Size  [ Dumper-8 ]
	uint8                                        Pad_1D53[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        MaxDeltaTime;                                      // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       UnwindingSize;                                     // 0x11C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RelaxationSpeedScale;                              // 0x120(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D54[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRuntimeFloatCurve                    TrailRelaxationSpeed;                              // 0x128(0x88)(Edit, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  RelaxationSpeedScaleInputProcessor;                // 0x1B0(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FRotationLimit>                RotationLimits;                                    // 0x1E0(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       RotationOffsets;                                   // 0x1F0(0x10)(Edit, BlueprintVisible, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAnimPhysPlanarLimit>          PlanarLimits;                                      // 0x200(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        StretchLimit;                                      // 0x210(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               FakeVelocity;                                      // 0x214(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBoneReference                        BaseJoint;                                         // 0x220(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        LastBoneRotationAnimAlphaBlend;                    // 0x230(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D55[0x3C];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
struct FReferenceBoneFrame
{
public:
	struct FBoneReference                        Bone;                                              // 0x0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                 Axis;                                              // 0x10(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x138 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
struct FAnimNode_TwistCorrectiveNode : public FAnimNode_SkeletalControlBase
{
public:
	struct FReferenceBoneFrame                   BaseFrame;                                         // 0xC8(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FReferenceBoneFrame                   TwistFrame;                                        // 0xE8(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                 TwistPlaneNormalAxis;                              // 0x108(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        RangeMax;                                          // 0x118(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemappedMin;                                       // 0x11C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RemappedMax;                                       // 0x120(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAnimCurveParam                       Curve;                                             // 0x124(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D56[0x8];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x118 (0x1E0 - 0xC8)
// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
struct FAnimNode_TwoBoneIK : public FAnimNode_SkeletalControlBase
{
public:
	struct FBoneReference                        IKBone;                                            // 0xC8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	float                                        StartStretchRatio;                                 // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxStretchScale;                                   // 0xDC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EffectorLocation;                                  // 0xE0(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D57[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FBoneSocketTarget                     EffectorTarget;                                    // 0xF0(0x60)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               JointTargetLocation;                               // 0x150(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D58[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FBoneSocketTarget                     JointTarget;                                       // 0x160(0x60)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FAxis                                 TwistAxis;                                         // 0x1C0(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 EffectorLocationSpace;                             // 0x1D0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EBoneControlSpace                 JointTargetLocationSpace;                          // 0x1D1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowStretching : 1;                              // Mask: 0x1, PropSize: 0x10x1D2(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bTakeRotationFromEffectorSpace : 1;                // Mask: 0x2, PropSize: 0x10x1D2(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMaintainEffectorRelRot : 1;                       // Mask: 0x4, PropSize: 0x10x1D2(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowTwist : 1;                                   // Mask: 0x8, PropSize: 0x10x1D2(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D59[0xD];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0xB8 (0xC8 - 0x10)
// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
struct FAnimNode_TwoWayBlend : public FAnimNode_Base
{
public:
	struct FPoseLink                             A;                                                 // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FPoseLink                             B;                                                 // 0x20(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	enum class EAnimAlphaInputType               AlphaInputType;                                    // 0x30(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlphaBoolEnabled : 1;                             // Mask: 0x1, PropSize: 0x10x31(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_181 : 2;                                    // Fixing Bit-Field Size  [ Dumper-8 ]
	uint8                                        bResetChildOnActivation : 1;                       // Mask: 0x8, PropSize: 0x10x31(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_182 : 4;                                    // Fixing Bit-Field Size  [ Dumper-8 ]
	uint8                                        Pad_1D5A[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        Alpha;                                             // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBias                       AlphaScaleBias;                                    // 0x38(0x8)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FInputAlphaBoolBlend                  AlphaBoolBlend;                                    // 0x40(0x48)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  AlphaCurveName;                                    // 0x88(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInputScaleBiasClamp                  AlphaScaleBiasClamp;                               // 0x90(0x30)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D5B[0x8];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct AnimGraphRuntime.PositionHistory
struct FPositionHistory
{
public:
	TArray<struct FVector>                       Positions;                                         // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        Range;                                             // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D5C[0x1C];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct AnimGraphRuntime.RBFEntry
struct FRBFEntry
{
public:
	TArray<float>                                Values;                                            // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x90 (0xA0 - 0x10)
// ScriptStruct AnimGraphRuntime.RBFTarget
struct FRBFTarget : public FRBFEntry
{
public:
	float                                        ScaleFactor;                                       // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyCustomCurve;                                 // 0x14(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D5D[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FRichCurve                            CustomCurve;                                       // 0x18(0x80)(Edit, NativeAccessSpecifierPublic)
	enum class ERBFDistanceMethod                DistanceMethod;                                    // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ERBFFunctionType                  FunctionType;                                      // 0x99(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D5E[0x6];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
