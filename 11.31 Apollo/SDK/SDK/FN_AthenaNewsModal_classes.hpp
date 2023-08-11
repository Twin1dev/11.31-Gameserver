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

// 0xB0 (0x4F0 - 0x440)
// WidgetBlueprintGeneratedClass AthenaNewsModal.AthenaNewsModal_C
class UAthenaNewsModal_C : public UFortAthenaNewsPanel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      NewPopUpIntro;                                     // 0x448(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               B_TapToClose;                                      // 0x450(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BackgroundFill;                                    // 0x458(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                BackgroundFill_1;                                  // 0x460(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     BrowseToExternalURLButton;                         // 0x468(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               BrowseToExternalURLSpacer;                         // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               ButtonBar_Spacer;                                  // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     FNBR_LobbyButton;                                  // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     ItemShopButton;                                    // 0x488(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULightbox_C*                           Lightbox;                                          // 0x490(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x498(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SpecialEventBackgroundOVR;                         // 0x4A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              SpecialEventBackgroundOVR_Secondary;               // 0x4A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SpeedLines;                                        // 0x4B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     STW_CloseButton;                                   // 0x4B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     STWFounderPackButton;                              // 0x4C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               STWFounderPackSpacer;                              // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher_ExitButtons;                        // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UClass*                                BS_Default;                                        // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                BS_SpecialEvent;                                   // 0x4E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                BS_SpecialEvent_Secondary;                         // 0x4E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaNewsModal_C");
		return Clss;
	}

	void UpdateExternalNewsWidgets(enum class ENewsExternalURLMode Temp_byte_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, class FText Temp_text_Variable_2, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_GetExternalNewsURL_bHasValidExternalURL, const class FString& CallFunc_GetExternalNewsURL_ExternalURL, enum class ENewsExternalURLMode CallFunc_GetExternalNewsURL_ButtonMode, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_Select_Default_1);
	void ShouldShowSTWUpsellInBR(bool* ShouldShow, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void DialogResult_3BE479B64CDE5378C77A8DA453770A3B(enum class EFortDialogResult Result, class FName ResultName);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_21_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ForceNewsClosed();
	void BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void Construct();
	void BndEvt__STW_CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__AthenaNews_K2Node_ComponentBoundEvent_2_UpdateStyle__DelegateSignature(enum class EAthenaNewsStyle NewStyle);
	void BndEvt__STWFounderPackButton_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__STWUpdateButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_AthenaNewsModal(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class FName Temp_name_Variable, enum class EFortDialogResult Temp_byte_Variable, bool K2Node_SwitchEnum_CmpSuccess, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_GetNumPlayersInLocalParty_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_4, int32 Temp_int_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, int32 Temp_int_Variable_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, enum class EAthenaNewsStyle K2Node_ComponentBoundEvent_NewStyle, bool K2Node_SwitchEnum_CmpSuccess_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCMSContext* CallFunc_GetContext_ReturnValue_2, class FText CallFunc_MakeLiteralText_ReturnValue, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_CustomInput_ReturnValue, int32 Temp_int_Variable_2, bool CallFunc_IsValid_ReturnValue, bool CallFunc_ShouldShowSTWUpsellInBR_ShouldShow, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Variable_3, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class ESubGame CallFunc_GetSubGame_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, enum class ESubGame Temp_byte_Variable_5, bool CallFunc_GetExternalNewsURL_bHasValidExternalURL, const class FString& CallFunc_GetExternalNewsURL_ExternalURL, enum class ENewsExternalURLMode CallFunc_GetExternalNewsURL_ButtonMode, TArray<class AFort_Entry_Music_Controller_BP_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AFort_Entry_Music_Controller_BP_C* CallFunc_Array_Get_Item, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_3, enum class ESubGame CallFunc_GetSubGame_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, class UAthenaNews_C* K2Node_DynamicCast_AsAthena_News, bool K2Node_DynamicCast_bSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
