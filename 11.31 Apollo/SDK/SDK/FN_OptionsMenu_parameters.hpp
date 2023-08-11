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

// 0x9 (0x9 - 0x0)
// Function OptionsMenu.OptionsMenu_C.RequestTab
struct UOptionsMenu_C_RequestTab_Params
{
public:
	class FName                                  Tab;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SelectTabByID_ReturnValue;                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function OptionsMenu.OptionsMenu_C.CreateMobileBackButton
struct UOptionsMenu_C_CreateMobileBackButton_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function OptionsMenu.OptionsMenu_C.NotifyTabsOfActivationState
struct UOptionsMenu_C_NotifyTabsOfActivationState_Params
{
public:
	class UFortOptionsTab*                       ActivatedTab;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortOptionsTab*                       CallFunc_Array_Get_Item;                           // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function OptionsMenu.OptionsMenu_C.HandleResetAvailableActionHandlerStates
struct UOptionsMenu_C_HandleResetAvailableActionHandlerStates_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD (0xD - 0x0)
// Function OptionsMenu.OptionsMenu_C.Update Header Text by Tab ID
struct UOptionsMenu_C_Update_Header_Text_by_Tab_ID_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function OptionsMenu.OptionsMenu_C.DoResetKBMToDefault
struct UOptionsMenu_C_DoResetKBMToDefault_Params
{
public:
	int32                                        Preset_To_Set;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function OptionsMenu.OptionsMenu_C.UpdateAllOptionsTabs
struct UOptionsMenu_C_UpdateAllOptionsTabs_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortOptionsTab*                       CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x7B (0x7B - 0x0)
// Function OptionsMenu.OptionsMenu_C.UpdateBasedOnActiveWidget
struct UOptionsMenu_C_UpdateBasedOnActiveWidget_Params
{
public:
	class UObject*                               ActiveWidget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShouldCenterOnTab;                                 // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_601D[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTabAccount_C*                         K2Node_DynamicCast_AsTab_Account;                  // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_601E[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortOptionsTab*                       K2Node_DynamicCast_AsFort_Options_Tab;             // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_601F[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_6020[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTabInputOptions_C*                    K2Node_DynamicCast_AsTab_Input_Options;            // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6021[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTabGameOptions_C*                     K2Node_DynamicCast_AsTab_Game_Options;             // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6022[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue_1;             // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue_2;             // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue;               // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_1;             // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ClassIsChildOf_ReturnValue_2;             // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function OptionsMenu.OptionsMenu_C.ApplySettings
struct UOptionsMenu_C_ApplySettings_Params
{
public:
	class UCommonUISubsystem*                    CallFunc_GetContext_ReturnValue;                   // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonInputManager*                   CallFunc_GetInputManager_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.DoResetHUDOptionsToDefault
struct UOptionsMenu_C_DoResetHUDOptionsToDefault_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenu.OptionsMenu_C.DoResetGameOptionsToDefault
struct UOptionsMenu_C_DoResetGameOptionsToDefault_Params
{
public:
	class UFortOptionsTab*                       Tab_To_Reset;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function OptionsMenu.OptionsMenu_C.HandleTabGamepadConfigActionHandlerStates
struct UOptionsMenu_C_HandleTabGamepadConfigActionHandlerStates_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6023[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6024[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               CallFunc_GetWidgetAtIndex_ReturnValue;             // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTabGamePadConfig_v3_C*                K2Node_DynamicCast_AsTab_Game_Pad_Config_V_3;      // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x6 (0x6 - 0x0)
// Function OptionsMenu.OptionsMenu_C.HandleResetUnavailableActionHandlerStates
struct UOptionsMenu_C_HandleResetUnavailableActionHandlerStates_Params
{
public:
	bool                                         ShouldShowApply;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable;                                // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 Temp_byte_Variable_1;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenu.OptionsMenu_C.HandleTabInputOptionsActionHandlerStates
struct UOptionsMenu_C_HandleTabInputOptionsActionHandlerStates_Params
{
public:
	class UTabInputOptions_C*                    TabInputOptionsActor;                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x13 (0x13 - 0x0)
// Function OptionsMenu.OptionsMenu_C.HandleTabGameOptionsActionHandlerStates
struct UOptionsMenu_C_HandleTabGameOptionsActionHandlerStates_Params
{
public:
	int32                                        Active_Widget_Index;                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable;                                // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 Temp_byte_Variable_1;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function OptionsMenu.OptionsMenu_C.CenterOnActiveTab
struct UOptionsMenu_C_CenterOnActiveTab_Params
{
public:
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6025[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               CallFunc_GetWidgetAtIndex_ReturnValue;             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortOptionsTab*                       K2Node_DynamicCast_AsFort_Options_Tab;             // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1D (0x1D - 0x0)
// Function OptionsMenu.OptionsMenu_C.SetBackground
struct UOptionsMenu_C_SetBackground_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6026[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_1;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x180 (0x180 - 0x0)
// Function OptionsMenu.OptionsMenu_C.AddTabs
struct UOptionsMenu_C_AddTabs_Params
{
public:
	class UClass*                                WidgetClass;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  DisplayName;                                       // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FName                                  NameId;                                            // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           Icon;                                              // 0x28(0x88)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class ESettingTab                       Tab_Type;                                          // 0xB0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6027[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortTabButtonLabelInfo               K2Node_MakeStruct_FortTabButtonLabelInfo;          // 0xB8(0xA0)()
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x15C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortOptionsTab*                       CallFunc_Create_ReturnValue;                       // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_RegisterFortTab_ReturnValue;              // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6028[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x178(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenu.OptionsMenu_C.HandleCursorModeChanging
struct UOptionsMenu_C_HandleCursorModeChanging_Params
{
public:
	bool                                         IsEnabled;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function OptionsMenu.OptionsMenu_C.Handle Toggle Mode
struct UOptionsMenu_C_Handle_Toggle_Mode_Params
{
public:
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGamepadInputOptions*              K2Node_DynamicCast_AsFort_Gamepad_Input_Options;   // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.HandleBack
struct UOptionsMenu_C_HandleBack_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenu.OptionsMenu_C.Handle Reset
struct UOptionsMenu_C_Handle_Reset_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x48 (0x48 - 0x0)
// Function OptionsMenu.OptionsMenu_C.Handle Apply
struct UOptionsMenu_C_Handle_Apply_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NeedsLanguageChangeConfirmation_ReturnValue; // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6029[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortSettingsContext*                  CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NeedsLanguageChangeConfirmation_ReturnValue_1; // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NeedsVideoChangeConfirmation_ReturnValue; // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_602A[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x30(0x18)()
};

// 0x2F0 (0x2F0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.OnPreviewKeyDown
struct UOptionsMenu_C_OnPreviewKeyDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FKeyEvent                             InKeyEvent;                                        // 0x38(0x38)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FEventReply                           ReturnValue;                                       // 0x70(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_GetKey_ReturnValue;                       // 0x128(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_Key_IsGamepadKey_ReturnValue;             // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_602B[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x148(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x150(0xB8)()
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_602C[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x210(0xB8)()
	int32                                        Temp_int_Variable;                                 // 0x2C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_602D[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x2D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_602E[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTabInputOptions_C*                    K2Node_DynamicCast_AsTab_Input_Options;            // 0x2E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x2E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_602F[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x310 (0x310 - 0x0)
// Function OptionsMenu.OptionsMenu_C.OnMouseWheel
struct UOptionsMenu_C_OnMouseWheel_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	float                                        CallFunc_PointerEvent_GetWheelDelta_ReturnValue;   // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x164(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6030[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x170(0xB8)()
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6031[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x230(0xB8)()
	int32                                        Temp_int_Variable;                                 // 0x2E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6032[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x2F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x2F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6033[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTabInputOptions_C*                    K2Node_DynamicCast_AsTab_Input_Options;            // 0x300(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x309(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6034[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x30C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x320 (0x320 - 0x0)
// Function OptionsMenu.OptionsMenu_C.OnPreviewMouseButtonDown
struct UOptionsMenu_C_OnPreviewMouseButtonDown_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x160(0x18)(HasGetValueTypeHash)
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x178(0xB8)()
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x230(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6035[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x240(0xB8)()
	int32                                        Temp_int_Variable;                                 // 0x2F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6036[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x300(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6037[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTabInputOptions_C*                    K2Node_DynamicCast_AsTab_Input_Options;            // 0x310(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x319(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6038[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x31C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6E1 (0x6E1 - 0x0)
// Function OptionsMenu.OptionsMenu_C.Initialize
struct UOptionsMenu_C_Initialize_Params
{
public:
	struct FSlateBrush                           TouchIcon;                                         // 0x0(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           MKB_Icon;                                          // 0x88(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           HUD_Icon;                                          // 0x110(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           Game_Normal;                                       // 0x198(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           Accounts_Normal;                                   // 0x220(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           Keys_Normal;                                       // 0x2A8(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           Controller_Normal;                                 // 0x330(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           Color_Normal;                                      // 0x3B8(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           Brightness_Normal;                                 // 0x440(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           Audio_Normal;                                      // 0x4C8(0x88)(Edit, BlueprintVisible)
	struct FSlateBrush                           Video_Normal;                                      // 0x550(0x88)(Edit, BlueprintVisible)
	bool                                         CallFunc_ShowTouchAndMotionOptions_ReturnValue;    // 0x5D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShowInputOptions_ReturnValue;             // 0x5D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6039[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x5E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShowNewControllerSenseOptions_ReturnValue; // 0x5E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_603A[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  Temp_text_Variable;                                // 0x5F0(0x18)()
	class FText                                  Temp_text_Variable_1;                              // 0x608(0x18)()
	class FName                                  CallFunc_GetTabIdAtIndex_ReturnValue;              // 0x620(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShowBrightnessOptions_ReturnValue;        // 0x629(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShowAccessibilityOptions_ReturnValue;     // 0x62A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_603B[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x630(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShowAccountOptions_ReturnValue;           // 0x638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_603C[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x640(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProgressModalWidget_C*                CallFunc_Create_ReturnValue;                       // 0x648(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShowControllerOptions_ReturnValue;        // 0x650(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_603D[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                CallFunc_GetPlatformName_ReturnValue;              // 0x658(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x668(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasWidgets_ReturnValue;                   // 0x669(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_603E[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  K2Node_Select_Default;                             // 0x670(0x18)()
	class UWidget*                               CallFunc_GetWidgetAtIndex_ReturnValue;             // 0x688(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortOptionsTab*                       K2Node_DynamicCast_AsFort_Options_Tab;             // 0x690(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x698(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_603F[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortGlobalUIContext*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x6A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable_2;                              // 0x6A8(0x18)(ConstParm)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0x6C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShowInputOptions_ReturnValue_1;           // 0x6C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6040[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  Temp_text_Variable_3;                              // 0x6C8(0x18)(ConstParm)
	bool                                         CallFunc_ShowVideoOptions_ReturnValue;             // 0x6E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenu.OptionsMenu_C.OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426
struct UOptionsMenu_C_OnLoaded_FF56A1B94C8CEF8FA4611BB655D07426_Params
{
public:
	class UClass*                                Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenu.OptionsMenu_C.OnLoaded_56F757014AB176CE2140009FB54D0D23
struct UOptionsMenu_C_OnLoaded_56F757014AB176CE2140009FB54D0D23_Params
{
public:
	class UClass*                                Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenu.OptionsMenu_C.OnLoaded_488EE90943BFF7AA4DB2049A7D72238C
struct UOptionsMenu_C_OnLoaded_488EE90943BFF7AA4DB2049A7D72238C_Params
{
public:
	class UClass*                                Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenu.OptionsMenu_C.OnLoaded_598823E641B8288CD371F0B50BE07C91
struct UOptionsMenu_C_OnLoaded_598823E641B8288CD371F0B50BE07C91_Params
{
public:
	class UClass*                                Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenu.OptionsMenu_C.OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD
struct UOptionsMenu_C_OnLoaded_B8BA00A14ACF4BA8F4B657B2B247D3CD_Params
{
public:
	class UClass*                                Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenu.OptionsMenu_C.OnLoaded_EF0A182C49925D83A3E55080FA222F7D
struct UOptionsMenu_C_OnLoaded_EF0A182C49925D83A3E55080FA222F7D_Params
{
public:
	class UClass*                                Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function OptionsMenu.OptionsMenu_C.DialogResult_F3FA83AA4F97C266A3A1C9BB3F66C1C1
struct UOptionsMenu_C_DialogResult_F3FA83AA4F97C266A3A1C9BB3F66C1C1_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6041[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  ResultName;                                        // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function OptionsMenu.OptionsMenu_C.DialogResult_865D48E84DB087F08A2C9797E6CB619E
struct UOptionsMenu_C_DialogResult_865D48E84DB087F08A2C9797E6CB619E_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6042[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  ResultName;                                        // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function OptionsMenu.OptionsMenu_C.DialogResult_505313CB4EC9E510DD07E6B544334958
struct UOptionsMenu_C_DialogResult_505313CB4EC9E510DD07E6B544334958_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6043[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  ResultName;                                        // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function OptionsMenu.OptionsMenu_C.DialogResult_BC062FC047B05F5EE0C6A09D64BFEB2A
struct UOptionsMenu_C_DialogResult_BC062FC047B05F5EE0C6A09D64BFEB2A_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6044[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  ResultName;                                        // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function OptionsMenu.OptionsMenu_C.DialogResult_826C59EC4C294BC872A644878B35A13B
struct UOptionsMenu_C_DialogResult_826C59EC4C294BC872A644878B35A13B_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6045[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  ResultName;                                        // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function OptionsMenu.OptionsMenu_C.DialogResult_B31FF5BD4C0772716F27509EA83B418E
struct UOptionsMenu_C_DialogResult_B31FF5BD4C0772716F27509EA83B418E_Params
{
public:
	enum class EFortDialogResult                 Result;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6046[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  ResultName;                                        // 0x4(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenu.OptionsMenu_C.OnLoaded_8C5A9E8C42027607DE7ED0B10409E5CE
struct UOptionsMenu_C_OnLoaded_8C5A9E8C42027607DE7ED0B10409E5CE_Params
{
public:
	class UClass*                                Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function OptionsMenu.OptionsMenu_C.Enable Overlay Input
struct UOptionsMenu_C_Enable_Overlay_Input_Params
{
public:
	bool                                         Accept_Input;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6047[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  Overlay_Text;                                      // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenu.OptionsMenu_C.Enable Overlay Video
struct UOptionsMenu_C_Enable_Overlay_Video_Params
{
public:
	bool                                         Accept_Input;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.Disable Overlay
struct UOptionsMenu_C_Disable_Overlay_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature
struct UOptionsMenu_C_BndEvt__VideoSettingsAccept_K2Node_ComponentBoundEvent_22_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenu.OptionsMenu_C.BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature
struct UOptionsMenu_C_BndEvt__VideoSettingsCancel_K2Node_ComponentBoundEvent_43_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.Destruct
struct UOptionsMenu_C_Destruct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.Tab Setting Changed
struct UOptionsMenu_C_Tab_Setting_Changed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.BP_OnActivated
struct UOptionsMenu_C_BP_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.Disable Overlay Input
struct UOptionsMenu_C_Disable_Overlay_Input_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function OptionsMenu.OptionsMenu_C.Gamepad Changed
struct UOptionsMenu_C_Gamepad_Changed_Params
{
public:
	bool                                         Gamepad_Enabled;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function OptionsMenu.OptionsMenu_C.BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature
struct UOptionsMenu_C_BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_95_OnTabButtonCreated__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         TabButton;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.HandleBenchmarkComplete
struct UOptionsMenu_C_HandleBenchmarkComplete_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenu.OptionsMenu_C.BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature
struct UOptionsMenu_C_BndEvt__LanguageOk_K2Node_ComponentBoundEvent_112_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.HandleSettingsErrorMessageClosed
struct UOptionsMenu_C_HandleSettingsErrorMessageClosed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.OnHandleBack
struct UOptionsMenu_C_OnHandleBack_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function OptionsMenu.OptionsMenu_C.BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature
struct UOptionsMenu_C_BndEvt__CurrentTabSwitcher_K2Node_ComponentBoundEvent_13_OnActiveWidgetChanged__DelegateSignature_Params
{
public:
	class UWidget*                               ActiveWidget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ActiveWidgetIndex;                                 // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.Construct
struct UOptionsMenu_C_Construct_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function OptionsMenu.OptionsMenu_C.TabGameOptions_OnActiveWidgetChanged_Bind
struct UOptionsMenu_C_TabGameOptions_OnActiveWidgetChanged_Bind_Params
{
public:
	class UWidget*                               ActiveWidget;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ActiveWidgetIndex;                                 // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.HandleSettingsSaveComplete
struct UOptionsMenu_C_HandleSettingsSaveComplete_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.BP_OnDeactivated
struct UOptionsMenu_C_BP_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.LoadTabClasses
struct UOptionsMenu_C_LoadTabClasses_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.ResetVideoOptionsTimerDelegate
struct UOptionsMenu_C_ResetVideoOptionsTimerDelegate_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenu.OptionsMenu_C.BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_20_OnTabSelected__DelegateSignature
struct UOptionsMenu_C_BndEvt__SettingsTabs_K2Node_ComponentBoundEvent_20_OnTabSelected__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.ShowLangaugeConfirmation
struct UOptionsMenu_C_ShowLangaugeConfirmation_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function OptionsMenu.OptionsMenu_C.HandleTabGamePadActionsNeedBinds
struct UOptionsMenu_C_HandleTabGamePadActionsNeedBinds_Params
{
public:
	TArray<class FText>                          ScreenLabels;                                      // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function OptionsMenu.OptionsMenu_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UOptionsMenu_C_BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.OnInputsResetToDefault
struct UOptionsMenu_C_OnInputsResetToDefault_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.OnResetToDefault
struct UOptionsMenu_C_OnResetToDefault_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.OnBack
struct UOptionsMenu_C_OnBack_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.OnToggleMode
struct UOptionsMenu_C_OnToggleMode_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.OnApplySettings
struct UOptionsMenu_C_OnApplySettings_Params
{
public:
};

// 0x760 (0x760 - 0x0)
// Function OptionsMenu.OptionsMenu_C.ExecuteUbergraph_OptionsMenu
struct UOptionsMenu_C_ExecuteUbergraph_OptionsMenu_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 Temp_byte_Variable;                                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6048[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result_4;                       // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_ResultName_4;                   // 0x1C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_1;                              // 0x34(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 Temp_byte_Variable_1;                              // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6049[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue_1; // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_604A[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x4C(0x10)(ZeroConstructor, NoDestructor)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result_3;                       // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_604B[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  K2Node_CustomEvent_ResultName_3;                   // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_2;                              // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 Temp_byte_Variable_2;                              // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_604C[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue; // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x80(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result_2;                       // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_604D[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  K2Node_CustomEvent_ResultName_2;                   // 0x94(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_3;                              // 0x9C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 Temp_byte_Variable_3;                              // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_3;        // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_604E[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UInputPresetConfirmationRotator_C*     CallFunc_Create_ReturnValue;                       // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue_2; // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_604F[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xBC(0x10)(ZeroConstructor, NoDestructor)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result_1;                       // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6050[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  K2Node_CustomEvent_ResultName_1;                   // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable_4;                              // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 Temp_byte_Variable_4;                              // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result;                         // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6051[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  K2Node_CustomEvent_ResultName;                     // 0xE4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xEC(0x10)(ZeroConstructor, NoDestructor)
	class FName                                  Temp_name_Variable_5;                              // 0xFC(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDialogResult                 Temp_byte_Variable_5;                              // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x105(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6052[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                K2Node_CustomEvent_Loaded;                         // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable;                               // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsFort_Options_Tab;        // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6053[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_1;                 // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_4;        // 0x13A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x13B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_Accept_Input_1;                 // 0x13D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6054[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  K2Node_CustomEvent_Overlay_Text;                   // 0x140(0x18)()
	bool                                         K2Node_CustomEvent_Accept_Input;                   // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6055[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_MakeLiteralText_ReturnValue;              // 0x160(0x18)()
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_3;               // 0x178(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_2;               // 0x180(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue;         // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6056[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               CallFunc_GetWidgetAtIndex_ReturnValue;             // 0x190(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTabVideoOptions_New_C*                K2Node_DynamicCast_AsTab_Video_Options_New;        // 0x198(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortDialogResult                 K2Node_CustomEvent_Result_5;                       // 0x1A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6057[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  K2Node_CustomEvent_ResultName_5;                   // 0x1A4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x1AC(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_CustomEvent_Gamepad_Enabled;                // 0x1BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6058[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  K2Node_ComponentBoundEvent_TabId_1;                // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_TabButton;              // 0x1C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetActiveTab_ReturnValue;                 // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTabButton_C*                      K2Node_DynamicCast_AsIcon_Tab_Button;              // 0x1D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x1E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6059[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_1;               // 0x1E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsVisible_ReturnValue;                    // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Handle_Reset_PassThrough;                 // 0x1F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_605A[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        Temp_int_Variable;                                 // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               CallFunc_GetChildAt_ReturnValue;                   // 0x1F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortOptionsTab*                       K2Node_DynamicCast_AsFort_Options_Tab;             // 0x200(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_605B[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTabGamePadConfig_v3_C*                K2Node_DynamicCast_AsTab_Game_Pad_Config_V_3;      // 0x210(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_605C[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTabGameOptions_C*                     K2Node_DynamicCast_AsTab_Game_Options;             // 0x220(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_605D[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTabVideoOptions_C*                    K2Node_DynamicCast_AsTab_Video_Options;            // 0x230(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_605E[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTabInputOptions_C*                    K2Node_DynamicCast_AsTab_Input_Options;            // 0x240(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_605F[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               K2Node_ComponentBoundEvent_ActiveWidget;           // 0x250(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_ComponentBoundEvent_ActiveWidgetIndex;      // 0x258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetChildrenCount_ReturnValue;             // 0x25C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6060[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                Temp_class_Variable_1;                             // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_CustomEvent_Loaded_1;                       // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsFort_Options_Tab_1;      // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_1;                // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6061[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               K2Node_CustomEvent_ActiveWidget;                   // 0x288(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_ActiveWidgetIndex;              // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6062[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x2A0(0x40)(HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_2;                             // 0x2E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsFort_Options_Tab_2;      // 0x2E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_2;                // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6063[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x2F4(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_ShowVideoOptions_ReturnValue;             // 0x304(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShowAccountOptions_ReturnValue;           // 0x305(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6064[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x308(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_ShowControllerOptions_ReturnValue;        // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShowInputOptions_ReturnValue;             // 0x319(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6065[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                K2Node_CustomEvent_Loaded_2;                       // 0x320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_3;                             // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_CustomEvent_Loaded_3;                       // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsFort_Options_Tab_3;      // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_3;                // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsVisible_ReturnValue_1;                  // 0x341(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6066[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue;              // 0x348(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_4;                             // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x358(0x10)(ZeroConstructor, NoDestructor)
	class UClass*                                K2Node_ClassDynamicCast_AsFort_Options_Tab_4;      // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_4;                // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShowAccessibilityOptions_ReturnValue;     // 0x371(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6067[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                K2Node_CustomEvent_Loaded_4;                       // 0x378(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShowBrightnessOptions_ReturnValue;        // 0x380(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6068[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  K2Node_ComponentBoundEvent_TabId;                  // 0x384(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6069[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                Temp_class_Variable_5;                             // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x398(0x10)(ZeroConstructor, NoDestructor)
	class UClass*                                K2Node_ClassDynamicCast_AsFort_Options_Tab_5;      // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_5;                // 0x3B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_606A[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue_1;            // 0x3B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_CustomEvent_Loaded_5;                       // 0x3C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTabNewControllerSettings_C*           K2Node_DynamicCast_AsTab_New_Controller_Settings;  // 0x3C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_606B[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortOptionsTab*                       K2Node_DynamicCast_AsFort_Options_Tab_1;           // 0x3D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_606C[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTabGameOptions_C*                     K2Node_DynamicCast_AsTab_Game_Options_1;           // 0x3E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x3F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_606D[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue_1;       // 0x3F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x3F8(0x10)(ZeroConstructor, NoDestructor)
	class UWidget*                               CallFunc_GetWidgetAtIndex_ReturnValue_1;           // 0x408(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTabGameOptionsHud_C*                  K2Node_DynamicCast_AsTab_Game_Options_Hud;         // 0x410(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_606E[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue_2;            // 0x420(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTabGameOptionsMain_C*                 K2Node_DynamicCast_AsTab_Game_Options_Main;        // 0x428(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0x430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_606F[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               CallFunc_GetActiveWidget_ReturnValue_3;            // 0x438(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x440(0x10)(ZeroConstructor, NoDestructor)
	class UTabInputOptions_C*                    K2Node_DynamicCast_AsTab_Input_Options_1;          // 0x450(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6070[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                Temp_class_Variable_6;                             // 0x460(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsFort_Options_Tab_6;      // 0x468(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess_6;                // 0x470(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6071[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                K2Node_CustomEvent_Loaded_6;                       // 0x478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0x480(0x10)(ZeroConstructor, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable_6;                              // 0x490(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6072[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0x494(0x10)(ZeroConstructor, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable_7;                              // 0x4A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6073[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0x4A8(0x10)(ZeroConstructor, NoDestructor)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x4BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0x4C0(0x10)(ZeroConstructor, NoDestructor)
	TArray<class FText>                          K2Node_CustomEvent_ScreenLabels;                   // 0x4D0(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Array_Get_Item;                           // 0x4E0(0x18)()
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x4F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6074[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_1;            // 0x500(0x40)(HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData_2;            // 0x540(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x580(0x10)(ZeroConstructor, ReferenceParm)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array_1;                          // 0x590(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x5A0(0x18)()
	class FText                                  CallFunc_Format_ReturnValue_1;                     // 0x5B8(0x18)()
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x5D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6075[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue_1; // 0x5D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x5E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x5E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6076[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue_2; // 0x5E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x5F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6077[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x5F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6078[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_16;           // 0x5FC(0x10)(ZeroConstructor, NoDestructor)
	bool                                         Temp_bool_Variable_3;                              // 0x60C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6079[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_GetActiveWidgetIndex_ReturnValue_2;       // 0x610(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_607A[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               CallFunc_GetWidgetAtIndex_ReturnValue_2;           // 0x618(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0x620(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_607B[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTabGamePadConfig_v3_C*                K2Node_DynamicCast_AsTab_Game_Pad_Config_V_3_1;    // 0x628(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_13;                    // 0x630(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_607C[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_17;           // 0x634(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_18;           // 0x644(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_607D[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue_2;                 // 0x658(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_3;                 // 0x660(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInZone_ReturnValue;                     // 0x668(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_607E[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_19;           // 0x66C(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_20;           // 0x67C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_607F[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x690(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_21;           // 0x698(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_22;           // 0x6A8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_ShowNewControllerSenseOptions_ReturnValue; // 0x6B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6080[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_23;           // 0x6BC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_6081[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x6D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue_1;          // 0x6D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UObject>                 K2Node_Select_Default_1;                           // 0x6E0(0x28)(HasGetValueTypeHash)
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue_2;          // 0x708(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UObject>                 K2Node_Select_Default_2;                           // 0x710(0x28)(HasGetValueTypeHash)
	TSoftClassPtr<class UObject>                 K2Node_Select_Default_3;                           // 0x738(0x28)(HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function OptionsMenu.OptionsMenu_C.OnSettingsApplied__DelegateSignature
struct UOptionsMenu_C_OnSettingsApplied__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
