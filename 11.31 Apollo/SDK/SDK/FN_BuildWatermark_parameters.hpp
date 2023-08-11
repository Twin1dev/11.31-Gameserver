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

// 0x40 (0x40 - 0x0)
// Function BuildWatermark.BuildWatermark_C.UpdateCalenderOffset
struct UBuildWatermark_C_UpdateCalenderOffset_Params
{
public:
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetCurrentSubGame_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2201[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                CallFunc_GetServerOffsetString_OutString;          // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetServerOffsetString_ReturnValue;        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2202[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x28(0x18)()
};

// 0x48 (0x48 - 0x0)
// Function BuildWatermark.BuildWatermark_C.SetTextCollapseIfDefault
struct UBuildWatermark_C_SetTextCollapseIfDefault_Params
{
public:
	class UTextBlock*                            Text_Widget;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                InputText;                                         // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                DefaultText;                                       // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StriStri_ReturnValue;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2203[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x30(0x18)()
};

// 0x30 (0x30 - 0x0)
// Function BuildWatermark.BuildWatermark_C.Update Watermark
struct UBuildWatermark_C_Update_Watermark_Params
{
public:
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetWatermark_ReturnValue;                 // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue_1;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetAppName_ReturnValue;                   // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BuildWatermark.BuildWatermark_C.Construct
struct UBuildWatermark_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BuildWatermark.BuildWatermark_C.HandlePartyJoined
struct UBuildWatermark_C_HandlePartyJoined_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BuildWatermark.BuildWatermark_C.Destruct
struct UBuildWatermark_C_Destruct_Params
{
public:
};

// 0x200 (0x200 - 0x0)
// Function BuildWatermark.BuildWatermark_C.HandlePlayerStateChanged
struct UBuildWatermark_C_HandlePlayerStateChanged_Params
{
public:
	struct FFortTeamMemberInfo                   PlayerInfo;                                        // 0x0(0x200)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
};

// 0x230 (0x230 - 0x0)
// Function BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark
struct UBuildWatermark_C_ExecuteUbergraph_BuildWatermark_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2204[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortTeamMemberInfo                   K2Node_CustomEvent_PlayerInfo;                     // 0x8(0x200)(ConstParm, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x208(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x218(0x10)(ZeroConstructor, NoDestructor)
	class UFortPartyContext*                     CallFunc_GetContext_ReturnValue;                   // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
