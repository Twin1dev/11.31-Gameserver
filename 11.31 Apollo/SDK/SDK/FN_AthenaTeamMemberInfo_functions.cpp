#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaTeamMemberInfo.AthenaTeamMemberInfo_C
// (None)

class UClass* UAthenaTeamMemberInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaTeamMemberInfo_C");

	return Clss;
}


// AthenaTeamMemberInfo_C AthenaTeamMemberInfo.Default__AthenaTeamMemberInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaTeamMemberInfo_C* UAthenaTeamMemberInfo_C::GetDefaultObj()
{
	static class UAthenaTeamMemberInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaTeamMemberInfo_C*>(UAthenaTeamMemberInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetTalking
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewTalking                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SetTalking(bool NewTalking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetTalking");

	Params::UAthenaTeamMemberInfo_C_SetTalking_Params Parms{};

	Parms.NewTalking = NewTalking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.UpdateMicIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberInfo_C::UpdateMicIcon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "UpdateMicIcon");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetMuted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewMuted                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SetMuted(bool NewMuted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetMuted");

	Params::UAthenaTeamMemberInfo_C_SetMuted_Params Parms{};

	Parms.NewMuted = NewMuted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetReviving
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Reviving                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaTeamMemberDBNOState_C*K2Node_DynamicCast_AsAthena_Team_Member_DBNOState                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SetReviving(bool Reviving, class UAthenaTeamMemberDBNOState_C* K2Node_DynamicCast_AsAthena_Team_Member_DBNOState, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetReviving");

	Params::UAthenaTeamMemberInfo_C_SetReviving_Params Parms{};

	Parms.Reviving = Reviving;
	Parms.K2Node_DynamicCast_AsAthena_Team_Member_DBNOState = K2Node_DynamicCast_AsAthena_Team_Member_DBNOState;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetDBNO
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               DBNO                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaTeamMemberDBNOState_C*K2Node_DynamicCast_AsAthena_Team_Member_DBNOState                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::SetDBNO(bool DBNO, class UAthenaTeamMemberDBNOState_C* K2Node_DynamicCast_AsAthena_Team_Member_DBNOState, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetDBNO");

	Params::UAthenaTeamMemberInfo_C_SetDBNO_Params Parms{};

	Parms.DBNO = DBNO;
	Parms.K2Node_DynamicCast_AsAthena_Team_Member_DBNOState = K2Node_DynamicCast_AsAthena_Team_Member_DBNOState;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.OnResurrectionStateChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortResurrectionUIData     ResurrectionStateData                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UAthenaTeamMemberInfo_C::OnResurrectionStateChanged(struct FFortResurrectionUIData& ResurrectionStateData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "OnResurrectionStateChanged");

	Params::UAthenaTeamMemberInfo_C_OnResurrectionStateChanged_Params Parms{};

	Parms.ResurrectionStateData = ResurrectionStateData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.OnPlaylistExtensionWidgetCreated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::OnPlaylistExtensionWidgetCreated(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "OnPlaylistExtensionWidgetCreated");

	Params::UAthenaTeamMemberInfo_C_OnPlaylistExtensionWidgetCreated_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Event ShowBG
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShowBackground                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::Event_ShowBG(bool ShowBackground)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "Event ShowBG");

	Params::UAthenaTeamMemberInfo_C_Event_ShowBG_Params Parms{};

	Parms.ShowBackground = ShowBackground;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.TalkingStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PS                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bTalking                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::TalkingStateChanged(class AFortPlayerStateAthena* PS, bool bTalking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "TalkingStateChanged");

	Params::UAthenaTeamMemberInfo_C_TalkingStateChanged_Params Parms{};

	Parms.PS = PS;
	Parms.bTalking = bTalking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.EventPulse
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberInfo_C::EventPulse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "EventPulse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.OnGameModeIconChange
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PS                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  NewGameModeIcon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::OnGameModeIconChange(class AFortPlayerStateAthena* PS, class UTexture2D* NewGameModeIcon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "OnGameModeIconChange");

	Params::UAthenaTeamMemberInfo_C_OnGameModeIconChange_Params Parms{};

	Parms.PS = PS;
	Parms.NewGameModeIcon = NewGameModeIcon;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.MutedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PS                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Muted                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::MutedStateChanged(class AFortPlayerStateAthena* PS, bool Muted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "MutedStateChanged");

	Params::UAthenaTeamMemberInfo_C_MutedStateChanged_Params Parms{};

	Parms.PS = PS;
	Parms.Muted = Muted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.EventDangerPulse
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberInfo_C::EventDangerPulse()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "EventDangerPulse");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.BeingRevivedStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PS                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bReviving                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::BeingRevivedStateChanged(class AFortPlayerStateAthena* PS, bool bReviving)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "BeingRevivedStateChanged");

	Params::UAthenaTeamMemberInfo_C_BeingRevivedStateChanged_Params Parms{};

	Parms.PS = PS;
	Parms.bReviving = bReviving;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.OnTalkingStateStartedOrEnded
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsTalking                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::OnTalkingStateStartedOrEnded(bool bIsTalking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "OnTalkingStateStartedOrEnded");

	Params::UAthenaTeamMemberInfo_C_OnTalkingStateStartedOrEnded_Params Parms{};

	Parms.bIsTalking = bIsTalking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DoFlash
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberInfo_C::DoFlash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "DoFlash");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ClearDBNOFlashing
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaTeamMemberInfo_C::ClearDBNOFlashing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "ClearDBNOFlashing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.DBNOStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class AFortPlayerStateAthena*      PS                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bDBNO                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaTeamMemberInfo_C::DBNOStateChanged(class AFortPlayerStateAthena* PS, bool bDBNO)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "DBNOStateChanged");

	Params::UAthenaTeamMemberInfo_C_DBNOStateChanged_Params Parms{};

	Parms.PS = PS;
	Parms.bDBNO = bDBNO;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.SetPlayerName
// (Event, Protected, BlueprintEvent)
// Parameters:
// class FString                      PlayerName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// int32                              Level                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaTeamMemberInfo_C::SetPlayerName(const class FString& PlayerName, int32 Level)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "SetPlayerName");

	Params::UAthenaTeamMemberInfo_C_SetPlayerName_Params Parms{};

	Parms.PlayerName = PlayerName;
	Parms.Level = Level;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaTeamMemberInfo.AthenaTeamMemberInfo_C.ExecuteUbergraph_AthenaTeamMemberInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortResurrectionUIData     K2Node_Event_ResurrectionStateData                               (ConstParm, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_showBackground                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateAthena*      K2Node_Event_PS_4                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bTalking                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateAthena*      K2Node_Event_PS_3                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_Event_NewGameModeIcon                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_BoolToFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateAthena*      K2Node_Event_PS_2                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Muted                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateAthena*      K2Node_Event_PS_1                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bReviving                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsTalking                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_MakeStruct_LinearColor_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldDBNOTeamInfoFlash_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldDBNOTeamInfoFlash_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortPlayerStateAthena*      K2Node_Event_PS                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bDBNO                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AGameStateBase*              CallFunc_GetGameState_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AFortGameStateAthena*        K2Node_DynamicCast_AsFort_Game_State_Athena_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsStormCN_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      K2Node_Event_PlayerName                                          (ZeroConstructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Level                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UAthenaTeamMemberInfo_C::ExecuteUbergraph_AthenaTeamMemberInfo(int32 EntryPoint, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FFortResurrectionUIData& K2Node_Event_ResurrectionStateData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Variable, class UUserWidget* K2Node_Event_Widget, bool K2Node_CustomEvent_showBackground, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FLinearColor& K2Node_Select_Default, class AFortPlayerStateAthena* K2Node_Event_PS_4, bool K2Node_Event_bTalking, int32 Temp_int_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class AFortPlayerStateAthena* K2Node_Event_PS_3, class UTexture2D* K2Node_Event_NewGameModeIcon, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, class AFortPlayerStateAthena* K2Node_Event_PS_2, bool K2Node_Event_Muted, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class AFortPlayerStateAthena* K2Node_Event_PS_1, bool K2Node_Event_bReviving, bool K2Node_Event_bIsTalking, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, const struct FLinearColor& K2Node_Select_Default_1, bool Temp_bool_Variable_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 K2Node_Select_Default_2, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ShouldDBNOTeamInfoFlash_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ShouldDBNOTeamInfoFlash_ReturnValue_1, class AFortPlayerStateAthena* K2Node_Event_PS, bool K2Node_Event_bDBNO, class AGameStateBase* CallFunc_GetGameState_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsStormCN_ReturnValue, const class FString& K2Node_Event_PlayerName, int32 K2Node_Event_Level, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaTeamMemberInfo_C", "ExecuteUbergraph_AthenaTeamMemberInfo");

	Params::UAthenaTeamMemberInfo_C_ExecuteUbergraph_AthenaTeamMemberInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Event_ResurrectionStateData = K2Node_Event_ResurrectionStateData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.K2Node_CustomEvent_showBackground = K2Node_CustomEvent_showBackground;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_PS_4 = K2Node_Event_PS_4;
	Parms.K2Node_Event_bTalking = K2Node_Event_bTalking;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_Event_PS_3 = K2Node_Event_PS_3;
	Parms.K2Node_Event_NewGameModeIcon = K2Node_Event_NewGameModeIcon;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_BoolToFloat_ReturnValue = CallFunc_Conv_BoolToFloat_ReturnValue;
	Parms.K2Node_Event_PS_2 = K2Node_Event_PS_2;
	Parms.K2Node_Event_Muted = K2Node_Event_Muted;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.K2Node_Event_PS_1 = K2Node_Event_PS_1;
	Parms.K2Node_Event_bReviving = K2Node_Event_bReviving;
	Parms.K2Node_Event_bIsTalking = K2Node_Event_bIsTalking;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.K2Node_MakeStruct_LinearColor_1 = K2Node_MakeStruct_LinearColor_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetGameState_ReturnValue = CallFunc_GetGameState_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena = K2Node_DynamicCast_AsFort_Game_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_ShouldDBNOTeamInfoFlash_ReturnValue = CallFunc_ShouldDBNOTeamInfoFlash_ReturnValue;
	Parms.CallFunc_GetGameState_ReturnValue_1 = CallFunc_GetGameState_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena_1 = K2Node_DynamicCast_AsFort_Game_State_Athena_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_ShouldDBNOTeamInfoFlash_ReturnValue_1 = CallFunc_ShouldDBNOTeamInfoFlash_ReturnValue_1;
	Parms.K2Node_Event_PS = K2Node_Event_PS;
	Parms.K2Node_Event_bDBNO = K2Node_Event_bDBNO;
	Parms.CallFunc_GetGameState_ReturnValue_2 = CallFunc_GetGameState_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Game_State_Athena_2 = K2Node_DynamicCast_AsFort_Game_State_Athena_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsStormCN_ReturnValue = CallFunc_IsStormCN_ReturnValue;
	Parms.K2Node_Event_PlayerName = K2Node_Event_PlayerName;
	Parms.K2Node_Event_Level = K2Node_Event_Level;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


