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


// Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.SetBasePanelColor
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                NewColor                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyMatchmakingPlay_C::SetBasePanelColor(const struct FLinearColor& NewColor, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "SetBasePanelColor");

	Params::UAthenaLobbyMatchmakingPlay_C_SetBasePanelColor_Params Parms;

	Parms.NewColor = NewColor;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.RefreshFillText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortMatchmakingContext*     CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetMatchmakingFillText_ReturnValue                      ()

void UAthenaLobbyMatchmakingPlay_C::RefreshFillText(class UFortMatchmakingContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetMatchmakingFillText_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "RefreshFillText");

	Params::UAthenaLobbyMatchmakingPlay_C_RefreshFillText_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetMatchmakingFillText_ReturnValue = CallFunc_GetMatchmakingFillText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnLoaded_7F9C59BE40E65C1C31B0EB98786CDA43
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UClass*                      Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyMatchmakingPlay_C::OnLoaded_7F9C59BE40E65C1C31B0EB98786CDA43(class UClass* Loaded)
{
	static auto Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "OnLoaded_7F9C59BE40E65C1C31B0EB98786CDA43");

	Params::UAthenaLobbyMatchmakingPlay_C_OnLoaded_7F9C59BE40E65C1C31B0EB98786CDA43_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaLobbyMatchmakingPlay_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "Construct");

	Params::UAthenaLobbyMatchmakingPlay_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnAvailablePlaylistsUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLobbyMatchmakingPlay_C::OnAvailablePlaylistsUpdated()
{
	static auto Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "OnAvailablePlaylistsUpdated");

	Params::UAthenaLobbyMatchmakingPlay_C_OnAvailablePlaylistsUpdated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnSetPlayButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        PlayButtonText                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaLobbyMatchmakingPlay_C::OnSetPlayButtonText(class FText& PlayButtonText)
{
	static auto Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "OnSetPlayButtonText");

	Params::UAthenaLobbyMatchmakingPlay_C_OnSetPlayButtonText_Params Parms;

	Parms.PlayButtonText = PlayButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnSetCancelButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        CancelButtonText                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaLobbyMatchmakingPlay_C::OnSetCancelButtonText(class FText& CancelButtonText)
{
	static auto Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "OnSetCancelButtonText");

	Params::UAthenaLobbyMatchmakingPlay_C_OnSetCancelButtonText_Params Parms;

	Parms.CancelButtonText = CancelButtonText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.PlaylistChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPlaylistFrontEndData       NewPlaylist                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        PlaylistCMSOverrideName                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class EFortLobbyType          LobbyType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyMatchmakingPlay_C::PlaylistChanged(struct FPlaylistFrontEndData& NewPlaylist, class FText& PlaylistCMSOverrideName, enum class EFortLobbyType LobbyType)
{
	static auto Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "PlaylistChanged");

	Params::UAthenaLobbyMatchmakingPlay_C_PlaylistChanged_Params Parms;

	Parms.NewPlaylist = NewPlaylist;
	Parms.PlaylistCMSOverrideName = PlaylistCMSOverrideName;
	Parms.LobbyType = LobbyType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.SetSquadFillText
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               InCurrentSquadFill                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyMatchmakingPlay_C::SetSquadFillText(bool InCurrentSquadFill)
{
	static auto Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "SetSquadFillText");

	Params::UAthenaLobbyMatchmakingPlay_C_SetSquadFillText_Params Parms;

	Parms.InCurrentSquadFill = InCurrentSquadFill;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnNewModeViolatorUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShouldShow                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyMatchmakingPlay_C::OnNewModeViolatorUpdated(bool bShouldShow)
{
	static auto Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "OnNewModeViolatorUpdated");

	Params::UAthenaLobbyMatchmakingPlay_C_OnNewModeViolatorUpdated_Params Parms;

	Parms.bShouldShow = bShouldShow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.UpdateCustomViolatorText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ModeName                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        SubText                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UAthenaLobbyMatchmakingPlay_C::UpdateCustomViolatorText(class FText& ModeName, class FText& SubText)
{
	static auto Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "UpdateCustomViolatorText");

	Params::UAthenaLobbyMatchmakingPlay_C_UpdateCustomViolatorText_Params Parms;

	Parms.ModeName = ModeName;
	Parms.SubText = SubText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.Animate
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobbyMatchmakingPlay_C::Animate()
{
	static auto Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "Animate");

	Params::UAthenaLobbyMatchmakingPlay_C_Animate_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnMatchmakingFinishedBlueprint
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlaylistAthena*         Playlist                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyMatchmakingPlay_C::OnMatchmakingFinishedBlueprint(bool bSuccess, class UFortPlaylistAthena* Playlist)
{
	static auto Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "OnMatchmakingFinishedBlueprint");

	Params::UAthenaLobbyMatchmakingPlay_C_OnMatchmakingFinishedBlueprint_Params Parms;

	Parms.bSuccess = bSuccess;
	Parms.Playlist = Playlist;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyMatchmakingPlay_C::BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UAthenaLobbyMatchmakingPlay_C_BndEvt__PlayButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyMatchmakingPlay_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "Tick");

	Params::UAthenaLobbyMatchmakingPlay_C_Tick_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaLobbyMatchmakingPlay_C::OnInitialized()
{
	static auto Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "OnInitialized");

	Params::UAthenaLobbyMatchmakingPlay_C_OnInitialized_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnCrossplayPreferencesChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsCrossplayEnabled                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyMatchmakingPlay_C::OnCrossplayPreferencesChanged(bool IsCrossplayEnabled)
{
	static auto Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "OnCrossplayPreferencesChanged");

	Params::UAthenaLobbyMatchmakingPlay_C_OnCrossplayPreferencesChanged_Params Parms;

	Parms.IsCrossplayEnabled = IsCrossplayEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.ShouldShowMatchmakingDetails
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShow                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyMatchmakingPlay_C::ShouldShowMatchmakingDetails(bool bShow)
{
	static auto Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "ShouldShowMatchmakingDetails");

	Params::UAthenaLobbyMatchmakingPlay_C_ShouldShowMatchmakingDetails_Params Parms;

	Parms.bShow = bShow;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.ExecuteUbergraph_AthenaLobbyMatchmakingPlay
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetLocalPlayerSubsystem_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCMSContext*                 CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNewPlaylistInformationAvailable_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UAthenaMatchmakingPlayButton_C*K2Node_DynamicCast_AsAthena_Matchmaking_Play_Button              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_PlayButtonText                                      (ConstParm)
// class FText                        K2Node_Event_CancelButtonText                                    (ConstParm)
// struct FPlaylistFrontEndData       K2Node_Event_NewPlaylist                                         (ConstParm)
// class FText                        K2Node_Event_PlaylistCMSOverrideName                             (ConstParm)
// enum class EFortLobbyType          K2Node_Event_LobbyType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_InCurrentSquadFill                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bShouldShow                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_ModeName                                            (ConstParm)
// class FText                        K2Node_Event_SubText                                             (ConstParm)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortCrossplayPromptContext* CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortCrossplayPromptContext* CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()
// bool                               K2Node_Event_bSuccess                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPlaylistAthena*         K2Node_Event_Playlist                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_CreateSound2D_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_IsCrossplayEnabled                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsPlaylistLimitedPoolMatchmakingEnabled_ReturnValue     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShow                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_AreModalsActive_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsUser_Widget                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortMatchmakingViolatorStyleTemp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              CallFunc_GetAllActorsWithInterface_OutActors                     (ZeroConstructor, ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_4                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class II_FrontendBackplateMatchmakingInteraction_C>K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_HasMatcmakingInteraction_HasInteraction                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class II_FrontendBackplateMatchmakingInteraction_C>K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction_1(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              CallFunc_GetAllActorsWithInterface_OutActors_1                   (ZeroConstructor, ReferenceParm)
// class AActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class II_FrontendBackplateMatchmakingInteraction_C>K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction_2(ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobbyMatchmakingPlay_C::ExecuteUbergraph_AthenaLobbyMatchmakingPlay(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue_1, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_IsInZone_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, class UCMSContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsNewPlaylistInformationAvailable_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UAthenaMatchmakingPlayButton_C* K2Node_DynamicCast_AsAthena_Matchmaking_Play_Button, bool K2Node_DynamicCast_bSuccess, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess_1, class FText K2Node_Event_PlayButtonText, class FText K2Node_Event_CancelButtonText, const struct FPlaylistFrontEndData& K2Node_Event_NewPlaylist, class FText K2Node_Event_PlaylistCMSOverrideName, enum class EFortLobbyType K2Node_Event_LobbyType, bool K2Node_Event_InCurrentSquadFill, bool CallFunc_TextIsEmpty_ReturnValue, bool K2Node_Event_bShouldShow, class FText K2Node_Event_ModeName, class FText K2Node_Event_SubText, enum class ESlateVisibility Temp_byte_Variable_4, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_5, bool K2Node_SwitchEnum_CmpSuccess, bool Temp_bool_Variable_2, class UFortCrossplayPromptContext* CallFunc_GetContext_ReturnValue_1, class UFortCrossplayPromptContext* CallFunc_GetContext_ReturnValue_2, bool Temp_bool_Variable_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class FText K2Node_Select_Default, bool K2Node_Event_bSuccess, class UFortPlaylistAthena* K2Node_Event_Playlist, enum class ESlateVisibility K2Node_Select_Default_1, class UAudioComponent* CallFunc_CreateSound2D_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool K2Node_CustomEvent_IsCrossplayEnabled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsPlaylistLimitedPoolMatchmakingEnabled_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, bool K2Node_Event_bShow, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_3, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_AreModalsActive_ReturnValue, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, class UClass* K2Node_CustomEvent_Loaded, enum class EFortMatchmakingViolatorStyle Temp_byte_Variable_6, TArray<class AActor*>& CallFunc_GetAllActorsWithInterface_OutActors, class AActor* CallFunc_Array_Get_Item, class UWidget* K2Node_Select_Default_4, TScriptInterface<class II_FrontendBackplateMatchmakingInteraction_C> K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasMatcmakingInteraction_HasInteraction, TScriptInterface<class II_FrontendBackplateMatchmakingInteraction_C> K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAllActorsWithInterface_OutActors_1, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, TScriptInterface<class II_FrontendBackplateMatchmakingInteraction_C> K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction_2, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "ExecuteUbergraph_AthenaLobbyMatchmakingPlay");

	Params::UAthenaLobbyMatchmakingPlay_C_ExecuteUbergraph_AthenaLobbyMatchmakingPlay_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue = CallFunc_GetLocalPlayerSubsystem_ReturnValue;
	Parms.CallFunc_GetLocalPlayerSubsystem_ReturnValue_1 = CallFunc_GetLocalPlayerSubsystem_ReturnValue_1;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue_1 = CallFunc_IsInZone_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsNewPlaylistInformationAvailable_ReturnValue = CallFunc_IsNewPlaylistInformationAvailable_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_DynamicCast_AsAthena_Matchmaking_Play_Button = K2Node_DynamicCast_AsAthena_Matchmaking_Play_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_PlayButtonText = K2Node_Event_PlayButtonText;
	Parms.K2Node_Event_CancelButtonText = K2Node_Event_CancelButtonText;
	Parms.K2Node_Event_NewPlaylist = K2Node_Event_NewPlaylist;
	Parms.K2Node_Event_PlaylistCMSOverrideName = K2Node_Event_PlaylistCMSOverrideName;
	Parms.K2Node_Event_LobbyType = K2Node_Event_LobbyType;
	Parms.K2Node_Event_InCurrentSquadFill = K2Node_Event_InCurrentSquadFill;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Event_bShouldShow = K2Node_Event_bShouldShow;
	Parms.K2Node_Event_ModeName = K2Node_Event_ModeName;
	Parms.K2Node_Event_SubText = K2Node_Event_SubText;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_bSuccess = K2Node_Event_bSuccess;
	Parms.K2Node_Event_Playlist = K2Node_Event_Playlist;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_CreateSound2D_ReturnValue = CallFunc_CreateSound2D_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_CustomEvent_IsCrossplayEnabled = K2Node_CustomEvent_IsCrossplayEnabled;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_IsPlaylistLimitedPoolMatchmakingEnabled_ReturnValue = CallFunc_IsPlaylistLimitedPoolMatchmakingEnabled_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_Event_bShow = K2Node_Event_bShow;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_AreModalsActive_ReturnValue = CallFunc_AreModalsActive_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsUser_Widget = K2Node_ClassDynamicCast_AsUser_Widget;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.CallFunc_GetAllActorsWithInterface_OutActors = CallFunc_GetAllActorsWithInterface_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction = K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_HasMatcmakingInteraction_HasInteraction = CallFunc_HasMatcmakingInteraction_HasInteraction;
	Parms.K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction_1 = K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction_1;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAllActorsWithInterface_OutActors_1 = CallFunc_GetAllActorsWithInterface_OutActors_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction_2 = K2Node_DynamicCast_AsI_Frontend_Backplate_Matchmaking_Interaction_2;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.OnPlaylistChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPlaylistFrontEndData       Playlist_Data                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        Playlist_CMS_Override                                            (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class EFortLobbyType          Lobby_Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobbyMatchmakingPlay_C::OnPlaylistChanged__DelegateSignature(const struct FPlaylistFrontEndData& Playlist_Data, class FText Playlist_CMS_Override, enum class EFortLobbyType Lobby_Type)
{
	static auto Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "OnPlaylistChanged__DelegateSignature");

	Params::UAthenaLobbyMatchmakingPlay_C_OnPlaylistChanged__DelegateSignature_Params Parms;

	Parms.Playlist_Data = Playlist_Data;
	Parms.Playlist_CMS_Override = Playlist_CMS_Override;
	Parms.Lobby_Type = Lobby_Type;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobbyMatchmakingPlay.AthenaLobbyMatchmakingPlay_C.PlaylistsUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobbyMatchmakingPlay_C::PlaylistsUpdated__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaLobbyMatchmakingPlay_C", "PlaylistsUpdated__DelegateSignature");

	Params::UAthenaLobbyMatchmakingPlay_C_PlaylistsUpdated__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
