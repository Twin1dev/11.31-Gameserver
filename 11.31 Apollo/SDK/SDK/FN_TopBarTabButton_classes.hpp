#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x91 (0xC49 - 0xBB8)
// WidgetBlueprintGeneratedClass TopBarTabButton.TopBarTabButton_C
class UTopBarTabButton_C : public UFortTopBarTabButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hovered;                                           // 0xBC0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Selected;                                          // 0xBC8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 TabTypeSwitcher;                                   // 0xBD0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWinterfest_CustomTab_C*               Winterfest_CustomTab;                              // 0xBD8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MID_ButtonBorder;                                  // 0xBE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PreviewMobileStyle;                                // 0xBE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6032[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FFloatSpringState                     SpringState_ShapeChange;                           // 0xBEC(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FFloatSpringState                     SpringState_Scale;                                 // 0xBF4(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        Spring_Scale_Target;                               // 0xBFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MassMultiply;                                      // 0xC00(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DampenMultiply;                                    // 0xC04(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StiffnessMultiply;                                 // 0xC08(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         VisualSelectionState;                              // 0xC0C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6036[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        RandomFloat_Top;                                   // 0xC10(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RandomFloat_Left;                                  // 0xC14(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RandomFloat_Right;                                 // 0xC18(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        RandomFloat_Bottom;                                // 0xC1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShapeChange_New;                                   // 0xC20(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ShapeChange_Target;                                // 0xC24(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UpdateSpring;                                      // 0xC28(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6038[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ButtonText;                                        // 0xC30(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         bIsAlternateTab;                                   // 0xC48(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UTopBarTabButton_C* GetDefaultObj();

	void OverrideIcon(bool Show, const struct FSlateBrush& InSlateBrush, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue);
	void SetText(class FText ButtonText, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void UpdateMIDWithRandomValues(bool CallFunc_IsValid_ReturnValue);
	void SeedRandomValues(float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, float CallFunc_RandomFloatInRange_ReturnValue_3);
	void InitializeButtonBorderMID(class UMaterialInstanceDynamic* CallFunc_GetSingleMaterialStyleMID_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnInitialized();
	void OnSelectedChangedEvent(class UCommonButton* Button, bool Selected);
	void HandleSelectionChangedVisuals(bool bIsSelected);
	void OnCurrentTextStyleChanged();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void OnUseAlternateTab();
	void ExecuteUbergraph_TopBarTabButton(int32 EntryPoint, bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, bool CallFunc_IsMobileGame_ReturnValue, class UNormalBangWrapper_C* K2Node_DynamicCast_AsNormal_Bang_Wrapper, bool K2Node_DynamicCast_bSuccess, class UCommonButton* K2Node_CustomEvent_Button, bool K2Node_CustomEvent_Selected, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_CustomEvent_bIsSelected, class UClass* K2Node_Select_Default, bool CallFunc_EqualEqual_BoolBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue_2, class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue);
};

}


