#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// Function AutomationUtils.AutomationUtilsBlueprintLibrary.TakeGameplayAutomationScreenshot
struct UAutomationUtilsBlueprintLibrary_TakeGameplayAutomationScreenshot_Params
{
public:
	class FString                                ScreenshotName;                                    // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxGlobalError;                                    // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxLocalError;                                     // 0x14(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MapNameOverride;                                   // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
