#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x50 - 0x28)
// Class MovieScene.MovieSceneSignedObject
class UMovieSceneSignedObject : public UObject
{
public:
	struct FGuid                                 Signature;                                         // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_73A[0x18];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneSignedObject* GetDefaultObj();

};

// 0x90 (0xE0 - 0x50)
// Class MovieScene.MovieSceneSection
class UMovieSceneSection : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneSectionEvalOptions         EvalOptions;                                       // 0x50(0x2)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_74E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneEasingSettings             Easing;                                            // 0x58(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FMovieSceneFrameRange                 SectionRange;                                      // 0x90(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FFrameNumber                          PreRollFrames;                                     // 0xA0(0x4)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                          PostRollFrames;                                    // 0xA4(0x4)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        RowIndex;                                          // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        OverlapPriority;                                   // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsActive : 1;                                     // Mask: 0x1, PropSize: 0x10xB0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bIsLocked : 1;                                     // Mask: 0x2, PropSize: 0x10xB0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_42 : 6;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_74F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StartTime;                                         // 0xB4(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        EndTime;                                           // 0xB8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PrerollTime;                                       // 0xBC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PostrollTime;                                      // 0xC0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsInfinite : 1;                                   // Mask: 0x1, PropSize: 0x10xC4(0x1)(Deprecated, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_43 : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_750[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         bSupportsInfiniteRange;                            // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FOptionalMovieSceneBlendType          BlendType;                                         // 0xC9(0x2)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_751[0x15];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneSection* GetDefaultObj();

	void SetRowIndex(int32 NewRowIndex);
	void SetPreRollFrames(int32 InPreRollFrames);
	void SetPostRollFrames(int32 InPostRollFrames);
	void SetOverlapPriority(int32 NewPriority);
	void SetIsLocked(bool bInIsLocked);
	void SetIsActive(bool bInIsActive);
	bool IsLocked();
	bool IsActive();
	int32 GetRowIndex();
	int32 GetPreRollFrames();
	int32 GetPostRollFrames();
	int32 GetOverlapPriority();
};

// 0x8 (0x58 - 0x50)
// Class MovieScene.MovieSceneTrack
class UMovieSceneTrack : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneTrackEvalOptions           EvalOptions;                                       // 0x50(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_75C[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneTrack* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MovieScene.MovieSceneNameableTrack
class UMovieSceneNameableTrack : public UMovieSceneTrack
{
public:

	static class UClass* StaticClass();
	static class UMovieSceneNameableTrack* GetDefaultObj();

};

// 0x2F8 (0x348 - 0x50)
// Class MovieScene.MovieSceneSequence
class UMovieSceneSequence : public UMovieSceneSignedObject
{
public:
	struct FMovieSceneEvaluationTemplate         PrecompiledEvaluationTemplate;                     // 0x50(0x2F0)(ContainsInstancedReference, NativeAccessSpecifierPublic)
	enum class EMovieSceneCompletionMode         DefaultCompletionMode;                             // 0x340(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bParentContextsAreSignificant;                     // 0x341(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPlayableDirectly;                                 // 0x342(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_75D[0x5];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneSequence* GetDefaultObj();

};

// 0x70 (0x150 - 0xE0)
// Class MovieScene.MovieSceneSubSection
class UMovieSceneSubSection : public UMovieSceneSection
{
public:
	struct FMovieSceneSectionParameters          Parameters;                                        // 0xE0(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        StartOffset;                                       // 0xF8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TimeScale;                                         // 0xFC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        PrerollTime;                                       // 0x100(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_75F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneSequence*                   SubSequence;                                       // 0x108(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TLazyObjectPtr<class AActor>                 ActorToRecord;                                     // 0x110(0x1C)(Edit, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_760[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                TargetSequenceName;                                // 0x130(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FDirectoryPath                        TargetPathToRecordTo;                              // 0x140(0x10)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieSceneSubSection* GetDefaultObj();

	void SetSequence(class UMovieSceneSequence* Sequence);
	class UMovieSceneSequence* GetSequence();
};

// 0x10 (0x68 - 0x58)
// Class MovieScene.MovieSceneSubTrack
class UMovieSceneSubTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x58(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieSceneSubTrack* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieScenePlaybackClient
class IMovieScenePlaybackClient : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieScenePlaybackClient* GetDefaultObj();

};

