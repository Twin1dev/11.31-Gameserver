#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnLoaded_624287AB42851447B4164286AAD2D464
struct UAthenaMatchmakingPlayLegacy_C_OnLoaded_624287AB42851447B4164286AAD2D464_Params
{
public:
	class UClass*                                Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnSetPlayButtonText
struct UAthenaMatchmakingPlayLegacy_C_OnSetPlayButtonText_Params
{
public:
	class FText                                  PlayButtonText;                                    // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnSetCancelButtonText
struct UAthenaMatchmakingPlayLegacy_C_OnSetCancelButtonText_Params
{
public:
	class FText                                  CancelButtonText;                                  // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x41 (0x41 - 0x0)
// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.PlaylistChanged
struct UAthenaMatchmakingPlayLegacy_C_PlaylistChanged_Params
{
public:
	struct FPlaylistFrontEndData                 NewPlaylist;                                       // 0x0(0x28)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  PlaylistCMSOverrideName;                           // 0x28(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	enum class EFortLobbyType                    LobbyType;                                         // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.SetSquadFillText
struct UAthenaMatchmakingPlayLegacy_C_SetSquadFillText_Params
{
public:
	bool                                         InCurrentSquadFill;                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnNewModeViolatorUpdated
struct UAthenaMatchmakingPlayLegacy_C_OnNewModeViolatorUpdated_Params
{
public:
	bool                                         bShouldShow;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.UpdateCustomViolatorText
struct UAthenaMatchmakingPlayLegacy_C_UpdateCustomViolatorText_Params
{
public:
	class FText                                  ModeName;                                          // 0x0(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class FText                                  SubText;                                           // 0x18(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x10 (0x10 - 0x0)
// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnMatchmakingFinishedBlueprint
struct UAthenaMatchmakingPlayLegacy_C_OnMatchmakingFinishedBlueprint_Params
{
public:
	bool                                         bSuccess;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6667[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPlaylistAthena*                   Playlist;                                          // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
struct UAthenaMatchmakingPlayLegacy_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params
{
public:
	class UCommonButton*                         Button;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x190 (0x190 - 0x0)
// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.ExecuteUbergraph_AthenaMatchmakingPlayLegacy
struct UAthenaMatchmakingPlayLegacy_C_ExecuteUbergraph_AthenaMatchmakingPlayLegacy_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_667E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UIconTextButton_C*                     K2Node_DynamicCast_AsIcon_Text_Button;             // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_667F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_PlayButtonText;                       // 0x18(0x18)(ConstParm)
	class FText                                  K2Node_Event_CancelButtonText;                     // 0x30(0x18)(ConstParm)
	struct FPlaylistFrontEndData                 K2Node_Event_NewPlaylist;                          // 0x48(0x28)(ConstParm)
	class FText                                  K2Node_Event_PlaylistCMSOverrideName;              // 0x70(0x18)(ConstParm)
	enum class EFortLobbyType                    K2Node_Event_LobbyType;                            // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_InCurrentSquadFill;                   // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_Event_bShouldShow;                          // 0x8A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6680[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaMatchmakingPlayButton_C*        K2Node_DynamicCast_AsAthena_Matchmaking_Play_Button; // 0x90(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6681[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaMatchmakingModeButton_C*        K2Node_DynamicCast_AsAthena_Matchmaking_Mode_Button; // 0xA0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6682[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAthenaMatchmakingModeButton_C*        K2Node_DynamicCast_AsAthena_Matchmaking_Mode_Button_1; // 0xB0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6683[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  K2Node_Event_ModeName;                             // 0xC0(0x18)(ConstParm)
	class FText                                  K2Node_Event_SubText;                              // 0xD8(0x18)(ConstParm)
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortRuntimeOptions*                   CallFunc_GetRuntimeOptions_ReturnValue;            // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6684[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                Temp_class_Variable;                               // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                K2Node_ClassDynamicCast_AsUser_Widget;             // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ClassDynamicCast_bSuccess;                  // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6685[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                K2Node_CustomEvent_Loaded;                         // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortMatchmakingViolatorStyle     Temp_byte_Variable;                                // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6686[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UCMSContext*                           CallFunc_GetContext_ReturnValue;                   // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               K2Node_Select_Default;                             // 0x138(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsNewPlaylistInformationAvailable_ReturnValue; // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6687[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x144(0x10)(ZeroConstructor, NoDestructor)
	UDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x154(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_6688[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x168(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bSuccess;                             // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6689[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UFortPlaylistAthena*                   K2Node_Event_Playlist;                             // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_CreateSound2D_ReturnValue;                // 0x180(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCommonButton*                         K2Node_ComponentBoundEvent_Button;                 // 0x188(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x41 (0x41 - 0x0)
// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnPlaylistChanged__DelegateSignature
struct UAthenaMatchmakingPlayLegacy_C_OnPlaylistChanged__DelegateSignature_Params
{
public:
	struct FPlaylistFrontEndData                 Playlist_Data;                                     // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	class FText                                  Playlist_CMS_Override;                             // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class EFortLobbyType                    Lobby_Type;                                        // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


