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


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x48 - 0x10)
// ScriptStruct LiveLink.AnimNode_LiveLinkPose
struct FAnimNode_LiveLinkPose : public FAnimNode_Base
{
public:
	struct FPoseLink                             InputPose;                                         // 0x10(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FLiveLinkSubjectName                  LiveLinkSubjectName;                               // 0x20(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkRetargetAsset>    RetargetAsset;                                     // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULiveLinkRetargetAsset*                CurrentRetargetAsset;                              // 0x30(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1843[0x10];                                    // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x50 (0x730 - 0x6E0)
// ScriptStruct LiveLink.LiveLinkInstanceProxy
struct FLiveLinkInstanceProxy : public FAnimInstanceProxy
{
public:
	struct FAnimNode_LiveLinkPose                PoseNode;                                          // 0x6E0(0x48)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_1844[0x8];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x30 (0x30 - 0x0)
// ScriptStruct LiveLink.ProviderPollResult
struct FProviderPollResult
{
public:
	uint8                                        Pad_1845[0x10];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                Name;                                              // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MachineName;                                       // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct LiveLink.LiveLinkRetargetAssetReference
struct FLiveLinkRetargetAssetReference
{
public:
	uint8                                        Pad_1846[0x1];                                     // Fixing Size Of Struct [ Dumper-8 ]
};

// 0x28 (0x28 - 0x0)
// ScriptStruct LiveLink.LiveLinkRoleProjectSetting
struct FLiveLinkRoleProjectSetting
{
public:
	TSubclassOf<class ULiveLinkRole>             Role;                                              // 0x0(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkSubjectSettings>  SettingClass;                                      // 0x8(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkFrameInterpolationProcessor> FrameInterpolationProcessor;                       // 0x10(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class ULiveLinkFramePreProcessor>> FramePreProcessors;                                // 0x18(0x10)(Edit, ZeroConstructor, Config, UObjectWrapper, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
