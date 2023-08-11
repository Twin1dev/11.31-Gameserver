#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class LiveLink.LiveLinkRetargetAsset
class ULiveLinkRetargetAsset : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkRetargetAsset");
		return Clss;
	}

};

// 0x8 (0xE0 - 0xD8)
// Class LiveLink.LiveLinkAnimationVirtualSubject
class ULiveLinkAnimationVirtualSubject : public ULiveLinkVirtualSubject
{
public:
	uint8                                        Pad_1827[0x8];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkAnimationVirtualSubject");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLink.LiveLinkBlueprintLibrary
class ULiveLinkBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkBlueprintLibrary");
		return Clss;
	}

	void TransformNames(struct FSubjectFrameHandle& SubjectFrameHandle, TArray<class FName>* TransformNames);
	void TransformName(struct FLiveLinkTransform& LiveLinkTransform, class FName* Name);
	void SetLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey, bool bEnabled);
	bool RequestShutdown(struct FLiveLinkSourceHandle& SourceHandle);
	void ParentBoneSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform* Transform);
	int32 NumberOfTransforms(struct FSubjectFrameHandle& SubjectFrameHandle);
	bool IsSpecificLiveLinkSubjectEnabled(const struct FLiveLinkSubjectKey& SubjectKey);
	bool IsSourceStillValid(struct FLiveLinkSourceHandle& SourceHandle);
	bool IsLiveLinkSubjectEnabled(const struct FLiveLinkSubjectName& SubjectName);
	bool HasParent(struct FLiveLinkTransform& LiveLinkTransform);
	void GetTransformByName(struct FSubjectFrameHandle& SubjectFrameHandle, class FName TransformName, struct FLiveLinkTransform* LiveLinkTransform);
	void GetTransformByIndex(struct FSubjectFrameHandle& SubjectFrameHandle, int32 TransformIndex, struct FLiveLinkTransform* LiveLinkTransform);
	TSubclassOf<class ULiveLinkRole> GetSpecificLiveLinkSubjectRole(const struct FLiveLinkSubjectKey& SubjectKey);
	class FText GetSourceType(struct FLiveLinkSourceHandle& SourceHandle);
	class FText GetSourceStatus(struct FLiveLinkSourceHandle& SourceHandle);
	class FText GetSourceMachineName(struct FLiveLinkSourceHandle& SourceHandle);
	void GetRootTransform(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkTransform* LiveLinkTransform);
	bool GetPropertyValue(struct FLiveLinkBasicBlueprintData& BasicData, class FName PropertyName, float* Value);
	void GetParent(struct FLiveLinkTransform& LiveLinkTransform, struct FLiveLinkTransform* Parent);
	void GetMetadata(struct FSubjectFrameHandle& SubjectFrameHandle, struct FSubjectMetadata* MetaData);
	TArray<struct FLiveLinkSubjectKey> GetLiveLinkSubjects(bool bIncludeDisabledSubject, bool bIncludeDisal);
	TSubclassOf<class ULiveLinkRole> GetLiveLinkSubjectRole(const struct FLiveLinkSubjectName& SubjectName);
	TArray<struct FLiveLinkSubjectName> GetLiveLinkEnabledSubjectNames(bool bIncludeVirtualSubject);
	void GetCurves(struct FSubjectFrameHandle& SubjectFrameHandle, TMap<class FName, float>* Curves);
	void GetChildren(struct FLiveLinkTransform& LiveLinkTransform, TArray<struct FLiveLinkTransform>* Children);
	void GetBasicData(struct FSubjectFrameHandle& SubjectFrameHandle, struct FLiveLinkBasicBlueprintData* BasicBlueprintData);
	bool EvaluateLiveLinkFrameWithSpecificRole(const struct FLiveLinkSubjectName& SubjectName, TSubclassOf<class ULiveLinkRole> Role, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	bool EvaluateLiveLinkFrameAtWorldTimeOffset(const struct FLiveLinkSubjectName& SubjectName, TSubclassOf<class ULiveLinkRole> Role, float WorldTimeOffset, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	bool EvaluateLiveLinkFrameAtSceneTime(const struct FLiveLinkSubjectName& SubjectName, TSubclassOf<class ULiveLinkRole> Role, const struct FTimecode& SceneTime, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	bool EvaluateLiveLinkFrame(const struct FLiveLinkSubjectRepresentation& SubjectRepresentation, struct FLiveLinkBaseBlueprintData* OutBlueprintData);
	void ComponentSpaceTransform(struct FLiveLinkTransform& LiveLinkTransform, struct FTransform* Transform);
	int32 ChildCount(struct FLiveLinkTransform& LiveLinkTransform);
};

// 0x20 (0xD0 - 0xB0)
// Class LiveLink.LiveLinkComponent
class ULiveLinkComponent : public UActorComponent
{
public:
	UMulticastInlineDelegateProperty_            OnLiveLinkUpdated;                                 // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_183D[0x10];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkComponent");
		return Clss;
	}

	void GetSubjectDataAtWorldTime(class FName SubjectName, float WorldTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectDataAtSceneTime(class FName SubjectName, struct FTimecode& SceneTime, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetSubjectData(class FName SubjectName, bool* bSuccess, struct FSubjectFrameHandle* SubjectFrameHandle);
	void GetAvailableSubjectNames(TArray<class FName>* SubjectNames);
};

// 0x20 (0xD0 - 0xB0)
// Class LiveLink.LiveLinkDrivenComponent
class ULiveLinkDrivenComponent : public UActorComponent
{
public:
	struct FLiveLinkSubjectName                  SubjectName;                                       // 0xB0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ActorTransformBone;                                // 0xB8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bModifyActorTransform;                             // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSetRelativeLocation;                              // 0xC1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_183E[0xE];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkDrivenComponent");
		return Clss;
	}

};

// 0x0 (0x270 - 0x270)
// Class LiveLink.LiveLinkInstance
class ULiveLinkInstance : public UAnimInstance
{
public:
	class ULiveLinkRetargetAsset*                CurrentRetargetAsset;                              // 0x268(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkInstance");
		return Clss;
	}

};

// 0x58 (0x80 - 0x28)
// Class LiveLink.LiveLinkMessageBusFinder
class ULiveLinkMessageBusFinder : public UObject
{
public:
	uint8                                        Pad_1840[0x58];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkMessageBusFinder");
		return Clss;
	}

	void GetAvailableProviders(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, float Duration, TArray<struct FProviderPollResult>* AvailableProviders);
	class ULiveLinkMessageBusFinder* ConstructMessageBusFinder();
	void ConnectToProvider(struct FProviderPollResult& Provider, struct FLiveLinkSourceHandle* SourceHandle);
};

