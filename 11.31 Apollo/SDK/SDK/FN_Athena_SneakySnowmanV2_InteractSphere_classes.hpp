#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x7A0 - 0x788)
// BlueprintGeneratedClass Athena_SneakySnowmanV2_InteractSphere.Athena_SneakySnowmanV2_InteractSphere_C
class AAthena_SneakySnowmanV2_InteractSphere_C : public ABuildingGameplayActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x788(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USphereComponent*                      Sphere;                                            // 0x790(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class AAthena_Player_SneakySnowmanV2_C*      AssociatedSnowman;                                 // 0x798(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAthena_SneakySnowmanV2_InteractSphere_C* GetDefaultObj();

	void Init(class AAthena_Player_SneakySnowmanV2_C* AssociatedSnowman, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void OnRep_AssociatedSnowman();
	bool BlueprintGetInteractionTime(class AFortPawn* InteractingPawn, float* OutInteractionTime, enum class EInteractionBeingAttempted InteractionBeingAttempted);
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, TScriptInterface<class IGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_CheckIfCanJumpOut_CanInteract, bool CallFunc_BooleanAND_ReturnValue);
	void Destroy(class AActor* DestroyedActor);
	void BlueprintOnInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted);
	void ExecuteUbergraph_Athena_SneakySnowmanV2_InteractSphere(int32 EntryPoint, class AFortPawn* K2Node_Event_InteractingPawn, enum class EInteractionBeingAttempted K2Node_Event_InteractionBeingAttempted, class AActor* K2Node_CustomEvent_DestroyedActor);
};

}


