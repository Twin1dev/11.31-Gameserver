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

// 0x29 (0x4E1 - 0x4B8)
// WidgetBlueprintGeneratedClass WinterQuestStockingScreen.WinterQuestStockingScreen_C
class UWinterQuestStockingScreen_C : public UFortWinterQuestSpecialInteractionScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4B8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UOverlay*                              RootOverlay;                                       // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAudioComponent*                       Opening_Sound_Component;                           // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Play_Opening_Sound;                                // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_Cozy_Stockings_C*                  StockingObject;                                    // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bOpened;                                           // 0x4E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WinterQuestStockingScreen_C");
		return Clss;
	}

	void OnFailure_ADF528A54FC41993276B459A2433A2A3();
	void OnIgnored_ADF528A54FC41993276B459A2433A2A3();
	void OnSuccess_ADF528A54FC41993276B459A2433A2A3();
	void BP_OnDeactivated();
	void Construct();
	void Play_Opening_Audio();
	void Stop_Opening_Audio();
	void BP_OnActivated();
	void OnGrantReward();
	void OnStartInteraction();
	void OnStopInteraction();
	void OnInputMethodChanged(enum class ECommonInputType NewMethod);
	void ExecuteUbergraph_WinterQuestStockingScreen(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_3, bool Temp_bool_Variable, bool CallFunc_GetHasStockingQuestActive_bHasStockingQuestActive, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ECommonInputType Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_4, enum class ESlateVisibility Temp_byte_Variable_5, enum class ESlateVisibility Temp_byte_Variable_6, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, TArray<class AFortPlayerController*>& CallFunc_GetAllFortPlayerControllers_ReturnValue, class AFortPlayerController* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UFortQuestManager* CallFunc_GetQuestManager_ReturnValue, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class UFortAsyncAction_SendQuestStatEvent* CallFunc_SendClientStatEvent_ReturnValue, class UWinterQuest_OpenPrompt_C* K2Node_DynamicCast_AsWinter_Quest_Open_Prompt, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UWinterQuest_OpenPrompt_C* K2Node_DynamicCast_AsWinter_Quest_Open_Prompt_1, bool K2Node_DynamicCast_bSuccess_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, TArray<class ABP_Cozy_Stockings_C*>& CallFunc_GetAllActorsOfClass_OutActors, class UWinterQuest_OpenPrompt_C* K2Node_DynamicCast_AsWinter_Quest_Open_Prompt_2, bool K2Node_DynamicCast_bSuccess_2, class ABP_Cozy_Stockings_C* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, enum class ECommonInputType K2Node_Event_NewMethod, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_Less_IntInt_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default_2, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_GetHasStockingQuestActive_bHasStockingQuestActive_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
