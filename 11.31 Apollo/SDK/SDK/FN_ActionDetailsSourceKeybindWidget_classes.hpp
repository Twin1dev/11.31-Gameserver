#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x8C8 - 0x8B8)
// WidgetBlueprintGeneratedClass ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C
class UActionDetailsSourceKeybindWidget_C : public UKeybindWidget_C
{
public:
	TScriptInterface<class IFortGlobalActionDetailsDataSource> ActionSource;                                      // 0x8B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UActionDetailsSourceKeybindWidget_C* GetDefaultObj();

	void HandleActionSourceValueChange(class UObject* Source);
	void BindActionSourceEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UnbindActionSourceEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetActionSource(TScriptInterface<class IFortGlobalActionDetailsDataSource> Value, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue);
	void UpdateInputAction(const struct FFortGlobalActionDetails& ActionDetails, enum class EFortKeybindForcedHoldStatus Temp_byte_Variable, enum class EFortKeybindForcedHoldStatus Temp_byte_Variable_1, bool Temp_bool_Variable, const struct FFortGlobalActionDetails& CallFunc_GetValue_ReturnValue, enum class EFortKeybindForcedHoldStatus K2Node_Select_Default, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


