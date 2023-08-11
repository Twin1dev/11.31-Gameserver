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

// 0x2 (0x2 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Is Performing Transition
struct UAthenaMatchmakingOptionsDisplay_v2_C_Is_Performing_Transition_Params
{
public:
	bool                                         Performing_Transition;                             // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnSpectateMatch
struct UAthenaMatchmakingOptionsDisplay_v2_C_OnSpectateMatch_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61AA[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaSpectateMatchModal_C*           CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetScrollWidget
struct UAthenaMatchmakingOptionsDisplay_v2_C_SetScrollWidget_Params
{
public:
	class UFortUINavigationManager*              CallFunc_GetUINavigationManager_ReturnValue;       // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnCustomMatchmaking
struct UAthenaMatchmakingOptionsDisplay_v2_C_OnCustomMatchmaking_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61AB[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCustomMatchmakingKeyModal_C*          CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.TriggerMatchmakingPageTileOutroAnim
struct UAthenaMatchmakingOptionsDisplay_v2_C_TriggerMatchmakingPageTileOutroAnim_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61AC[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCommonButton*                         CallFunc_GetButtonAtIndex_ReturnValue;             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAthenaMatchmakingTile_C*              K2Node_DynamicCast_AsAthena_Matchmaking_Tile;      // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61AD[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x20(0x10)(ZeroConstructor, NoDestructor)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x30(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x3C (0x3C - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.TriggerMatchmakingPageTileIntroAnim
struct UAthenaMatchmakingOptionsDisplay_v2_C_TriggerMatchmakingPageTileIntroAnim_Params
{
public:
	class UCommonButton*                         CallFunc_GetButtonAtIndex_ReturnValue;             // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61AE[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAthenaMatchmakingTile_C*              K2Node_DynamicCast_AsAthena_Matchmaking_Tile;      // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61AF[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x1C(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_61B0[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x30(0x8)(NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x3B0 (0x3B0 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Touch To Close
struct UAthenaMatchmakingOptionsDisplay_v2_C_Touch_To_Close_Params
{
public:
	struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
	struct FKey                                  CallFunc_PointerEvent_GetEffectingButton_ReturnValue; // 0x160(0x18)(HasGetValueTypeHash)
	bool                                         CallFunc_PointerEvent_IsTouchEvent_ReturnValue;    // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_KeyKey_ReturnValue;            // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable;                                // 0x17A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x17B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61B1[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x180(0xB8)()
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61B2[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x240(0xB8)()
	struct FEventReply                           K2Node_Select_Default;                             // 0x2F8(0xB8)()
};

// 0x1 (0x1 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Handle_InputAction_Cancel
struct UAthenaMatchmakingOptionsDisplay_v2_C_Handle_InputAction_Cancel_Params
{
public:
	bool                                         PassThrough;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetupInput
struct UAthenaMatchmakingOptionsDisplay_v2_C_SetupInput_Params
{
public:
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x20(0x10)(ZeroConstructor, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetSquadFillText
struct UAthenaMatchmakingOptionsDisplay_v2_C_SetSquadFillText_Params
{
public:
	enum class ESquadFillSetting                 InSquadFillSetting;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingOptionsDisplay_v2_C_BndEvt__CancelButton_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnRightPanelOutroFinshed
struct UAthenaMatchmakingOptionsDisplay_v2_C_OnRightPanelOutroFinshed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnBeginIntro
struct UAthenaMatchmakingOptionsDisplay_v2_C_OnBeginIntro_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnRightPanelIntroFinshed
struct UAthenaMatchmakingOptionsDisplay_v2_C_OnRightPanelIntroFinshed_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.RepresentedPlaylistChanged
struct UAthenaMatchmakingOptionsDisplay_v2_C_RepresentedPlaylistChanged_Params
{
public:
	struct FPlaylistFrontEndData                 NewRepresentedPlaylist;                            // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnTileDoubleClicked
struct UAthenaMatchmakingOptionsDisplay_v2_C_OnTileDoubleClicked_Params
{
public:
	class UCommonButton*                         ButtonClicked;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Start Closing Matchmaking Options
struct UAthenaMatchmakingOptionsDisplay_v2_C_Start_Closing_Matchmaking_Options_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.ApplyCMSOverrides
struct UAthenaMatchmakingOptionsDisplay_v2_C_ApplyCMSOverrides_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.BP_OnDeactivated
struct UAthenaMatchmakingOptionsDisplay_v2_C_BP_OnDeactivated_Params
{
public:
};

// 0x2 (0x2 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.UpdateMMButtonStatusBP
struct UAthenaMatchmakingOptionsDisplay_v2_C_UpdateMMButtonStatusBP_Params
{
public:
	bool                                         bPlaylistIsEnabled;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFillDisableReason                FillDisableReason;                                 // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetServerAccessText
struct UAthenaMatchmakingOptionsDisplay_v2_C_SetServerAccessText_Params
{
public:
	enum class EServerAccessSetting              InServerAccessSetting;                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.SetSpectatorButtonText
struct UAthenaMatchmakingOptionsDisplay_v2_C_SetSpectatorButtonText_Params
{
public:
	enum class ESpectatorQueueType               InSpectatorQueueType;                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingOptionsDisplay_v2_C_BndEvt__BacchusCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingOptionsDisplay_v2_C_BndEvt__AcceptButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.BndEvt__SupportAffliateButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingOptionsDisplay_v2_C_BndEvt__SupportAffliateButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.OnAffiliateUpdated
struct UAthenaMatchmakingOptionsDisplay_v2_C_OnAffiliateUpdated_Params
{
public:
	class FString                                AffiliateName;                                     // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.Construct
struct UAthenaMatchmakingOptionsDisplay_v2_C_Construct_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.UpdateShowSupportAffiliateButton
struct UAthenaMatchmakingOptionsDisplay_v2_C_UpdateShowSupportAffiliateButton_Params
{
public:
	bool                                         bIsCreativeLTM;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.On Intro Complete
struct UAthenaMatchmakingOptionsDisplay_v2_C_On_Intro_Complete_Params
{
public:
};

// 0x658 (0x658 - 0x0)
// Function AthenaMatchmakingOptionsDisplay_v2.AthenaMatchmakingOptionsDisplay_v2_C.ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2
struct UAthenaMatchmakingOptionsDisplay_v2_C_ExecuteUbergraph_AthenaMatchmakingOptionsDisplay_v2_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61B3[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  Temp_text_Variable;                                // 0x8(0x18)()
	class FText                                  Temp_text_Variable_1;                              // 0x20(0x18)()
	class FText                                  Temp_text_Variable_2;                              // 0x38(0x18)()
	class FText                                  Temp_text_Variable_3;                              // 0x50(0x18)()
	bool                                         Temp_bool_Variable;                                // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable;                                // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_1;                              // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61B4[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                Temp_class_Variable;                               // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_1;                             // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61B5[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                Temp_class_Variable_2;                             // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                Temp_class_Variable_3;                             // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61B6[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FLinearColor                          Temp_struct_Variable;                              // 0x9C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_1;                            // 0xAC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61B7[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FLinearColor                          Temp_struct_Variable_2;                            // 0xC0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Temp_struct_Variable_3;                            // 0xD0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable_2;                              // 0xE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 Temp_byte_Variable_3;                              // 0xE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61B8[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue;                   // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_6;                              // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsCustomMatchmakingKeyEnabled_ReturnValue; // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_4;                              // 0xF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 K2Node_Select_Default;                             // 0xF3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_5;                              // 0xF4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESquadFillSetting                 Temp_byte_Variable_6;                              // 0xF5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_7;                              // 0xF6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_8;                              // 0xF7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_9;                              // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_10;                             // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61B9[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  Temp_text_Variable_4;                              // 0x100(0x18)()
	class FText                                  Temp_text_Variable_5;                              // 0x118(0x18)()
	enum class EServerAccessSetting              Temp_byte_Variable_7;                              // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_11;                             // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_12;                             // 0x132(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_13;                             // 0x133(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_14;                             // 0x134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_8;                              // 0x135(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_9;                              // 0x136(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_15;                             // 0x137(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EInputActionState                 Temp_byte_Variable_10;                             // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 Temp_byte_Variable_11;                             // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61BA[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortMatchmakingContext*               CallFunc_GetContext_ReturnValue_1;                 // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_16;                             // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_HasBroadcasterToken_ReturnValue;          // 0x149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_12;                             // 0x14A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInputActionState                 K2Node_Select_Default_1;                           // 0x14B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_13;                             // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_17;                             // 0x14D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  Temp_byte_Variable_14;                             // 0x14E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_15;                             // 0x14F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMcpContext*                       CallFunc_GetContext_ReturnValue_2;                 // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetAffiliateName_ReturnValue;             // 0x158(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_2;                           // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61BB[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Len_ReturnValue;                          // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESpectatorQueueType               Temp_byte_Variable_16;                             // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x171(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61BC[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  Temp_text_Variable_6;                              // 0x178(0x18)()
	class FText                                  Temp_text_Variable_7;                              // 0x190(0x18)()
	class FText                                  Temp_text_Variable_8;                              // 0x1A8(0x18)()
	enum class ESquadFillSetting                 K2Node_Event_InSquadFillSetting;                   // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default_3;                           // 0x1C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61BD[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  Temp_text_Variable_9;                              // 0x1C8(0x18)()
	class FText                                  Temp_text_Variable_10;                             // 0x1E0(0x18)()
	class FText                                  Temp_text_Variable_11;                             // 0x1F8(0x18)()
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_3;               // 0x210(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x218(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x228(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x238(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x248(0x10)(ZeroConstructor, NoDestructor)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x258(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x260(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue_1;        // 0x268(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FPlaylistFrontEndData                 K2Node_Event_NewRepresentedPlaylist;               // 0x270(0x28)(ConstParm)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue_1;              // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61BE[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue;         // 0x2A8(0x88)()
	struct FSlateBrush                           CallFunc_MakeBrushFromTexture_ReturnValue_1;       // 0x330(0x88)()
	class FText                                  CallFunc_TextToUpper_ReturnValue;                  // 0x3B8(0x18)()
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61BF[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue_1;                // 0x3D8(0x18)()
	class UCommonButton*                         K2Node_Event_ButtonClicked;                        // 0x3F0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61C0[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x400(0x18)()
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61C1[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Len_ReturnValue_1;                        // 0x41C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_4;                           // 0x421(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61C2[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Len_ReturnValue_2;                        // 0x424(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x428(0x18)()
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61C3[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        CallFunc_Len_ReturnValue_3;                        // 0x444(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x448(0x18)()
	bool                                         CallFunc_Greater_IntInt_ReturnValue_3;             // 0x460(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61C4[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  CallFunc_TextToUpper_ReturnValue_2;                // 0x468(0x18)()
	class FText                                  Temp_text_Variable_12;                             // 0x480(0x18)()
	class FText                                  Temp_text_Variable_13;                             // 0x498(0x18)()
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x4B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61C5[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x4B8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x4C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bPlaylistIsEnabled;                   // 0x4C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFillDisableReason                K2Node_Event_FillDisableReason;                    // 0x4C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x4C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue_1;          // 0x4C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_5;                           // 0x4C6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_6;                           // 0x4C7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_Select_Default_7;                           // 0x4C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_Select_Default_8;                           // 0x4D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_Select_Default_9;                           // 0x4D8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x4E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61C6[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FLinearColor                          K2Node_Select_Default_10;                          // 0x4EC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x4FC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFillDisableReason                Temp_byte_Variable_17;                             // 0x4FD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61C7[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  K2Node_Select_Default_11;                          // 0x500(0x18)()
	class UWidget*                               Temp_object_Variable;                              // 0x518(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMatchmakingTileStyle         Temp_byte_Variable_18;                             // 0x520(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61C8[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UWidget*                               K2Node_Select_Default_12;                          // 0x528(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_19;                             // 0x530(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_20;                             // 0x531(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_18;                             // 0x532(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_13;                          // 0x533(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_21;                             // 0x534(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_22;                             // 0x535(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EServerAccessSetting              K2Node_Event_InServerAccessSetting;                // 0x536(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x537(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Select_Default_14;                          // 0x538(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61C9[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  K2Node_Select_Default_15;                          // 0x540(0x18)()
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button_1;           // 0x558(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x560(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_19;                             // 0x561(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_16;                          // 0x562(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  Temp_byte_Variable_23;                             // 0x563(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61CA[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button_2;           // 0x568(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESpectatorQueueType               K2Node_Event_InSpectatorQueueType;                 // 0x571(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x572(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61CB[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  K2Node_Select_Default_17;                          // 0x578(0x18)()
	enum class ESlateVisibility                  Temp_byte_Variable_24;                             // 0x590(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61CC[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_2;               // 0x598(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Handle_InputAction_Cancel_PassThrough;    // 0x5A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x5A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61CD[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button_1;               // 0x5A8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  K2Node_Select_Default_18;                          // 0x5B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61CE[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0x5B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x5C0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x5C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Len_ReturnValue_4;                        // 0x5D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_61CF[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UAffiliateKeyModal_C*                  CallFunc_Create_ReturnValue;                       // 0x5D8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_4;             // 0x5E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x5E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61D0[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                K2Node_Event_AffiliateName;                        // 0x5E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x5F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue_1;          // 0x600(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_20;                             // 0x608(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x609(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class ESlateVisibility                  K2Node_Select_Default_19;                          // 0x60A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x60B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61D2[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue_2;          // 0x610(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bIsCreativeLTM;                       // 0x618(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x619(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x61A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsMobileGame_ReturnValue_1;               // 0x61B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61D3[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  Temp_text_Variable_14;                             // 0x620(0x18)()
	bool                                         Temp_bool_Variable_21;                             // 0x638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Is_Performing_Transition_Performing_Transition; // 0x639(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61D4[0x6];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  K2Node_Select_Default_20;                          // 0x640(0x18)()
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
