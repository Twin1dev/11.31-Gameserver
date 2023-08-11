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

// 0x8 (0x8 - 0x0)
// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.RenderSwap
struct UBattlePassPreview_Widget_C_RenderSwap_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.Unhover
struct UBattlePassPreview_Widget_C_Unhover_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.Hovered
struct UBattlePassPreview_Widget_C_Hovered_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.RefreshVisuals
struct UBattlePassPreview_Widget_C_RefreshVisuals_Params
{
public:
	struct FLinearColor                          NewLocalVar_0;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicFontMaterial_ReturnValue;       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicFontMaterial_ReturnValue_1;     // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicFontMaterial_ReturnValue_2;     // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.OnMouseLeave
struct UBattlePassPreview_Widget_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xA8 (0xA8 - 0x0)
// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.OnMouseEnter
struct UBattlePassPreview_Widget_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.Construct
struct UBattlePassPreview_Widget_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.PreConstruct
struct UBattlePassPreview_Widget_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.OnSetDataForCharacter
struct UBattlePassPreview_Widget_C_OnSetDataForCharacter_Params
{
public:
	bool                                         bIsReadyToUnlock;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_638F[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        LayoutPosition;                                    // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.OnSetDataForCurrency
struct UBattlePassPreview_Widget_C_OnSetDataForCurrency_Params
{
public:
	float                                        LayoutPosition;                                    // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x158 (0x158 - 0x0)
// Function BattlePassPreview_Widget.BattlePassPreview_Widget_C.ExecuteUbergraph_BattlePassPreview_Widget
struct UBattlePassPreview_Widget_C_ExecuteUbergraph_BattlePassPreview_Widget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x4(0x38)(IsPlainOldData, NoDestructor)
	uint8                                        Pad_6390[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0x40(0x70)(ConstParm)
	bool                                         K2Node_Event_IsDesignTime;                         // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsReadyToUnlock;                     // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6391[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        K2Node_Event_LayoutPosition_1;                     // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_LayoutPosition;                       // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_FloatFloat_ReturnValue;        // 0xBD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6392[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_2;         // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0xE8(0x70)(ConstParm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
