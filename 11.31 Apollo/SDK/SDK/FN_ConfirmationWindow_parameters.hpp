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

// 0x154 (0x154 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.HandleConfigureDeclineButton
struct UConfirmationWindow_C_HandleConfigureDeclineButton_Params
{
public:
	class UCommonButton*                         New_Button;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                     Icon_Text_Button;                                  // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B60[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortDialogDescription_NUI            CallFunc_GetConfirmationDescription_ReturnValue;   // 0x20(0x118)(ConstParm, ContainsInstancedReference)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x140(0x10)(NoDestructor)
	int32                                        CallFunc_GetInputPriority_ReturnValue;             // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.ConfigureConfirmationButton
struct UConfirmationWindow_C_ConfigureConfirmationButton_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FConfirmationDialogAction             Action;                                            // 0x8(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bSimpleConfirm;                                    // 0xB8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B61[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UIconTextButton_C*                     IconTextButton;                                    // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B62[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetInputPriority_ReturnValue;             // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B63[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FDataTableRowHandle                   CallFunc_GetInputAction_ReturnValue;               // 0xE8(0x10)(NoDestructor)
};

// 0x119 (0x119 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.PlayShowSound
struct UConfirmationWindow_C_PlayShowSound_Params
{
public:
	struct FFortDialogDescription_NUI            CallFunc_GetConfirmationDescription_ReturnValue;   // 0x0(0x118)(ConstParm, ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x3B0 (0x3B0 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.TapToClose
struct UConfirmationWindow_C_TapToClose_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x160(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_PointerEvent_IsTouchEvent_ReturnValue;    // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x17A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x17B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B64[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x180(0xB8)()
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B65[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x240(0xB8)()
	struct FEventReply                           K2Node_Select_Default;                             // 0x2F8(0xB8)()
};

// 0x0 (0x0 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.SetupNonInteractiveContent
struct UConfirmationWindow_C_SetupNonInteractiveContent_Params
{
public:
};

// 0x58 (0x58 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.GetInputAction
struct UConfirmationWindow_C_GetInputAction_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseInputAction;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B66[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FDataTableRowHandle                   ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ReturnParm, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5B67[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x28(0x10)(NoDestructor)
	struct FDataTableRowHandle                   Temp_struct_Variable;                              // 0x38(0x10)(NoDestructor)
	struct FDataTableRowHandle                   K2Node_Select_Default;                             // 0x48(0x10)(NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.Initialize
struct UConfirmationWindow_C_Initialize_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.Construct
struct UConfirmationWindow_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.OnBeginOutro
struct UConfirmationWindow_C_OnBeginOutro_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UConfirmationWindow_C_BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.ConfigureDeclineButton
struct UConfirmationWindow_C_ConfigureDeclineButton_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.BP_OnActivated
struct UConfirmationWindow_C_BP_OnActivated_Params
{
public:
};

// 0x138 (0x138 - 0x0)
// Function ConfirmationWindow.ConfirmationWindow_C.ExecuteUbergraph_ConfirmationWindow
struct UConfirmationWindow_C_ExecuteUbergraph_ConfirmationWindow_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B68[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B69[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortDialogDescription_NUI            CallFunc_GetConfirmationDescription_ReturnValue;   // 0x18(0x118)(ConstParm, ContainsInstancedReference)
	class UCommonButton*                         K2Node_Event_Button;                               // 0x130(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
