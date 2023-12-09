#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class KairosSceneCapture.KairosCaptureStatics
class UKairosCaptureStatics : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UKairosCaptureStatics* GetDefaultObj();

	void ToggleAutoRotate(bool bIsAutoRotateAllowed);
	void PauseOrResumeSnippet(const struct FKairosSnippetParams& Params, const struct FWebJSResponse& Response);
	class AKairosSceneManagerActor* GetSceneManager(class UObject* WorldContextObject);
};

// 0x10 (0x40 - 0x30)
// Class KairosSceneCapture.KairosConfig
class UKairosConfig : public UDataAsset
{
public:
	float                                        DefaultHeroScale;                                  // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_275[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TSubclassOf<class AKairosHeroBase>           AvatarCaptureBlueprint;                            // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UKairosConfig* GetDefaultObj();

};

// 0x8 (0x2C0 - 0x2B8)
// Class KairosSceneCapture.KairosGameModeBase
class AKairosGameModeBase : public AGameModeBase
{
public:
	class UKairosConfig*                         DefaultConfig;                                     // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class AKairosGameModeBase* GetDefaultObj();

	class UKairosConfig* GetDefaultConfig();
};

// 0x30 (0x248 - 0x218)
// Class KairosSceneCapture.KairosHeroBase
class AKairosHeroBase : public AActor
{
public:
	class FString                                PlayerID;                                          // 0x218(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsBeingCaptured;                                  // 0x228(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_284[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class USceneCaptureComponent2D*              SceneCaptureComponent2D;                           // 0x230(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EKairosHeroAnimationState         CurrentAnimationState;                             // 0x238(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EKairosHeroSkeletonType           SkeletonType;                                      // 0x239(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_286[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       CapturePawn;                                       // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class AKairosHeroBase* GetDefaultObj();

	bool EndCapture();
	bool BeginCapture(const struct FKairosAnimationFramingInfo& FramingInfo, const struct FKairosCaptureParams& CaptureParams);
};

// 0x0 (0x278 - 0x278)
// Class KairosSceneCapture.KairosPawn
class AKairosPawn : public APawn
{
public:

	static class UClass* StaticClass();
	static class AKairosPawn* GetDefaultObj();

};

// 0x0 (0x568 - 0x568)
// Class KairosSceneCapture.KairosPlayerController
class AKairosPlayerController : public APlayerController
{
public:

	static class UClass* StaticClass();
	static class AKairosPlayerController* GetDefaultObj();

};

// 0x188 (0x3A0 - 0x218)
// Class KairosSceneCapture.KairosSceneManagerActor
class AKairosSceneManagerActor : public AActor
{
public:
	TMap<class FString, struct FKairosAvatarDisplayInfo> DisplayAvatars;                                    // 0x218(0x50)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_293[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            SpawnedPawnHeadCaptureTransform;                   // 0x270(0x30)(BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class UAudioComponent*                       SnippetAudioComponent;                             // 0x2A0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           ActiveGroupWidget;                                 // 0x2A8(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsSnippetPaused;                                  // 0x2B0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_294[0x1F];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FKairosSceneInfo                      ActiveSceneInfo;                                   // 0x2D0(0x20)(Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_295[0xB0];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class AKairosSceneManagerActor* GetDefaultObj();

	void StopAR();
	void PauseOrResumeSnippet(const class FString& PlayerID, bool bShouldPase);
	void OLD_OnSceneSetupComplete(const struct FKairosSceneInfo& CompleteSceneInfoCopy);
	struct FKairosSceneInfo GetSceneInfo();
	void BeginEmotePlaybackForPlayer(const class FString& PlayerID, const class FString& EmoteID);
};

}


