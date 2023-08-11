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

// 0x8 (0x3990 - 0x3988)
// BlueprintGeneratedClass BP_Pawn_FrenchYedoc.BP_Pawn_FrenchYedoc_C
class ABP_Pawn_FrenchYedoc_C : public APlayerPawn_Athena_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3988(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_Pawn_FrenchYedoc_C");
		return Clss;
	}

	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ExecuteUbergraph_BP_Pawn_FrenchYedoc(int32 EntryPoint, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, bool Temp_bool_Variable, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, bool Temp_bool_Variable_1, class UAnimMontage* Temp_object_Variable_2, bool Temp_bool_Variable_2, class UAnimMontage* Temp_object_Variable_3, bool CallFunc_IsDBNO_ReturnValue, bool CallFunc_IsSkydiving_ReturnValue, class UAnimMontage* K2Node_Select_Default, bool CallFunc_IsSurfaceSwimming_ReturnValue, class UAnimMontage* K2Node_Select_Default_1, class UAnimMontage* K2Node_Select_Default_2, float CallFunc_PlayLocalAnimMontage_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
