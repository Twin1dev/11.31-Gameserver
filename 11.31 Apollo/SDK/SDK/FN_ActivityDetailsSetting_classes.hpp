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

// 0x28 (0x298 - 0x270)
// WidgetBlueprintGeneratedClass ActivityDetailsSetting.ActivityDetailsSetting_C
class UActivityDetailsSetting_C : public UFortActivityDetailsSettingsWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         Border_Background;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Checked;                                     // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Unchecked;                                   // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 Switcher_CheckBox;                                 // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ActivityDetailsSetting_C");
		return Clss;
	}

	void OnSettingChanged(bool NewValue);
	void BndEvt__Button_ToggleSetting_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_ToggleSetting_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_ActivityDetailsSetting(int32 EntryPoint, const struct FLinearColor& K2Node_MakeStruct_LinearColor, bool K2Node_Event_NewValue, int32 CallFunc_SelectInt_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, const struct FLinearColor& K2Node_MakeStruct_LinearColor_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