// 0x90 (0xE0 - 0x50)
// Class MovieScene.MovieScene
class UMovieScene : public UMovieSceneSignedObject
{
public:
	TArray<struct FMovieSceneSpawnable>          Spawnables;                                        // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieScenePossessable>        Possessables;                                      // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMovieSceneBinding>            ObjectBindings;                                    // 0x70(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>              MasterTracks;                                      // 0x80(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UMovieSceneTrack*                      CameraCutTrack;                                    // 0x90(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FMovieSceneFrameRange                 SelectionRange;                                    // 0x98(0x10)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FMovieSceneFrameRange                 PlaybackRange;                                     // 0xA8(0x10)(NoDestructor, NativeAccessSpecifierPrivate)
	struct FFrameRate                            TickResolution;                                    // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameRate                            DisplayRate;                                       // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EMovieSceneEvaluationType         EvaluationType;                                    // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EUpdateClockSource                ClockSource;                                       // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_762[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FMovieSceneMarkedFrame>        MarkedFrames;                                      // 0xD0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieScene* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class MovieScene.MovieSceneBindingOverrides
class UMovieSceneBindingOverrides : public UObject
{
public:
	TArray<struct FMovieSceneBindingOverrideData> BindingData;                                       // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_763[0x58];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneBindingOverrides* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneBindingOwnerInterface
class IMovieSceneBindingOwnerInterface : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneBindingOwnerInterface* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MovieScene.MovieSceneBuiltInEasingFunction
class UMovieSceneBuiltInEasingFunction : public UObject
{
public:
	uint8                                        Pad_765[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class EMovieSceneBuiltInEasing          Type;                                              // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_766[0x7];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneBuiltInEasingFunction* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MovieScene.MovieSceneEasingExternalCurve
class UMovieSceneEasingExternalCurve : public UObject
{
public:
	uint8                                        Pad_767[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UCurveFloat*                           Curve;                                             // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMovieSceneEasingExternalCurve* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneEasingFunction
class IMovieSceneEasingFunction : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneEasingFunction* GetDefaultObj();

	float OnEvaluate(float Interp);
};

// 0x48 (0x70 - 0x28)
// Class MovieScene.MovieSceneFolder
class UMovieSceneFolder : public UObject
{
public:
	class FName                                  FolderName;                                        // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneFolder*>             ChildFolders;                                      // 0x30(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class UMovieSceneTrack*>              ChildMasterTracks;                                 // 0x40(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<class FString>                        ChildObjectBindingStrings;                         // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_768[0x10];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneFolder* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MovieScene.MovieSceneKeyProxy
class IMovieSceneKeyProxy : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IMovieSceneKeyProxy* GetDefaultObj();

};

// 0x7F0 (0x818 - 0x28)
// Class MovieScene.MovieSceneSequencePlayer
class UMovieSceneSequencePlayer : public UObject
{
public:
	uint8                                        Pad_788[0x390];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnPlay;                                            // 0x3B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnPlayReverse;                                     // 0x3C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnStop;                                            // 0x3D8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnPause;                                           // 0x3E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnFinished;                                        // 0x3F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	enum class EMovieScenePlayerStatus           Status;                                            // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_78C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint8                                        bReversePlayback : 1;                              // Mask: 0x1, PropSize: 0x10x40C(0x1)(Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_4D : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_78D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMovieSceneSequence*                   Sequence;                                          // 0x410(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FFrameNumber                          StartTime;                                         // 0x418(0x4)(Net, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        DurationFrames;                                    // 0x41C(0x4)(Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        CurrentNumLoops;                                   // 0x420(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_78E[0x14];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneSequencePlaybackSettings   PlaybackSettings;                                  // 0x438(0x14)(Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_78F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance;                              // 0x450(0x300)(Transient, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_790[0x68];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMovieSceneSequenceReplProperties     NetSyncProps;                                      // 0x7B8(0x10)(Net, NoDestructor, Protected, NativeAccessSpecifierProtected)
	TScriptInterface<class IMovieScenePlaybackClient> PlaybackClient;                                    // 0x7C8(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_791[0x40];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMovieSceneSequencePlayer* GetDefaultObj();

	void StopAtCurrentTime();
	void Stop();
	void SetTimeRange(float StartTime, float Duration);
	void SetPlayRate(float PlayRate);
	void SetPlaybackRange(float NewStartTime, float NewEndTime);
	void SetPlaybackPosition(float NewPlaybackPosition);
	void SetFrameRate(const struct FFrameRate& FrameRate);
	void SetFrameRange(int32 StartFrame, int32 Duration);
	void SetDisableCameraCuts(bool bInDisableCameraCuts);
	void ScrubToSeconds(float TimeInSeconds);
	bool ScrubToMarkedFrame(const class FString& InLabel);
	void ScrubToFrame(const struct FFrameTime& NewPosition);
	void Scrub();
	void RPC_OnStopEvent(const struct FFrameTime& StoppedTime);
	void RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime);
	void PlayToSeconds(float TimeInSeconds);
	bool PlayToMarkedFrame(const class FString& InLabel);
	void PlayToFrame(const struct FFrameTime& NewPosition);
	void PlayReverse();
	void PlayLooping(int32 NumLoops);
	void Play();
	void Pause();
	void JumpToSeconds(float TimeInSeconds);
	void JumpToPosition(float NewPlaybackPosition);
	bool JumpToMarkedFrame(const class FString& InLabel);
	void JumpToFrame(const struct FFrameTime& NewPosition);
	bool IsReversed();
	bool IsPlaying();
	bool IsPaused();
	void GoToEndAndStop();
	struct FQualifiedFrameTime GetStartTime();
	float GetPlayRate();
	float GetPlaybackStart();
	float GetPlaybackPosition();
	float GetPlaybackEnd();
	TArray<struct FMovieSceneObjectBindingID> GetObjectBindings(class UObject* InObject);
	float GetLength();
	struct FFrameRate GetFrameRate();
	int32 GetFrameDuration();
	struct FQualifiedFrameTime GetEndTime();
	struct FQualifiedFrameTime GetDuration();
	bool GetDisableCameraCuts();
	struct FQualifiedFrameTime GetCurrentTime();
	TArray<class UObject*> GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding);
	void ChangePlaybackDirection();
};

// 0x18 (0x70 - 0x58)
// Class MovieScene.TestMovieSceneTrack
class UTestMovieSceneTrack : public UMovieSceneTrack
{
public:
	bool                                         bHighPassFilter;                                   // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7A0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UMovieSceneSection*>            SectionArray;                                      // 0x60(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTestMovieSceneTrack* GetDefaultObj();

};

// 0x0 (0xE0 - 0xE0)
// Class MovieScene.TestMovieSceneSection
class UTestMovieSceneSection : public UMovieSceneSection
{
public:

	static class UClass* StaticClass();
	static class UTestMovieSceneSection* GetDefaultObj();

};

// 0x8 (0x350 - 0x348)
// Class MovieScene.TestMovieSceneSequence
class UTestMovieSceneSequence : public UMovieSceneSequence
{
public:
	class UMovieScene*                           MovieScene;                                        // 0x348(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UTestMovieSceneSequence* GetDefaultObj();

};

}


