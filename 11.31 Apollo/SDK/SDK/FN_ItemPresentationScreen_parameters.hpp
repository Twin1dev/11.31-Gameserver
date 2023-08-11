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

// 0x8 (0x8 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.Handle PaidItem Intro
struct UItemPresentationScreen_C_Handle_PaidItem_Intro_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.Handle Fade
struct UItemPresentationScreen_C_Handle_Fade_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.Handle Intro
struct UItemPresentationScreen_C_Handle_Intro_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.Handle Animation InitialState
struct UItemPresentationScreen_C_Handle_Animation_InitialState_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.BP_OnActivated
struct UItemPresentationScreen_C_BP_OnActivated_Params
{
public:
};

// 0x98 (0x98 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateHeaderInformation
struct UItemPresentationScreen_C_OnUpdateHeaderInformation_Params
{
public:
	struct FFortItemHeaderInformation            HeaderInformation;                                 // 0x0(0x98)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateItemInformation
struct UItemPresentationScreen_C_OnUpdateItemInformation_Params
{
public:
	class UFortItem*                             FortItem;                                          // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateOwnedItemText
struct UItemPresentationScreen_C_OnUpdateOwnedItemText_Params
{
public:
	bool                                         bShowText;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateItemEquipped
struct UItemPresentationScreen_C_OnUpdateItemEquipped_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnInitialIconAnimation
struct UItemPresentationScreen_C_OnInitialIconAnimation_Params
{
public:
	bool                                         bUsingListView;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnDisplayEquipButton
struct UItemPresentationScreen_C_OnDisplayEquipButton_Params
{
public:
	bool                                         bCanEquip;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnCloseScreen
struct UItemPresentationScreen_C_OnCloseScreen_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateNextButtonText
struct UItemPresentationScreen_C_OnUpdateNextButtonText_Params
{
public:
	bool                                         bShowNext;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnFinishDisplayingHotItems
struct UItemPresentationScreen_C_OnFinishDisplayingHotItems_Params
{
public:
	bool                                         bShowOtherRewards;                                 // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnDisplayItemsCollectedText
struct UItemPresentationScreen_C_OnDisplayItemsCollectedText_Params
{
public:
	bool                                         bCloseScreen;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.SwitchToPaidItems
struct UItemPresentationScreen_C_SwitchToPaidItems_Params
{
public:
};

// 0x9 (0x9 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateVaultWorld
struct UItemPresentationScreen_C_OnUpdateVaultWorld_Params
{
public:
	class AFortItemPreviewVaultWorld*            FortItemPreviewVaultWorld;                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsSpecialEventRewards;                            // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14 (0x14 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.OnUpdateGradientColor
struct UItemPresentationScreen_C_OnUpdateGradientColor_Params
{
public:
	bool                                         bIsWinterfestReward;                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4564[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FLinearColor                          PresentColor;                                      // 0x4(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x379 (0x379 - 0x0)
// Function ItemPresentationScreen.ItemPresentationScreen_C.ExecuteUbergraph_ItemPresentationScreen
struct UItemPresentationScreen_C_ExecuteUbergraph_ItemPresentationScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4565[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4566[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UItemInfoPresentationWidget_C*         K2Node_DynamicCast_AsItem_Info_Presentation_Widget; // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4567[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UItemInfoPresentationWidget_C*         K2Node_DynamicCast_AsItem_Info_Presentation_Widget_1; // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4568[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                   CallFunc_GetDisplayedEntryWidgets_ReturnValue;     // 0x30(0x10)(ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4569[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class UUserWidget*>                   CallFunc_GetAllEntries_ReturnValue;                // 0x50(0x10)(ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_456A[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemPresentationGenericRewardHeader_C* K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header; // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_456B[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UItemPresentationGenericRewardHeader_C* K2Node_DynamicCast_AsItem_Presentation_Generic_Reward_Header_1; // 0x88(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_456C[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_456D[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortItemHeaderInformation            K2Node_Event_HeaderInformation;                    // 0xA0(0x98)(ConstParm)
	class UFortItem*                             K2Node_Event_FortItem;                             // 0x138(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bShowText;                            // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bUsingListView;                       // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_456E[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_456F[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class UUserWidget*>                   CallFunc_GetDisplayedEntryWidgets_ReturnValue_1;   // 0x158(0x10)(ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class UUserWidget*                           CallFunc_Array_Get_Item;                           // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           CallFunc_Array_Get_Item_1;                         // 0x170(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemPresentationEntry_C*              K2Node_DynamicCast_AsItem_Presentation_Entry;      // 0x178(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4570[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UItemPresentationEntry_C*              K2Node_DynamicCast_AsItem_Presentation_Entry_1;    // 0x188(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4571[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UUserWidget*>                   CallFunc_GetAllEntries_ReturnValue_1;              // 0x198(0x10)(ConstParm, ZeroConstructor, ReferenceParm, ContainsInstancedReference)
	class UUserWidget*                           CallFunc_Array_Get_Item_2;                         // 0x1A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItemPresentationEntry_C*              K2Node_DynamicCast_AsItem_Presentation_Entry_2;    // 0x1B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4572[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bCanEquip;                            // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4573[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x1C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Array_Get_Item_3;                         // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_IntFloat_ReturnValue_1;          // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4574[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UItemPresentationEntry_C*              K2Node_DynamicCast_AsItem_Presentation_Entry_3;    // 0x1D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bShowNext;                            // 0x1E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4575[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoloButton_C*                         K2Node_DynamicCast_AsSolo_Button;                  // 0x1E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bShowOtherRewards;                    // 0x1F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bCloseScreen;                         // 0x1F2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4576[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable_1;        // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4577[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x210(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4578[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoloButton_C*                         K2Node_DynamicCast_AsSolo_Button_1;                // 0x218(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4579[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FDataTableRowHandle                   K2Node_MakeStruct_DataTableRowHandle;              // 0x228(0x10)(NoDestructor)
	class UItemInfoPresentationWidget_C*         K2Node_DynamicCast_AsItem_Info_Presentation_Widget_2; // 0x238(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_457A[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassTracker_C*                  K2Node_DynamicCast_AsBattle_Pass_Tracker;          // 0x248(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_457B[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassTracker_C*                  K2Node_DynamicCast_AsBattle_Pass_Tracker_1;        // 0x258(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_457C[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassItemTracker_C*              K2Node_DynamicCast_AsBattle_Pass_Item_Tracker;     // 0x268(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_13;                    // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_457D[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassItemTracker_C*              K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_1;   // 0x278(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_14;                    // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_457E[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassItemTracker_C*              K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_2;   // 0x288(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_15;                    // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_457F[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassTracker_C*                  K2Node_DynamicCast_AsBattle_Pass_Tracker_2;        // 0x298(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_16;                    // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4580[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassTracker_C*                  K2Node_DynamicCast_AsBattle_Pass_Tracker_3;        // 0x2A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_17;                    // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4581[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassItemTracker_C*              K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_3;   // 0x2B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_18;                    // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4582[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_2;              // 0x2C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortItemPreviewVaultWorld*            K2Node_Event_FortItemPreviewVaultWorld;            // 0x2D0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsSpecialEventRewards;               // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4583[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class AFrontendCamera_VaultRotator_C*> CallFunc_GetAllActorsOfClass_OutActors;            // 0x2E0(0x10)(ZeroConstructor, ReferenceParm)
	class AFrontendCamera_VaultRotator_C*        CallFunc_Array_Get_Item_4;                         // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x2F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0x2FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4584[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AVaultWorld_C*                         K2Node_DynamicCast_AsVault_World;                  // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_19;                    // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4585[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AVaultRotator_C*                       CallFunc_GetVaultRotator_VaultRotator;             // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x318(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x31C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4586[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x324(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4587[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortFrontEndContext*                  CallFunc_GetLocalPlayerSubsystem_ReturnValue;      // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFrontendCamera_VaultRotator_C*> CallFunc_GetAllActorsOfClass_OutActors_1;          // 0x330(0x10)(ZeroConstructor, ReferenceParm)
	class AFrontendCamera_VaultRotator_C*        CallFunc_Array_Get_Item_5;                         // 0x340(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x348(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x34C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ActorHasTag_ReturnValue_1;                // 0x34D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x34E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bIsWinterfestReward;                  // 0x34F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FLinearColor                          K2Node_Event_PresentColor;                         // 0x350(0x10)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue_1;         // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoloButton_WinterFest_C*              K2Node_DynamicCast_AsSolo_Button_Winter_Fest;      // 0x370(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_20;                    // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
