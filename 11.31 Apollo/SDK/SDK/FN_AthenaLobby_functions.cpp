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


// Function AthenaLobby.AthenaLobby_C.HandleLobbyColorSchemeChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                NewColorScheme                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               UseDefaultScheme                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaLobbyMatchmakingPlay_C*K2Node_DynamicCast_AsAthena_Lobby_Matchmaking_Play               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::HandleLobbyColorSchemeChange(const struct FLinearColor& NewColorScheme, bool UseDefaultScheme, const struct FLinearColor& Temp_struct_Variable, class UAthenaLobbyMatchmakingPlay_C* K2Node_DynamicCast_AsAthena_Lobby_Matchmaking_Play, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, const struct FLinearColor& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "HandleLobbyColorSchemeChange");

	Params::UAthenaLobby_C_HandleLobbyColorSchemeChange_Params Parms;

	Parms.NewColorScheme = NewColorScheme;
	Parms.UseDefaultScheme = UseDefaultScheme;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_DynamicCast_AsAthena_Lobby_Matchmaking_Play = K2Node_DynamicCast_AsAthena_Lobby_Matchmaking_Play;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.ConfigureGenericLinkButton
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// TScriptInterface<class IFortClientAnnouncement_TutorialInterface>K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetLobbyGenericLinkButtonOverrideText_ReturnValue       ()
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()

