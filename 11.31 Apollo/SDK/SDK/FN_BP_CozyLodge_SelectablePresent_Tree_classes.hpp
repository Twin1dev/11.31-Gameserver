#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x550 - 0x548)
// BlueprintGeneratedClass BP_CozyLodge_SelectablePresent_Tree.BP_CozyLodge_SelectablePresent_Tree_C
class ABP_CozyLodge_SelectablePresent_Tree_C : public ABP_CozyLodge_SelectablePresent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x548(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_CozyLodge_SelectablePresent_Tree_C* GetDefaultObj();

	void UserConstructionScript();
	void HandleObjectSpecialInteraction(const struct FGameplayTag& ActionTag, const struct FGameplayTag& CameraTag);
	void ExecuteUbergraph_BP_CozyLodge_SelectablePresent_Tree(int32 EntryPoint, const struct FGameplayTag& CallFunc_GetNodeTag_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayTag& K2Node_Event_ActionTag, const struct FGameplayTag& K2Node_Event_CameraTag, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, TArray<class UGSC_DynamicLevelStreaming_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, class UGSC_DynamicLevelStreaming_C* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}


