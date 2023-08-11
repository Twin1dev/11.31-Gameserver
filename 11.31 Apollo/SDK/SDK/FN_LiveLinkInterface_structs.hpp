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

enum class ELiveLinkCameraProjectionMode : uint8
{
	Perspective                    = 0,
	Orthographic                   = 1,
	ELiveLinkCameraProjectionMode_MAX = 2,
};

enum class ELiveLinkSourceMode : uint8
{
	Default                        = 0,
	Interpolated                   = 1,
	TimeSynchronized               = 2,
	ELiveLinkSourceMode_MAX        = 3,
};

enum class ELiveLinkAxis : uint8
{
	X                              = 0,
	Y                              = 1,
	Z                              = 2,
	XNeg                           = 3,
	YNeg                           = 4,
	ZNeg                           = 5,
	ELiveLinkAxis_MAX              = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSubjectName
struct FLiveLinkSubjectName
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSubjectKey
struct FLiveLinkSubjectKey
{
public:
	struct FGuid                                 Source;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset
struct FLiveLinkSubjectPreset
{
public:
	struct FLiveLinkSubjectKey                   Key;                                               // 0x0(0x18)(NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkRole>             Role;                                              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveLinkSubjectSettings*              Settings;                                          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveLinkVirtualSubject*               VirtualSubject;                                    // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_193F[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
struct FLiveLinkSourceHandle
{
public:
	uint8                                        Pad_1940[0x18];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x8 (0x8 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkBaseBlueprintData
struct FLiveLinkBaseBlueprintData
{
public:
	uint8                                        Pad_1941[0x8];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x10 (0x18 - 0x8)
// ScriptStruct LiveLinkInterface.SubjectFrameHandle
struct FSubjectFrameHandle : public FLiveLinkBaseBlueprintData
{
public:
	uint8                                        Pad_1942[0x10];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkTransform
struct FLiveLinkTransform
{
public:
	uint8                                        Pad_1943[0x20];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x140 (0x140 - 0x0)
// ScriptStruct LiveLinkInterface.CachedSubjectFrame
struct FCachedSubjectFrame
{
public:
	uint8                                        Pad_1944[0x140];                                   // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x70 (0x70 - 0x0)
// ScriptStruct LiveLinkInterface.SubjectMetadata
struct FSubjectMetadata
{
public:
	TMap<class FName, class FString>             StringMetadata;                                    // 0x0(0x50)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FTimecode                             SceneTimecode;                                     // 0x50(0x14)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameRate                            SceneFramerate;                                    // 0x64(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1945[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkWorldTime
struct FLiveLinkWorldTime
{
public:
	double                                       Time;                                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Offset;                                            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkMetaData
struct FLiveLinkMetaData
{
public:
	TMap<class FName, class FString>             StringMetadata;                                    // 0x0(0x50)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FQualifiedFrameTime                   SceneTime;                                         // 0x50(0x10)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData
struct FLiveLinkBaseFrameData
{
public:
	struct FLiveLinkWorldTime                    WorldTime;                                         // 0x0(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FLiveLinkMetaData                     MetaData;                                          // 0x10(0x60)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<float>                                PropertyValues;                                    // 0x70(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x90 - 0x80)
// ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData
struct FLiveLinkAnimationFrameData : public FLiveLinkBaseFrameData
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x80(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData
struct FLiveLinkBaseStaticData
{
public:
	TArray<class FName>                          PropertyNames;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x30 - 0x10)
// ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData
struct FLiveLinkSkeletonStaticData : public FLiveLinkBaseStaticData
{
public:
	TArray<class FName>                          BoneNames;                                         // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                BoneParents;                                       // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x98 - 0x8)
// ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData
struct FLiveLinkBasicBlueprintData : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkBaseStaticData               StaticData;                                        // 0x8(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLiveLinkBaseFrameData                FrameData;                                         // 0x18(0x80)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct LiveLinkInterface.LiveLinkTransformStaticData
struct FLiveLinkTransformStaticData : public FLiveLinkBaseStaticData
{
public:
};

// 0x10 (0x20 - 0x10)
// ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData
struct FLiveLinkCameraStaticData : public FLiveLinkTransformStaticData
{
public:
	bool                                         bIsFieldOfViewSupported;                           // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAspectRatioSupported;                           // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFocalLengthSupported;                           // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsProjectionModeSupported;                        // 0x13(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilmBackWidth;                                     // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FilmBackHeight;                                    // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsApertureSupported;                              // 0x1C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFocusDistanceSupported;                         // 0x1D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1946[0x2];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x30 (0xB0 - 0x80)
// ScriptStruct LiveLinkInterface.LiveLinkTransformFrameData
struct FLiveLinkTransformFrameData : public FLiveLinkBaseFrameData
{
public:
	struct FTransform                            Transform;                                         // 0x80(0x30)(Edit, BlueprintVisible, IsPlainOldData, Interp, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0xD0 - 0xB0)
// ScriptStruct LiveLinkInterface.LiveLinkCameraFrameData
struct FLiveLinkCameraFrameData : public FLiveLinkTransformFrameData
{
public:
	float                                        FieldOfView;                                       // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AspectRatio;                                       // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FocalLength;                                       // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Aperture;                                          // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FocusDistance;                                     // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELiveLinkCameraProjectionMode     ProjectionMode;                                    // 0xC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1947[0xB];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0xF8 (0x100 - 0x8)
// ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData
struct FLiveLinkCameraBlueprintData : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkCameraStaticData             StaticData;                                        // 0x8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_1948[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FLiveLinkCameraFrameData              FrameData;                                         // 0x30(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
struct FLiveLinkCurveConversionSettings
{
public:
	TMap<class FString, struct FSoftObjectPath>  CurveConversionAssetMap;                           // 0x0(0x50)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x20 - 0x10)
// ScriptStruct LiveLinkInterface.LiveLinkLightStaticData
struct FLiveLinkLightStaticData : public FLiveLinkTransformStaticData
{
public:
	bool                                         bIsTemperatureSupported;                           // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsIntensitySupported;                             // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLightColorSupported;                            // 0x12(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInnerConeAngleSupported;                        // 0x13(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsOuterConeAngleSupported;                        // 0x14(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsAttenuationRadiusSupported;                     // 0x15(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSourceLenghtSupported;                          // 0x16(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSourceRadiusSupported;                          // 0x17(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSoftSourceRadiusSupported;                      // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1949[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x30 (0xE0 - 0xB0)
// ScriptStruct LiveLinkInterface.LiveLinkLightFrameData
struct FLiveLinkLightFrameData : public FLiveLinkTransformFrameData
{
public:
	float                                        Temperature;                                       // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Intensity;                                         // 0xB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                LightColor;                                        // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InnerConeAngle;                                    // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OuterConeAngle;                                    // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AttenuationRadius;                                 // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceRadius;                                      // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SoftSourceRadius;                                  // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SourceLength;                                      // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_194A[0xC];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x108 (0x110 - 0x8)
// ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData
struct FLiveLinkLightBlueprintData : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkLightStaticData              StaticData;                                        // 0x8(0x20)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_194B[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FLiveLinkLightFrameData               FrameData;                                         // 0x30(0xE0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSourcePreset
struct FLiveLinkSourcePreset
{
public:
	struct FGuid                                 Guid;                                              // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveLinkSourceSettings*               Settings;                                          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
struct FLiveLinkRefSkeleton
{
public:
	TArray<class FName>                          BoneNames;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                BoneParents;                                       // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation
struct FLiveLinkSubjectRepresentation
{
public:
	struct FLiveLinkSubjectName                  Subject;                                           // 0x0(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkRole>             Role;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
struct FLiveLinkInterpolationSettings
{
public:
	float                                        InterpolationOffset;                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
struct FLiveLinkTimeSynchronizationSettings
{
public:
	struct FFrameRate                            FrameRate;                                         // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameDelay;                                        // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC8 (0xD0 - 0x8)
// ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData
struct FLiveLinkTransformBlueprintData : public FLiveLinkBaseBlueprintData
{
public:
	struct FLiveLinkTransformStaticData          StaticData;                                        // 0x8(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_194C[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FLiveLinkTransformFrameData           FrameData;                                         // 0x20(0xB0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkCurveElement
struct FLiveLinkCurveElement
{
public:
	class FName                                  CurveName;                                         // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurveValue;                                        // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkFrameData
struct FLiveLinkFrameData
{
public:
	TArray<struct FTransform>                    Transforms;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLiveLinkCurveElement>         CurveElements;                                     // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FLiveLinkWorldTime                    WorldTime;                                         // 0x20(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FLiveLinkMetaData                     MetaData;                                          // 0x30(0x60)(NativeAccessSpecifierPublic)
};

// 0x0 (0x8 - 0x8)
// ScriptStruct LiveLinkInterface.LiveLinkFrameRate
struct FLiveLinkFrameRate : public FFrameRate
{
public:
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
struct FLiveLinkTimeCode_Base_DEPRECATED
{
public:
	int32                                        Seconds;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Frames;                                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLiveLinkFrameRate                    FrameRate;                                         // 0x8(0x8)(NoDestructor, NativeAccessSpecifierPublic)
};

// 0x0 (0x10 - 0x10)
// ScriptStruct LiveLinkInterface.LiveLinkTimeCode
struct FLiveLinkTimeCode : public FLiveLinkTimeCode_Base_DEPRECATED
{
public:
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
