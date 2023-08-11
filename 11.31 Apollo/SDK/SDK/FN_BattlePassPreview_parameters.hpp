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
// Function BattlePassPreview.BattlePassPreview_C.CallRenderSwapOnBlade
struct UBattlePassPreview_C_CallRenderSwapOnBlade_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget;   // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF8 (0xF8 - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.SetRotatingPreviewData
struct UBattlePassPreview_C_SetRotatingPreviewData_Params
{
public:
	class UFortItem*                             ItemToDisplay;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReadyToUnlock;                                     // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5922[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        LevelUnlocked;                                     // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  Temp_text_Variable;                                // 0x10(0x18)()
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x28(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x68(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5923[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x80(0x18)()
	class FText                                  CallFunc_GetDisplayName_ReturnValue;               // 0x98(0x18)()
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetSmallPreviewImage_ReturnValue;         // 0xB0(0x28)(HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5924[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  K2Node_Select_Default;                             // 0xE0(0x18)()
};

// 0x81 (0x81 - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.HandleUnhovered
struct UBattlePassPreview_C_HandleUnhovered_Params
{
public:
	class UBattlePassScreenPreviewRewardWidget*  Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget;   // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5925[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_1; // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5926[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_2; // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_2;    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5927[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_3; // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_3;    // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5928[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_4; // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_4;    // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5929[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_5; // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_5;    // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_592A[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_6; // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_6;    // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_7;    // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_592B[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_7; // 0x78(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.ReplaceUpsellIcon
struct UBattlePassPreview_C_ReplaceUpsellIcon_Params
{
public:
};

// 0xBA (0xBA - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.SetOtherRewardsEarned
struct UBattlePassPreview_C_SetOtherRewardsEarned_Params
{
public:
	class UTextBlock*                            TextOtherRewards;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPreviewUnlockRewardData              UpsellUnlockRewardData;                            // 0x8(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_592C[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x40(0x40)(HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_592D[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x88(0x10)(ZeroConstructor, ReferenceParm)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_592E[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xA0(0x18)()
	bool                                         Temp_bool_Variable;                                // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB2 (0xB2 - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.SetVbucksEarned
struct UBattlePassPreview_C_SetVbucksEarned_Params
{
public:
	class UTextBlock*                            TextVbucks;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPreviewUnlockRewardData              UpsellUnlockRewardData;                            // 0x8(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         Temp_bool_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_592F[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x40(0x40)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x80(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5930[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_Format_ReturnValue;                       // 0x98(0x18)()
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xBA (0xBA - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.SetCharactersEarned
struct UBattlePassPreview_C_SetCharactersEarned_Params
{
public:
	class UTextBlock*                            TextCharacters;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FPreviewUnlockRewardData              UpsellUnlockRewardData;                            // 0x8(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5931[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_GetRewardCharacterCount_CharacterCount;   // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetRewardCharacterCount_HasCharacters;    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5932[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x48(0x40)(HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5933[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0x90(0x10)(ZeroConstructor, ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xA0(0x18)()
	bool                                         Temp_bool_Variable;                                // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3A (0x3A - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.GetAdditionalRewardsVisibility
struct UBattlePassPreview_C_GetAdditionalRewardsVisibility_Params
{
public:
	struct FPreviewUnlockRewardData              UpsellUnlockRewardData;                            // 0x0(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class ESlateVisibility                  ReturnValue;                                       // 0x30(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x37(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x36 (0x36 - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.GetRewardCharacterCount
struct UBattlePassPreview_C_GetRewardCharacterCount_Params
{
public:
	struct FPreviewUnlockRewardData              UpsellUnlockRewardData;                            // 0x0(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	int32                                        CharacterCount;                                    // 0x30(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasCharacters;                                     // 0x34(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x14B (0x14B - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.HandleInitData
struct UBattlePassPreview_C_HandleInitData_Params
{
public:
	struct FPreviewUnlockData                    UpsellUnlockData;                                  // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UFortItem*                             SinglePreviewReward;                               // 0xB0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SingleRewardReadyToUnlock;                         // 0xB8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5934[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        SingleRewardUnlockLevel;                           // 0xBC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RewardUnlockLevel;                                 // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRewardReadyToUnlock;                              // 0xC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5935[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortItem*                             SinglePreviewRewardData;                           // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bEarnedRewardsHasCharacters;                       // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5936[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPreviewUnlockRewardData              EarnedRewards;                                     // 0xD8(0x30)(Edit, BlueprintVisible)
	struct FPreviewUnlockRewardData              InstantRewards;                                    // 0x108(0x30)(Edit, BlueprintVisible)
	bool                                         Temp_bool_Variable;                                // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x13A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x13B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x13C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x13D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5937[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x145(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  CallFunc_GetAdditionalRewardsVisibility_ReturnValue; // 0x146(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x147(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x14A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.PreConstruct
struct UBattlePassPreview_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.Construct
struct UBattlePassPreview_C_Construct_Params
{
public:
};

// 0x3C (0x3C - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.Tick
struct UBattlePassPreview_C_Tick_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	float                                        InDeltaTime;                                       // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC1 (0xC1 - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.OnInitData
struct UBattlePassPreview_C_OnInitData_Params
{
public:
	struct FPreviewUnlockData                    Data;                                              // 0x0(0xB0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UFortItem*                             SinglePreviewCycleReward;                          // 0xB0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bReadyToUnlock;                                    // 0xB8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5938[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        LevelUnlocked;                                     // 0xBC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bPurchasedAnnualPass;                              // 0xC0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.BndEvt__Button_ViewAllRewards_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UBattlePassPreview_C_BndEvt__Button_ViewAllRewards_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.HandleOnGainedFocus
struct UBattlePassPreview_C_HandleOnGainedFocus_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.OnCyclePreviewReward
struct UBattlePassPreview_C_OnCyclePreviewReward_Params
{
public:
	class UFortItem*                             NextReward;                                        // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bReadyToUnlock;                                    // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5939[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        LevelUnlocked;                                     // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.BndEvt__Currency_Widget_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UBattlePassPreview_C_BndEvt__Currency_Widget_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.BndEvt__Character_Widget2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UBattlePassPreview_C_BndEvt__Character_Widget2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.BndEvt__Character_Widget3_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
struct UBattlePassPreview_C_BndEvt__Character_Widget3_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.BndEvt__Character_Widget4_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
struct UBattlePassPreview_C_BndEvt__Character_Widget4_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.BndEvt__Character_Widget5_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
struct UBattlePassPreview_C_BndEvt__Character_Widget5_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.BndEvt__Character_Widget6_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
struct UBattlePassPreview_C_BndEvt__Character_Widget6_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.BndEvt__Character_Widget7_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature
struct UBattlePassPreview_C_BndEvt__Character_Widget7_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.BndEvt__Character_Widget1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature
struct UBattlePassPreview_C_BndEvt__Character_Widget1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x33B (0x33B - 0x0)
// Function BattlePassPreview.BattlePassPreview_C.ExecuteUbergraph_BattlePassPreview
struct UBattlePassPreview_C_ExecuteUbergraph_BattlePassPreview_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_593A[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget;   // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_593B[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize;                  // 0x14(0x8)(NoDestructor)
	uint8                                        Pad_593C[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_1; // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_593D[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;      // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize_1;                // 0x38(0x8)(NoDestructor)
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1;    // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_2;    // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_2; // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_593E[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize_2;                // 0x5C(0x8)(NoDestructor)
	uint8                                        Pad_593F[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_3; // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5940[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize_3;                // 0x74(0x8)(NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5941[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_4; // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5942[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPreviewUnlockData                    K2Node_Event_Data;                                 // 0x90(0xB0)(ConstParm)
	class UFortItem*                             K2Node_Event_SinglePreviewCycleReward;             // 0x140(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bReadyToUnlock_1;                     // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5943[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        K2Node_Event_LevelUnlocked_1;                      // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bPurchasedAnnualPass;                 // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5944[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize_4;                // 0x154(0x8)(NoDestructor)
	uint8                                        Pad_5945[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_8;               // 0x168(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattlePassViewRewardsScreen_C*        CallFunc_Create_ReturnValue;                       // 0x170(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_3;    // 0x178(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_4;    // 0x180(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5946[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_5; // 0x190(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5947[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_6; // 0x1A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5948[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize_5;                // 0x1AC(0x8)(NoDestructor)
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize_6;                // 0x1B4(0x8)(NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x1BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5949[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue;         // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_594A[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_1;       // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimationForward_ReturnValue_2;       // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             K2Node_Event_NextReward;                           // 0x1E0(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bReadyToUnlock;                       // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_594B[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        K2Node_Event_LevelUnlocked;                        // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_7;               // 0x1F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_594C[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_7; // 0x200(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_594D[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_6;               // 0x210(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_5;               // 0x218(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_4;               // 0x220(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_3;               // 0x228(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_2;               // 0x230(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_1;               // 0x238(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_8; // 0x240(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_594E[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_9; // 0x250(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_594F[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSlateChildSize                       K2Node_MakeStruct_SlateChildSize_7;                // 0x25C(0x8)(NoDestructor)
	uint8                                        Pad_5950[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x268(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x270(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5951[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_10; // 0x278(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5952[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_5;    // 0x288(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_11; // 0x290(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5953[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_6;    // 0x2A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_12; // 0x2A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5954[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UHorizontalBoxSlot*                    CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_7;    // 0x2B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x2C0(0x38)(IsPlainOldData, NoDestructor)
	float                                        K2Node_Event_InDeltaTime;                          // 0x2F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5955[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_13; // 0x300(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_13;                    // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x309(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5956[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_14; // 0x310(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_14;                    // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5957[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UBattlePassPreview_Widget_C*           K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_15; // 0x320(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_15;                    // 0x328(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5958[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x338(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x339(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x33A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
