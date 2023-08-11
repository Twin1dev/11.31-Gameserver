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
// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.SetDynamicColors
struct UAthenaMOTDTeaserWidget_C_SetDynamicColors_Params
{
public:
	struct FLinearColor                          DarkColor;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          LightColor;                                        // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6376[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1E0 (0x1E0 - 0x0)
// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.UpdateCurDisplayedNewsVisual
struct UAthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6377[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FAthenaNewsEntry                      CallFunc_GetNewsByIndex_ReturnValue;               // 0x8(0x180)()
	int32                                        CallFunc_GetNewsCount_ReturnValue;                 // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_ColorToLinearColor_ReturnValue;      // 0x18C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x19C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6378[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FLinearColor                          K2Node_Select_Default;                             // 0x1A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x1B0(0x18)()
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Conv_IntToFloat_ReturnValue_2;            // 0x1DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.PreConstruct
struct UAthenaMOTDTeaserWidget_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.Construct
struct UAthenaMOTDTeaserWidget_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature
struct UAthenaMOTDTeaserWidget_C_BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.ScrollNextItem
struct UAthenaMOTDTeaserWidget_C_ScrollNextItem_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature
struct UAthenaMOTDTeaserWidget_C_BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature_Params
{
public:
	class UUserWidget*                           Widget;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.HandleEntryWidgetHoveredChanged
struct UAthenaMOTDTeaserWidget_C_HandleEntryWidgetHoveredChanged_Params
{
public:
	bool                                         NewIsHovered;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UAthenaMOTDTeaserWidget_C_BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.OnNewsPopulated
struct UAthenaMOTDTeaserWidget_C_OnNewsPopulated_Params
{
public:
};

// 0x390 (0x390 - 0x0)
// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.ExecuteUbergraph_AthenaMOTDTeaserWidget
struct UAthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6379[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUserWidget*                           K2Node_ComponentBoundEvent_Widget_1;               // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaMOTDTile_C*                     K2Node_DynamicCast_AsAthena_MOTDTile;              // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_637A[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUserWidget*                           K2Node_ComponentBoundEvent_Widget;                 // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_NewIsHovered;                   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_637B[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAthenaMOTDTile_C*                     K2Node_DynamicCast_AsAthena_MOTDTile_1;            // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_637C[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x44(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x54(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_637D[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Max_ReturnValue;                          // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x84(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_637E[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x98(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_637F[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0xB0(0x28)()
	struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0xD8(0x50)(HasGetValueTypeHash)
	struct FTextBlockStyle                       K2Node_MakeStruct_TextBlockStyle;                  // 0x128(0x268)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
