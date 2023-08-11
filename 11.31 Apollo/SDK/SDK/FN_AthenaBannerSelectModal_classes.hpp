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

// 0x38 (0x470 - 0x438)
// WidgetBlueprintGeneratedClass AthenaBannerSelectModal.AthenaBannerSelectModal_C
class UAthenaBannerSelectModal_C : public UFortBannerSelectModal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x438(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         BorderTouch;                                       // 0x440(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_LocalPlayerBannerEditor_C*         BP_LocalPlayerBannerEditor;                        // 0x448(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x450(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_Banner;                                   // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   CloseAction;                                       // 0x460(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaBannerSelectModal_C");
		return Clss;
	}

	struct FEventReply On_BorderTouch_MouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void Setup_Input_Action_Handlers(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void HandleCloseAction(bool* PassThrough, bool CallFunc_IsErebus_ReturnValue, bool CallFunc_Attempt_Leave_Picker_Left, bool CallFunc_BooleanAND_ReturnValue);
	void Construct();
	void BndEvt__BP_LocalPlayerBannerEditor_K2Node_ComponentBoundEvent_18_CloseBannerEditor__DelegateSignature(class FName IconId, class FName ColorId);
	void BP_OnDeactivated();
	void BP_OnActivated();
	void Close();
	void ExecuteUbergraph_AthenaBannerSelectModal(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_HandleCloseAction_PassThrough, bool CallFunc_HandleCloseAction_PassThrough_1, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, class FName K2Node_ComponentBoundEvent_IconId, class FName K2Node_ComponentBoundEvent_ColorId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
