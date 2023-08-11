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

// 0xB8 (0xE0 - 0x28)
// Class SlateCore.FontBulkData
class UFontBulkData : public UObject
{
public:
	uint8                                        Pad_41C3[0xB8];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FontBulkData");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class SlateCore.FontFaceInterface
class IFontFaceInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FontFaceInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class SlateCore.FontProviderInterface
class IFontProviderInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FontProviderInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class SlateCore.SlateTypes
class USlateTypes : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SlateTypes");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class SlateCore.SlateWidgetStyleAsset
class USlateWidgetStyleAsset : public UObject
{
public:
	class USlateWidgetStyleContainerBase*        CustomStyle;                                       // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SlateWidgetStyleAsset");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class SlateCore.SlateWidgetStyleContainerBase
class USlateWidgetStyleContainerBase : public UObject
{
public:
	uint8                                        Pad_41C4[0x8];                                     // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SlateWidgetStyleContainerBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class SlateCore.SlateWidgetStyleContainerInterface
class ISlateWidgetStyleContainerInterface : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SlateWidgetStyleContainerInterface");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
