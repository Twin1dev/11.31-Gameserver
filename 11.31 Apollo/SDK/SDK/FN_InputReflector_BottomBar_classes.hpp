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

// 0x30 (0x2B8 - 0x288)
// WidgetBlueprintGeneratedClass InputReflector_BottomBar.InputReflector_BottomBar_C
class UInputReflector_BottomBar_C : public UFortInputReflector
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        ButtonBox;                                         // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBoxShell;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                               DefaultButtonMargin;                               // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class UInputReflectorButton_BottomBar_C*     BottomBar_ReflectorButton;                         // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InputReflector_BottomBar_C");
		return Clss;
	}

	void StyleButton(class UCommonButton*& ButtonToStyle, class UCommonButton** ButtonStyled, class UInputReflector_BottomBar_C* ReflectorButton, class UInputReflectorButton_BottomBar_C* K2Node_DynamicCast_AsInput_Reflector_Button_Bottom_Bar, bool K2Node_DynamicCast_bSuccess, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_SwitchEnum_CmpSuccess);
	void HandleAddButton(class UCommonButton* AddedButton, class UHorizontalBoxSlot* HBoxSlot, class UCommonButton* CallFunc_StyleButton_ButtonStyled, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool K2Node_SwitchEnum_CmpSuccess, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void OnButtonAdded(class UCommonButton* AddedButton, struct FCommonInputActionHandlerData& Data);
	void ExecuteUbergraph_InputReflector_BottomBar(int32 EntryPoint, class UCommonButton* K2Node_Event_AddedButton, const struct FCommonInputActionHandlerData& K2Node_Event_Data);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
