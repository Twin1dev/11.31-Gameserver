#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x580 - 0x558)
// WidgetBlueprintGeneratedClass WinterQuestDetailsScreen.WinterQuestDetailsScreen_C
class UWinterQuestDetailsScreen_C : public UFortWinterQuestDetailsScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x558(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USizeBox*                              AdditionalStyles;                                  // 0x560(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             ItemDetails_SZ;                                    // 0x568(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ItemDetailsContainer;                              // 0x570(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SetItems_SZ;                                       // 0x578(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWinterQuestDetailsScreen_C* GetDefaultObj();

	void OnSetRewardsVaultRotator(class AItemPreviewVaultRotator* ItemPreviewVaultRotator);
	void OnResetVaultRotator(class AItemPreviewVaultRotator* ItemPreviewVaultRotator);
	void ExecuteUbergraph_WinterQuestDetailsScreen(int32 EntryPoint, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, TArray<class UGSC_DynamicLevelStreaming_C*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UGSC_DynamicLevelStreaming_C* CallFunc_Array_Get_Item, TArray<class AFrontendCamera_VaultRotator_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AItemPreviewVaultRotator* K2Node_Event_ItemPreviewVaultRotator_1, int32 CallFunc_Array_Length_ReturnValue_1, class AVaultRotator_C* K2Node_DynamicCast_AsVault_Rotator, bool K2Node_DynamicCast_bSuccess, class AItemPreviewVaultRotator* K2Node_Event_ItemPreviewVaultRotator, class AVaultRotator_C* K2Node_DynamicCast_AsVault_Rotator_1, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class AFrontendCamera_VaultRotator_C* CallFunc_Array_Get_Item_1, bool CallFunc_ActorHasTag_ReturnValue);
};

}


