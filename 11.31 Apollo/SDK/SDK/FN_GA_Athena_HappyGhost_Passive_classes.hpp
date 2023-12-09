#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0xA80 - 0xA30)
// BlueprintGeneratedClass GA_Athena_HappyGhost_Passive.GA_Athena_HappyGhost_Passive_C
class UGA_Athena_HappyGhost_Passive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                GE_Active;                                         // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 T_Active;                                          // 0xA40(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AB_HappyGhost_Athena_C*                Weapon;                                            // 0xA60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       FortPawn;                                          // 0xA68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FailsafeDelay;                                     // 0xA70(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_714E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USoundBase*                            OutOfChargesSound;                                 // 0xA78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGA_Athena_HappyGhost_Passive_C* GetDefaultObj();

	void OnNotifyEnd_7857FA3D409C8FB0381EC7B9126A8525(class FName NotifyName);
	void OnNotifyBegin_7857FA3D409C8FB0381EC7B9126A8525(class FName NotifyName);
	void OnInterrupted_7857FA3D409C8FB0381EC7B9126A8525(class FName NotifyName);
	void OnBlendOut_7857FA3D409C8FB0381EC7B9126A8525(class FName NotifyName);
	void OnCompleted_7857FA3D409C8FB0381EC7B9126A8525(class FName NotifyName);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void K2_OnEndAbility(bool bWasCancelled);
	void ForceEnd();
	void ExecuteUbergraph_GA_Athena_HappyGhost_Passive(int32 EntryPoint, class FName K2Node_CustomEvent_NotifyName_3, class FName K2Node_CustomEvent_NotifyName_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName K2Node_CustomEvent_NotifyName_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class FName K2Node_CustomEvent_NotifyName, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class FName Temp_name_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool K2Node_Event_bWasCancelled, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class AB_HappyGhost_Athena_C* K2Node_DynamicCast_AsB_Happy_Ghost_Athena, bool K2Node_DynamicCast_bSuccess_1, class AFortWeapon* CallFunc_GetCurrentSourceWeapon_ReturnValue, const struct FGuid& CallFunc_GetInventoryGUID_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UPlayMontageCallbackProxy* CallFunc_CreateProxyObjectForPlayMontage_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, int32 CallFunc_K2_RemoveItemFromPlayerByGuid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class FName K2Node_CustomEvent_NotifyName_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_GetRemainingAmmo_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5);
};

}


