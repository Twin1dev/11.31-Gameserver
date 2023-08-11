#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnLoaded_624287AB42851447B4164286AAD2D464
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlayLegacy_C::OnLoaded_624287AB42851447B4164286AAD2D464(class UClass* Loaded)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "OnLoaded_624287AB42851447B4164286AAD2D464");

	Params::UAthenaMatchmakingPlayLegacy_C_OnLoaded_624287AB42851447B4164286AAD2D464_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlayLegacy_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "Construct");

	Params::UAthenaMatchmakingPlayLegacy_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnAvailablePlaylistsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlayLegacy_C::OnAvailablePlaylistsUpdated()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "OnAvailablePlaylistsUpdated");

	Params::UAthenaMatchmakingPlayLegacy_C_OnAvailablePlaylistsUpdated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnSetPlayButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        PlayButtonText                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaMatchmakingPlayLegacy_C::OnSetPlayButtonText(class FText& PlayButtonText)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "OnSetPlayButtonText");

	Params::UAthenaMatchmakingPlayLegacy_C_OnSetPlayButtonText_Params Parms;

	Parms.PlayButtonText = PlayButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnSetCancelButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        CancelButtonText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaMatchmakingPlayLegacy_C::OnSetCancelButtonText(class FText& CancelButtonText)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "OnSetCancelButtonText");

	Params::UAthenaMatchmakingPlayLegacy_C_OnSetCancelButtonText_Params Parms;

	Parms.CancelButtonText = CancelButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.PlaylistChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPlaylistFrontEndData       NewPlaylist                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        PlaylistCMSOverrideName                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EFortLobbyType          LobbyType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlayLegacy_C::PlaylistChanged(struct FPlaylistFrontEndData& NewPlaylist, class FText& PlaylistCMSOverrideName, enum class EFortLobbyType LobbyType)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "PlaylistChanged");

	Params::UAthenaMatchmakingPlayLegacy_C_PlaylistChanged_Params Parms;

	Parms.NewPlaylist = NewPlaylist;
	Parms.PlaylistCMSOverrideName = PlaylistCMSOverrideName;
	Parms.LobbyType = LobbyType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.SetSquadFillText
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               InCurrentSquadFill                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingPlayLegacy_C::SetSquadFillText(bool InCurrentSquadFill)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "SetSquadFillText");

	Params::UAthenaMatchmakingPlayLegacy_C_SetSquadFillText_Params Parms;

	Parms.InCurrentSquadFill = InCurrentSquadFill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnNewModeViolatorUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShouldShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMatchmakingPlayLegacy_C::OnNewModeViolatorUpdated(bool bShouldShow)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "OnNewModeViolatorUpdated");

	Params::UAthenaMatchmakingPlayLegacy_C_OnNewModeViolatorUpdated_Params Parms;

	Parms.bShouldShow = bShouldShow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.UpdateCustomViolatorText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ModeName                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        SubText                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaMatchmakingPlayLegacy_C::UpdateCustomViolatorText(class FText& ModeName, class FText& SubText)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "UpdateCustomViolatorText");

	Params::UAthenaMatchmakingPlayLegacy_C_UpdateCustomViolatorText_Params Parms;

	Parms.ModeName = ModeName;
	Parms.SubText = SubText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.Animate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlayLegacy_C::Animate()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "Animate");

	Params::UAthenaMatchmakingPlayLegacy_C_Animate_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnMatchmakingFinishedBlueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlaylistAthena*         Playlist                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlayLegacy_C::OnMatchmakingFinishedBlueprint(bool bSuccess, class UFortPlaylistAthena* Playlist)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "OnMatchmakingFinishedBlueprint");

	Params::UAthenaMatchmakingPlayLegacy_C_OnMatchmakingFinishedBlueprint_Params Parms;

	Parms.bSuccess = bSuccess;
	Parms.Playlist = Playlist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlayLegacy_C::BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMatchmakingPlayLegacy_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.ExecuteUbergraph_AthenaMatchmakingPlayLegacy
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_PlayButtonText                                      (ConstParm)
// class FText                        K2Node_Event_CancelButtonText                                    (ConstParm)
// struct FPlaylistFrontEndData       K2Node_Event_NewPlaylist                                         (ConstParm)
// class FText                        K2Node_Event_PlaylistCMSOverrideName                             (ConstParm)
// enum class EFortLobbyType          K2Node_Event_LobbyType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InCurrentSquadFill                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bShouldShow                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaMatchmakingPlayButton_C*K2Node_DynamicCast_AsAthena_Matchmaking_Play_Button              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaMatchmakingModeButton_C*K2Node_DynamicCast_AsAthena_Matchmaking_Mode_Button              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaMatchmakingModeButton_C*K2Node_DynamicCast_AsAthena_Matchmaking_Mode_Button_1            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_ModeName                                            (ConstParm)
// class FText                        K2Node_Event_SubText                                             (ConstParm)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsUser_Widget                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortMatchmakingViolatorStyleTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCMSContext*                 CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNewPlaylistInformationAvailable_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSuccess                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlaylistAthena*         K2Node_Event_Playlist                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlayLegacy_C::ExecuteUbergraph_AthenaMatchmakingPlayLegacy(int32 EntryPoint, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Event_PlayButtonText, class FText K2Node_Event_CancelButtonText, const struct FPlaylistFrontEndData& K2Node_Event_NewPlaylist, class FText K2Node_Event_PlaylistCMSOverrideName, enum class EFortLobbyType K2Node_Event_LobbyType, bool K2Node_Event_InCurrentSquadFill, bool K2Node_Event_bShouldShow, class UAthenaMatchmakingPlayButton_C* K2Node_DynamicCast_AsAthena_Matchmaking_Play_Button, bool K2Node_DynamicCast_bSuccess_1, class UAthenaMatchmakingModeButton_C* K2Node_DynamicCast_AsAthena_Matchmaking_Mode_Button, bool K2Node_DynamicCast_bSuccess_2, class UAthenaMatchmakingModeButton_C* K2Node_DynamicCast_AsAthena_Matchmaking_Mode_Button_1, bool K2Node_DynamicCast_bSuccess_3, class FText K2Node_Event_ModeName, class FText K2Node_Event_SubText, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess, class UClass* K2Node_CustomEvent_Loaded, enum class EFortMatchmakingViolatorStyle Temp_byte_Variable, class UCMSContext* CallFunc_GetContext_ReturnValue, class UWidget* K2Node_Select_Default, bool CallFunc_IsNewPlaylistInformationAvailable_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_Event_bSuccess, class UFortPlaylistAthena* K2Node_Event_Playlist, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "ExecuteUbergraph_AthenaMatchmakingPlayLegacy");

	Params::UAthenaMatchmakingPlayLegacy_C_ExecuteUbergraph_AthenaMatchmakingPlayLegacy_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_PlayButtonText = K2Node_Event_PlayButtonText;
	Parms.K2Node_Event_CancelButtonText = K2Node_Event_CancelButtonText;
	Parms.K2Node_Event_NewPlaylist = K2Node_Event_NewPlaylist;
	Parms.K2Node_Event_PlaylistCMSOverrideName = K2Node_Event_PlaylistCMSOverrideName;
	Parms.K2Node_Event_LobbyType = K2Node_Event_LobbyType;
	Parms.K2Node_Event_InCurrentSquadFill = K2Node_Event_InCurrentSquadFill;
	Parms.K2Node_Event_bShouldShow = K2Node_Event_bShouldShow;
	Parms.K2Node_DynamicCast_AsAthena_Matchmaking_Play_Button = K2Node_DynamicCast_AsAthena_Matchmaking_Play_Button;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsAthena_Matchmaking_Mode_Button = K2Node_DynamicCast_AsAthena_Matchmaking_Mode_Button;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_DynamicCast_AsAthena_Matchmaking_Mode_Button_1 = K2Node_DynamicCast_AsAthena_Matchmaking_Mode_Button_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_Event_ModeName = K2Node_Event_ModeName;
	Parms.K2Node_Event_SubText = K2Node_Event_SubText;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsUser_Widget = K2Node_ClassDynamicCast_AsUser_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsNewPlaylistInformationAvailable_ReturnValue = CallFunc_IsNewPlaylistInformationAvailable_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_bSuccess = K2Node_Event_bSuccess;
	Parms.K2Node_Event_Playlist = K2Node_Event_Playlist;
	Parms.CallFunc_CreateSound2D_ReturnValue = CallFunc_CreateSound2D_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.OnPlaylistChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlaylistFrontEndData       Playlist_Data                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Playlist_CMS_Override                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EFortLobbyType          Lobby_Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMatchmakingPlayLegacy_C::OnPlaylistChanged__DelegateSignature(const struct FPlaylistFrontEndData& Playlist_Data, class FText Playlist_CMS_Override, enum class EFortLobbyType Lobby_Type)
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "OnPlaylistChanged__DelegateSignature");

	Params::UAthenaMatchmakingPlayLegacy_C_OnPlaylistChanged__DelegateSignature_Params Parms;

	Parms.Playlist_Data = Playlist_Data;
	Parms.Playlist_CMS_Override = Playlist_CMS_Override;
	Parms.Lobby_Type = Lobby_Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMatchmakingPlayLegacy.AthenaMatchmakingPlayLegacy_C.PlaylistsUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMatchmakingPlayLegacy_C::PlaylistsUpdated__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaMatchmakingPlayLegacy_C", "PlaylistsUpdated__DelegateSignature");

	Params::UAthenaMatchmakingPlayLegacy_C_PlaylistsUpdated__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