// 0x0 (0x28 - 0x28)
// Class LiveLink.LiveLinkMessageBusSourceFactory
class ULiveLinkMessageBusSourceFactory : public ULiveLinkSourceFactory
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkMessageBusSourceFactory");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class LiveLink.LiveLinkPreset
class ULiveLinkPreset : public UObject
{
public:
	TArray<struct FLiveLinkSourcePreset>         Sources;                                           // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FLiveLinkSubjectPreset>        Subjects;                                          // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkPreset");
		return Clss;
	}

	void BuildFromClient();
	bool ApplyToClient();
};

// 0xA8 (0xD0 - 0x28)
// Class LiveLink.LiveLinkRemapAsset
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
public:
	uint8                                        Pad_1841[0xA8];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkRemapAsset");
		return Clss;
	}

	void RemapCurveElements(TMap<class FName, float>& CurveItems);
	class FName GetRemappedCurveName(class FName CurveName);
	class FName GetRemappedBoneName(class FName BoneName);
};

// 0x60 (0x88 - 0x28)
// Class LiveLink.LiveLinkSettings
class ULiveLinkSettings : public UObject
{
public:
	TArray<struct FLiveLinkRoleProjectSetting>   DefaultRoleSettings;                               // 0x28(0x10)(Edit, ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	struct FDirectoryPath                        PresetSaveDir;                                     // 0x38(0x10)(Edit, Config, NativeAccessSpecifierPublic)
	double                                       MessageBusPingRequestFrequency;                    // 0x48(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MessageBusHeartbeatFrequency;                      // 0x50(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       MessageBusHeartbeatTimeout;                        // 0x58(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       TimeWithoutFrameToBeConsiderAsInvalid;             // 0x60(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ValidColor;                                        // 0x68(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          InvalidColor;                                      // 0x78(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkSettings");
		return Clss;
	}

};

// 0x60 (0x90 - 0x30)
// Class LiveLink.LiveLinkTimeSynchronizationSource
class ULiveLinkTimeSynchronizationSource : public UTimeSynchronizationSource
{
public:
	class FName                                  SubjectName;                                       // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1842[0x58];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkTimeSynchronizationSource");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
