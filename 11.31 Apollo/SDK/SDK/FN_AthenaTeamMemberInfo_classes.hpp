#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x410 - 0x3A8)
// WidgetBlueprintGeneratedClass AthenaTeamMemberInfo.AthenaTeamMemberInfo_C
class UAthenaTeamMemberInfo_C : public UAthenaPlayerInfoBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      DangerPulse;                                       // 0x3B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      PulseMember;                                       // 0x3B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                BG_Active;                                         // 0x3C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorderBackground;                            // 0x3C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorderPulseBG;                               // 0x3D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                GameModeIcon;                                      // 0x3D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ResurrectChip_Uncollected;                   // 0x3E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          MainVertBox;                                       // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_PlayerStates;                              // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SpeakerIconSwitcher;                               // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Talking;                                           // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         Muted;                                             // 0x401(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_468D[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          DBNOPulseTimer;                                    // 0x408(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaTeamMemberInfo_C* GetDefaultObj();

	void SetTalking(bool NewTalking);
	void UpdateMicIcon();
	void SetMuted(bool NewMuted);
	void SetReviving(bool Reviving, class UAthenaTeamMemberDBNOState_C* K2Node_DynamicCast_AsAthena_Team_Member_DBNOState, bool K2Node_DynamicCast_bSuccess);
	void SetDBNO(bool DBNO, class UAthenaTeamMemberDBNOState_C* K2Node_DynamicCast_AsAthena_Team_Member_DBNOState, bool K2Node_DynamicCast_bSuccess);
	void OnResurrectionStateChanged(struct FFortResurrectionUIData& ResurrectionStateData);
	void OnPlaylistExtensionWidgetCreated(class UUserWidget* Widget);
	void Event_ShowBG(bool ShowBackground);
	void TalkingStateChanged(class AFortPlayerStateAthena* PS, bool bTalking);
	void EventPulse();
	void OnGameModeIconChange(class AFortPlayerStateAthena* PS, class UTexture2D* NewGameModeIcon);
	void MutedStateChanged(class AFortPlayerStateAthena* PS, bool Muted);
	void EventDangerPulse();
	void Construct();
	void BeingRevivedStateChanged(class AFortPlayerStateAthena* PS, bool bReviving);
	void OnTalkingStateStartedOrEnded(bool bIsTalking);
	void DoFlash();
	void ClearDBNOFlashing();
	void DBNOStateChanged(class AFortPlayerStateAthena* PS, bool bDBNO);
	void SetPlayerName(const class FString& PlayerName, int32 Level);
	void ExecuteUbergraph_AthenaTeamMemberInfo(int32 EntryPoint, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FFortResurrectionUIData& K2Node_Event_ResurrectionStateData, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, int32 Temp_int_Variable, class UUserWidget* K2Node_Event_Widget, bool K2Node_CustomEvent_showBackground, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, const struct FLinearColor& K2Node_Select_Default, class AFortPlayerStateAthena* K2Node_Event_PS_4, bool K2Node_Event_bTalking, int32 Temp_int_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class AFortPlayerStateAthena* K2Node_Event_PS_3, class UTexture2D* K2Node_Event_NewGameModeIcon, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_BoolToFloat_ReturnValue, class AFortPlayerStateAthena* K2Node_Event_PS_2, bool K2Node_Event_Muted, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class AFortPlayerStateAthena* K2Node_Event_PS_1, bool K2Node_Event_bReviving, bool K2Node_Event_bIsTalking, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1, const struct FLinearColor& K2Node_Select_Default_1, bool Temp_bool_Variable_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue, int32 K2Node_Select_Default_2, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ShouldDBNOTeamInfoFlash_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_ShouldDBNOTeamInfoFlash_ReturnValue_1, class AFortPlayerStateAthena* K2Node_Event_PS, bool K2Node_Event_bDBNO, class AGameStateBase* CallFunc_GetGameState_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsStormCN_ReturnValue, const class FString& K2Node_Event_PlayerName, int32 K2Node_Event_Level, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}


