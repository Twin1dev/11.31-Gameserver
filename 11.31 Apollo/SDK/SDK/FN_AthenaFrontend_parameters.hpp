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
// Function AthenaFrontend.AthenaFrontend_C.PlayTrailer
struct UAthenaFrontend_C_PlayTrailer_Params
{
public:
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NeedSeeTrailerMovie_ReturnValue;          // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6258[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UActivatableMovieWidget_Monolithic_C*  CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LoadStreamingVideo_NoAutoPlay;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6259[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortStreamMediaSource*                CallFunc_LoadStreamingVideo_MediaSource;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function AthenaFrontend.AthenaFrontend_C.InitChatVisibilityButton
struct UAthenaFrontend_C_InitChatVisibilityButton_Params
{
public:
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x240 (0x240 - 0x0)
// Function AthenaFrontend.AthenaFrontend_C.UpdatePttVisibility
struct UAthenaFrontend_C_UpdatePttVisibility_Params
{
public:
	enum class EPTTState                         PTTState;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_625A[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCanPTT_ReturnValue;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_625B[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x18(0x88)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0xA0(0x88)()
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_2;                    // 0x128(0x88)()
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1B3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPTTState                         Temp_byte_Variable;                                // 0x1B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x1B5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_625C[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSlateBrush                           K2Node_Select_Default;                             // 0x1B8(0x88)()
};

// 0x1 (0x1 - 0x0)
// Function AthenaFrontend.AthenaFrontend_C.SetOverlayTitleBarVisibility
struct UAthenaFrontend_C_SetOverlayTitleBarVisibility_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function AthenaFrontend.AthenaFrontend_C.SetChatWidgetVisibility
struct UAthenaFrontend_C_SetChatWidgetVisibility_Params
{
public:
	bool                                         Visible;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_625D[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIFeatureState               CallFunc_GetFeatureState_OutFeatureState;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortUIFeatureStateReason         CallFunc_GetFeatureState_OutReason;                // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaFrontend.AthenaFrontend_C.Finished_414B507840B2E2E707360A8A2E361B46
struct UAthenaFrontend_C_Finished_414B507840B2E2E707360A8A2E361B46_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaFrontend.AthenaFrontend_C.Finished_F2B6CDCF416F4AC924A94193DA4B100B
struct UAthenaFrontend_C_Finished_F2B6CDCF416F4AC924A94193DA4B100B_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaFrontend.AthenaFrontend_C.Loading Screen Changed
struct UAthenaFrontend_C_Loading_Screen_Changed_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x9 (0x9 - 0x0)
// Function AthenaFrontend.AthenaFrontend_C.BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature
struct UAthenaFrontend_C_BndEvt__ButtonToggleChat_K2Node_ComponentBoundEvent_39_CommonSelectedStateChanged__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaFrontend.AthenaFrontend_C.On Can PTT
struct UAthenaFrontend_C_On_Can_PTT_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaFrontend.AthenaFrontend_C.Construct
struct UAthenaFrontend_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaFrontend.AthenaFrontend_C.On Social Import Closed
struct UAthenaFrontend_C_On_Social_Import_Closed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaFrontend.AthenaFrontend_C.OnMovieFinished
struct UAthenaFrontend_C_OnMovieFinished_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaFrontend.AthenaFrontend_C.BndEvt__Button_PTT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
struct UAthenaFrontend_C_BndEvt__Button_PTT_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaFrontend.AthenaFrontend_C.RevisitStartupFlow
struct UAthenaFrontend_C_RevisitStartupFlow_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaFrontend.AthenaFrontend_C.BP_OnActivated
struct UAthenaFrontend_C_BP_OnActivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaFrontend.AthenaFrontend_C.OnCrossplayWidgetDismissed
struct UAthenaFrontend_C_OnCrossplayWidgetDismissed_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaFrontend.AthenaFrontend_C.OnSetFrontendVisibilityMode
struct UAthenaFrontend_C_OnSetFrontendVisibilityMode_Params
{
public:
	enum class EFrontendVisibilityMode           InFrontendVisibilityMode;                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x146 (0x146 - 0x0)
// Function AthenaFrontend.AthenaFrontend_C.ExecuteUbergraph_AthenaFrontend
struct UAthenaFrontend_C_ExecuteUbergraph_AthenaFrontend_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPTTState                         Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPTTState                         Temp_byte_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPTTState                         Temp_byte_Variable_2;                              // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPTTState                         Temp_byte_Variable_3;                              // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue;                   // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue_1;                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_2;                 // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsCurrentlyShowingLoadingScreen_ReturnValue; // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_625E[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue_3;                 // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue_4;                 // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPTTState                         CallFunc_GetPTTState_ReturnValue;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPTTState                         CallFunc_GetPTTState_ReturnValue_1;                // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_625F[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue_5;                 // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_6;                 // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShouldShowSocialImport_ReturnValue;       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESubGame                          CallFunc_GetSubGame_ReturnValue;                   // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6260[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x64(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_6261[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortFrontEndContext*                  CallFunc_GetContext_ReturnValue_7;                 // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortSocialImportPanel*                CallFunc_ShowSocialImport_ReturnValue;             // 0x80(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x88(0x10)(ZeroConstructor, NoDestructor)
	class UAsyncAction_WaitForScriptedActions*   CallFunc_WaitForScriptedAction_ReturnValue;        // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0xA0(0x10)(ZeroConstructor, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_CustomEvent_IsVisible;                      // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6262[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAthenaHUDContext*                     CallFunc_GetContext_ReturnValue_8;                 // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPTTState                         CallFunc_GetPTTState_ReturnValue_2;                // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6263[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_Selected;               // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EPTTState                         K2Node_Select_Default;                             // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6264[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                Temp_class_Variable;                               // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_1;                             // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6265[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                K2Node_Select_Default_1;                           // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6266[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0xFC(0x10)(ZeroConstructor, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0x10C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_CheckForGifts_ReturnValue;                // 0x10D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_1;                              // 0x10E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x10F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortGlobalUIContext*                  CallFunc_GetContext_ReturnValue_9;                 // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_ShowInitialCrossplayDialog_ReturnValue;   // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6267[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortPlayerSurveyDispatcher*           CallFunc_GetPlayerSurveyDispatcher_ReturnValue;    // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x128(0x10)(ZeroConstructor, NoDestructor)
	class UAsyncAction_FortPlayerSurveyDispatcherDisplaySurveys* CallFunc_DisplaySurveys_ReturnValue;               // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShowInitialCrossplayDialog_ReturnValue_1; // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_AttemptToOpenBattlePassTabForNewSeason_ReturnValue; // 0x142(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_ShouldSkipStartupFlow_ReturnValue;        // 0x143(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFrontendVisibilityMode           K2Node_Event_InFrontendVisibilityMode;             // 0x144(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x145(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
