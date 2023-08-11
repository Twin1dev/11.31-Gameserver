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

// 0x10 (0x2C0 - 0x2B0)
// WidgetBlueprintGeneratedClass SettingsListEntry_KeyboardInput.SettingsListEntry_KeyboardInput_C
class USettingsListEntry_KeyboardInput_C : public UFortSettingsListEntrySetting_KeyboardInput
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnHover;                                           // 0x2B8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SettingsListEntry_KeyboardInput_C");
		return Clss;
	}

	void OnUpdateKeyText(class FText& PrimaryKeyText, class FText& SecondaryKeyText);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void ExecuteUbergraph_SettingsListEntry_KeyboardInput(int32 EntryPoint, const struct FPointerEvent& K2Node_Event_MouseEvent, class FText K2Node_Event_PrimaryKeyText, class FText K2Node_Event_SecondaryKeyText, class UScrollingTextButton_C* K2Node_DynamicCast_AsScrolling_Text_Button, bool K2Node_DynamicCast_bSuccess, class UScrollingTextButton_C* K2Node_DynamicCast_AsScrolling_Text_Button_1, bool K2Node_DynamicCast_bSuccess_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
