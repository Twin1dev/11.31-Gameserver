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
// Function WinterQuestPreviewScreen.WinterQuestPreviewScreen_C.UpdateOfferOneText
struct UWinterQuestPreviewScreen_C_UpdateOfferOneText_Params
{
public:
	class FText                                  OfferText;                                         // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function WinterQuestPreviewScreen.WinterQuestPreviewScreen_C.UpdateOfferTwoText
struct UWinterQuestPreviewScreen_C_UpdateOfferTwoText_Params
{
public:
	class FText                                  OfferText;                                         // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x51 (0x51 - 0x0)
// Function WinterQuestPreviewScreen.WinterQuestPreviewScreen_C.ExecuteUbergraph_WinterQuestPreviewScreen
struct UWinterQuestPreviewScreen_C_ExecuteUbergraph_WinterQuestPreviewScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_659E[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USimpleFeatured_YellowButton_C*        K2Node_DynamicCast_AsSimple_Featured_Yellow_Button; // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_659F[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  K2Node_Event_OfferText_1;                          // 0x18(0x18)(ConstParm)
	class FText                                  K2Node_Event_OfferText;                            // 0x30(0x18)(ConstParm)
	class USimpleFeatured_YellowButton_C*        K2Node_DynamicCast_AsSimple_Featured_Yellow_Button_1; // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
