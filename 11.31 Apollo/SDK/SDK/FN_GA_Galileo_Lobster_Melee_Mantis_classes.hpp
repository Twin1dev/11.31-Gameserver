#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0xAE8 - 0xA50)
// BlueprintGeneratedClass GA_Galileo_Lobster_Melee_Mantis.GA_Galileo_Lobster_Melee_Mantis_C
class UGA_Galileo_Lobster_Melee_Mantis_C : public UFortGameplayAbility_Mantis
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA50(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          T_MeleeAbility;                                    // 0xA58(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          T_GCMeleeClash;                                    // 0xA60(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PlayerCharacter;                                   // 0xA68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         StaggerMelee;                                      // 0xA70(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_62EA[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FScalableFloat                        EnableStagger;                                     // 0xA78(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        ImpulseXY;                                         // 0xA98(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        ImpulseZ;                                          // 0xAB8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTag                          T_StaggerEvent;                                    // 0xAD8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_StaggerEnemy;                                   // 0xAE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Galileo_Lobster_Melee_Mantis_C* GetDefaultObj();

	void Added_257119E44AAC9BD082F95A9F3201447E();
	void EventReceived_3D9CCD6F49D4ABCB0E35DB855ADE0B29(const struct FGameplayEventData& Payload);
	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void BP_OnMantisAttackHit(struct FGameplayAbilityTargetDataHandle& TargetDataHandle, const struct FGameplayTag& ApplicationTag);
	void ExecuteUbergraph_GA_Galileo_Lobster_Melee_Mantis(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGameplayEventData& K2Node_CustomEvent_Payload, const struct FGameplayEventData& Temp_struct_Variable, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_Event_bWasCancelled, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue_1, class AB_Athena_Galileo_Lobster_Parent_C* K2Node_DynamicCast_AsB_Athena_Galileo_Lobster_Parent, bool K2Node_DynamicCast_bSuccess, class AB_Athena_Galileo_Lobster_Parent_C* K2Node_DynamicCast_AsB_Athena_Galileo_Lobster_Parent_1, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayAbilityTargetDataHandle& K2Node_Event_TargetDataHandle, const struct FGameplayTag& K2Node_Event_ApplicationTag, float CallFunc_GetCurrentAbilitySourceLevel_OutSourceLevel, TArray<class AActor*>& CallFunc_GetAllActorsFromTargetData_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class AActor* CallFunc_Array_Get_Item, TArray<struct FActiveGameplayEffectHandle>& CallFunc_ApplyGameplayEffectContainer_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, TScriptInterface<class IGameplayTagAssetInterface> K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_GetValueAtLevel_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_2, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_Conv_IntToBool_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_4, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
};

}


