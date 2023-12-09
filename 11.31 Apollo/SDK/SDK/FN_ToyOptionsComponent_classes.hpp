#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB1 (0x299 - 0x1E8)
// BlueprintGeneratedClass ToyOptionsComponent.ToyOptionsComponent_C
class UToyOptionsComponent_C : public UFortActorOptionsComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TSoftClassPtr<class UFortMatchmakingKnobsModal> OptionsWidgetClass;                                // 0x1F0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftClassPtr<class UUserWidget>             MyIslandTabList;                                   // 0x218(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         IsMachine;                                         // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_585F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AFortPlayerController*                 InteractingPlayer;                                 // 0x248(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortMatchmakingKnobsModal*            OutModalWidget;                                    // 0x250(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bInteractSuccess;                                  // 0x258(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_5860[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                ClassToLoad;                                       // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TSoftClassPtr<class UFortMatchmakingKnobsModal> PropertyEditorWidgetClass;                         // 0x268(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UUserWidget*                           CachedDisplayWidget;                               // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         LoadingAssets;                                     // 0x298(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UToyOptionsComponent_C* GetDefaultObj();

	bool BlueprintOnLocalInteract(class AFortPlayerPawn* InteractingPawn, bool CallFunc_GetPropertyEditorV2Enabled_ReturnValue, class AFortPlayerController* CallFunc_GetFortPlayerControllerFromActor_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, TSoftClassPtr<class UObject> K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AFortMinigameSettingsBuilding* K2Node_DynamicCast_AsFort_Minigame_Settings_Building, bool K2Node_DynamicCast_bSuccess, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap, bool K2Node_DynamicCast_bSuccess_1, TSoftObjectPtr<class UFortTrapItemDefinition> CallFunc_Conv_ObjectToSoftObjectReference_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void OnLoaded_E8F4D2FB4AB5542DE83E50B51A402D27(class UClass* Loaded);
	void DisplayOptions(class APlayerController* InteractingPlayer, TSoftClassPtr<class UObject> WidgetClass);
	void ExecuteUbergraph_ToyOptionsComponent(int32 EntryPoint, class UClass* K2Node_CustomEvent_Loaded, class APlayerController* K2Node_CustomEvent_InteractingPlayer, TSoftClassPtr<class UObject> K2Node_CustomEvent_WidgetClass, class UClass* CallFunc_Conv_SoftClassReferenceToClass_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidClass_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess, class UClass* Temp_class_Variable, class UUserWidget* CallFunc_Create_ReturnValue, TScriptInterface<class IFortInitializeFromObjectInterface> K2Node_DynamicCast_AsFort_Initialize_from_Object_Interface, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue);
};

}


