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

// 0x30 (0xB00 - 0xAD0)
// BlueprintGeneratedClass FortVolumeActor_Base.FortVolumeActor_Base_C
class AFortVolumeActor_Base_C : public AFortVolume
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UComplexPawnOverlapComponent*          BoundsMeshComponent;                               // 0xAD8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        TransitionTL_Fade_DD1C029E4A879F5D954A60A7D9770B8A; // 0xAE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                TransitionTL__Direction_DD1C029E4A879F5D954A60A7D9770B8A; // 0xAE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_560E[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UTimelineComponent*                    TransitionTL;                                      // 0xAE8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              BoundsMeshMID;                                     // 0xAF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    BoundsMeshSourceMaterial;                          // 0xAF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortVolumeActor_Base_C");
		return Clss;
	}

	void UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue);
	void TransitionTL__FinishedFunc();
	void TransitionTL__UpdateFunc();
	void ReceiveBeginPlay();
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class AFortPawn* InstigatedBy, class AActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext);
	void ExecuteUbergraph_FortVolumeActor_Base(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class AFortPawn* K2Node_Event_InstigatedBy, class AActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
