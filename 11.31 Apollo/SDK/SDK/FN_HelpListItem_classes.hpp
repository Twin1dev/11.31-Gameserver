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

// 0x48 (0xBC8 - 0xB80)
// WidgetBlueprintGeneratedClass HelpListItem.HelpListItem_C
class UHelpListItem_C : public UFortHelpTreeItemBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB80(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Arrow;                                             // 0xB88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        EntryHBox;                                         // 0xB90(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      EntryHeaderName;                                   // 0xB98(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HeaderHBox;                                        // 0xBA0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      HeaderText;                                        // 0xBA8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       PlayerHeaderSwitcher;                              // 0xBB0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            InviteJoinChanged;                                 // 0xBB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("HelpListItem_C");
		return Clss;
	}

	void SetupExpansion(bool Expanded, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, float K2Node_Select_Default);
	void InitializeItem(bool K2Node_SwitchEnum_CmpSuccess);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void ExecuteUbergraph_HelpListItem(int32 EntryPoint, bool K2Node_Event_bIsExpanded, bool CallFunc_IsListItemExpanded_ReturnValue, class UObject* K2Node_Event_ListItemObject);
	void InviteJoinChanged__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
