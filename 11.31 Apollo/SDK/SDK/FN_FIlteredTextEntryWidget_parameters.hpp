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

// 0x30 (0x30 - 0x0)
// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.GetCurrentText
struct UFilteredTextEntryWidget_C_GetCurrentText_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Parm, OutParm)
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x18(0x18)()
};

// 0x3B (0x3B - 0x0)
// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.HandleShowPrompt
struct UFilteredTextEntryWidget_C_HandleShowPrompt_Params
{
public:
	class FText                                  CurrentText;                                       // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_619D[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_GetEmptyText_ReturnValue;                 // 0x20(0x18)()
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.SetTextFocus
struct UFilteredTextEntryWidget_C_SetTextFocus_Params
{
public:
};

// 0x4B (0x4B - 0x0)
// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.UpdateConfiguration
struct UFilteredTextEntryWidget_C_UpdateConfiguration_Params
{
public:
	bool                                         bOverrideStyle;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bHideValidation;                                   // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ETextJustify                      TextJustification;                                 // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldShowTextPrompt;                             // 0x3(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_619E[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  PromptDisplayText;                                 // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UClass*                                TextStyle;                                         // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_619F[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_GetText_ReturnValue;                      // 0x30(0x18)()
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.Construct
struct UFilteredTextEntryWidget_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnDirtyTextAttempted
struct UFilteredTextEntryWidget_C_OnDirtyTextAttempted_Params
{
public:
	bool                                         bIsBadText;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.PreConstruct
struct UFilteredTextEntryWidget_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature
struct UFilteredTextEntryWidget_C_BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x30 (0x30 - 0x0)
// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.ExecuteUbergraph_FilteredTextEntryWidget
struct UFilteredTextEntryWidget_C_ExecuteUbergraph_FilteredTextEntryWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsBadText;                           // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61A0[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x18(0x18)(ConstParm)
};

// 0x18 (0x18 - 0x0)
// Function FIlteredTextEntryWidget.FilteredTextEntryWidget_C.OnTextChanged__DelegateSignature
struct UFilteredTextEntryWidget_C_OnTextChanged__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
