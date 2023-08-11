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

// 0xBC (0x5DC - 0x520)
// WidgetBlueprintGeneratedClass BattlePassDirectAcquisitionScreen.BattlePassDirectAcquisitionScreen_C
class UBattlePassDirectAcquisitionScreen_C : public UFortDirectAcquisitionWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x520(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Entrance_Tiles_0;                                  // 0x528(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Entrance_OR;                                       // 0x530(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Entrance_Tiles;                                    // 0x538(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Entrance_Header;                                   // 0x540(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                CloseIcon;                                         // 0x548(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorderTouchToClose;                          // 0x550(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Glow;                                              // 0x558(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        LeftTileHB;                                        // 0x560(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        MobileCloseButton;                                 // 0x568(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMTXButton_C*                          MTXButton;                                         // 0x570(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MTXButtonBox;                                      // 0x578(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         NoOffersBox;                                       // 0x580(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayCloseButton;                                // 0x588(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayProgressSpinner;                            // 0x590(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ProgressSpinner;                                   // 0x598(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        RightTileHB;                                       // 0x5A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonDateTimeTextBlock*              SeasonCountdown;                                   // 0x5A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SeasonEndsLabel;                                   // 0x5B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 SwitcherItemsProgress;                             // 0x5B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VBOffers;                                          // 0x5C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FMargin                               TilePadding;                                       // 0x5C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	int32                                        ItemCount;                                         // 0x5D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BattlePassDirectAcquisitionScreen_C");
		return Clss;
	}

	void GetSeasonEndLabelText(class FText* Result, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetCurrentChapterAndSeasonText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Intro_Anim__Header_(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Intro_Anim_Reset(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Intro_Anim__Tiles_(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Intro_Anim__OR_(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	struct FEventReply On_CommonBorderTouchToClose_MouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_IsMobileGame_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue, bool CallFunc_HandleBack_bPassThrough);
	void HandleBack(bool* bPassThrough);
	void GenerateOfferWidget(class UFortStoreFrontOfferInfo* OfferData, bool CallFunc_IsGiftOnly_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_HasDisplayAsset_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 Temp_int_Variable, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHorizontalBox* K2Node_Select_Default, class UAthenaDirectAcquisitionOfferWidget_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void OnOffersGenerated();
	void BP_OnActivated();
	void Construct();
	void BndEvt__PanelButton_K2Node_ComponentBoundEvent_97_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnBeginIntro();
	void BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnStartReadingOffers();
	void NoOffersAvailable();
	void ExecuteUbergraph_BattlePassDirectAcquisitionScreen(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue, class UFortFrontEndContext* CallFunc_GetContext_ReturnValue_1, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FDateTime& CallFunc_GetSeasonStoreEndDate_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class FText CallFunc_GetSeasonEndLabelText_Result, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_HandleBack_bPassThrough, class UCommonButton* K2Node_ComponentBoundEvent_Button, enum class ESlateVisibility K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
