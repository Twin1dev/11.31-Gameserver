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

// 0x60 (0x920 - 0x8C0)
// BlueprintGeneratedClass BP_GalileoPlayerController.BP_GalileoPlayerController_C
class ABP_GalileoPlayerController_C : public AFortAthenaAIBotController
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x8C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortAthenaNpcGalileoComponent*        FortAthenaNpcGalileo;                              // 0x8C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionComponent*                AIPerception;                                      // 0x8D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBlackboardComponent*                  Blackboard1;                                       // 0x8D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           GE_Patrol_Handle;                                  // 0x8E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LeashLocation;                                     // 0x8E8(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LeashInnerRadius;                                  // 0x8F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LeashOuterRadius;                                  // 0x8F8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BB_LeashLocationKey;                               // 0x8FC(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BB_LeashInnerRadiusKey;                            // 0x904(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  BB_LeashOuterRadiusKey;                            // 0x90C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              OriginalRotationRate;                              // 0x914(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_GalileoPlayerController_C");
		return Clss;
	}

	void SetBlackboardValues(class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue);
	void ReceiveBeginPlay();
	void BlueprintOnBehaviorTreeStarted();
	void BndEvt__FortAthenaNpcGalileo_K2Node_ComponentBoundEvent_0_GalileoComponentOnPatrollingStart__DelegateSignature();
	void BndEvt__FortAthenaNpcGalileo_K2Node_ComponentBoundEvent_1_GalileoComponentOnPatrollingStop__DelegateSignature();
	void ExecuteUbergraph_BP_GalileoPlayerController(int32 EntryPoint, class ABP_PlayerPawn_Athena_Galileo_C* K2Node_DynamicCast_AsBP_Player_Pawn_Athena_Galileo, bool K2Node_DynamicCast_bSuccess, class ABP_PlayerPawn_Athena_Galileo_C* K2Node_DynamicCast_AsBP_Player_Pawn_Athena_Galileo_1, bool K2Node_DynamicCast_bSuccess_1, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, bool CallFunc_HasAuthority_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
