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

// 0x0 (0x0 - 0x0)
// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.Construct
struct UCreativeIslandLinkScreen_C_Construct_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.OnIslandLinkEntryTextChanged
struct UCreativeIslandLinkScreen_C_OnIslandLinkEntryTextChanged_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.OnCreativeIslandLinksPopulated
struct UCreativeIslandLinkScreen_C_OnCreativeIslandLinksPopulated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.InitFromObject
struct UCreativeIslandLinkScreen_C_InitFromObject_Params
{
public:
	class UObject*                               InitObject;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.OnAddedToActivationStack
struct UCreativeIslandLinkScreen_C_OnAddedToActivationStack_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.Destruct
struct UCreativeIslandLinkScreen_C_Destruct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.OnCreativeIslandLinkValidated
struct UCreativeIslandLinkScreen_C_OnCreativeIslandLinkValidated_Params
{
public:
	enum class EFortCreativeIslandLinkValidationResult ValidateResult;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.BP_OnActivated
struct UCreativeIslandLinkScreen_C_BP_OnActivated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.PreConstruct
struct UCreativeIslandLinkScreen_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.BndEvt__CommonActionWidget_0_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature
struct UCreativeIslandLinkScreen_C_BndEvt__CommonActionWidget_0_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UCreativeIslandLinkScreen_C_BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UCreativeIslandLinkScreen_C_BndEvt__Button_Refresh_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x190 (0x190 - 0x0)
// Function CreativeIslandLinkScreen.CreativeIslandLinkScreen_C.ExecuteUbergraph_CreativeIslandLinkScreen
struct UCreativeIslandLinkScreen_C_ExecuteUbergraph_CreativeIslandLinkScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6797[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortCreativeIslandLinkValidationResult Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6798[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  Temp_text_Variable;                                // 0x18(0x18)()
	class FText                                  Temp_text_Variable_1;                              // 0x30(0x18)()
	class FText                                  Temp_text_Variable_2;                              // 0x48(0x18)()
	class FText                                  Temp_text_Variable_3;                              // 0x60(0x18)()
	class FText                                  Temp_text_Variable_4;                              // 0x78(0x18)()
	class FText                                  Temp_text_Variable_5;                              // 0x90(0x18)()
	class FText                                  K2Node_CustomEvent_Text;                           // 0xA8(0x18)(ConstParm)
	int32                                        CallFunc_GetNumItems_ReturnValue;                  // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xC4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6799[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue;                   // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortHUDContext*                       CallFunc_GetContext_ReturnValue_1;                 // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortCreativeIslandLinkValidationResult Temp_byte_Variable_1;                              // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_679A[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UObject*                               K2Node_Event_InitObject;                           // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABGA_IslandPortal_C*                   K2Node_DynamicCast_AsBGA_Island_Portal;            // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortCreativeIslandLinkValidationResult K2Node_Event_ValidateResult;                       // 0xF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_679B[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               K2Node_Select_Default;                             // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default_1;                           // 0x100(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  K2Node_Select_Default_2;                           // 0x110(0x18)()
	bool                                         K2Node_Event_IsDesignTime;                         // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_679C[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x138(0x10)(ZeroConstructor, NoDestructor)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x148(0x18)()
	bool                                         K2Node_ComponentBoundEvent_bUsingGamepad;          // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_679D[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x168(0x18)()
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_1;               // 0x180(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x188(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
