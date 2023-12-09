#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0xAE0 - 0xA60)
// BlueprintGeneratedClass GA_Device_Floor_EliminationZone.GA_Device_Floor_EliminationZone_C
class UGA_Device_Floor_EliminationZone_C : public UGA_TrapGeneric_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FTimerHandle                          CheckActivationHandle;                             // 0xA68(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ADevice_Floor_EliminationZone_C*       OwningTrap;                                        // 0xA70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectSpecHandle             UpdatedSpecHandle;                                 // 0xA78(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                GameplayEffectDamageClass;                         // 0xA88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bDOTBased;                                         // 0xA90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5850[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                GameplayEffectTrueDamageClass;                     // 0xA98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        PlayersInVehicle;                                  // 0xAA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	struct FGameplayTag                          ActivateTrapCue;                                   // 0xAB0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          DOTCue;                                            // 0xAB8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 TC_DamageDotApplied;                               // 0xAC0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UGA_Device_Floor_EliminationZone_C* GetDefaultObj();

	void ApplyToRift(class ABuildingRift* Rift, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue);
	void IsPawnsTeamAffected(class AFortPawn* PlayerPawn, bool* bIsAffected, bool CallFunc_IsValid_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void ApplyToVehicle(TScriptInterface<class IFortVehicleInterface> VehicleInterface, class AActor* VehicleActor, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, class AFortPlayerPawn* CallFunc_GetDriver_ReturnValue, bool CallFunc_IsPawnsTeamAffected_bIsAffected, bool CallFunc_BooleanOR_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue);
	void ApplyToPawn(class AFortPawn* Pawn, bool* PawnAffected, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromActor_ReturnValue, bool CallFunc_IsPawnsTeamAffected_bIsAffected, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasAllMatchingGameplayTags_TagContainerInterface_CastInput, bool CallFunc_HasAllMatchingGameplayTags_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TArray<struct FActiveGameplayEffectHandle>& CallFunc_K2_ApplyGameplayEffectSpecToTarget_ReturnValue);
	void UpdateSpecHandle(bool Temp_bool_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, class UClass* K2Node_Select_Default, float CallFunc_Conv_IntToFloat_ReturnValue_1, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue);
	void ParseTargetData(const struct FGameplayAbilityTargetDataHandle& TargetData, const TArray<class AActor*>& ActorsFromTargetData, bool ValidActorsFound, const TArray<class AActor*>& Passengers, int32 Temp_int_Loop_Counter_Variable, TArray<class AActor*>& CallFunc_GetAllActorsFromTargetData_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_ApplyToPawn_PawnAffected, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_1, class AActor* CallFunc_Array_Get_Item_1, bool CallFunc_Greater_IntInt_ReturnValue, class ABuildingRift* K2Node_DynamicCast_AsBuilding_Rift, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_BooleanOR_ReturnValue, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IFortVehicleInterface> K2Node_DynamicCast_AsFort_Vehicle_Interface, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_ApplyToPawn_PawnAffected_1, TArray<class AFortPlayerPawn*>& CallFunc_GetAllPassengers_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1);
	void Cancelled_FDB0569E41B2D20233CC5FAB885737C4(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void Targeted_FDB0569E41B2D20233CC5FAB885737C4(struct FGameplayAbilityTargetDataHandle& TargetData, const struct FGameplayTag& ApplicationTag);
	void K2_ActivateAbility();
	void GA_LifeTimer();
	void ExecuteActivateTrapGameplayCue();
	void ExecuteUbergraph_GA_Device_Floor_EliminationZone(int32 EntryPoint, class UFortAbilityTask_WaitTargetSelection* CallFunc_WaitTargetSelection_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_GetReloadBeginGameplayCueTag_ReturnValue, const struct FGameplayAbilityTargetDataHandle& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap_1, bool K2Node_DynamicCast_bSuccess_1, const struct FGameplayTag& CallFunc_GetReloadBeginGameplayCueTag_ReturnValue_1, bool CallFunc_K2_CommitAbility_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_2, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap_2, bool K2Node_DynamicCast_bSuccess_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, float CallFunc_GetFireDelay_ReturnValue, const struct FGameplayTag& CallFunc_GetDelayBeginGameplayCueTag_ReturnValue, int32 CallFunc_GetAbilityLevel_ReturnValue, const struct FGameplayAbilityTargetDataHandle& K2Node_CustomEvent_TargetData_1, const struct FGameplayTag& K2Node_CustomEvent_ApplicationTag_1, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingGameplayEffectSpec_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, class AActor* CallFunc_GetOwningActorFromActorInfo_ReturnValue_3, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap_3, bool K2Node_DynamicCast_bSuccess_3, const struct FGameplayTag& CallFunc_GetReloadBeginGameplayCueTag_ReturnValue_2, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class ADevice_Floor_EliminationZone_C* K2Node_DynamicCast_AsDevice_Floor_Elimination_Zone, bool K2Node_DynamicCast_bSuccess_4);
};

}


