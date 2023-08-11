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

// 0xE1 (0xB11 - 0xA30)
// BlueprintGeneratedClass GA_SpookyMist_PassiveSetup.GA_SpookyMist_PassiveSetup_C
class UGA_SpookyMist_PassiveSetup_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class APlayerPawn_Athena_C*                  PlayerPawn;                                        // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           LoopingGC;                                         // 0xA40(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GC_TrailFX;                                        // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GC_Looping;                                        // 0xA50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           MoveSpeedBuff;                                     // 0xA58(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        AbilityDuration;                                   // 0xA60(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        DamageShouldEndAbility;                            // 0xA80(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                GE_MoveSpeed;                                      // 0xAA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          ExitRecovery;                                      // 0xAA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 AllowInteractTags;                                 // 0xAB0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FGameplayTagContainer                 NoInteractTags;                                    // 0xAD0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        ShouldAllowInteract;                               // 0xAF0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         ForcedExit;                                        // 0xB10(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_SpookyMist_PassiveSetup_C");
		return Clss;
	}

	void UnBlockAbilityTags(float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess);
	void SetBlockAbilityTags(float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FGameplayAbilityActorInfo& CallFunc_GetActorInfo_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess);
	void EventReceived_3CB208084D361EC6BA9A619CA44CFB21(const struct FGameplayEventData& Payload);
	void Added_333162CC43A0027AD12E89BFE10F5DBD();
	void K2_ActivateAbility();
	void WhenDamaged(class AActor* DamagedActor, float Damage, class AController* InstigatedBy, class AActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum);
	void On_DBNO();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_SpookyMist_PassiveSetup(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAbilityTask_WaitGameplayEvent* CallFunc_WaitGameplayEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAbilityTask_WaitGameplayTagAdded* CallFunc_WaitGameplayTagAdd_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class AFortPlayerControllerGameplay* K2Node_DynamicCast_AsFort_Player_Controller_Gameplay, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue_1, const struct FGameplayEventData& Temp_struct_Variable, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, class AActor* K2Node_CustomEvent_DamagedActor, float K2Node_CustomEvent_Damage, class AController* K2Node_CustomEvent_InstigatedBy, class AActor* K2Node_CustomEvent_DamageCauser, const struct FVector& K2Node_CustomEvent_HitLocation, class UPrimitiveComponent* K2Node_CustomEvent_FHitComponent, class FName K2Node_CustomEvent_BoneName, const struct FVector& K2Node_CustomEvent_Momentum, const struct FGameplayEventData& K2Node_CustomEvent_Payload, float CallFunc_GetValueAtLevel_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1, bool K2Node_Event_bWasCancelled, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
