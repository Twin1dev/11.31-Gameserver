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
// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.HandleWidgetDeactivated
struct UOptionsMenuFireModeButton_C_HandleWidgetDeactivated_Params
{
public:
	class UCommonActivatablePanel*               ActivatableWidget;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE (0xE - 0x0)
// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.SetFireModeButtonText
struct UOptionsMenuFireModeButton_C_SetFireModeButtonText_Params
{
public:
	class UFortGameUserSettings*                 CallFunc_GetFortGameUserSettings_ReturnValue;      // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFireModeData                         CallFunc_GetFireModeData_ReturnValue;              // 0x8(0x5)(ConstParm, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.On_MenuAnchorSettingDescription_GetMenuContent_0
struct UOptionsMenuFireModeButton_C_On_MenuAnchorSettingDescription_GetMenuContent_0_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTooltip_Basic_S_C*                    CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.Hide Tooltip
struct UOptionsMenuFireModeButton_C_Hide_Tooltip_Params
{
public:
};

// 0x1C (0x1C - 0x0)
// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.SetToolTipSize
struct UOptionsMenuFireModeButton_C_SetToolTipSize_Params
{
public:
	struct FVector2D                             DefaultSize;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             MobileSize;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B6C[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector2D                             K2Node_Select_Default;                             // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.ShowTooltip
struct UOptionsMenuFireModeButton_C_ShowTooltip_Params
{
public:
};

// 0x68 (0x68 - 0x0)
// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.SetFontSize
struct UOptionsMenuFireModeButton_C_SetFontSize_Params
{
public:
	class UCommonTextBlock*                      Text;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        DefaultSize;                                       // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        MobileSize;                                        // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateFontInfo                        TempFont;                                          // 0x10(0x50)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B6D[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        K2Node_Select_Default;                             // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.UpdateSize
struct UOptionsMenuFireModeButton_C_UpdateSize_Params
{
public:
	struct FVector2D                             LargeSize;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             SmallSize;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B6E[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector2D                             Temp_struct_Variable;                              // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Temp_struct_Variable_1;                            // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsBROnly_ReturnValue;                     // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B6F[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FVector2D                             K2Node_Select_Default;                             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.OnComplete_A8B997BB40321F469E82A785FB369A27
struct UOptionsMenuFireModeButton_C_OnComplete_A8B997BB40321F469E82A785FB369A27_Params
{
public:
	class UUserWidget*                           UserWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.BP_OnItemSelectionChanged
struct UOptionsMenuFireModeButton_C_BP_OnItemSelectionChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.Construct
struct UOptionsMenuFireModeButton_C_Construct_Params
{
public:
};

// 0x70 (0x70 - 0x0)
// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.OnMouseLeave
struct UOptionsMenuFireModeButton_C_OnMouseLeave_Params
{
public:
	struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xA8 (0xA8 - 0x0)
// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.OnMouseEnter
struct UOptionsMenuFireModeButton_C_OnMouseEnter_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.OnListItemObjectSet
struct UOptionsMenuFireModeButton_C_OnListItemObjectSet_Params
{
public:
	class UObject*                               ListItemObject;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.BP_OnItemExpansionChanged
struct UOptionsMenuFireModeButton_C_BP_OnItemExpansionChanged_Params
{
public:
	bool                                         bIsExpanded;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.CenterOnWidget
struct UOptionsMenuFireModeButton_C_CenterOnWidget_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.BP_OnEntryReleased
struct UOptionsMenuFireModeButton_C_BP_OnEntryReleased_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
struct UOptionsMenuFireModeButton_C_BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.BndEvt__ChangeFireModeButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UOptionsMenuFireModeButton_C_BndEvt__ChangeFireModeButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D5 (0x1D5 - 0x0)
// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.ExecuteUbergraph_OptionsMenuFireModeButton
struct UOptionsMenuFireModeButton_C_ExecuteUbergraph_OptionsMenuFireModeButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B70[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           Temp_object_Variable;                              // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_CreateWidgetAsync*    CallFunc_CreateWidgetAsync_ReturnValue;            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHUDLayoutToolFireModePanel_C*         K2Node_DynamicCast_AsHUDLayout_Tool_Fire_Mode_Panel; // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsSelected;                          // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B71[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x30(0x70)(ConstParm)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0xA0(0x38)(IsPlainOldData, NoDestructor)
	struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0xD8(0x70)(ConstParm)
	class UObject*                               K2Node_Event_ListItemObject;                       // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSettingInfo*                      K2Node_DynamicCast_AsFort_Setting_Info;            // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsExpanded;                          // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B72[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUserWidget*                           K2Node_CustomEvent_UserWidget;                     // 0x160(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x168(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B73[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_1;               // 0x180(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B74[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue_1;               // 0x194(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B75[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x198(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_TextIsEmpty_ReturnValue_1;                // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B76[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        K2Node_Select_Default;                             // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4B77[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x1B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsUsingGamepad_ReturnValue;               // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B78[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x1C4(0x10)(ZeroConstructor, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x1D4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
