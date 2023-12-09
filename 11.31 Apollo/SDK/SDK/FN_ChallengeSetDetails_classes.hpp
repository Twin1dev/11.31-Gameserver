#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x650 - 0x5F8)
// WidgetBlueprintGeneratedClass ChallengeSetDetails.ChallengeSetDetails_C
class UChallengeSetDetails_C : public UAthenaChallengeSetDetails
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ItemInfoIntroOutro;                                // 0x600(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x608(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class USizeBox*                              CameraFramingWidget;                               // 0x610(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CloseIcon;                                         // 0x618(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HeaderBase;                                        // 0x620(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HeaderBolt;                                        // 0x628(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ItemInfo;                                          // 0x630(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        MobileCloseButton;                                 // 0x638(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayCloseButton;                                // 0x640(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x648(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UChallengeSetDetails_C* GetDefaultObj();

	class UWidget* GetWidgetForFramingViewedItem();
	void SetDynamicColors(class UImage* DetailsDynamicMaterialTarget, struct FFortChallengeSetStyle& FortChallengeSetStyle, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void HandleBack(bool* PassThrough);
	void OnChallengeSetEstablished(struct FFortChallengeSetStyle& DisplayStyle, bool bIsComplete);
	void Construct();
	void BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_ChallengeSetDetails(int32 EntryPoint, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UCircleArrowButton_C* K2Node_DynamicCast_AsCircle_Arrow_Button, bool K2Node_DynamicCast_bSuccess, const struct FFortChallengeSetStyle& K2Node_Event_DisplayStyle, bool K2Node_Event_bIsComplete, class UCircleArrowButton_C* K2Node_DynamicCast_AsCircle_Arrow_Button_1, bool K2Node_DynamicCast_bSuccess_1, const struct FLinearColor& CallFunc_GetChallengeStyleLightAccentColor_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class UCircleArrowButton_C* K2Node_DynamicCast_AsCircle_Arrow_Button_2, bool K2Node_DynamicCast_bSuccess_2, bool Temp_bool_Variable, class UItemInfoHeaderWidget_C* K2Node_DynamicCast_AsItem_Info_Header_Widget, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_HandleBack_PassThrough, enum class ESlateVisibility K2Node_Select_Default, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


