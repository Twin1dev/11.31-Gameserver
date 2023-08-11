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

// 0x20 (0x340 - 0x320)
// WidgetBlueprintGeneratedClass EventStoreHostPanels.EventStoreHostPanels_C
class UEventStoreHostPanels_C : public UFortItemDetailsHostPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalTabList_C*                  DetailPanelTabList;                                // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 DetailPanelWidgetSwitcher;                         // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ItemSelected;                                      // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EventStoreHostPanels_C");
		return Clss;
	}

	void SetTabVisibilities(enum class ESlateVisibility StatVisibility, enum class ESlateVisibility BonusVisibility, enum class ESlateVisibility CraftingVisibility);
	void Setup_Details_Panels(enum class ESlateVisibility NewCraftingVis, enum class ESlateVisibility NewBonusVis, enum class ESlateVisibility NewStatVis, class UFortWorker* K2Node_DynamicCast_AsFort_Worker, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetNumGameplayTagsInContainer_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_SelectTabByID_ReturnValue, class FName CallFunc_GetSelectedTabId_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCommonButton* CallFunc_GetTabButtonByID_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, enum class EFortItemType CallFunc_GetType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsSchematic_ReturnValue);
	void BndEvt__DetailPanelWidgetSwitcher_K2Node_ComponentBoundEvent_16_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void HandleDifferentItemToDetailSet();
	void Construct();
	void BndEvt__DetailPanelTabList_K2Node_ComponentBoundEvent_2_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void ExecuteUbergraph_EventStoreHostPanels(int32 EntryPoint, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UFortItemDetailsHostPanel* K2Node_DynamicCast_AsFort_Item_Details_Host_Panel, bool K2Node_DynamicCast_bSuccess, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, class UFortItemDetailsHostPanel* K2Node_DynamicCast_AsFort_Item_Details_Host_Panel_1, bool K2Node_DynamicCast_bSuccess_1, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
