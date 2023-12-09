#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x42 (0x2DA - 0x298)
// WidgetBlueprintGeneratedClass AthenaAerialFeedback.AthenaAerialFeedback_C
class UAthenaAerialFeedback_C : public UFortHUDElementWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro_1;                                           // 0x2A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Flare;                                             // 0x2A8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x2B0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        FeedbackLine;                                      // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            FeedbackText;                                      // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UKeybindWidget_C*                      KeyBind;                                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          CheckGliderTimerHandle;                            // 0x2D0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bEnteredSkydiving;                                 // 0x2D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsBallooning;                                     // 0x2D9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UAthenaAerialFeedback_C* GetDefaultObj();

	bool CheckPawnForGliderDeploy(class AFortPlayerPawn* PlayerPawn, bool bCanRedeploy, const struct FScalableFloat& CanRedeploy, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsSkydivingFromLaunchPad_ReturnValue, bool CallFunc_IsSkydivingFromBus_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Not_PreBool_ReturnValue);
	void Update(class AFortPlayerPawn* Local_OwningPawn, class AAthena_PlayerController_C* Local_OwningPlayer, enum class ESlateVisibility LocalVisibility, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EAthenaAerialPhase Temp_byte_Variable_2, class FName CallFunc_GetJumpActionName_ReturnValue, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool Temp_bool_Variable, class FText CallFunc_GetGliderDisplayName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsParachuteLockedOpen_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess_1, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_MakeLiteralText_ReturnValue_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, class AGameStateBase* CallFunc_GetGameState_ReturnValue_1, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess_3, enum class EAthenaAerialPhase CallFunc_GetAerialPhase_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, class FText K2Node_Select_Default_1);
	void OnLocalPlayerBeginSkydiving_Bind();
	void OnKeybindsChanged_Bind();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void HandleFallingStarted();
	void CheckFallingForGlider();
	void HandleEnteredSkydivingFeedback();
	void HandleBalloonJumpFeedback(bool bUsingBalloonMovement);
	void SetNewBoundAction(class FName ActionName);
	void GamePhaseStepChanged(TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep);
	void ExecuteUbergraph_AthenaAerialFeedback(int32 EntryPoint, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortGameStateAthena* K2Node_DynamicCast_AsFort_Game_State_Athena, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, bool CallFunc_CheckPawnForGliderDeploy_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class UFortGlobalUIContext* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, class FName CallFunc_GetCrouchActionName_ReturnValue, bool CallFunc_IsFalling_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue, class AFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_CustomEvent_bUsingBalloonMovement, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_1, class FName K2Node_CustomEvent_ActionName, TScriptInterface<class IFortSafeZoneInterface> K2Node_CustomEvent_SafeZoneInterface, enum class EAthenaGamePhaseStep K2Node_CustomEvent_GamePhaseStep, bool K2Node_SwitchEnum_CmpSuccess, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_3, bool CallFunc_ClassIsChildOf_ReturnValue, class FName CallFunc_GetCrouchActionName_ReturnValue_1, class FName CallFunc_GetJumpActionName_ReturnValue, class FName K2Node_Select_Default);
};

}


