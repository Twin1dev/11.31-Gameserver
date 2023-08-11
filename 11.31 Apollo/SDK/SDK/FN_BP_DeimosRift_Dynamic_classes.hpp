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

// 0x30 (0xCC4 - 0xC94)
// BlueprintGeneratedClass BP_DeimosRift_Dynamic.BP_DeimosRift_Dynamic_C
class ABP_DeimosRift_Dynamic_C : public ABP_DeimosRift_C
{
public:
	uint8                                        Pad_5F49[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        LifeTime;                                          // 0xCA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5F4A[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FTimerHandle                          LifeTimeTimerHandle;                               // 0xCA8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        TimeLastSetLifeTimeTimer;                          // 0xCB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ThrottleTime;                                      // 0xCB4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                GE_LifeTimeLapsed;                                 // 0xCB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ServerSpawnTime;                                   // 0xCC0(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_DeimosRift_Dynamic_C");
		return Clss;
	}

	void OnRep_ServerSpawnTime();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void SetLifeTimeTimer();
	void LifeTimeExpired();
	void BP_Cosmetic_Intro();
	void BP_Cosmetic_Idle();
	void BP_Cosmetic_RampUp();
	void BP_Cosmetic_ShouldDie();
	void ExecuteUbergraph_BP_DeimosRift_Dynamic(int32 EntryPoint, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetTimeSeconds_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, float CallFunc_GetTimeSeconds_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
