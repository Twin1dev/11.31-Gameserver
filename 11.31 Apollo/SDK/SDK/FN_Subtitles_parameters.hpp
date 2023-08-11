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

// 0x18 (0x18 - 0x0)
// Function Subtitles.Subtitles_C.BndEvt__SubtitleDisplay_K2Node_ComponentBoundEvent_0_OnSubtitleChanged__DelegateSignature
struct USubtitles_C_BndEvt__SubtitleDisplay_K2Node_ComponentBoundEvent_0_OnSubtitleChanged__DelegateSignature_Params
{
public:
	class FText                                  Subtitle;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x22 (0x22 - 0x0)
// Function Subtitles.Subtitles_C.ExecuteUbergraph_Subtitles
struct USubtitles_C_ExecuteUbergraph_Subtitles_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_52EA[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  K2Node_ComponentBoundEvent_Subtitle;               // 0x8(0x18)()
	bool                                         CallFunc_HasSubtitles_ReturnValue;                 // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
