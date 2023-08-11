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
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetTeamSetting
struct AMinigameSettingsMachine_C_GetTeamSetting_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateGameSettings
struct AMinigameSettingsMachine_C_UpdateGameSettings_Params
{
public:
	class AFortMinigame*                         CurrentMinigame;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortMinigame*                         CallFunc_GetCurrentMinigame_Minigame;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x11 (0x11 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdatePlayerPersistence
struct AMinigameSettingsMachine_C_UpdatePlayerPersistence_Params
{
public:
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62D3[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortMinigame*                         CallFunc_GetCurrentMinigame_Minigame;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateClassSettings
struct AMinigameSettingsMachine_C_UpdateClassSettings_Params
{
public:
	class AFortMinigame*                         CurrentMinigame;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62D4[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortMinigame*                         CallFunc_GetCurrentMinigame_Minigame;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        K2Node_Select_Default;                             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetUIExtensions
struct AMinigameSettingsMachine_C_GetUIExtensions_Params
{
public:
	struct FGameplayTagContainer                 Return_Value;                                      // 0x0(0x20)(Parm, OutParm)
	struct FGameplayTagContainer                 Final_UI_Extensions;                               // 0x20(0x20)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                 CallFunc_Array_Get_Item;                           // 0x40(0x20)()
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x204 (0x204 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.Game Mode Preset Upgrade Path
struct AMinigameSettingsMachine_C_Game_Mode_Preset_Upgrade_Path_Params
{
public:
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x0(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOptionKey_ReturnValue;                 // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOptionValueNameFromValue_ReturnValue;  // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_2;           // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_3;           // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_4;           // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_5;           // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOptionValueNameFromValue_ReturnValue_1; // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOptionKey_ReturnValue_1;               // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOptionValueNameFromValue_ReturnValue_2; // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOptionValueNameFromValue_ReturnValue_3; // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOptionKey_ReturnValue_2;               // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOptionKey_ReturnValue_3;               // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOptionValueNameFromValue_ReturnValue_4; // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOptionValueNameFromValue_ReturnValue_5; // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOptionKey_ReturnValue_4;               // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOptionKey_ReturnValue_5;               // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TMap<class FString, class FString>           K2Node_MakeMap_Map;                                // 0x130(0x50)(ConstParm, ZeroConstructor)
	struct FMinigameScoringPreset                CallFunc_Array_Get_Item;                           // 0x180(0x38)(HasGetValueTypeHash)
	bool                                         CallFunc_SetPropertyOverrides_ReturnValue;         // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62D5[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Array_Find_ReturnValue;                   // 0x1BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_Array_Get_Item_1;                         // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_Array_Get_Item_2;                         // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue_1;                 // 0x1D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue_2;                 // 0x1D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_Array_Get_Item_3;                         // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_Array_Get_Item_4;                         // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue_3;                 // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Find_ReturnValue_4;                 // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_Array_Get_Item_5;                         // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_1;         // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62D6[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Array_Find_ReturnValue_5;                 // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_2;         // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_3;         // 0x201(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_4;         // 0x202(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue_5;         // 0x203(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x49 (0x49 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetScoreboardStatsArray
struct AMinigameSettingsMachine_C_GetScoreboardStatsArray_Params
{
public:
	TArray<class UClass*>                        ScoreboardStats;                                   // 0x0(0x10)(Parm, OutParm, ZeroConstructor)
	TArray<class UClass*>                        TrackedScoreboardStats;                            // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Get_Item;                           // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62D7[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                CallFunc_Array_Get_Item_1;                         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62D8[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.FillTrackedStats
struct AMinigameSettingsMachine_C_FillTrackedStats_Params
{
public:
	TArray<int32>                                K2Node_MakeArray_Array;                            // 0x0(0x10)(ZeroConstructor, ReferenceParm)
};

// 0x180 (0x180 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.ToggleScriptedGameRules
struct AMinigameSettingsMachine_C_ToggleScriptedGameRules_Params
{
public:
	bool                                         bIsScriptedGame;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62D9[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                Temp_string_Variable;                              // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class AFortMinigame*                         CallFunc_GetCurrentMinigame_Minigame;              // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                K2Node_Select_Default;                             // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FSolarisPrototype                     K2Node_MakeStruct_SolarisPrototype;                // 0x30(0x150)()
};

// 0x34 (0x34 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.TryAddEndCondition_DestroyObjects
struct AMinigameSettingsMachine_C_TryAddEndCondition_DestroyObjects_Params
{
public:
	TArray<struct FFortMinigameStatQuery>        EndConditions;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                         bResult;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bAdded;                                            // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62DA[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortMinigameStatQuery                K2Node_MakeStruct_FortMinigameStatQuery;           // 0x18(0x18)(NoDestructor)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x12 (0x12 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTotalRounds
struct AMinigameSettingsMachine_C_UpdateTotalRounds_Params
{
public:
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortMinigame*                         CallFunc_GetCurrentMinigame_Minigame;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x80 (0x80 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateMinigameMutators
struct AMinigameSettingsMachine_C_UpdateMinigameMutators_Params
{
public:
	class UFortMutatorListComponent*             MutatorList;                                       // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortMinigame*                         CurrentMinigame;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62DC[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortMutatorListComponent*             CallFunc_GetComponentByClass_ReturnValue;          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FString, class FString>           CallFunc_GetPropertyOverrides_CurrentOptions;      // 0x20(0x50)(ZeroConstructor)
	bool                                         CallFunc_GetPropertyOverrides_ReturnValue;         // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62DD[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortMinigame*                         CallFunc_GetCurrentMinigame_Minigame;              // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateJoinInProgress
struct AMinigameSettingsMachine_C_UpdateJoinInProgress_Params
{
public:
	class AFortMinigame*                         NewLocalVar_1;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62DE[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortMinigame*                         CallFunc_GetCurrentMinigame_Minigame;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x34 (0x34 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.TryAddEndCondition_CollectItems
struct AMinigameSettingsMachine_C_TryAddEndCondition_CollectItems_Params
{
public:
	TArray<struct FFortMinigameStatQuery>        EndConditions;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
	bool                                         bResult;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         bAdded;                                            // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62DF[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortMinigameStatQuery                K2Node_MakeStruct_FortMinigameStatQuery;           // 0x18(0x18)(NoDestructor)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateAutoStart
struct AMinigameSettingsMachine_C_UpdateAutoStart_Params
{
public:
	class AFortMinigame*                         CurrentMinigame;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62E0[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortMinigame*                         CallFunc_GetCurrentMinigame_Minigame;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x91 (0x91 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateEndConditions
struct AMinigameSettingsMachine_C_UpdateEndConditions_Params
{
public:
	TArray<struct FFortMinigameStatQuery>        EndConditions;                                     // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor)
	class AFortMinigame*                         Minigame;                                          // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62E1[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortMinigameStatQuery                K2Node_MakeStruct_FortMinigameStatQuery;           // 0x20(0x18)(NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62E2[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortMinigameStatQuery                K2Node_MakeStruct_FortMinigameStatQuery_1;         // 0x40(0x18)(NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryAddEndCondition_DestroyObjects_bResult; // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_TryAddEndCondition_CollectItems_bResult;  // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62E3[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62E4[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortMinigameStatQuery                K2Node_MakeStruct_FortMinigameStatQuery_2;         // 0x68(0x18)(NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62E5[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortMinigame*                         CallFunc_GetCurrentMinigame_Minigame;              // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTeamToMoveToWhenOutOfSpawns
struct AMinigameSettingsMachine_C_UpdateTeamToMoveToWhenOutOfSpawns_Params
{
public:
	class AFortMinigame*                         Minigame;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_Conv_IntToByte_ReturnValue;               // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        CallFunc_MakeLiteralByte_ReturnValue;              // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        CallFunc_Add_ByteByte_ReturnValue;                 // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62E6[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortMinigame*                         CallFunc_GetCurrentMinigame_Minigame;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateAutoEndTeamThreshold
struct AMinigameSettingsMachine_C_UpdateAutoEndTeamThreshold_Params
{
public:
	class AFortMinigame*                         Minigame;                                          // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62E7[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortMinigame*                         CallFunc_GetCurrentMinigame_Minigame;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdatePlayerLives
struct AMinigameSettingsMachine_C_UpdatePlayerLives_Params
{
public:
	class AFortMinigame*                         NewLocalVar_0;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62E8[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortMinigame*                         CallFunc_GetCurrentMinigame_Minigame;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdatePostGameSpawnLocationSetting
struct AMinigameSettingsMachine_C_UpdatePostGameSpawnLocationSetting_Params
{
public:
	class AFortMinigame*                         CurrentMinigame;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62E9[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortMinigame*                         CallFunc_GetCurrentMinigame_Minigame;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x28 (0x28 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintGetFailedInteractionString
struct AMinigameSettingsMachine_C_BlueprintGetFailedInteractionString_Params
{
public:
	class AFortPawn*                             InteractingPawn;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInteractionBeingAttempted        InteractionBeingAttempted;                         // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm)
};

// 0x11 (0x11 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTeamSetting
struct AMinigameSettingsMachine_C_UpdateTeamSetting_Params
{
public:
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62EB[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortMinigame*                         CallFunc_GetCurrentMinigame_Minigame;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateSpawnLocationSetting
struct AMinigameSettingsMachine_C_UpdateSpawnLocationSetting_Params
{
public:
	class AFortMinigame*                         CurrentMinigame;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62EC[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortMinigame*                         CallFunc_GetCurrentMinigame_Minigame;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetCurrentMinigame
struct AMinigameSettingsMachine_C_GetCurrentMinigame_Params
{
public:
	class AFortMinigame*                         Minigame;                                          // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62ED[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortMinigameVolumeComponent*          CallFunc_GetComponentByClass_ReturnValue;          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateTimeLimit
struct AMinigameSettingsMachine_C_UpdateTimeLimit_Params
{
public:
	class AFortMinigame*                         CurrentMinigame;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62EE[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortMinigame*                         CallFunc_GetCurrentMinigame_Minigame;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x51 (0x51 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UpdateGameMode
struct AMinigameSettingsMachine_C_UpdateGameMode_Params
{
public:
	class AFortMinigame*                         CurrentMinigame;                                   // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue_1;             // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue_2;             // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62EF[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTagContainer                 CallFunc_GetUIExtensions_Return_Value;             // 0x10(0x20)()
	TArray<class UClass*>                        CallFunc_GetScoreboardStatsArray_ScoreboardStats;  // 0x30(0x10)(ZeroConstructor, ReferenceParm)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue_3;             // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortMinigame*                         CallFunc_GetCurrentMinigame_Minigame;              // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x12 (0x12 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.HasMinigameStarted
struct AMinigameSettingsMachine_C_HasMinigameStarted_Params
{
public:
	bool                                         bHasStarted;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62F1[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortMinigame*                         CallFunc_GetCurrentMinigame_Minigame;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasStarted_ReturnValue;                   // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x54 (0x54 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.GetPickupSpawnLocation
struct AMinigameSettingsMachine_C_GetPickupSpawnLocation_Params
{
public:
	struct FVector                               SpawnLocation;                                     // 0x0(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62F2[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AActor*                                CallFunc_GetOwner_ReturnValue;                     // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x18(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x24(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorInt_ReturnValue;           // 0x30(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x3C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintGetInteractionString
struct AMinigameSettingsMachine_C_BlueprintGetInteractionString_Params
{
public:
	class AFortPawn*                             InteractingPawn;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInteractionBeingAttempted        InteractionBeingAttempted;                         // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62F3[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  ReturnValue;                                       // 0x10(0x18)(Parm, OutParm, ReturnParm)
};

// 0x31 (0x31 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.BlueprintCanInteract
struct AMinigameSettingsMachine_C_BlueprintCanInteract_Params
{
public:
	class AFortPawn*                             InteractingPawn;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInteractionBeingAttempted        InteractionBeingAttempted;                         // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	bool                                         CanInteract;                                       // 0xA(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62F4[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*           K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62F5[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortVolume*                           CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume; // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue; // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.OnComplete_C895978B4EDC5073967F23BED63E6DB5
struct AMinigameSettingsMachine_C_OnComplete_C895978B4EDC5073967F23BED63E6DB5_Params
{
public:
	class UUserWidget*                           UserWidget;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.ReceiveBeginPlay
struct AMinigameSettingsMachine_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.OnGameSettingsUpdated
struct AMinigameSettingsMachine_C_OnGameSettingsUpdated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.StartMinigameHelper
struct AMinigameSettingsMachine_C_StartMinigameHelper_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.AbandonMinigameHelper
struct AMinigameSettingsMachine_C_AbandonMinigameHelper_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.ShowSolaris
struct AMinigameSettingsMachine_C_ShowSolaris_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.UseSolaris
struct AMinigameSettingsMachine_C_UseSolaris_Params
{
public:
	bool                                         bShouldUse;                                        // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x198 (0x198 - 0x0)
// Function MinigameSettingsMachine.MinigameSettingsMachine_C.ExecuteUbergraph_MinigameSettingsMachine
struct AMinigameSettingsMachine_C_ExecuteUbergraph_MinigameSettingsMachine_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_62F6[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUserWidget*                           K2Node_CustomEvent_UserWidget;                     // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUserWidget*                           Temp_object_Variable;                              // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonActivatablePanel*               K2Node_DynamicCast_AsCommon_Activatable_Panel;     // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62F7[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>         CallFunc_GetLocalFortPlayerControllers_ReturnValue; // 0x48(0x10)(ZeroConstructor, ReferenceParm)
	TArray<class AFortPlayerController*>         CallFunc_GetLocalFortPlayerControllers_ReturnValue_1; // 0x58(0x10)(ZeroConstructor, ReferenceParm)
	class AFortPlayerController*                 CallFunc_Array_Get_Item;                           // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 CallFunc_Array_Get_Item_1;                         // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerAthena*           K2Node_DynamicCast_AsFort_Player_Controller_Athena; // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62F8[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerControllerAthena*           K2Node_DynamicCast_AsFort_Player_Controller_Athena_1; // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62F9[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x94(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0xA6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62FA[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0xA8(0x10)(ConstParm, ZeroConstructor, ReferenceParm)
	class FString                                CallFunc_GetOptionValueNameFromValue_ReturnValue;  // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetOptionKey_ReturnValue;                 // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62FB[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TMap<class FString, class FString>           K2Node_MakeMap_Map;                                // 0xE0(0x50)(ConstParm, ZeroConstructor)
	bool                                         CallFunc_SetPropertyOverrides_ReturnValue;         // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62FC[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	TArray<class AFortPlayerController*>         CallFunc_GetLocalFortPlayerControllers_ReturnValue_2; // 0x138(0x10)(ZeroConstructor, ReferenceParm)
	int32                                        Temp_int_Variable;                                 // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_62FD[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortPlayerController*                 CallFunc_Array_Get_Item_2;                         // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortAsyncAction_CreateWidgetAsync*    CallFunc_CreateWidgetAsync_ReturnValue;            // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62FE[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AFortVolumeManager*                    CallFunc_GetVolumeManager_OutVolumeManager;        // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVolumeValidityResult             CallFunc_GetVolumeManager_OutIsValid;              // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62FF[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bShouldUse;                           // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x181(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x182(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6300[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x184(0x10)(ZeroConstructor, NoDestructor)
	int32                                        K2Node_Select_Default;                             // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
