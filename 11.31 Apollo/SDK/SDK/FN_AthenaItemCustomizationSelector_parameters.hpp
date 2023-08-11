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
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.UpdateSeasonButtonEnabledState
struct UAthenaItemCustomizationSelector_C_UpdateSeasonButtonEnabledState_Params
{
public:
};

// 0xC0 (0xC0 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.GetCategoryImage
struct UAthenaItemCustomizationSelector_C_GetCategoryImage_Params
{
public:
	enum class EAthenaCustomizationCategory      Index;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59E6[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialInstance*                     OverrideImage;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EAthenaCustomizationCategory      Temp_byte_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialInstance*                     Temp_object_Variable;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Temp_object_Variable_1;                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Temp_object_Variable_2;                            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Temp_object_Variable_3;                            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Temp_object_Variable_4;                            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Temp_object_Variable_5;                            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Temp_object_Variable_6;                            // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Temp_object_Variable_7;                            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Temp_object_Variable_8;                            // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Temp_object_Variable_9;                            // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Temp_object_Variable_10;                           // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Temp_object_Variable_11;                           // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Temp_object_Variable_12;                           // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Temp_object_Variable_13;                           // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Temp_object_Variable_14;                           // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Temp_object_Variable_15;                           // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Temp_object_Variable_16;                           // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Temp_object_Variable_17;                           // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     Temp_object_Variable_18;                           // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     K2Node_Select_Default;                             // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleItemSetupFinished
struct UAthenaItemCustomizationSelector_C_HandleItemSetupFinished_Params
{
public:
	class FText                                  InText;                                            // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class EAthenaCustomizationCategory      Category;                                          // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialInstance*                     OverrideImage;                                     // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     CallFunc_GetCategoryImage_ReturnValue;             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationReverse_ReturnValue;         // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ApplyToAllSlots
struct UAthenaItemCustomizationSelector_C_ApplyToAllSlots_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.UpdateInputActionVisibilities
struct UAthenaItemCustomizationSelector_C_UpdateInputActionVisibilities_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x32 (0x32 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.UpdateApplyToAllVisibility
struct UAthenaItemCustomizationSelector_C_UpdateApplyToAllVisibility_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaItemWrapDefinition*             K2Node_DynamicCast_AsAthena_Item_Wrap_Definition;  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasInputActionHandler_ReturnValue;        // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2D (0x2D - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.UpdateToggleFavoriteVisibility
struct UAthenaItemCustomizationSelector_C_UpdateToggleFavoriteVisibility_Params
{
public:
	class UFortItem*                             Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasInputActionHandler_ReturnValue;        // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsItemOwned_ReturnValue;                  // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59EA[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsItemDefRandomCustomizationSelector_ReturnValue; // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59EB[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x31 (0x31 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.GetCurrentItemCosmeticDefinition
struct UAthenaItemCustomizationSelector_C_GetCurrentItemCosmeticDefinition_Params
{
public:
	class UAthenaCosmeticItemDefinition*         Cosmetic_Item_Definition;                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_GetCurrentItem_ReturnValue;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaCosmeticAccountItem*            K2Node_DynamicCast_AsAthena_Cosmetic_Account_Item; // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaCosmeticItemDefinition*         K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xD0 (0xD0 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ShowSavingModal
struct UAthenaItemCustomizationSelector_C_ShowSavingModal_Params
{
public:
	class FText                                  Temp_text_Variable;                                // 0x0(0x18)(ConstParm)
	class FText                                  Temp_text_Variable_1;                              // 0x18(0x18)(ConstParm)
	struct FSlateBrush                           CallFunc_NoResourceBrush_ReturnValue;              // 0x30(0x88)()
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UProgressModalWidget_C*                CallFunc_Create_ReturnValue;                       // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.GetWidgetForFramingViewedItem
struct UAthenaItemCustomizationSelector_C_GetWidgetForFramingViewedItem_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ToggleFavorite
struct UAthenaItemCustomizationSelector_C_ToggleFavorite_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59EE[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortItem*                             CallFunc_GetCurrentItem_ReturnValue;               // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAccountItem*                      K2Node_DynamicCast_AsFort_Account_Item;            // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59EF[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue;                   // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFavorite_ReturnValue;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_1;                 // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortUIFeatureState               CallFunc_GetFeatureState_OutFeatureState;          // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIFeatureStateReason         CallFunc_GetFeatureState_OutReason;                // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleBack
struct UAthenaItemCustomizationSelector_C_HandleBack_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.Construct
struct UAthenaItemCustomizationSelector_C_Construct_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature
struct UAthenaItemCustomizationSelector_C_BndEvt__HorizontalTabList_K2Node_ComponentBoundEvent_44_OnTabButtonCreated__DelegateSignature_Params
{
public:
	class FName                                  TabId;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         TabButton;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnFinsihedItemSave
struct UAthenaItemCustomizationSelector_C_OnFinsihedItemSave_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnSavingItemStarted
struct UAthenaItemCustomizationSelector_C_OnSavingItemStarted_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BP_OnActivated
struct UAthenaItemCustomizationSelector_C_BP_OnActivated_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnTabSelectionChanged
struct UAthenaItemCustomizationSelector_C_OnTabSelectionChanged_Params
{
public:
	bool                                         bShowingVariants;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnCurrentItemChanged
struct UAthenaItemCustomizationSelector_C_OnCurrentItemChanged_Params
{
public:
	class UFortItem*                             SelectedItem;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__Picker_ItemSelector_K2Node_ComponentBoundEvent_1_OnUpdateSaveButtonVisuals__DelegateSignature
struct UAthenaItemCustomizationSelector_C_BndEvt__Picker_ItemSelector_K2Node_ComponentBoundEvent_1_OnUpdateSaveButtonVisuals__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__Picker_ItemSelector_K2Node_ComponentBoundEvent_2_OnUpdateSaveButtonVisuals__DelegateSignature
struct UAthenaItemCustomizationSelector_C_BndEvt__Picker_ItemSelector_K2Node_ComponentBoundEvent_2_OnUpdateSaveButtonVisuals__DelegateSignature_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
struct UAthenaItemCustomizationSelector_C_BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HideInfoPanel
struct UAthenaItemCustomizationSelector_C_HideInfoPanel_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.OnFinishedItemSetup
struct UAthenaItemCustomizationSelector_C_OnFinishedItemSetup_Params
{
public:
	class FText                                  CategoryDisplayName;                               // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  ItemDisplayTypeName;                               // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class EAthenaCustomizationCategory      SelectedCategory;                                  // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialInstance*                     OverrideSlotImage;                                 // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.HandleTextSearchSelectedChanged
struct UAthenaItemCustomizationSelector_C_HandleTextSearchSelectedChanged_Params
{
public:
	bool                                         bIsSelected;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1DA (0x1DA - 0x0)
// Function AthenaItemCustomizationSelector.AthenaItemCustomizationSelector_C.ExecuteUbergraph_AthenaItemCustomizationSelector
struct UAthenaItemCustomizationSelector_C_ExecuteUbergraph_AthenaItemCustomizationSelector_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59F2[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  K2Node_ComponentBoundEvent_TabId;                  // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_TabButton;              // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HandleBack_PassThrough;                   // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UIconTabButton_C*                      K2Node_DynamicCast_AsIcon_Tab_Button;              // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59F4[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2C(0x10)(ZeroConstructor, NoDestructor)
	bool                                         K2Node_Event_bShowingVariants;                     // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59F5[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortItem*                             CallFunc_GetCurrentItem_ReturnValue;               // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             K2Node_Event_SelectedItem;                         // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x50(0x10)(NoDestructor)
	enum class EFortItemType                     CallFunc_GetType_ReturnValue;                      // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x63(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortItemType                     CallFunc_GetType_ReturnValue_1;                    // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59F6[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAthenaCosmeticAccountItem*            K2Node_DynamicCast_AsAthena_Cosmetic_Account_Item; // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59F7[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_GetLockerItemTypeText_ReturnValue;        // 0x78(0x18)()
	class FText                                  CallFunc_GetLockerDescriptionText_ReturnValue;     // 0x90(0x18)()
	class UFortHero*                             CallFunc_GetHero_ReturnValue;                      // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItemDefinition*                   CallFunc_GetItemDefinitionBP_ReturnValue;          // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAthenaCosmeticItemDefinition*         K2Node_DynamicCast_AsAthena_Cosmetic_Item_Definition; // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsOwnedByCampaignHero_ReturnValue;        // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortRarity                       CallFunc_GetRarity_ReturnValue;                    // 0xCA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59F9[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0xD0(0x18)()
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59FA[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UItemInfoHeaderWidget_C*               K2Node_DynamicCast_AsItem_Info_Header_Widget;      // 0xF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue;                   // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HandleBack_PassThrough_1;                 // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59FC[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x118(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x128(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue_1;      // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59FD[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  K2Node_Event_CategoryDisplayName;                  // 0x138(0x18)(ConstParm)
	class FText                                  K2Node_Event_ItemDisplayTypeName;                  // 0x150(0x18)(ConstParm)
	enum class EAthenaCustomizationCategory      K2Node_Event_SelectedCategory;                     // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_59FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UMaterialInstance*                     K2Node_Event_OverrideSlotImage;                    // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_59FF[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAthenaCustomizationPicker_C*          K2Node_DynamicCast_AsAthena_Customization_Picker;  // 0x180(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A00[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UItemInfoHeaderWidget_C*               K2Node_DynamicCast_AsItem_Info_Header_Widget_1;    // 0x190(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A01[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortFrontEndContext*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bIsSelected;                    // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A02[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAthenaCustomizationPicker_C*          K2Node_DynamicCast_AsAthena_Customization_Picker_1; // 0x1B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5A03[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1BC(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_5A04[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue_1;                 // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x1D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
