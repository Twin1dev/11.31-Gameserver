#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x518 - 0x510)
// WidgetBlueprintGeneratedClass Button_PushToTalk.Button_PushToTalk_C
class UButton_PushToTalk_C : public UBacchusButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x510(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UButton_PushToTalk_C* GetDefaultObj();

	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_HasMouseCapture_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, const struct FEventReply& CallFunc_ReleaseMouseCapture_ReturnValue);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_HasMouseCapture_ReturnValue, const struct FEventReply& CallFunc_CaptureMouse_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void Update_Visibility(enum class EPTTState PTT_State, class UPaperSprite* Temp_object_Variable, class UPaperSprite* Temp_object_Variable_1, class UPaperSprite* Temp_object_Variable_2, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_GetCanPTT_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EPTTState Temp_byte_Variable, bool CallFunc_BooleanAND_ReturnValue_1, class UPaperSprite* K2Node_Select_Default);
	void Construct();
	void OnHUDStateUpdate(struct FFortHUDState& NewState);
	void On_Can_PTT();
	void PTTClicked();
	void OnMouseCaptureLost();
	void ExecuteUbergraph_Button_PushToTalk(int32 EntryPoint, enum class EPTTState Temp_byte_Variable, enum class EPTTState Temp_byte_Variable_1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_1, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_2, enum class EPTTState CallFunc_GetPTTState_ReturnValue, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_3, enum class EPTTState CallFunc_GetPTTState_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAthenaHUDContext* CallFunc_GetContext_ReturnValue_4, enum class EPTTState Temp_byte_Variable_2, enum class EPTTState CallFunc_GetPTTState_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EPTTState Temp_byte_Variable_3, enum class EPTTState K2Node_Select_Default, const struct FFortHUDState& K2Node_Event_NewState);
};

}


