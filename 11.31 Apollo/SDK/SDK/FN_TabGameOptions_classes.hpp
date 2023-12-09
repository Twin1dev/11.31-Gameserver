#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x358 - 0x330)
// WidgetBlueprintGeneratedClass TabGameOptions.TabGameOptions_C
class UTabGameOptions_C : public UFortGameOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonWidgetSwitcher*                 CommonWidgetSwitcher_0;                            // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalTabList_C*                  GameTabs;                                          // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_54;                                       // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TooltipDisplay;                                    // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTabGameOptions_C* GetDefaultObj();

	void Construct();
	void UpdateOptionsTab();
	void CenterOnTab();
	void Tab_Settings_Changed();
	void BndEvt__CommonWidgetSwitcher_0_K2Node_ComponentBoundEvent_1004_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void BndEvt__GameTabs_K2Node_ComponentBoundEvent_21_OnTabButtonCreated__DelegateSignature(class FName TabId, class UCommonButton* TabButton);
	void OnTabActivated_Event_0();
	void Destruct();
	void ExecuteUbergraph_TabGameOptions(int32 EntryPoint, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_GetActiveWidgetIndex_ReturnValue, class UWidget* CallFunc_GetWidgetAtIndex_ReturnValue, int32 CallFunc_GetNumWidgets_ReturnValue, class UFortGameOptions* K2Node_DynamicCast_AsFort_Game_Options, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Variable_1, class UWidget* CallFunc_GetChildAt_ReturnValue, class UFortGameOptions* K2Node_DynamicCast_AsFort_Game_Options_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, class UFortGameOptions* K2Node_DynamicCast_AsFort_Game_Options_2, bool K2Node_DynamicCast_bSuccess_2, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo, uint8 CallFunc_MakeLiteralByte_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UTabGameOptionsMain_C* CallFunc_Create_ReturnValue, bool CallFunc_RegisterFortTab_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FFortTabButtonLabelInfo& K2Node_MakeStruct_FortTabButtonLabelInfo_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UTabGameOptionsHud_C* CallFunc_Create_ReturnValue_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_RegisterFortTab_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UTabGameOptionsMain_C* CallFunc_Create_ReturnValue_2, class FName K2Node_ComponentBoundEvent_TabId, class UCommonButton* K2Node_ComponentBoundEvent_TabButton, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, class UIconTabButton_C* K2Node_DynamicCast_AsIcon_Tab_Button, bool K2Node_DynamicCast_bSuccess_3, class UWidget* CallFunc_GetChildAt_ReturnValue_1, int32 CallFunc_GetChildrenCount_ReturnValue, class UFortGameOptions* K2Node_DynamicCast_AsFort_Game_Options_3, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2);
};

}


