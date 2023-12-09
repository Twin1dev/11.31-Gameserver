#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1B1 - 0x1B0)
// BlueprintGeneratedClass GCN_Athena_Item_SuperDingo_Spawned.GCN_Athena_Item_SuperDingo_Spawned_C
class UGCN_Athena_Item_SuperDingo_Spawned_C : public UFortGameplayCueNotify_Burst
{
public:
	bool                                         Debug;                                             // 0x1B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UGCN_Athena_Item_SuperDingo_Spawned_C* GetDefaultObj();

	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, class UParticleSystemComponent* CallFunc_Array_Get_Item, class ABGA_Athena_SuperDingo_C* K2Node_DynamicCast_AsBGA_Athena_Super_Dingo, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}


