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

// 0x18 (0xA88 - 0xA70)
// BlueprintGeneratedClass GA_Creative_Teleport.GA_Creative_Teleport_C
class UGA_Creative_Teleport_C : public UGAT_Creative_TriggeredAbility_BuildingActor_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA70(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABP_Creative_Device_Teleporter_C*      Teleporter;                                        // 0xA78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xA80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Creative_Teleport_C");
		return Clss;
	}

	bool K2_ShouldAbilityRespondToEvent(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayEventData& Payload, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void ExecuteUbergraph_GA_Creative_Teleport(int32 EntryPoint, const struct FGameplayEventData& K2Node_Event_EventData, class ABP_Creative_Device_Teleporter_C* K2Node_DynamicCast_AsBP_Creative_Device_Teleporter, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AController* CallFunc_GetController_ReturnValue, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsFlying_ReturnValue, bool CallFunc_IsMovingOnGround_ReturnValue, const struct FRotator& CallFunc_GetDesiredRotation_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, bool CallFunc_K2_CommitAbility_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class ABP_Creative_Device_Teleporter_C* K2Node_DynamicCast_AsBP_Creative_Device_Teleporter_1, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_GetTeleportedPawnYaw_OutYaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_TeleportPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_GetTeleportedPawnPitch_OutPitch, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
