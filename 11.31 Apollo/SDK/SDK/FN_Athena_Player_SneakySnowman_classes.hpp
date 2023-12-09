#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x800 - 0x7A0)
// BlueprintGeneratedClass Athena_Player_SneakySnowman.Athena_Player_SneakySnowman_C
class AAthena_Player_SneakySnowman_C : public ABuildingGameplayActorBalloon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Cylinder;                                          // 0x7A8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  SM_SneakySnowman;                                  // 0x7B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       Scene;                                             // 0x7B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         Effects;                                           // 0x7C0(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6F34[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x7C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TotalDamage;                                       // 0x7D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F35[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AB_Prj_Athena_SneakySnowman_C*         SneakySnowmanProj;                                 // 0x7D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        MaxHealth;                                         // 0x7E0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AAthena_Player_SneakySnowman_C* GetDefaultObj();

	void UserConstructionScript(class APawn* CallFunc_GetInstigator_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue);
	void OnDamageServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AController* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ReceiveBeginPlay();
	void CrouchedCheck();
	void ExecuteUbergraph_Athena_Player_SneakySnowman(int32 EntryPoint, float K2Node_Event_Damage_1, const struct FGameplayTagContainer& K2Node_Event_DamageTags_1, const struct FVector& K2Node_Event_Momentum_1, const struct FHitResult& K2Node_Event_HitInfo_1, class AController* K2Node_Event_InstigatedBy_1, class AActor* K2Node_Event_DamageCauser_1, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_OnSameTeam_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, class APawn* CallFunc_GetInstigator_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AController* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}


