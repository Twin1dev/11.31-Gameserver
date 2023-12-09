#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1B (0xC93 - 0xC78)
// BlueprintGeneratedClass BuildingToy.BuildingToy_C
class ABuildingToy_C : public ABuildingTrapFloor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC78(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortMinigameProgressComponent*        FortMinigameProgress;                              // 0xC80(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UToyOptionsComponent_C*                ToyOptionsComponent;                               // 0xC88(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsInvulnerableDuringMinigamePlay;                 // 0xC90(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)
	bool                                         bPreviousInvulnerable;                             // 0xC91(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bIsVisibleDuringMinigame;                          // 0xC92(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABuildingToy_C* GetDefaultObj();

	void GetVisualComponents(TArray<class USceneComponent*>* Components, TArray<class USceneComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue);
	void DesiredVisibility(bool* Visibility, class AActor* Temp_object_Variable, bool CallFunc_IsVisibleDuringMinigame_IsVisibleDuringMinigame, bool CallFunc_IsInPlayMode_Play_Mode, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void IsVisibleDuringMinigame(bool* IsVisibleDuringMinigame);
	void UpdateVisuals(bool bShouldBeVisible, int32 Temp_int_Array_Index_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_DesiredVisibility_Visibility, TArray<class USceneComponent*>& CallFunc_GetVisualComponents_Components, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void MinigameIsRunning(bool* GameIsRunning, bool CallFunc_HasStarted_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	class FText BlueprintGetInteractionString(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted);
	bool BlueprintCanInteract(class AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, bool bInteractSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_IsValid_ReturnValue, class AController* CallFunc_GetController_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class AFortPlayerControllerAthena* K2Node_DynamicCast_AsFort_Player_Controller_Athena, bool K2Node_DynamicCast_bSuccess_1, class AFortVolume* CallFunc_CanPlayerCreateInCurrentVolume_OutCurrentVolume, bool CallFunc_CanPlayerCreateInCurrentVolume_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_HasStarted_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_Not_PreBool_ReturnValue);
	bool BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn);
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_0_AnyPropertyChangedDelegate__DelegateSignature();
	void BndEvt__ToyOptionsComponent_K2Node_ComponentBoundEvent_1_AnyPropertyChangedDelegate__DelegateSignature();
	void ReceiveBeginPlay();
	void OnMinigameStarted();
	void OnMinigameEnded();
	void BndEvt__FortMinigameProgress_K2Node_ComponentBoundEvent_2_OnMinigameAssignmentChanged__DelegateSignature(class AFortMinigame* Minigame);
	void On_Play_Mode_Changed(class AFortMinigame* Minigame, bool bIsInPlayMode);
	void ExecuteUbergraph_BuildingToy(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_HasAuthority_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, class AActor* Temp_object_Variable, class AFortMinigame* K2Node_ComponentBoundEvent_Minigame, bool CallFunc_IsInPlayMode_Play_Mode, class AFortMinigame* K2Node_CustomEvent_Minigame, bool K2Node_CustomEvent_bIsInPlayMode);
};

}


