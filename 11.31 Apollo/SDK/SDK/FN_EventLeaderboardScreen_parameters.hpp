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

// 0x20 (0x20 - 0x0)
// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Init
struct UEventLeaderboardScreen_C_Init_Params
{
public:
	class FString                                EventWindowId;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                TournamentSeriesId;                                // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UEventLeaderboardScreen_C_BndEvt__Button_Back2_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x170 (0x170 - 0x0)
// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventColorize
struct UEventLeaderboardScreen_C_EventColorize_Params
{
public:
	struct FFortTournamentDisplayInfo            TournamentDisplayInfo;                             // 0x0(0x170)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x0 (0x0 - 0x0)
// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventIntro
struct UEventLeaderboardScreen_C_EventIntro_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardEntrySelected
struct UEventLeaderboardScreen_C_OnLeaderboardEntrySelected_Params
{
public:
	class UFortEventLeaderboardEntryData*        EntryData;                                         // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardPageRequestComplete
struct UEventLeaderboardScreen_C_OnLeaderboardPageRequestComplete_Params
{
public:
	int32                                        EntryCount;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function EventLeaderboardScreen.EventLeaderboardScreen_C.OnLeaderboardPageRequested
struct UEventLeaderboardScreen_C_OnLeaderboardPageRequested_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__ListView_LeaderboardEntries_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature
struct UEventLeaderboardScreen_C_BndEvt__ListView_LeaderboardEntries_K2Node_ComponentBoundEvent_2_SimpleListItemEventDynamic__DelegateSignature_Params
{
public:
	class UObject*                               Item;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Event Leaderboard Screen On Activated
struct UEventLeaderboardScreen_C_Event_Leaderboard_Screen_On_Activated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function EventLeaderboardScreen.EventLeaderboardScreen_C.Construct
struct UEventLeaderboardScreen_C_Construct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function EventLeaderboardScreen.EventLeaderboardScreen_C.ShowMyStats
struct UEventLeaderboardScreen_C_ShowMyStats_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UEventLeaderboardScreen_C_BndEvt__LiveGames_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function EventLeaderboardScreen.EventLeaderboardScreen_C.BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
struct UEventLeaderboardScreen_C_BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x204 (0x204 - 0x0)
// Function EventLeaderboardScreen.EventLeaderboardScreen_C.ExecuteUbergraph_EventLeaderboardScreen
struct UEventLeaderboardScreen_C_ExecuteUbergraph_EventLeaderboardScreen_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6550[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6551[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_2;               // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortTournamentDisplayInfo            K2Node_CustomEvent_TournamentDisplayInfo;          // 0x20(0x170)()
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x190(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6552[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1A4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_6553[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortEventLeaderboardEntryData*        K2Node_Event_EntryData;                            // 0x1B8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Event_EntryCount;                           // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6554[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UObject*                               K2Node_ComponentBoundEvent_Item;                   // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortEventLeaderboardEntryData*        K2Node_DynamicCast_AsFort_Event_Leaderboard_Entry_Data; // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x1D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6555[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               K2Node_Select_Default;                             // 0x1E0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_CustomEvent_Button;                         // 0x1E8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortEventLeaderboardEntryData*        CallFunc_GetMyLeaderboardEntry_ReturnValue;        // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_1;               // 0x1F8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsUsingTouch_ReturnValue;                 // 0x201(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x202(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_1;                           // 0x203(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventViewLiveGames__DelegateSignature
struct UEventLeaderboardScreen_C_EventViewLiveGames__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function EventLeaderboardScreen.EventLeaderboardScreen_C.EventCloseButton__DelegateSignature
struct UEventLeaderboardScreen_C_EventCloseButton__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
