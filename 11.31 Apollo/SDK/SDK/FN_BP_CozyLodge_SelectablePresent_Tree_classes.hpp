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

// 0x8 (0x550 - 0x548)
// BlueprintGeneratedClass BP_CozyLodge_SelectablePresent_Tree.BP_CozyLodge_SelectablePresent_Tree_C
class ABP_CozyLodge_SelectablePresent_Tree_C : public ABP_CozyLodge_SelectablePresent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x548(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_CozyLodge_SelectablePresent_Tree_C");
		return Clss;
	}

	void UserConstructionScript();
	void HandleObjectSpecialInteraction(const struct FGameplayTag& ActionTag, const struct FGameplayTag& CameraTag);
	void ExecuteUbergraph_BP_CozyLodge_SelectablePresent_Tree(int32 EntryPoint, const struct FGameplayTag& CallFunc_GetNodeTag_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayTag& K2Node_Event_ActionTag, const struct FGameplayTag& K2Node_Event_CameraTag, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, TArray<class UGSC_DynamicLevelStreaming_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, class UGSC_DynamicLevelStreaming_C* CallFunc_Array_Get_Item, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
