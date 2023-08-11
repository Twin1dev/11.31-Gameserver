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

// 0x8 (0x1B8 - 0x1B0)
// BlueprintGeneratedClass GCN_Deimos_Monster_Spawn.GCN_Deimos_Monster_Spawn_C
class UGCN_Deimos_Monster_Spawn_C : public UFortGameplayCueNotify_Burst
{
public:
	class USoundConcurrency*                     ConcurrencySettings;                               // 0x1B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Deimos_Monster_Spawn_C");
		return Clss;
	}

	bool OnExecute(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_OnExecute_ReturnValue);
	void OnBurst(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance, class UParticleSystemComponent* CallFunc_Array_Get_Item, class AFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
