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

// 0x100 (0xD58 - 0xC58)
// WidgetBlueprintGeneratedClass AthenaMatchmakingSpinnerButton.AthenaMatchmakingSpinnerButton_C
class UAthenaMatchmakingSpinnerButton_C : public UFortMatchmakingKnobsSpinnerButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC58(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      In;                                                // 0xC60(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Right;                                             // 0xC68(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Left;                                              // 0xC70(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_Fill;                                       // 0xC78(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleCommonButton_C*                 LeftButton;                                        // 0xC80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              LeftButtonSize;                                    // 0xC88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        OptionSelectionArea;                               // 0xC90(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USimpleCommonButton_C*                 RightButton;                                       // 0xC98(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              RightButtonSize;                                   // 0xCA0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SaveSpinner;                                       // 0xCA8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class FString>                        A;                                                 // 0xCB0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class FString>                        A_0;                                               // 0xCC0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	bool                                         DebugOnMobileOrPC;                                 // 0xCD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsGamepad;                                         // 0xCD1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6251[0x2];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	float                                        Mobile_Size_Override;                              // 0xCD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ESlateVisibility                  VisibilitySetting;                                 // 0xCD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6252[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class UClass*                                DefaultStyleMouse;                                 // 0xCE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UClass*                                DefaultStyleGamepad;                               // 0xCE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                           TextColor_Normal;                                  // 0xCF0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSlateColor                           TextColor_Focused;                                 // 0xD18(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	UMulticastInlineDelegateProperty_            OnSpinnerValueChanged;                             // 0xD40(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UClass*                                DefaultStyleTouch;                                 // 0xD50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaMatchmakingSpinnerButton_C");
		return Clss;
	}

	void UpdateSyle(enum class ECommonInputType InputType, enum class ECommonInputType Temp_byte_Variable, const struct FSlateFontInfo& Temp_struct_Variable, enum class ECommonInputType Temp_byte_Variable_1, float Temp_float_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float Temp_float_Variable_3, enum class ECommonInputType Temp_byte_Variable_2, float Temp_float_Variable_4, float Temp_float_Variable_5, float Temp_float_Variable_6, float Temp_float_Variable_7, enum class ECommonInputType Temp_byte_Variable_3, class UClass* Temp_class_Variable, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, const struct FSlateFontInfo& K2Node_Select_Default, float K2Node_Select_Default_1, float K2Node_Select_Default_2, class UClass* K2Node_Select_Default_3);
	class UWidget* DoCustomNavigation_0(enum class EUINavigation Navigation);
	void Set_Button_Sizes(bool CallFunc_IsMobileGame_ReturnValue);
	void BP_OnDoubleClicked();
	void BP_OnClicked();
	void Construct();
	void InputModeChanged(bool Gamepad, enum class ECommonInputType InputType);
	void BndEvt__SimpleCommonButton_1_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void InputUpdated(enum class ECommonInputType bNewInputType);
	void AfterleftisDone();
	void AfterRightIsDone();
	void AnimateIn(int32 Index);
	void OnLoadingStateChanged(bool bCurrentlyLoading);
	void SetSpinnerOptionsVisiblity(bool bVisible);
	void OnSpinnerRotated(int32 Value, bool bUserInitiated);
	void BP_OnSelected();
	void BP_OnDeselected();
	void HighlightText();
	void UnHighlightText();
	void ExecuteUbergraph_AthenaMatchmakingSpinnerButton(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_CustomEvent_GamePad, enum class ECommonInputType K2Node_CustomEvent_InputType, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, bool CallFunc_EqualEqual_ByteByte_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_CustomEvent_Index, float CallFunc_Multiply_IntFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, bool K2Node_Event_bCurrentlyLoading, enum class ESlateVisibility K2Node_Select_Default, bool K2Node_Event_bVisible, int32 K2Node_Event_Value, bool K2Node_Event_bUserInitiated, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2);
	void OnSpinnerValueChanged__DelegateSignature(int32 Index);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
