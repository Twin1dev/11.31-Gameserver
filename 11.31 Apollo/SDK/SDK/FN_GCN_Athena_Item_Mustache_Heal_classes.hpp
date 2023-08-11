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

// 0x0 (0x1B0 - 0x1B0)
// BlueprintGeneratedClass GCN_Athena_Item_Mustache_Heal.GCN_Athena_Item_Mustache_Heal_C
class UGCN_Athena_Item_Mustache_Heal_C : public UFortGameplayCueNotify_Burst
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Athena_Item_Mustache_Heal_C");
		return Clss;
	}

	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, class AFortPlayerPawnAthena* K2Node_DynamicCast_AsFort_Player_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
