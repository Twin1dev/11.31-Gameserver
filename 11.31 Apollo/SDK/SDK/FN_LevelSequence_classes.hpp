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

// 0x150 (0x498 - 0x348)
// Class LevelSequence.LevelSequence
class ULevelSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelSequenceObjectReferenceMap      ObjectReferences;                                  // 0x350(0x50)(Protected, NativeAccessSpecifierProtected)
	struct FLevelSequenceBindingReferences       BindingReferences;                                 // 0x3A0(0xA0)(Protected, NativeAccessSpecifierProtected)
	TMap<class FString, struct FLevelSequenceObject> PossessedObjects;                                  // 0x440(0x50)(ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
	class UClass*                                DirectorClass;                                     // 0x490(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelSequence");
		return Clss;
	}

	void RemoveMetaDataByClass(TSubclassOf<class UObject> InClass);
	class UObject* FindOrAddMetaDataByClass(TSubclassOf<class UObject> InClass);
	class UObject* FindMetaDataByClass(TSubclassOf<class UObject> InClass);
	class UObject* CopyMetaData(class UObject* InMetaData);
};

// 0x48 (0x70 - 0x28)
// Class LevelSequence.DefaultLevelSequenceInstanceData
class UDefaultLevelSequenceInstanceData : public UObject
{
public:
	uint8                                        Pad_1C9A[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AActor*                                TransformOriginActor;                              // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C9B[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTransform                            TransformOrigin;                                   // 0x40(0x30)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DefaultLevelSequenceInstanceData");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LevelSequence.LevelSequenceMetaData
class ILevelSequenceMetaData : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelSequenceMetaData");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LevelSequence.LevelSequenceBurnInInitSettings
class ULevelSequenceBurnInInitSettings : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelSequenceBurnInInitSettings");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class LevelSequence.LevelSequenceBurnInOptions
class ULevelSequenceBurnInOptions : public UObject
{
public:
	bool                                         bUseBurnIn;                                        // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C9C[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSoftClassPath                        BurnInClass;                                       // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnInInitSettings*      Settings;                                          // 0x48(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelSequenceBurnInOptions");
		return Clss;
	}

	void SetBurnIn(const struct FSoftClassPath& InBurnInClass);
};

// 0x88 (0x2A0 - 0x218)
// Class LevelSequence.LevelSequenceActor
class ALevelSequenceActor : public AActor
{
public:
	uint8                                        Pad_1C9F[0x10];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x228(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CA0[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class ULevelSequencePlayer*                  SequencePlayer;                                    // 0x240(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       LevelSequence;                                     // 0x248(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class AActor*>                        AdditionalEventReceivers;                          // 0x260(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnInOptions*           BurnInOptions;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneBindingOverrides*           BindingOverrides;                                  // 0x278(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAutoPlay : 1;                                     // Mask: 0x1, PropSize: 0x10x280(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideInstanceData : 1;                         // Mask: 0x2, PropSize: 0x10x280(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReplicatePlayback : 1;                            // Mask: 0x4, PropSize: 0x10x280(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_17D : 5;                                    // Fixing Bit-Field Size  [ Dumper-8 ]
	uint8                                        Pad_1CA1[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UObject*                               DefaultInstanceData;                               // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULevelSequenceBurnIn*                  BurnInInstance;                                    // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bShowBurnin;                                       // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1CA2[0x7];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelSequenceActor");
		return Clss;
	}

	void ShowBurnin();
	void SetSequence(class ULevelSequence* InSequence);
	void SetReplicatePlayback(bool ReplicatePlayback);
	void SetEventReceivers(const TArray<class AActor*>& AdditionalReceivers);
	void SetBinding(const struct FMovieSceneObjectBindingID& Binding, TArray<class AActor*>& Actors, bool bAllowBindingsFromAsset);
	void ResetBindings();
	void ResetBinding(const struct FMovieSceneObjectBindingID& Binding);
	void RemoveBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor);
	void OnLevelSequenceLoaded__DelegateSignature();
	class ULevelSequence* LoadSequence();
	void HideBurnin();
	class ULevelSequencePlayer* GetSequencePlayer();
	class ULevelSequence* GetSequence();
	void AddBinding(const struct FMovieSceneObjectBindingID& Binding, class AActor* Actor, bool bAllowBindingsFromAsset);
};

// 0xC0 (0x2F0 - 0x230)
// Class LevelSequence.LevelSequenceBurnIn
class ULevelSequenceBurnIn : public UUserWidget
{
public:
	struct FLevelSequencePlayerSnapshot          FrameInformation;                                  // 0x230(0xB8)(BlueprintVisible, BlueprintReadOnly, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	class ALevelSequenceActor*                   LevelSequenceActor;                                // 0x2E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelSequenceBurnIn");
		return Clss;
	}

	void SetSettings(class UObject* InSettings);
	TSubclassOf<class ULevelSequenceBurnInInitSettings> GetSettingsClass();
};

// 0x8 (0x30 - 0x28)
// Class LevelSequence.LevelSequenceDirector
class ULevelSequenceDirector : public UObject
{
public:
	class ULevelSequencePlayer*                  Player;                                            // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelSequenceDirector");
		return Clss;
	}

	void OnCreated();
};

// 0x0 (0xD8 - 0xD8)
// Class LevelSequence.LegacyLevelSequenceDirectorBlueprint
class ULegacyLevelSequenceDirectorBlueprint : public UBlueprint
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LegacyLevelSequenceDirectorBlueprint");
		return Clss;
	}

};

// 0x110 (0x928 - 0x818)
// Class LevelSequence.LevelSequencePlayer
class ULevelSequencePlayer : public UMovieSceneSequencePlayer
{
public:
	UMulticastInlineDelegateProperty_            OnCameraCut;                                       // 0x818(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CA4[0x100];                                   // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LevelSequencePlayer");
		return Clss;
	}

	class UCameraComponent* GetActiveCameraComponent();
	class ULevelSequencePlayer* CreateLevelSequencePlayer(class UObject* WorldContextObject, class ULevelSequence* LevelSequence, const struct FMovieSceneSequencePlaybackSettings& Settings, class ALevelSequenceActor** OutActor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
