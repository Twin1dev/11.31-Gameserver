#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2D8 - 0x298)
// WidgetBlueprintGeneratedClass AthenaPickupManager.AthenaPickupManager_C
class UAthenaPickupManager_C : public UAthenaResourcesBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPackResource_C*                       _Pack_Resource__Stone;                             // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPackResource_C*                       _Pack_Resource__Wood;                              // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPackResource_C*                       PackResourceGoldCurrency;                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPackResource_C*                       PackResourceMetal;                                 // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UInvalidationBox*                      PickupManagerInvalidationBox;                      // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URebootCardsCollectedWidget_C*         RebootCardsCollectedWidget;                        // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Max_Displayed_Items;                               // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LastUpdateTime;                                    // 0x2D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaPickupManager_C* GetDefaultObj();

	void HandleSetWorldResourceWidgetVisibility(enum class EFortResourceType ResourceType, bool bVisible, class UPackResource_C* SelectedPackResource, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UPackResource_C* Temp_object_Variable, enum class ESlateVisibility K2Node_Select_Default, class UPackResource_C* Temp_object_Variable_1, enum class EFortResourceType Temp_byte_Variable_2, class UPackResource_C* K2Node_Select_Default_1);
	void RefreshBackground();
	void RefreshCounts(float CurrentUpdateTime, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, bool CallFunc_DoesRequireResourceUpdate_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetRealTimeSeconds_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
	void Construct();
	void HandleWorldItemsChanged();
	void HandleWorldItemListChanged(TArray<class UFortWorldItem*>& ItemsAdded, TArray<class UFortWorldItem*>& ItemsRemoved);
	void Destruct();
	void HandleBuildingMaterialChanged();
	void HandleItemPickup(class UFortWorldItem* NewItem, int32 Count);
	void ExecuteUbergraph_AthenaPickupManager(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsAdded, TArray<class UFortWorldItem*>& K2Node_CustomEvent_ItemsRemoved, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UFortInventoryContext* CallFunc_GetContext_ReturnValue, class UFortHUDContext* CallFunc_GetContext_ReturnValue_1, class UFortInventoryContext* CallFunc_GetContext_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UFortInventoryContext* CallFunc_GetContext_ReturnValue_3, class UFortWorldItem* K2Node_CustomEvent_NewItem, int32 K2Node_CustomEvent_Count, class UFortInventoryContext* CallFunc_GetContext_ReturnValue_4, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4);
};

}


