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

// 0x8B (0xDD1 - 0xD46)
// BlueprintGeneratedClass Device_Floor_NoWeaponZone.Device_Floor_NoWeaponZone_C
class ADevice_Floor_NoWeaponZone_C : public ADevice_Volume_Floor_C
{
public:
	uint8                                        Pad_5B42[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortGameplayTriggerMessageComponent*  TransmitOnEmoteEnded;                              // 0xD50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayTriggerMessageComponent*  TransmitOnEmoteStarted;                            // 0xD58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayTriggerMessageComponent*  TransmitOnLeaving;                                 // 0xD60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortGameplayTriggerMessageComponent*  TransmitOnEntering;                                // 0xD68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              IdleFX;                                            // 0xD70(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Bounds;                                            // 0xD78(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        ParticlesMaxDrawDistance;                          // 0xD80(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B43[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FGameplayTagContainer                 CancelAbilitiesWithTheseTags;                      // 0xD88(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	class AActor*                                ApplyEffectToActor;                                // 0xDA8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EBuildingMode                     AllowBuilding;                                     // 0xDB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B44[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                Effect_Class;                                      // 0xDB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TagDisableBuild;                                   // 0xDC0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          TagDisableFire;                                    // 0xDC8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Knob_bAllowFiring;                                 // 0xDD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Device_Floor_NoWeaponZone_C");
		return Clss;
	}

	void Setup_Effect_Data(class UAbilitySystemComponent* Ability_System, bool* Should_Apply, struct FGameplayEffectSpecHandle* Spec_Handle, const struct FGameplayEffectSpecHandle& Handle, bool Apply, const struct FGameplayEffectSpecHandle& CallFunc_AddGrantedTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_AddGrantedTag_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue);
	void ShouldAffectTarget(class AActor* TargetActor, bool* ShouldAffect, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_1);
	void ApplyEffects(class UObject* Object, bool* AbilitySystemComponentValid, class AFortPawn** As_Fort_Pawn, bool* IsValidTarget, const struct FGameplayEffectContextHandle& Local_Effect_Context, class UFortAbilitySystemComponent* Ability_System, class AFortPawn* Pawn, class UFortAbilitySystemComponent* CallFunc_GetAbilitySystemComponentAndPawn_AsFort_Ability_System_Component, class AFortPawn* CallFunc_GetAbilitySystemComponentAndPawn_AsFort_Pawn, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEffectContextHandle& CallFunc_MakeEffectContext_ReturnValue, bool CallFunc_Setup_Effect_Data_Should_Apply, const struct FGameplayEffectSpecHandle& CallFunc_Setup_Effect_Data_Spec_Handle, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, bool CallFunc_ShouldAffectTarget_ShouldAffect, bool CallFunc_Transmit_if_Valid_Actor_Valid, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue);
	void GetAbilitySystemComponentAndPawn(class UObject* Object, class UFortAbilitySystemComponent** AsFort_Ability_System_Component, class AFortPawn** AsFort_Pawn, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UFortAbilitySystemComponent* K2Node_DynamicCast_AsFort_Ability_System_Component, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue);
	void UserConstructionScript();
	void UpdateVolumeSize();
	void UpdateMinigameVisuals();
	void BndEvt__Trigger_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__Trigger_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void PlayFX(class AFortPawn* Overlapped_Pawn);
	void OnAbilitySystemComponentInitialized(class UFortAbilitySystemComponent* AbilitySystemComponent, class AFortPlayerPawn* AffectedPawn);
	void OnPlayerEmoteEnded(class AFortPawn* PlayerEmoting);
	void OnPlayerEmoteStarted(class AFortPawn* PlayerEmoting);
	void ExecuteUbergraph_Device_Floor_NoWeaponZone(int32 EntryPoint, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ShouldAffectTarget_ShouldAffect, TArray<struct FParticleSysParam>& CallFunc_VFXParameters_Array, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_FMax_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_FMax_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_FMax_ReturnValue_2, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorFloat_ReturnValue, class AFortPawn* K2Node_CustomEvent_Overlapped_Pawn, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, class UFortAbilitySystemComponent* K2Node_CustomEvent_AbilitySystemComponent, class AFortPlayerPawn* K2Node_CustomEvent_AffectedPawn, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsOverlappingActor_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_ApplyEffects_AbilitySystemComponentValid, class AFortPawn* CallFunc_ApplyEffects_As_Fort_Pawn, bool CallFunc_ApplyEffects_IsValidTarget, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_Transmit_if_Valid_Actor_Valid, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsPregame_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AFortPawn* K2Node_Event_PlayerEmoting_1, class AFortPawn* K2Node_Event_PlayerEmoting, bool CallFunc_Transmit_if_Valid_Actor_Valid_1, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool CallFunc_Transmit_if_Valid_Actor_Valid_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
