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
// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.RefreshLimitedPoolWarning
struct UAthenaMatchmakingModeButton_C_RefreshLimitedPoolWarning_Params
{
public:
	bool                                         IsCrossplayEnabled;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.RefreshFillText
struct UAthenaMatchmakingModeButton_C_RefreshFillText_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetSquadFillText
struct UAthenaMatchmakingModeButton_C_SetSquadFillText_Params
{
public:
	bool                                         bFill;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.PlaylistChanged
struct UAthenaMatchmakingModeButton_C_PlaylistChanged_Params
{
public:
	class UFortPlaylistAthena*                   NewPlaylist;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  OverrideName;                                      // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0xA0 (0xA0 - 0x0)
// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.SetTabLabelInfo
struct UAthenaMatchmakingModeButton_C_SetTabLabelInfo_Params
{
public:
	struct FFortTabButtonLabelInfo               TabLabelInfo;                                      // 0x0(0xA0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xA8 (0xA8 - 0x0)
// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.OnMouseEnter
struct UAthenaMatchmakingModeButton_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x70 (0x70 - 0x0)
// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.OnMouseLeave
struct UAthenaMatchmakingModeButton_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x1D0 (0x1D0 - 0x0)
// Function AthenaMatchmakingModeButton.AthenaMatchmakingModeButton_C.ExecuteUbergraph_AthenaMatchmakingModeButton
struct UAthenaMatchmakingModeButton_C_ExecuteUbergraph_AthenaMatchmakingModeButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6374[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortTabButtonLabelInfo               K2Node_Event_TabLabelInfo;                         // 0x8(0xA0)(ConstParm)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0xA8(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0xE0(0x70)(ConstParm)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0x160(0x70)(ConstParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
