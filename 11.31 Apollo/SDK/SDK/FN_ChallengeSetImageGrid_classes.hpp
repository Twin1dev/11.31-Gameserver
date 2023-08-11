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

// 0x68 (0x668 - 0x600)
// WidgetBlueprintGeneratedClass ChallengeSetImageGrid.ChallengeSetImageGrid_C
class UChallengeSetImageGrid_C : public UAthenaChallengeSetImageGrid
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x600(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0x608(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                CloseIcon;                                         // 0x610(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  CommonRichTextBlock_110;                           // 0x618(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                GridBackFill;                                      // 0x620(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HeaderBase;                                        // 0x628(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HeaderBolt;                                        // 0x630(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        MobileCloseButton;                                 // 0x638(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              NoBattlePassContainer;                             // 0x640(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                NoBattlePassImage;                                 // 0x648(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  NoBattlePassText;                                  // 0x650(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              OverlayCloseButton;                                // 0x658(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_0;                                        // 0x660(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChallengeSetImageGrid_C");
		return Clss;
	}

	void ChangeSortFunction(bool* PassThrough);
	class UWidget* GetWidgetForFramingViewedItem();
	void SetDynamicColors(class UImage* DetailsDynamicMaterialTarget, struct FFortChallengeSetStyle& FortChallengeSetStyle, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
	void HandleBack(bool* PassThrough);
	void OnChallengeSetEstablished(struct FFortChallengeSetStyle& DisplayStyle, bool bIsComplete);
	void Construct();
	void BndEvt__MobileCloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_ChallengeSetImageGrid(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, const struct FFortChallengeSetStyle& K2Node_Event_DisplayStyle, bool K2Node_Event_bIsComplete, const struct FLinearColor& CallFunc_GetChallengeStyleLightAccentColor_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class UCircleArrowButton_C* K2Node_DynamicCast_AsCircle_Arrow_Button, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_Variable, class UCircleArrowButton_C* K2Node_DynamicCast_AsCircle_Arrow_Button_1, bool K2Node_DynamicCast_bSuccess_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UCircleArrowButton_C* K2Node_DynamicCast_AsCircle_Arrow_Button_2, bool K2Node_DynamicCast_bSuccess_2, class UFortMcpProfileAthena* CallFunc_GetAthenaProfile_ReturnValue, bool CallFunc_HasPurchasedSeasonBook_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_HandleBack_PassThrough, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButton* K2Node_ComponentBoundEvent_Button, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsConsolePlatform_ReturnValue, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
