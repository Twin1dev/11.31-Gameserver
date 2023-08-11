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

// 0x11 (0x11 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.NavigateDownFromSearch
struct UAthenaCustomizationPicker_C_NavigateDownFromSearch_Params
{
public:
	enum class EUINavigation                     Navigation;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6198[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               NewParam;                                          // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.ResetTextSearchFilter
struct UAthenaCustomizationPicker_C_ResetTextSearchFilter_Params
{
public:
};

// 0x31 (0x31 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HandleTextEntryTimer
struct UAthenaCustomizationPicker_C_HandleTextEntryTimer_Params
{
public:
	class FText                                  CallFunc_GetCurrentText_Text;                      // 0x0(0x18)()
	class FText                                  CallFunc_GetEmptyText_ReturnValue;                 // 0x18(0x18)()
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x69 (0x69 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HandleSearchTextFilterChanged
struct UAthenaCustomizationPicker_C_HandleSearchTextFilterChanged_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_K2_IsTimerActiveHandle_ReturnValue;       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6199[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_GetCurrentText_Text;                      // 0x20(0x18)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x38(0x10)(ZeroConstructor, NoDestructor)
	class FText                                  CallFunc_GetEmptyText_ReturnValue;                 // 0x48(0x18)()
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x60(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.GetTextFilterSelectedState
struct UAthenaCustomizationPicker_C_GetTextFilterSelectedState_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x5 (0x5 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.SetTextFilterSelectedState
struct UAthenaCustomizationPicker_C_SetTextFilterSelectedState_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_2;                              // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default;                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x38 (0x38 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.SetTextFilter
struct UAthenaCustomizationPicker_C_SetTextFilter_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Clear;                                             // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_619A[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_GetEmptyText_ReturnValue;                 // 0x20(0x18)()
};

// 0x18 (0x18 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnNoItemsAvailableInFilter
struct UAthenaCustomizationPicker_C_OnNoItemsAvailableInFilter_Params
{
public:
	class FText                                  EmptyDisplayText;                                  // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnItemsAvailableInFilter
struct UAthenaCustomizationPicker_C_OnItemsAvailableInFilter_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnSearchEnabled
struct UAthenaCustomizationPicker_C_OnSearchEnabled_Params
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnInitialized
struct UAthenaCustomizationPicker_C_OnInitialized_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HandleTextChanged
struct UAthenaCustomizationPicker_C_HandleTextChanged_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.HandleDifferentFilterSetBP
struct UAthenaCustomizationPicker_C_HandleDifferentFilterSetBP_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.BndEvt__Button_TextSearch_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UAthenaCustomizationPicker_C_BndEvt__Button_TextSearch_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.ExecuteUbergraph_AthenaCustomizationPicker
struct UAthenaCustomizationPicker_C_ExecuteUbergraph_AthenaCustomizationPicker_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_619B[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_GetQualifiedFilterDisplayName_ReturnValue; // 0x8(0x18)()
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	class FText                                  K2Node_Event_EmptyDisplayText;                     // 0x30(0x18)(ConstParm)
	bool                                         K2Node_Event_bEnabled;                             // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_619C[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  K2Node_CustomEvent_Text;                           // 0x50(0x18)(ConstParm)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnTextSearchSelectedChanged__DelegateSignature
struct UAthenaCustomizationPicker_C_OnTextSearchSelectedChanged__DelegateSignature_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnEnableSaveButton__DelegateSignature
struct UAthenaCustomizationPicker_C_OnEnableSaveButton__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationPicker.AthenaCustomizationPicker_C.OnDisableSaveButton__DelegateSignature
struct UAthenaCustomizationPicker_C_OnDisableSaveButton__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
