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
// Function MissionProgressDisplay.MissionProgressDisplay_C.StyleAsNormal
struct UMissionProgressDisplay_C_StyleAsNormal_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MissionProgressDisplay.MissionProgressDisplay_C.StyleAsPrestige
struct UMissionProgressDisplay_C_StyleAsPrestige_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function MissionProgressDisplay.MissionProgressDisplay_C.PreConstruct
struct UMissionProgressDisplay_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function MissionProgressDisplay.MissionProgressDisplay_C.SetPercentValueForMaterialNumber
struct UMissionProgressDisplay_C_SetPercentValueForMaterialNumber_Params
{
public:
	int32                                        PercentValue;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function MissionProgressDisplay.MissionProgressDisplay_C.ExecuteUbergraph_MissionProgressDisplay
struct UMissionProgressDisplay_C_ExecuteUbergraph_MissionProgressDisplay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_55F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_MakeLiteralFloat_ReturnValue;             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeLiteralFloat_ReturnValue_1;           // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_PercentValue;                         // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x18(0x88)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0xA0(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xE0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xF0(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
