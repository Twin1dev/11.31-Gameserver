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

// 0x4 (0x4 - 0x0)
// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.GetCustomizationSlotActiveState
struct UAthenaCustomizationSlotButtonWrapper_C_GetCustomizationSlotActiveState_Params
{
public:
	bool                                         bCosmeticAvaialble;                                // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bActive;                                           // 0x1(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCustomizationSlotActiveState_bOutAttachableCosmeticAvailable; // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetCustomizationSlotActiveState_bOutActive; // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.PreConstruct
struct UAthenaCustomizationSlotButtonWrapper_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UAthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.Construct
struct UAthenaCustomizationSlotButtonWrapper_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature
struct UAthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_13_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature
struct UAthenaCustomizationSlotButtonWrapper_C_BndEvt__SlotButton_K2Node_ComponentBoundEvent_47_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper
struct UAthenaCustomizationSlotButtonWrapper_C_ExecuteUbergraph_AthenaCustomizationSlotButtonWrapper_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_468F[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4690[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_2;               // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanShowLockerSlotType_ReturnValue;        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4691[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_1;               // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4692[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAthenaCustomizationParams            K2Node_MakeStruct_AthenaCustomizationParams;       // 0x50(0x48)()
};

// 0x0 (0x0 - 0x0)
// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.OnSlotUnhovered__DelegateSignature
struct UAthenaCustomizationSlotButtonWrapper_C_OnSlotUnhovered__DelegateSignature_Params
{
public:
};

// 0x44 (0x44 - 0x0)
// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.OnSlotHovered__DelegateSignature
struct UAthenaCustomizationSlotButtonWrapper_C_OnSlotHovered__DelegateSignature_Params
{
public:
	class UAthenaCustomizationSlotButtonWrapper_C* ButtonWrapper;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAthenaCustomizationCategory      CustomizationType;                                 // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4693[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  BannerLabel;                                       // 0x10(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  CustomizationDescription;                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	int32                                        SubslotIndex;                                      // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x50 (0x50 - 0x0)
// Function AthenaCustomizationSlotButtonWrapper.AthenaCustomizationSlotButtonWrapper_C.OnSlotClicked__DelegateSignature
struct UAthenaCustomizationSlotButtonWrapper_C_OnSlotClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAthenaCustomizationParams            CustomizationParams;                               // 0x8(0x48)(BlueprintVisible, BlueprintReadOnly, Parm)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
