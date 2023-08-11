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

// 0x140 (0x220 - 0xE0)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSection
class UMovieSceneLiveLinkSection : public UMovieSceneSection
{
public:
	struct FLiveLinkSubjectPreset                SubjectPreset;                                     // 0xE0(0x38)(NoDestructor, NativeAccessSpecifierPublic)
	TArray<bool>                                 ChannelMask;                                       // 0x118(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneLiveLinkSubSection*> SubSections;                                       // 0x128(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A48[0x10];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  SubjectName;                                       // 0x148(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLiveLinkFrameData                    TemplateToPush;                                    // 0x150(0x90)(Deprecated, NativeAccessSpecifierPublic)
	struct FLiveLinkRefSkeleton                  RefSkeleton;                                       // 0x1E0(0x20)(Deprecated, NativeAccessSpecifierPublic)
	TArray<class FName>                          CurveNames;                                        // 0x200(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneFloatChannel>       PropertyFloatChannels;                             // 0x210(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLiveLinkSection");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection
class UMovieSceneLiveLinkSubSection : public UObject
{
public:
	struct FLiveLinkSubSectionData               SubSectionData;                                    // 0x28(0x10)(NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkRole>             SubjectRole;                                       // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1A49[0x10];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLiveLinkSubSection");
		return Clss;
	}

};

// 0x10 (0x60 - 0x50)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
class UMovieSceneLiveLinkSubSectionAnimation : public UMovieSceneLiveLinkSubSection
{
public:
	uint8                                        Pad_1A4A[0x10];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLiveLinkSubSectionAnimation");
		return Clss;
	}

};

// 0x10 (0x60 - 0x50)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
class UMovieSceneLiveLinkSubSectionBasicRole : public UMovieSceneLiveLinkSubSection
{
public:
	uint8                                        Pad_1A4B[0x10];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLiveLinkSubSectionBasicRole");
		return Clss;
	}

};

// 0x10 (0x60 - 0x50)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
class UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection
{
public:
	uint8                                        Pad_1A4C[0x10];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLiveLinkSubSectionProperties");
		return Clss;
	}

};

// 0x8 (0x90 - 0x88)
// Class LiveLinkMovieScene.MovieSceneLiveLinkTrack
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack
{
public:
	TSubclassOf<class ULiveLinkRole>             TrackRole;                                         // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLiveLinkTrack");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
