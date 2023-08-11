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

// 0xA0 (0xAD0 - 0xA30)
// BlueprintGeneratedClass GA_Athena_FloppingRabbit_Passive.GA_Athena_FloppingRabbit_Passive_C
class UGA_Athena_FloppingRabbit_Passive_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA30(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UClass*                                GE_Active;                                         // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 T_Active;                                          // 0xA40(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                GE_InWorld;                                        // 0xA60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 T_InWorld;                                         // 0xA68(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                Projectile;                                        // 0xA88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Wire;                                              // 0xA90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FailsafeDelay;                                     // 0xA98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5ADA[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                GE_ReelIn;                                         // 0xAA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 T_ReelIn;                                          // 0xAA8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AB_FloppingRabbit_Weap_Athena_C*       WeaponRod;                                         // 0xAC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_FloppingRabbit_Passive_C");
		return Clss;
	}

	void SaveOutRod(class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AB_FloppingRabbit_Weap_Athena_C* K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena, bool K2Node_DynamicCast_bSuccess_1);
	void SetBobberHidden(bool HideBobber, class AFortWeapon** CurrentWeapon, class AB_FloppingRabbit_Weap_Athena_C** CastedToRabbitWeapon, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AB_FloppingRabbit_Weap_Athena_C* K2Node_DynamicCast_AsB_Flopping_Rabbit_Weap_Athena, bool K2Node_DynamicCast_bSuccess_1);
	void K2_OnEndAbility(bool bWasCancelled);
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData);
	void Seat_Changed(int32 SeatIndex);
	void EndFishing();
	void ExecuteUbergraph_GA_Athena_FloppingRabbit_Passive(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortWeapon* CallFunc_SetBobberHidden_CurrentWeapon, class AB_FloppingRabbit_Weap_Athena_C* CallFunc_SetBobberHidden_CastedToRabbitWeapon, class AFortWeapon* CallFunc_SetBobberHidden_CurrentWeapon_1, class AB_FloppingRabbit_Weap_Athena_C* CallFunc_SetBobberHidden_CastedToRabbitWeapon_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1, const struct FGameplayEventData& K2Node_Event_EventData, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, int32 K2Node_CustomEvent_SeatIndex, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, class AAthena_PlayerController_C* K2Node_DynamicCast_AsAthena_Player_Controller, bool K2Node_DynamicCast_bSuccess_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2, bool K2Node_Event_bWasCancelled, bool CallFunc_IsValid_ReturnValue_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
