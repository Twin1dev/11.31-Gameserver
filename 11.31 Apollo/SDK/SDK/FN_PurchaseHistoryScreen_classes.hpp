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

// 0xD9 (0x5B1 - 0x4D8)
// WidgetBlueprintGeneratedClass PurchaseHistoryScreen.PurchaseHistoryScreen_C
class UPurchaseHistoryScreen_C : public UFortPurchaseHistoryScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         Border_Summary;                                    // 0x4E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USkewButton_C*                         Button_ClosePostApproval;                          // 0x4E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_ItemSelect;                                 // 0x4F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_Reason;                                     // 0x4F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_SubmitRequest;                              // 0x500(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCircularThrobber*                     CircularThrobber_0;                                // 0x508(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CloseIcon;                                         // 0x510(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       FinalSubmitSwitcher;                               // 0x518(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlock*                    FortRichTextBlock_1;                               // 0x520(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ItemsToReturn;                                     // 0x528(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 MainSwitcher;                                      // 0x530(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        MobileCloseButton;                                 // 0x538(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayCloseButton;                                // 0x540(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 Switcher_ItemList;                                 // 0x548(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_ResultDesc;                                   // 0x550(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_ResultMtxMsg;                                 // 0x558(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_ResultTitle;                                  // 0x560(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortRichTextBlock*                    Text_ReturnConfirm;                                // 0x568(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTicketCounter_C*                      TicketCounter;                                     // 0x570(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBox_ChosenItem;                                   // 0x578(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBox_ChosenReason;                                 // 0x580(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          WarningBox;                                        // 0x588(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FDataTableRowHandle                   BackAction;                                        // 0x590(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	TArray<class UUserWidget*>                   TicketArray;                                       // 0x5A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         Should_Use_Back_Action;                            // 0x5B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PurchaseHistoryScreen_C");
		return Clss;
	}

	void ToggleBackAction(bool bShouldShow, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_HasInputActionHandler_ReturnValue, bool CallFunc_HasInputActionHandler_ReturnValue_1);
	void HandleBack(bool* PassThrough, bool CallFunc_HandlePreviousStepAction_bPassthrough);
	void OnItemRefresh(const struct FMtxPurchaseHistory& PurchaseHistory);
	void Construct();
	void OnPopulateView(enum class EPurchaseReturnStep CurrentStep);
	void BP_OnActivated();
	void OnNoPurchasesAvailable();
	void BndEvt__Button_ItemSelect_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_Reason_K2Node_ComponentBoundEvent_18_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_ClosePostApproval_K2Node_ComponentBoundEvent_40_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnBeginRefundSubmission();
	void OnEndRefundSubmission(bool bSuccess, int32 MtxRefunded, class UFortItemDefinition* ReturnedItem, int32 TicketIndex, bool WasFreeRefund);
	void InitializeTickets(int32 NumTicketsAvailableToUse);
	void UpdateItemList(TArray<class UCommonTextBlock*>& ItemsToReturn);
	void OnInputMethodChanged(enum class ECommonInputType bNewInputType);
	void BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnOpenSubmitRequest(bool bIsSelectionTokenlessRefundable);
	void ExecuteUbergraph_PurchaseHistoryScreen(int32 EntryPoint, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Array_Index_Variable, const struct FMtxPurchaseHistory& K2Node_Event_PurchaseHistory, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, enum class EPurchaseReturnStep K2Node_Event_CurrentStep, bool K2Node_SwitchEnum_CmpSuccess, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, bool K2Node_Event_bSuccess, int32 K2Node_Event_MtxRefunded, class UFortItemDefinition* K2Node_Event_ReturnedItem, int32 K2Node_Event_TicketIndex, bool K2Node_Event_WasFreeRefund, class FText CallFunc_GetDisplayName_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue, class FText CallFunc_Format_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 K2Node_Event_NumTicketsAvailableToUse, float CallFunc_RandomFloatInRange_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, TArray<class UCommonTextBlock*>& K2Node_Event_ItemsToReturn, class UCommonTextBlock* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, enum class ESlateVisibility Temp_byte_Variable, class UPanelSlot* CallFunc_AddChild_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class ECommonInputType K2Node_CustomEvent_bNewInputType, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool K2Node_Event_bIsSelectionTokenlessRefundable, bool Temp_bool_Variable_1, class UWidget* K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
