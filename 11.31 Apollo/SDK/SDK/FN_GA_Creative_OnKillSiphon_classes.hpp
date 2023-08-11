#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x54 (0xAC4 - 0xA70)
// BlueprintGeneratedClass GA_Creative_OnKillSiphon.GA_Creative_OnKillSiphon_C
class UGA_Creative_OnKillSiphon_C : public UGAT_Creative_TriggeredAbility_Pawn_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA70(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AAthena_GameState_C*                   GameState;                                         // 0xA78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsCreativeOrPlayground;                            // 0xA80(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_166D[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                GE_HealPlayer;                                     // 0xA88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bShouldConvertExcessHealthToShields;               // 0xA90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_166E[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                ShieldGE;                                          // 0xA98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          ConsumedCue;                                       // 0xAA0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bDebugBypasLocalMapEnable;                         // 0xAA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bAttemptHealthRestore;                             // 0xAA9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bAttemptMatsRestore;                               // 0xAAA(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_166F[0x1];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FName                                  NameGrantWood;                                     // 0xAAC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NameGrantStone;                                    // 0xAB4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NameGrantMetal;                                    // 0xABC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Creative_OnKillSiphon_C");
		return Clss;
	}

	void GiveResourcesToPlayer(bool bShouldGrant, int32 GiveAmount, enum class EFortResourceType GiveType, bool* Success, class UFortWorldItemDefinition* LocalItemToGive, bool K2Node_SwitchEnum_CmpSuccess, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, TScriptInterface<class IFortInventoryOwnerInterface> CallFunc_GiveItemToInventoryOwner_InventoryOwner_CastInput);
	void CalculateResources(enum class EFortResourceType ResourceGrantType, bool* bSuccess, int32* ResourceToGive, enum class EFortResourceType* ResourceType, class FName LocalDataTableRowName, int32 ILocalResourceToGive, float CallFunc_GetOverridenSiphonGoldValue_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, float CallFunc_GetOverridenSiphonMetalValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, float CallFunc_GetOverridenSiphonWoodValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_GetOverridenSiphonStoneValue_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_3, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, int32 CallFunc_FTrunc_ReturnValue_4, bool K2Node_SwitchEnum_CmpSuccess_2);
	void AttemptMats(bool CallFunc_CalculateResources_bSuccess, int32 CallFunc_CalculateResources_ResourceToGive, enum class EFortResourceType CallFunc_CalculateResources_ResourceType, bool CallFunc_CalculateResources_bSuccess_1, int32 CallFunc_CalculateResources_ResourceToGive_1, enum class EFortResourceType CallFunc_CalculateResources_ResourceType_1, bool CallFunc_GiveResourcesToPlayer_Success, bool CallFunc_GiveResourcesToPlayer_Success_1, bool CallFunc_CalculateResources_bSuccess_2, int32 CallFunc_CalculateResources_ResourceToGive_2, enum class EFortResourceType CallFunc_CalculateResources_ResourceType_2, bool CallFunc_CalculateResources_bSuccess_3, int32 CallFunc_CalculateResources_ResourceToGive_3, enum class EFortResourceType CallFunc_CalculateResources_ResourceType_3, bool CallFunc_GiveResourcesToPlayer_Success_2, bool CallFunc_GiveResourcesToPlayer_Success_3);
	void AttemptHeal(bool CallFunc_RestoreHealth_Success, float CallFunc_RestoreHealth_InitialHealAmount, float CallFunc_RestoreHealth_ActualAppliedHeal, float CallFunc_RestoreHealth_ExcessHealing, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_AddShields_bAddedShields, float CallFunc_AddShields_ShieldAdded, bool CallFunc_BooleanOR_ReturnValue);
	void SetupRestoreModes(bool* ShouldContinue, bool CallFunc_IsCreativeOrPlaygroundModePlaylist_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult_1, float CallFunc_EvaluateCurveTableRow_OutXY_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AAthena_GameState_C* K2Node_DynamicCast_AsAthena_Game_State, bool K2Node_DynamicCast_bSuccess);
	void DetermineHealthDelta(float HealingAmount, float* MaxHealth, float* CurrentHealth, float* HealthDelta, float* ExcessHealh, float Temp_float_Variable, bool Temp_bool_Variable, float CallFunc_GetHealth_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float K2Node_Select_Default);
	void AddShields(bool bShouldConvertExcessHealthToShields, float ShieldToAdd, bool* bAddedShields, float* ShieldAdded, bool Temp_bool_Variable, const class FString& Temp_string_Variable, const class FString& Temp_string_Variable_1, const class FString& K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue);
	void RestoreHealth(bool* Success, float* InitialHealAmount, float* ActualAppliedHeal, float* ExcessHealing, float FShieldRestored, float FActualAmountHealed, float FInitialAmountToHeal, bool Temp_bool_Variable, bool CallFunc_Greater_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, float CallFunc_DetermineHealthDelta_MaxHealth, float CallFunc_DetermineHealthDelta_CurrentHealth, float CallFunc_DetermineHealthDelta_HealthDelta, float CallFunc_DetermineHealthDelta_ExcessHealh, float CallFunc_FMin_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_K2_ApplyGameplayEffectSpecToOwner_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool K2Node_SwitchEnum_CmpSuccess, float CallFunc_GetOverridenSiphonHealthValue_ReturnValue, float K2Node_Select_Default);
	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool bLocalMatsOnKill, bool bLocalHealthOnKill, bool bLocalShouldActivate, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class AFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_IsDBNO_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult, float CallFunc_EvaluateCurveTableRow_OutXY, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_BooleanAND_ReturnValue, enum class EEvaluateCurveTableResult CallFunc_EvaluateCurveTableRow_OutResult_1, float CallFunc_EvaluateCurveTableRow_OutXY_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Creative_OnKillSiphon(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, bool CallFunc_SetupRestoreModes_ShouldContinue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
