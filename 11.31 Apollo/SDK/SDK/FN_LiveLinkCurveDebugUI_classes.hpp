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
// Class LiveLinkCurveDebugUI.LiveLinkDebuggerBlueprintLibrary
class ULiveLinkDebuggerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkDebuggerBlueprintLibrary");
		return Clss;
	}

	void HideLiveLinkDebugger();
	void DisplayLiveLinkDebugger(const class FString& SubjectName);
};

// 0x58 (0x80 - 0x28)
// Class LiveLinkCurveDebugUI.LiveLinkDebuggerSettings
class ULiveLinkDebuggerSettings : public UObject
{
public:
	struct FSlateColor                           MinBarColor;                                       // 0x28(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	struct FSlateColor                           MaxBarColor;                                       // 0x50(0x28)(Edit, Config, NativeAccessSpecifierPublic)
	float                                        DPIScaleMultiplier;                                // 0x78(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F[0x4];                                       // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LiveLinkDebuggerSettings");
		return Clss;
	}

	float GetDPIScaleBasedOnSize(const struct FIntPoint& Size);
	struct FSlateColor GetBarColorForCurveValue(float CurveValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
