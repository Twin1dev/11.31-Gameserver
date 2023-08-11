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

// 0x34 (0xA64 - 0xA30)
// BlueprintGeneratedClass GA_DudeBro_Vent.GA_DudeBro_Vent_C
class UGA_DudeBro_Vent_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                VehicleSkelMesh;                                   // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xA40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        GravFloorAltitude;                                 // 0xA48(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        UpwardLaunchVelocity;                              // 0xA4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        VentsHitBeforeLanding;                             // 0xA50(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance)
	int32                                        NumVentsToHitForQuest;                             // 0xA60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_DudeBro_Vent_C");
		return Clss;
	}

	void ActuallyCleanPlayerUp(bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void PlayerCapsuleHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, struct FHitResult& Hit);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void MovementModeChangedDelegate_Event_0(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_DudeBro_Vent(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPrimitiveComponent* K2Node_CustomEvent_HitComponent, class AActor* K2Node_CustomEvent_OtherActor, class UPrimitiveComponent* K2Node_CustomEvent_OtherComp, const struct FVector& K2Node_CustomEvent_NormalImpulse, const struct FHitResult& K2Node_CustomEvent_Hit, class ABuildingActor* K2Node_DynamicCast_AsBuilding_Actor, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, const struct FGameplayEventData& K2Node_Event_EventData, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_IsServer_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class ACharacter* K2Node_CustomEvent_Character, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, uint8 K2Node_CustomEvent_PreviousCustomMode, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_Event_bWasCancelled, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, class UFortMovementComp_CharacterAthena* K2Node_DynamicCast_AsFort_Movement_Comp_Character_Athena, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_Athena_CheckCreativeMode_CanCompleteQuest, bool CallFunc_IsValid_ReturnValue_2, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, bool CallFunc_SendComplexCustomStatEvent_QuestActive, bool CallFunc_SendComplexCustomStatEvent_QuestCompleted, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue_1, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestIsValid, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_QuestCompleted, bool CallFunc_Athena_CheckQuestAndObjectiveCompletion_ObjectiveCompleted, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_2, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
