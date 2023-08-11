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

// 0x21 (0x4D9 - 0x4B8)
// WidgetBlueprintGeneratedClass WinterQuestTreeScreen.WinterQuestTreeScreen_C
class UWinterQuestTreeScreen_C : public UFortWinterQuestSpecialInteractionScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              RootOverlay;                                       // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAudioComponent*                       Opening_Sound_Component;                           // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Play_Opening_Sound;                                // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bCanClick;                                         // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WinterQuestTreeScreen_C");
		return Clss;
	}

	void Construct();
	void Play_Opening_Audio();
	void Stop_Opening_Audio();
	void BP_OnActivated();
	void OnStartInteraction();
	void OnStopInteraction();
	void OnGrantReward();
	void BP_OnDeactivated();
	void OnInputMethodChanged(enum class ECommonInputType NewMethod);
	void ExecuteUbergraph_WinterQuestTreeScreen(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, enum class ECommonInputType Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UWinterQuest_OpenPrompt_C* K2Node_DynamicCast_AsWinter_Quest_Open_Prompt, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_2, class UWinterQuest_OpenPrompt_C* K2Node_DynamicCast_AsWinter_Quest_Open_Prompt_1, bool K2Node_DynamicCast_bSuccess_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_3, class AGameStateBase* CallFunc_GetGameState_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, TArray<class UGSC_DynamicLevelStreaming_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, class UGSC_DynamicLevelStreaming_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<class ABP_CozyLodge_SelectablePresent_Tree_C*>& CallFunc_GetAllActorsOfClass_OutActors, class ABP_CozyLodge_SelectablePresent_Tree_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, const struct FGameplayTag& CallFunc_GetNodeTag_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UWinterQuest_OpenPrompt_C* K2Node_DynamicCast_AsWinter_Quest_Open_Prompt_2, bool K2Node_DynamicCast_bSuccess_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, enum class ECommonInputType K2Node_Event_NewMethod, enum class ESlateVisibility K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
