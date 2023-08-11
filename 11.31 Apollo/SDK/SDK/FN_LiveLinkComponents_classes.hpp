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
// Class LiveLinkComponents.LiveLinkControllerBase
class ULiveLinkControllerBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkControllerBase");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class LiveLinkComponents.LiveLinkCameraController
class ULiveLinkCameraController : public ULiveLinkControllerBase
{
public:
	struct FComponentReference                   ComponentToControl;                                // 0x28(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FLiveLinkTransformControllerData      TransformData;                                     // 0x50(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1961[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkCameraController");
		return Clss;
	}

};

// 0x38 (0xE8 - 0xB0)
// Class LiveLinkComponents.LiveLinkComponentController
class ULiveLinkComponentController : public UActorComponent
{
public:
	struct FLiveLinkSubjectRepresentation        SubjectRepresentation;                             // 0xB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	class ULiveLinkControllerBase*               Controller;                                        // 0xC0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoClear, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateInEditor;                                   // 0xC8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1962[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UMulticastInlineDelegateProperty_            OnLiveLinkUpdated;                                 // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1963[0x8];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkComponentController");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class LiveLinkComponents.LiveLinkLightController
class ULiveLinkLightController : public ULiveLinkControllerBase
{
public:
	struct FComponentReference                   ComponentToControl;                                // 0x28(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FLiveLinkTransformControllerData      TransformData;                                     // 0x50(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1964[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkLightController");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class LiveLinkComponents.LiveLinkTransformController
class ULiveLinkTransformController : public ULiveLinkControllerBase
{
public:
	struct FComponentReference                   ComponentToControl;                                // 0x28(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FLiveLinkTransformControllerData      TransformData;                                     // 0x50(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1965[0x4];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkTransformController");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
