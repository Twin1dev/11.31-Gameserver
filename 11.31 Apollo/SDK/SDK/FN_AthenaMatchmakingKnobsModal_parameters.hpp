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
// Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.BP_OnActivated
struct UAthenaMatchmakingKnobsModal_C_BP_OnActivated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.OnInputModeChanged
struct UAthenaMatchmakingKnobsModal_C_OnInputModeChanged_Params
{
public:
	bool                                         bUsingGamepad;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingKnobsModal_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingKnobsModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.WidgetAnimationEvt_OutIn_K2Node_WidgetAnimationEvent_1
struct UAthenaMatchmakingKnobsModal_C_WidgetAnimationEvt_OutIn_K2Node_WidgetAnimationEvent_1_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.WidgetAnimationEvt_OutIn_K2Node_WidgetAnimationEvent_0
struct UAthenaMatchmakingKnobsModal_C_WidgetAnimationEvt_OutIn_K2Node_WidgetAnimationEvent_0_Params
{
public:
};

// 0x32 (0x32 - 0x0)
// Function AthenaMatchmakingKnobsModal.AthenaMatchmakingKnobsModal_C.ExecuteUbergraph_AthenaMatchmakingKnobsModal
struct UAthenaMatchmakingKnobsModal_C_ExecuteUbergraph_AthenaMatchmakingKnobsModal_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bUsingGamepad;                        // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAnimationPlaying_ReturnValue;           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4D77[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_1;               // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
