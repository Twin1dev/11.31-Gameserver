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

// 0x0 (0x0 - 0x0)
// Function CreativeLobbyAd.CreativeLobbyAd_C.OnCMSDataUpdated
struct UCreativeLobbyAd_C_OnCMSDataUpdated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CreativeLobbyAd.CreativeLobbyAd_C.PreConstruct
struct UCreativeLobbyAd_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function CreativeLobbyAd.CreativeLobbyAd_C.Construct
struct UCreativeLobbyAd_C_Construct_Params
{
public:
};

// 0xA2 (0xA2 - 0x0)
// Function CreativeLobbyAd.CreativeLobbyAd_C.ExecuteUbergraph_CreativeLobbyAd
struct UCreativeLobbyAd_C_ExecuteUbergraph_CreativeLobbyAd_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4774[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)()
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x20(0x18)()
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x38(0x18)()
	class FText                                  CallFunc_TextToUpper_ReturnValue_1;                // 0x50(0x18)()
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x68(0x18)()
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4775[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue_2;                // 0x88(0x18)()
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
