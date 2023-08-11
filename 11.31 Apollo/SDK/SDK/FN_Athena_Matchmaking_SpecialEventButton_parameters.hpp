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
// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.SetupLTM
struct UAthena_Matchmaking_SpecialEventButton_C_SetupLTM_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.SetLTMSplashArt
struct UAthena_Matchmaking_SpecialEventButton_C_SetLTMSplashArt_Params
{
public:
	TSoftObjectPtr<class UTexture2D>             NewParam;                                          // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.FirstTime_NewBang
struct UAthena_Matchmaking_SpecialEventButton_C_FirstTime_NewBang_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.PlayFirstTimeBang
struct UAthena_Matchmaking_SpecialEventButton_C_PlayFirstTimeBang_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.Construct
struct UAthena_Matchmaking_SpecialEventButton_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.PreConstruct
struct UAthena_Matchmaking_SpecialEventButton_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2B (0x2B - 0x0)
// Function Athena_Matchmaking_SpecialEventButton.Athena_Matchmaking_SpecialEventButton_C.ExecuteUbergraph_Athena_Matchmaking_SpecialEventButton
struct UAthena_Matchmaking_SpecialEventButton_C_ExecuteUbergraph_Athena_Matchmaking_SpecialEventButton_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_2;                              // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_3;                              // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6236[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAthena_Matchmaking_GameModeButton_C*  K2Node_DynamicCast_AsAthena_Matchmaking_Game_Mode_Button; // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6237[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default;                             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
