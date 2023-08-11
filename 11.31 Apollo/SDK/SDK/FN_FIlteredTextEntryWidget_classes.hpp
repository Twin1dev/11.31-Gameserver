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

// 0x880 (0xAE0 - 0x260)
// WidgetBlueprintGeneratedClass FIlteredTextEntryWidget.FilteredTextEntryWidget_C
class UFilteredTextEntryWidget_C : public UFortEditableFilteredCountedTextBox
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Error;                                             // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_Prompt;                            // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ErrorText;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_Info;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Selected;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         bUseOverrideStyle;                                 // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_61A1[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FEditableTextBoxStyle                 OverrideStyle;                                     // 0x298(0x7F0)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         bHideValidationInfo;                               // 0xA88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	enum class ETextJustify                      Justification;                                     // 0xA89(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShowTextPrompt;                                    // 0xA8A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_61A2[0x5];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                PromptTextStyle;                                   // 0xA90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  PromptText;                                        // 0xA98(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	UMulticastInlineDelegateProperty_            OnTextChanged;                                     // 0xAB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bUseHintText;                                      // 0xAC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_61A3[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FText                                  HintText;                                          // 0xAC8(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FilteredTextEntryWidget_C");
		return Clss;
	}

	void GetCurrentText(class FText* Text, class FText CallFunc_GetText_ReturnValue);
	void HandleShowPrompt(class FText& CurrentText, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_GetEmptyText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
	void SetTextFocus();
	void UpdateConfiguration(bool bOverrideStyle, bool bHideValidation, enum class ETextJustify TextJustification, bool bShouldShowTextPrompt, class FText PromptDisplayText, class UClass* TextStyle, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_GetText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void Construct();
	void OnDirtyTextAttempted(bool bIsBadText);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__EditText_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(class FText& Text);
	void ExecuteUbergraph_FilteredTextEntryWidget(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_bIsBadText, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_IsDesignTime, class FText K2Node_ComponentBoundEvent_Text);
	void OnTextChanged__DelegateSignature(class FText Text);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
