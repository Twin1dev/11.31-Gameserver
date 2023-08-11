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
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.HasSelectedCustomMode
struct UHUDLayoutToolFireModePanel_C_HasSelectedCustomMode_Params
{
public:
	bool                                         Value;                                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFireModeType                     CallFunc_GetFireMode_FireMode;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFireMode_bAutofireEnabled;             // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetFireMode_bForceTouchEnabled;           // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetFireMode_bTapToShootEnabled;           // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetFireMode_bAlwaysShowDedicatedButton;   // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.IsInCustomMode
struct UHUDLayoutToolFireModePanel_C_IsInCustomMode_Params
{
public:
	bool                                         IsCustom;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xB (0xB - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.SetCustomFireMode
struct UHUDLayoutToolFireModePanel_C_SetCustomFireMode_Params
{
public:
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x57 (0x57 - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.SetCustomModeVisibilities
struct UHUDLayoutToolFireModePanel_C_SetCustomModeVisibilities_Params
{
public:
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFireModeAvailable_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue_1;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFireModeAvailable_ReturnValue_1;        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51D3[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue_2;                 // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFireModeAvailable_ReturnValue_2;        // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_6;                              // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasSelectedCustomMode_Value;              // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_7;                              // 0x37(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51D4[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue_3;                 // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue_4;                 // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFireModeAvailable_ReturnValue_3;        // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFireModeType                     CallFunc_GetFireMode_FireMode;                     // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetFireMode_bAutofireEnabled;             // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetFireMode_bForceTouchEnabled;           // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetFireMode_bTapToShootEnabled;           // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetFireMode_bAlwaysShowDedicatedButton;   // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_3;                           // 0x56(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x218 (0x218 - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.OnMouseButtonDown_0
struct UHUDLayoutToolFireModePanel_C_OnMouseButtonDown_0_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)()
};

// 0x68 (0x68 - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.InitButtonBindings
struct UHUDLayoutToolFireModePanel_C_InitButtonBindings_Params
{
public:
	TArray<class UHUDLayoutToolFireModeButton*>  ArrayOfFireModeButtons;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51D5[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UHUDLayoutToolFireModeButton*          CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFireModeSelectTile_C*                 K2Node_DynamicCast_AsFire_Mode_Select_Tile;        // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51D6[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x38(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x48(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x58(0x10)(ZeroConstructor, NoDestructor)
};

// 0xA (0xA - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.HandleCurSelectedTile
struct UHUDLayoutToolFireModePanel_C_HandleCurSelectedTile_Params
{
public:
	class UFireModeSelectTile_C*                 Tile;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.InitializeSelection
struct UHUDLayoutToolFireModePanel_C_InitializeSelection_Params
{
public:
};

// 0x3B (0x3B - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.PlayCurFocusedTileMovie
struct UHUDLayoutToolFireModePanel_C_PlayCurFocusedTileMovie_Params
{
public:
	class UFireModeSelectTile_C*                 CurFocusedTile;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFireModeSelectTile_C*                 NextPanelToPlay;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UHUDLayoutToolFireModeButton*          CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51D8[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFireModeSelectTile_C*                 K2Node_DynamicCast_AsFire_Mode_Select_Tile;        // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.HandleTileButtonFocused
struct UHUDLayoutToolFireModePanel_C_HandleTileButtonFocused_Params
{
public:
	class UFireModeSelectTile_C*                 Tile;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.NewTileSelected
struct UHUDLayoutToolFireModePanel_C_NewTileSelected_Params
{
public:
	class UFireModeSelectTile_C*                 Tile;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.SetOpenState
struct UHUDLayoutToolFireModePanel_C_SetOpenState_Params
{
public:
	bool                                         bNewOpenState;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature
struct UHUDLayoutToolFireModePanel_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_84_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__TutorialConfirm_K2Node_ComponentBoundEvent_185_CommonButtonClicked__DelegateSignature
struct UHUDLayoutToolFireModePanel_C_BndEvt__TutorialConfirm_K2Node_ComponentBoundEvent_185_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.Construct
struct UHUDLayoutToolFireModePanel_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__CustomButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UHUDLayoutToolFireModePanel_C_BndEvt__CustomButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__PresetsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UHUDLayoutToolFireModePanel_C_BndEvt__PresetsButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.OnFire Mode Changed
struct UHUDLayoutToolFireModePanel_C_OnFire_Mode_Changed_Params
{
public:
	enum class EFireModeType                     NewFireMode;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__AutofireCheckbox_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature
struct UHUDLayoutToolFireModePanel_C_BndEvt__AutofireCheckbox_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__TapAnywhereCheckbox_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature
struct UHUDLayoutToolFireModePanel_C_BndEvt__TapAnywhereCheckbox_K2Node_ComponentBoundEvent_7_OnClicked__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__DedicatedButtonCheckbox_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature
struct UHUDLayoutToolFireModePanel_C_BndEvt__DedicatedButtonCheckbox_K2Node_ComponentBoundEvent_8_OnClicked__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.BndEvt__3DTouchCheckbox_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature
struct UHUDLayoutToolFireModePanel_C_BndEvt__3DTouchCheckbox_K2Node_ComponentBoundEvent_9_OnClicked__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.UpdateSelectButtonVisibility
struct UHUDLayoutToolFireModePanel_C_UpdateSelectButtonVisibility_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.DeselectTile
struct UHUDLayoutToolFireModePanel_C_DeselectTile_Params
{
public:
	class UFireModeSelectTile_C*                 Tile;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC1 (0xC1 - 0x0)
// Function HUDLayoutToolFireModePanel.HUDLayoutToolFireModePanel_C.ExecuteUbergraph_HUDLayoutToolFireModePanel
struct UHUDLayoutToolFireModePanel_C_ExecuteUbergraph_HUDLayoutToolFireModePanel_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51D9[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFireModeSelectTile_C*                 K2Node_CustomEvent_Tile_2;                         // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_GetFireModeDescription_ReturnValue;       // 0x10(0x18)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x28(0x10)(ZeroConstructor, NoDestructor)
	class UFireModeSelectTile_C*                 K2Node_CustomEvent_Tile_1;                         // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bNewOpenState;                        // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51DA[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class UHUDLayoutToolFireModeButton*>  K2Node_MakeArray_Array;                            // 0x48(0x10)(ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_3;               // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_2;               // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue;                   // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_51DC[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UHUDLayoutToolContext*                 CallFunc_GetContext_ReturnValue_1;                 // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_1;               // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInCustomMode_IsCustom;                  // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsInCustomMode_IsCustom_1;                // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0xAA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFireModeType                     K2Node_CustomEvent_NewFireMode;                    // 0xAB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInCustomMode_IsCustom_2;                // 0xAD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xAE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xAF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasSelectedCustomMode_Value;              // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0xB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0xB3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_51DD[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFireModeSelectTile_C*                 K2Node_CustomEvent_Tile;                           // 0xB8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
