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

// 0x1 (0x1 - 0x0)
// Function ChallengeCountdown.ChallengeCountdown_C.PreConstruct
struct UChallengeCountdown_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ChallengeCountdown.ChallengeCountdown_C.Construct
struct UChallengeCountdown_C_Construct_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function ChallengeCountdown.ChallengeCountdown_C.OnChallengeSet
struct UChallengeCountdown_C_OnChallengeSet_Params
{
public:
	struct FTimerDisplayData                     DisplayStyle;                                      // 0x0(0x38)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x118 (0x118 - 0x0)
// Function ChallengeCountdown.ChallengeCountdown_C.ExecuteUbergraph_ChallengeCountdown
struct UChallengeCountdown_C_ExecuteUbergraph_ChallengeCountdown_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_MakeLiteralFloat_ReturnValue;             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeLiteralFloat_ReturnValue_1;           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerDisplayData                     K2Node_Event_DisplayStyle;                         // 0x10(0x38)(ConstParm)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_63DE[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x50(0x28)()
	bool                                         Temp_bool_Variable_1;                              // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_63DF[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_63E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x98(0x28)()
	struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0xC0(0x28)()
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_63E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSlateColor                           K2Node_Select_Default_1;                           // 0xF0(0x28)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
