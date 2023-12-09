#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1B0 - 0x1B0)
// BlueprintGeneratedClass GCN_BattleLab_FrenchYedoc_Hit.GCN_BattleLab_FrenchYedoc_Hit_C
class UGCN_BattleLab_FrenchYedoc_Hit_C : public UFortGameplayCueNotify_Burst
{
public:

	static class UClass* StaticClass();
	static class UGCN_BattleLab_FrenchYedoc_Hit_C* GetDefaultObj();

	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, class UParticleSystemComponent* CallFunc_Array_Get_Item, class APrj_Athena_FrenchYedoc_JWUnfriendly_C* K2Node_DynamicCast_AsPrj_Athena_French_Yedoc_JWUnfriendly, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
};

}


