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

// 0xB0 (0xD8 - 0x28)
// Class LiveLinkInterface.LiveLinkVirtualSubject
class ULiveLinkVirtualSubject : public UObject
{
public:
	uint8                                        Pad_1937[0x8];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TSubclassOf<class ULiveLinkRole>             Role;                                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FLiveLinkSubjectName>          Subjects;                                          // 0x38(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class ULiveLinkFrameTranslator*>      FrameTranslators;                                  // 0x48(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1938[0x80];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkVirtualSubject");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkSourceFactory
class ULiveLinkSourceFactory : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkSourceFactory");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkRole
class ULiveLinkRole : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkRole");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkBasicRole
class ULiveLinkBasicRole : public ULiveLinkRole
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkBasicRole");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkAnimationRole
class ULiveLinkAnimationRole : public ULiveLinkBasicRole
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkAnimationRole");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor
class ULiveLinkFrameInterpolationProcessor : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkFrameInterpolationProcessor");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class LiveLinkInterface.LiveLinkBasicFrameInterpolateProcessor
class ULiveLinkBasicFrameInterpolateProcessor : public ULiveLinkFrameInterpolationProcessor
{
public:
	bool                                         bInterpolatePropertyValues;                        // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1939[0x17];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkBasicFrameInterpolateProcessor");
		return Clss;
	}

};

// 0x10 (0x50 - 0x40)
// Class LiveLinkInterface.LiveLinkAnimationFrameInterpolateProcessor
class ULiveLinkAnimationFrameInterpolateProcessor : public ULiveLinkBasicFrameInterpolateProcessor
{
public:
	uint8                                        Pad_193A[0x10];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkAnimationFrameInterpolateProcessor");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkFrameTranslator
class ULiveLinkFrameTranslator : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkFrameTranslator");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class LiveLinkInterface.LiveLinkAnimationRoleToTransform
class ULiveLinkAnimationRoleToTransform : public ULiveLinkFrameTranslator
{
public:
	class FName                                  BoneName;                                          // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_193B[0x10];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkAnimationRoleToTransform");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkTransformRole
class ULiveLinkTransformRole : public ULiveLinkBasicRole
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkTransformRole");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkCameraRole
class ULiveLinkCameraRole : public ULiveLinkTransformRole
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkCameraRole");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkController
class ULiveLinkController : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkController");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class LiveLinkInterface.LiveLinkSourceSettings
class ULiveLinkSourceSettings : public UObject
{
public:
	enum class ELiveLinkSourceMode               Mode;                                              // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_193C[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FLiveLinkInterpolationSettings        InterpolationSettings;                             // 0x2C(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FLiveLinkTimeSynchronizationSettings  TimeSynchronizationSettings;                       // 0x30(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_193D[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                ConnectionString;                                  // 0x40(0x10)(Edit, ZeroConstructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkSourceFactory>    Factory;                                           // 0x50(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkSourceSettings");
		return Clss;
	}

};

// 0x50 (0xA8 - 0x58)
// Class LiveLinkInterface.LiveLinkCurveRemapSettings
class ULiveLinkCurveRemapSettings : public ULiveLinkSourceSettings
{
public:
	struct FLiveLinkCurveConversionSettings      CurveConversionSettings;                           // 0x58(0x50)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkCurveRemapSettings");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkFramePreProcessor
class ULiveLinkFramePreProcessor : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkFramePreProcessor");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class LiveLinkInterface.LiveLinkLightRole
class ULiveLinkLightRole : public ULiveLinkTransformRole
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkLightRole");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class LiveLinkInterface.LiveLinkSubjectSettings
class ULiveLinkSubjectSettings : public UObject
{
public:
	TArray<class ULiveLinkFramePreProcessor*>    PreProcessors;                                     // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class ULiveLinkFrameInterpolationProcessor*  InterpolationProcessor;                            // 0x38(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class ULiveLinkFrameTranslator*>      Translators;                                       // 0x40(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkRole>             Role;                                              // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkSubjectSettings");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class LiveLinkInterface.LiveLinkAxisSwitchPreProcessor
class ULiveLinkAxisSwitchPreProcessor : public ULiveLinkFramePreProcessor
{
public:
	enum class ELiveLinkAxis                     AxisX;                                             // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ELiveLinkAxis                     AxisY;                                             // 0x29(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ELiveLinkAxis                     AxisZ;                                             // 0x2A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_193E[0x15];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkAxisSwitchPreProcessor");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
