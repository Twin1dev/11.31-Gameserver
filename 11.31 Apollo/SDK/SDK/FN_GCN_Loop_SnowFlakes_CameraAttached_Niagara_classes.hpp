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

// 0x30 (0x7B8 - 0x788)
// BlueprintGeneratedClass GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C
class AGCN_Loop_SnowFlakes_CameraAttached_Niagara_C : public AFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x788(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Snow_Niagara;                                      // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        LoopingCheckTime;                                  // 0x798(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5ED5[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class AActor*                                My_Target;                                         // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     ReturnValue;                                       // 0x7A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer;                                             // 0x7B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Loop_SnowFlakes_CameraAttached_Niagara_C");
		return Clss;
	}

	void SpawnNiagara();
	void OnRemoval(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class UCameraShake* BurstCameraShakeInstance, class ADecalActor* BurstDecalInstance);
	void OnLoopingStart(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UParticleSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class UCameraShake* K2Node_Event_BurstCameraShakeInstance, class ADecalActor* K2Node_Event_BurstDecalInstance, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_IsActive_ReturnValue, class AActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UParticleSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UNiagaraSystem* CallFunc_GetAsset_ReturnValue, bool CallFunc_IsNiagaraEffectEnabled_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
