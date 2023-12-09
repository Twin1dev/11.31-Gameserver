#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x90 (0x3B0 - 0x320)
// WidgetBlueprintGeneratedClass TabVideoOptions.TabVideoOptions_C
class UTabVideoOptions_C : public UFortVideoOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x320(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UGameFeatureStatus_C*                  GameFeatureStatus;                                 // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TooltipDisplay;                                    // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            Enable_Overlay;                                    // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	UMulticastInlineDelegateProperty_            Disable_Overlay;                                   // 0x348(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UFortOptionsMenuSetting*               DisplayResolutionSetting;                          // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<enum class ESettingType, class UFortOptionsMenuSetting*> ForceUpdateSettings;                               // 0x360(0x50)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UTabVideoOptions_C* GetDefaultObj();

	void Update_Qualities(const TArray<class FText>& NewLocalVar_0, class UFortSettingsContext* CallFunc_GetContext_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_GetMaxQualityLevel_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, enum class ESettingType Temp_byte_Variable, class UFortOptionsMenuSetting* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UOptionsMenuRowSelector_C* K2Node_DynamicCast_AsOptions_Menu_Row_Selector, bool K2Node_DynamicCast_bSuccess);
	void Construct();
	void UpdateOptionsTab();
	void CenterOnTab();
	void OnGameUserSettingsUINeedsUpdate();
	void Destruct();
	void BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void Window_Mode_Changed(bool IsWindowedFullscreen);
	void Quality_Changed(float Value);
	void Setting_Value_Changed(float Value);
	void ExecuteUbergraph_TabVideoOptions(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, class UUserWidget* K2Node_ComponentBoundEvent_Widget_1, class UFortOptionsMenuSetting* K2Node_DynamicCast_AsFort_Options_Menu_Setting, bool K2Node_DynamicCast_bSuccess, class UObject* K2Node_ComponentBoundEvent_Item, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UFortOptionsMenuSetting* K2Node_DynamicCast_AsFort_Options_Menu_Setting_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UOptionsMenuSetting_C* K2Node_DynamicCast_AsOptions_Menu_Setting, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_CustomEvent_IsWindowedFullscreen, class UOptionsMenuRotator_C* K2Node_DynamicCast_AsOptions_Menu_Rotator, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Not_PreBool_ReturnValue, float K2Node_CustomEvent_Value_1, float K2Node_CustomEvent_Value, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ESlateVisibility Temp_byte_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, TArray<class UFortOptionsMenuSetting*>& CallFunc_Map_Values_Values, enum class ESlateVisibility Temp_byte_Variable_1, class UFortOptionsMenuSetting* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsMobileGame_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UFortSettingsContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void Disable_Overlay__DelegateSignature();
	void Enable_Overlay__DelegateSignature(bool Accept_Input);
};

}


