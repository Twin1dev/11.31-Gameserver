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

// 0x50 (0x50 - 0x0)
// Function LeaderboardRowWidget.LeaderboardRowWidget_C.Refresh
struct ULeaderboardRowWidget_C_Refresh_Params
{
public:
	class UFortLeaderboardRowProxyInstance*      RowObject;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)()
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x20(0x18)()
	class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x38(0x18)()
};

// 0x8 (0x8 - 0x0)
// Function LeaderboardRowWidget.LeaderboardRowWidget_C.SetDataDirect
struct ULeaderboardRowWidget_C_SetDataDirect_Params
{
public:
	class UFortLeaderboardRowProxyInstance*      NewData;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function LeaderboardRowWidget.LeaderboardRowWidget_C.OnListItemObjectSet
struct ULeaderboardRowWidget_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function LeaderboardRowWidget.LeaderboardRowWidget_C.BP_OnClicked
struct ULeaderboardRowWidget_C_BP_OnClicked_Params
{
public:
};

// 0xA8 (0xA8 - 0x0)
// Function LeaderboardRowWidget.LeaderboardRowWidget_C.OnMouseEnter
struct ULeaderboardRowWidget_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x70 (0x70 - 0x0)
// Function LeaderboardRowWidget.LeaderboardRowWidget_C.OnMouseLeave
struct ULeaderboardRowWidget_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function LeaderboardRowWidget.LeaderboardRowWidget_C.BP_OnSelected
struct ULeaderboardRowWidget_C_BP_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LeaderboardRowWidget.LeaderboardRowWidget_C.BP_OnDeselected
struct ULeaderboardRowWidget_C_BP_OnDeselected_Params
{
public:
};

// 0x160 (0x160 - 0x0)
// Function LeaderboardRowWidget.LeaderboardRowWidget_C.ExecuteUbergraph_LeaderboardRowWidget
struct ULeaderboardRowWidget_C_ExecuteUbergraph_LeaderboardRowWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F37[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UObject*                               K2Node_Event_ListItemObject;                       // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortLeaderboardRowProxyInstance*      K2Node_DynamicCast_AsFort_Leaderboard_Row_Proxy_Instance; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5F38[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x1C(0x38)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_5F39[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x58(0x70)(ConstParm)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xC8(0x70)(ConstParm)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_2;       // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue_1;       // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
