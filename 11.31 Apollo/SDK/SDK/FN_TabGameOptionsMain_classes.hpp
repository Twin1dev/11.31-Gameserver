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

// 0x10 (0x340 - 0x330)
// WidgetBlueprintGeneratedClass TabGameOptionsMain.TabGameOptionsMain_C
class UTabGameOptionsMain_C : public UFortGameOptions
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonTextBlock*                      TooltipDisplayReference;                           // 0x338(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TabGameOptionsMain_C");
		return Clss;
	}

	void Construct();
	void UpdateOptionsTab();
	void CenterOnTab();
	void BndEvt__OptionsListView_K2Node_ComponentBoundEvent_4_OnListViewItemWidgetCreated__DelegateSignature(class UUserWidget* Widget);
	void BndEvt__OptionsListView_K2Node_ComponentBoundEvent_5_OnListViewItemScrolledIntoView__DelegateSignature(class UObject* Item, class UUserWidget* Widget);
	void Setting_Value_Changed(float Value);
	void ExecuteUbergraph_TabGameOptionsMain(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUserWidget* K2Node_ComponentBoundEvent_Widget_1, class UFortOptionsMenuSetting* K2Node_DynamicCast_AsFort_Options_Menu_Setting, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool CallFunc_BooleanOR_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, bool CallFunc_BooleanOR_ReturnValue_6, bool CallFunc_BooleanOR_ReturnValue_7, class UObject* K2Node_ComponentBoundEvent_Item, class UUserWidget* K2Node_ComponentBoundEvent_Widget, class UFortOptionsMenuSetting* K2Node_DynamicCast_AsFort_Options_Menu_Setting_1, bool K2Node_DynamicCast_bSuccess_1, float K2Node_CustomEvent_Value, bool CallFunc_IsMobileGame_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue, bool CallFunc_AreParentalControlsEnabled_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsCrucibleControls_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, class UCommonTextBlock* Temp_object_Variable, bool Temp_bool_Variable, class UCommonTextBlock* K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
