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

// 0xD0 (0x520 - 0x450)
// WidgetBlueprintGeneratedClass AffiliateKeyModal.AffiliateKeyModal_C
class UAffiliateKeyModal_C : public UFortAffilateModal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x450(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      SuccessAnim;                                       // 0x458(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Shake;                                             // 0x460(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                     CloseButton;                                       // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CloseIcon;                                         // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_0;                                 // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_2;                                 // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ConnectionError;                                   // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Description;                                       // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonActionWidget*                   EditTextActionWidget;                              // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      EntryError;                                        // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      ErrorPart2;                                        // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     LaunchWebsite;                                     // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                McpWaitingSpinner;                                 // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        MobileCloseButton;                                 // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MobileCloseOverlay;                                // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Found;                                             // 0x4D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_65D0[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class FString                                FoundItem;                                         // 0x4E0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         ConnectionTimeout;                                 // 0x4F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_65D1[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UMulticastInlineDelegateProperty_            OnPopupClosed;                                     // 0x4F8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         bSkipAutoPopulate;                                 // 0x508(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_65D2[0x7];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UMulticastInlineDelegateProperty_            OnSuccess;                                         // 0x510(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AffiliateKeyModal_C");
		return Clss;
	}

	void SetupAffiliateField(const class FString& AffilateName, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetMobileButtons(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_IsUsingTouch_ReturnValue, bool CallFunc_IsUsingTouch_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
	void BP_OnActivated();
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AcceptButton_K2Node_ComponentBoundEvent_26_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnSet(bool bSuccess);
	void BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnCheckComplete(bool bSuccess, bool bWasValidAffiliateName, const class FString& AffilateNameChecked);
	void OnFinish();
	void BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnInputModeChanged(bool bUsingGamepad);
	void Construct();
	void ExecuteUbergraph_AffiliateKeyModal(int32 EntryPoint, class UFortMcpContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_GetAffiliateName_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortMcpContext* CallFunc_GetContext_ReturnValue_1, class UFortMcpContext* CallFunc_GetContext_ReturnValue_2, const class FString& CallFunc_GetAffiliateName_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, TArray<class FString>& CallFunc_GetValidAffiliateNames_ReturnValue, bool K2Node_CustomEvent_bSuccess_1, class UFortMcpContext* CallFunc_GetContext_ReturnValue_3, const class FString& CallFunc_GetAffiliateName_ReturnValue_2, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_GetOverrideAffiliateDescriptionText_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_2, class FText CallFunc_GetOverrideAffiliateErrorText_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_TextIsEmpty_ReturnValue_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UFortMcpContext* CallFunc_GetContext_ReturnValue_4, class FText CallFunc_GetText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, int32 CallFunc_Array_Find_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_3, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_4, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_CanLaunchURL_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_5, int32 CallFunc_Len_ReturnValue, class FText CallFunc_GetText_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_6, enum class ESlateVisibility Temp_byte_Variable_3, class FText CallFunc_GetText_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool Temp_bool_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ESlateVisibility K2Node_Select_Default_1, class FText CallFunc_GetText_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_7, bool K2Node_CustomEvent_bSuccess, bool K2Node_CustomEvent_bWasValidAffiliateName, const class FString& K2Node_CustomEvent_AffilateNameChecked, class FText CallFunc_GetText_ReturnValue_5, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, class FText CallFunc_GetText_ReturnValue_6, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, bool CallFunc_EqualEqual_StrStr_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bUsingGamepad);
	void OnSuccess__DelegateSignature();
	void OnPopupClosed__DelegateSignature();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
