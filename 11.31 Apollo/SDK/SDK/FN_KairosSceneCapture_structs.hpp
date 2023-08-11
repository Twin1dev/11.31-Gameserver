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

enum class EKairosAvatarCaptureState : uint8
{
	Unloaded                       = 0,
	LoadingAssets                  = 1,
	ReadyToSpawn                   = 2,
	FinalizingSpawn                = 3,
	Displaying                     = 4,
	EKairosAvatarCaptureState_MAX  = 5,
};

enum class EKairosHeroAnimationType : uint8
{
	Unknown                        = 0,
	Idle                           = 1,
	Emote                          = 2,
	EKairosHeroAnimationType_MAX   = 3,
};

enum class EKairosHeroAnimationState : uint8
{
	Unknown                        = 0,
	Idling                         = 1,
	Emoting                        = 2,
	Face_Live                      = 3,
	Face_Playback                  = 4,
	EKairosHeroAnimationState_MAX  = 5,
};

enum class EKairosHeroSkeletonType : uint8
{
	Unknown                        = 0,
	Male                           = 1,
	Female                         = 2,
	EKairosHeroSkeletonType_MAX    = 3,
};

enum class EKairosAppMode : uint8
{
	Unknown                        = 0,
	AvatarCapture                  = 1,
	AvatarRender                   = 2,
	EKairosAppMode_MAX             = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct KairosSceneCapture.KairosSnippetPlayRecord
struct FKairosSnippetPlayRecord
{
public:
	class FString                                PlayerID;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPause;                                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179B[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x18 (0x18 - 0x0)
// ScriptStruct KairosSceneCapture.KairosSnippetParams
struct FKairosSnippetParams
{
public:
	class FString                                PlayerID;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPause;                                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179C[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x10 (0x10 - 0x0)
// ScriptStruct KairosSceneCapture.KairosAvatarAttributesMcpData
struct FKairosAvatarAttributesMcpData
{
public:
	TArray<struct FMcpVariantReader>             Variants;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct KairosSceneCapture.KairosAvatarItemMcpData
struct FKairosAvatarItemMcpData
{
public:
	class FString                                TemplateId;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKairosAvatarAttributesMcpData        Attributes;                                        // 0x10(0x10)(NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct KairosSceneCapture.KairosAvatarMcpData
struct FKairosAvatarMcpData
{
public:
	class FString                                ID;                                                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DisplayName;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         CurrentUser;                                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShouldPlayFacialAnimation;                         // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179D[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FKairosAvatarItemMcpData              Character;                                         // 0x28(0x20)(NativeAccessSpecifierPublic)
	struct FKairosAvatarItemMcpData              Backpack;                                          // 0x48(0x20)(NativeAccessSpecifierPublic)
	struct FKairosAvatarItemMcpData              Dance;                                             // 0x68(0x20)(NativeAccessSpecifierPublic)
	TArray<class FString>                        BackgroundColors;                                  // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct KairosSceneCapture.KairosCaptureAvatarParams
struct FKairosCaptureAvatarParams
{
public:
	class FString                                Background;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Format;                                            // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Width;                                             // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameRate;                                         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumFrames;                                         // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKairosAvatarMcpData>          Characters;                                        // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct KairosSceneCapture.KairosBobbleTimeParams
struct FKairosBobbleTimeParams
{
public:
	class FString                                Background;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FKairosAvatarMcpData>          Characters;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                SnippetPath;                                       // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContainerType;                                     // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContainerID;                                       // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MessageID;                                         // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x100 (0x100 - 0x0)
// ScriptStruct KairosSceneCapture.KairosCaptureParams
struct FKairosCaptureParams
{
public:
	int32                                        FrameRate;                                         // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OverrideNumFrames;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Size;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FColor                                BackgroundColor;                                   // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179E[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                FullPathAndName;                                   // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_179F[0xD8];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x3C0 (0x3C0 - 0x0)
// ScriptStruct KairosSceneCapture.KairosAvatarDisplayInfo
struct FKairosAvatarDisplayInfo
{
public:
	enum class EKairosAvatarCaptureState         CurrentState;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EKairosAvatarCaptureState         TargetState;                                       // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A0[0xE];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTransform                            SpawnTransform;                                    // 0x10(0x30)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FKairosAvatarMcpData                  AvatarData;                                        // 0x40(0x98)(NativeAccessSpecifierPublic)
	uint8                                        Pad_17A1[0x30];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortAthenaLoadout                    Loadout;                                           // 0x108(0xF0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     AnimToPlay;                                        // 0x1F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SnippetPathToPlay;                                 // 0x200(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A2[0x10];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortHero*                             HeroItem;                                          // 0x220(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A3[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FKairosCaptureParams                  CaptureParams;                                     // 0x230(0x100)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<struct FLinearColor>                  BackgroundColors;                                  // 0x330(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class AKairosHeroBase*                       KairosHero;                                        // 0x340(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortPlayerPawn*                       Pawn;                                              // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCurrentUser;                                    // 0x350(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A4[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                DisplayName;                                       // 0x358(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A5[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTransform                            HeadBoneTransform;                                 // 0x370(0x30)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bSpawnTransformIsAbsolute;                         // 0x3A0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsNewCharacter;                                   // 0x3A1(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A6[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TSubclassOf<class AFortPlayerPawn>           HeroPawnClass;                                     // 0x3A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseDefaultFrontendAnimClass;                      // 0x3B0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A7[0xF];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x20 (0x20 - 0x0)
// ScriptStruct KairosSceneCapture.KairosSceneInfo
struct FKairosSceneInfo
{
public:
	enum class EKairosAppMode                    SceneAppMode;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A8[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<struct FKairosAvatarDisplayInfo>      SpawnedAvatars;                                    // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FColor                                BackgroundColor;                                   // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17A9[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x50 (0x50 - 0x0)
// ScriptStruct KairosSceneCapture.KairosAnimationFramingInfo
struct FKairosAnimationFramingInfo
{
public:
	class FName                                  Name;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimMontage*                          IdleMontage;                                       // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EKairosHeroAnimationType          AnimationType;                                     // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EKairosHeroSkeletonType           SkeletonType;                                      // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17AA[0xE];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTransform                            CameraTransform;                                   // 0x20(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
