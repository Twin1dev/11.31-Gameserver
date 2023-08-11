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

// 0x78 (0x78 - 0x0)
// Function AthenaMOTDLandingWidget.AthenaMOTDLandingWidget_C.SetTextIfValidOrDefault
struct UAthenaMOTDLandingWidget_C_SetTextIfValidOrDefault_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                String;                                            // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FText                                  DefaultText;                                       // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5397[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x38(0x18)()
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5398[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  K2Node_Select_Default;                             // 0x60(0x18)()
};

// 0x0 (0x0 - 0x0)
// Function AthenaMOTDLandingWidget.AthenaMOTDLandingWidget_C.OnInitialized
struct UAthenaMOTDLandingWidget_C_OnInitialized_Params
{
public:
};

// 0x180 (0x180 - 0x0)
// Function AthenaMOTDLandingWidget.AthenaMOTDLandingWidget_C.OnPopulateNews
struct UAthenaMOTDLandingWidget_C_OnPopulateNews_Params
{
public:
	struct FAthenaNewsEntry                      NewsEntry;                                         // 0x0(0x180)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1B9 (0x1B9 - 0x0)
// Function AthenaMOTDLandingWidget.AthenaMOTDLandingWidget_C.ExecuteUbergraph_AthenaMOTDLandingWidget
struct UAthenaMOTDLandingWidget_C_ExecuteUbergraph_AthenaMOTDLandingWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5399[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FAthenaNewsEntry                      K2Node_Event_NewsEntry;                            // 0x8(0x180)(ConstParm)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_539A[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x190(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_539B[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button_1;           // 0x1A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_539C[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button_2;           // 0x1B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