void UAthenaLobby_C::ConfigureGenericLinkButton(bool Temp_bool_Variable, class FText Temp_text_Variable, TScriptInterface<class IFortClientAnnouncement_TutorialInterface> K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface, bool K2Node_DynamicCast_bSuccess, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class FText CallFunc_GetLobbyGenericLinkButtonOverrideText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "ConfigureGenericLinkButton");

	Params::UAthenaLobby_C_ConfigureGenericLinkButton_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface = K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_GetLobbyGenericLinkButtonOverrideText_ReturnValue = CallFunc_GetLobbyGenericLinkButtonOverrideText_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.ShowPicker
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortPickerMode         Mode                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InitialOption                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IgnoreFirstAccept                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaFrontEndRadialPicker_C*K2Node_DynamicCast_AsAthena_Front_End_Radial_Picker              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::ShowPicker(enum class EFortPickerMode Mode, int32 InitialOption, bool IgnoreFirstAccept, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UAthenaFrontEndRadialPicker_C* K2Node_DynamicCast_AsAthena_Front_End_Radial_Picker, bool K2Node_DynamicCast_bSuccess, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "ShowPicker");

	Params::UAthenaLobby_C_ShowPicker_Params Parms;

	Parms.Mode = Mode;
	Parms.InitialOption = InitialOption;
	Parms.IgnoreFirstAccept = IgnoreFirstAccept;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_DynamicCast_AsAthena_Front_End_Radial_Picker = K2Node_DynamicCast_AsAthena_Front_End_Radial_Picker;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.StartAthenaLobbyMusic
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class AFort_Entry_Music_Controller_BP_C*>CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// class AFort_Entry_Music_Controller_BP_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::StartAthenaLobbyMusic(TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "StartAthenaLobbyMusic");

	Params::UAthenaLobby_C_StartAthenaLobbyMusic_Params Parms;

	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnFailure_DA5E62624D068772EA890193344BA4AE
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobby_C::OnFailure_DA5E62624D068772EA890193344BA4AE()
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnFailure_DA5E62624D068772EA890193344BA4AE");

	Params::UAthenaLobby_C_OnFailure_DA5E62624D068772EA890193344BA4AE_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnSuccess_DA5E62624D068772EA890193344BA4AE
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobby_C::OnSuccess_DA5E62624D068772EA890193344BA4AE()
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnSuccess_DA5E62624D068772EA890193344BA4AE");

	Params::UAthenaLobby_C_OnSuccess_DA5E62624D068772EA890193344BA4AE_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnComplete_CDEE9407403C60D364D45989D2D2A8CE
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::OnComplete_CDEE9407403C60D364D45989D2D2A8CE(class UUserWidget* UserWidget)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnComplete_CDEE9407403C60D364D45989D2D2A8CE");

	Params::UAthenaLobby_C_OnComplete_CDEE9407403C60D364D45989D2D2A8CE_Params Parms;

	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature");

	Params::UAthenaLobby_C_BndEvt__ShadowPlayHighlights_K2Node_ComponentBoundEvent_116_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaLobby_C::Destruct()
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "Destruct");

	Params::UAthenaLobby_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaLobby_C::Construct()
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "Construct");

	Params::UAthenaLobby_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.ShowMobileAutoFireScreen
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLobby_C::ShowMobileAutoFireScreen()
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "ShowMobileAutoFireScreen");

	Params::UAthenaLobby_C_ShowMobileAutoFireScreen_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLobby_C::BP_OnDeactivated()
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "BP_OnDeactivated");

	Params::UAthenaLobby_C_BP_OnDeactivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.DisplayStoreUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UStoreToastRequest*          StoreUpdatedRequest                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::DisplayStoreUpdated(class UStoreToastRequest* StoreUpdatedRequest)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "DisplayStoreUpdated");

	Params::UAthenaLobby_C_DisplayStoreUpdated_Params Parms;

	Parms.StoreUpdatedRequest = StoreUpdatedRequest;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLobby_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "BP_OnActivated");

	Params::UAthenaLobby_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.AttemptToShowToast
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobby_C::AttemptToShowToast()
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "AttemptToShowToast");

	Params::UAthenaLobby_C_AttemptToShowToast_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.TryToastAgainNextFrame
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLobby_C::TryToastAgainNextFrame()
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "TryToastAgainNextFrame");

	Params::UAthenaLobby_C_TryToastAgainNextFrame_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaLobby_C::BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature()
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature");

	Params::UAthenaLobby_C_BndEvt__StoreToastWidget_K2Node_ComponentBoundEvent_2_OnFinishedToast__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.OnPlaylistChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortLobbyType          LobbyType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylistAthena*         PlaylistData                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::OnPlaylistChanged(enum class EFortLobbyType LobbyType, class UFortPlaylistAthena* PlaylistData)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "OnPlaylistChanged");

	Params::UAthenaLobby_C_OnPlaylistChanged_Params Parms;

	Parms.LobbyType = LobbyType;
	Parms.PlaylistData = PlaylistData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.DisplayGlyphQuestUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewGlyphs                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLobby_C::DisplayGlyphQuestUpdated(int32 NewGlyphs)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "DisplayGlyphQuestUpdated");

	Params::UAthenaLobby_C_DisplayGlyphQuestUpdated_Params Parms;

	Parms.NewGlyphs = NewGlyphs;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLobby.AthenaLobby_C.ExecuteUbergraph_AthenaLobby
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UFortPickerContext*          CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// enum class EFortLobbyType          Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortLobbyType          Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortQuestManager*           CallFunc_GetQuestManager_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UFortAsyncAction_EnsureClientQuestLogin*CallFunc_SendEnsureClientQuestLogin_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_CustomEvent_UserWidget                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolFireModePanel_C*K2Node_DynamicCast_AsHUDLayout_Tool_Fire_Mode_Panel              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortFrontEndContext*        CallFunc_GetContext_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UStoreToastRequest*          K2Node_Event_StoreUpdatedRequest                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldBeginRequest_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FStoreCallout               CallFunc_GetToast_ReturnValue                                    ()
// bool                               CallFunc_IsRequestReady_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActivated_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// enum class EFortLobbyType          K2Node_Event_LobbyType                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylistAthena*         K2Node_Event_PlaylistData                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaMatchmakingPlayLegacy_C*K2Node_DynamicCast_AsAthena_Matchmaking_Play_Legacy              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// int32                              K2Node_Event_NewGlyphs                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Select_Default_2                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CreateWidgetAsync*CallFunc_CreateWidgetAsync_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLobby_C::ExecuteUbergraph_AthenaLobby(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPickerContext* CallFunc_GetContext_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, enum class EFortLobbyType Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class EFortLobbyType Temp_byte_Variable_5, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortAsyncAction_EnsureClientQuestLogin* CallFunc_SendEnsureClientQuestLogin_ReturnValue, class UUserWidget* K2Node_CustomEvent_UserWidget, bool CallFunc_IsValid_ReturnValue, class UUserWidget* Temp_object_Variable, class UHUDLayoutToolFireModePanel_C* K2Node_DynamicCast_AsHUDLayout_Tool_Fire_Mode_Panel, bool K2Node_DynamicCast_bSuccess, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsBROnly_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_BooleanAND_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_3, bool Temp_bool_Variable, const struct FMargin& K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_1, class UStoreToastRequest* K2Node_Event_StoreUpdatedRequest, bool CallFunc_ShouldBeginRequest_ReturnValue, const struct FStoreCallout& CallFunc_GetToast_ReturnValue, bool CallFunc_IsRequestReady_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsActivated_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class EFortLobbyType K2Node_Event_LobbyType, class UFortPlaylistAthena* K2Node_Event_PlaylistData, enum class ESlateVisibility K2Node_Select_Default_1, bool K2Node_SwitchEnum_CmpSuccess, class UAthenaMatchmakingPlayLegacy_C* K2Node_DynamicCast_AsAthena_Matchmaking_Play_Legacy, bool K2Node_DynamicCast_bSuccess_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 K2Node_Event_NewGlyphs, class UWidget* K2Node_Select_Default_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, bool CallFunc_IsValid_ReturnValue_3)
{
	static auto Func = Class->GetFunction("AthenaLobby_C", "ExecuteUbergraph_AthenaLobby");

	Params::UAthenaLobby_C_ExecuteUbergraph_AthenaLobby_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.CallFunc_GetQuestManager_ReturnValue = CallFunc_GetQuestManager_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_SendEnsureClientQuestLogin_ReturnValue = CallFunc_SendEnsureClientQuestLogin_ReturnValue;
	Parms.K2Node_CustomEvent_UserWidget = K2Node_CustomEvent_UserWidget;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsHUDLayout_Tool_Fire_Mode_Panel = K2Node_DynamicCast_AsHUDLayout_Tool_Fire_Mode_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_MakeStruct_Margin_1 = K2Node_MakeStruct_Margin_1;
	Parms.CallFunc_GetContext_ReturnValue_3 = CallFunc_GetContext_ReturnValue_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_Event_StoreUpdatedRequest = K2Node_Event_StoreUpdatedRequest;
	Parms.CallFunc_ShouldBeginRequest_ReturnValue = CallFunc_ShouldBeginRequest_ReturnValue;
	Parms.CallFunc_GetToast_ReturnValue = CallFunc_GetToast_ReturnValue;
	Parms.CallFunc_IsRequestReady_ReturnValue = CallFunc_IsRequestReady_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsActivated_ReturnValue = CallFunc_IsActivated_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_Event_LobbyType = K2Node_Event_LobbyType;
	Parms.K2Node_Event_PlaylistData = K2Node_Event_PlaylistData;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsAthena_Matchmaking_Play_Legacy = K2Node_DynamicCast_AsAthena_Matchmaking_Play_Legacy;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_Event_NewGlyphs = K2Node_Event_NewGlyphs;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_CreateWidgetAsync_ReturnValue = CallFunc_CreateWidgetAsync_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
