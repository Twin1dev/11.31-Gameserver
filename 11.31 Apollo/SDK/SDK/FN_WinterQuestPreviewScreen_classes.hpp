#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x4E0 - 0x4C0)
// WidgetBlueprintGeneratedClass WinterQuestPreviewScreen.WinterQuestPreviewScreen_C
class UWinterQuestPreviewScreen_C : public UFortWinterQuestPreviewScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_Presents;                                   // 0x4C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortLazyImage*                        Image_PresentIcon;                                 // 0x4D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_NumberOfPresents;                             // 0x4D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWinterQuestPreviewScreen_C* GetDefaultObj();

	void UpdateOfferOneText(class FText& OfferText);
	void UpdateOfferTwoText(class FText& OfferText);
	void ExecuteUbergraph_WinterQuestPreviewScreen(int32 EntryPoint, class USimpleFeatured_YellowButton_C* K2Node_DynamicCast_AsSimple_Featured_Yellow_Button, bool K2Node_DynamicCast_bSuccess, class FText K2Node_Event_OfferText_1, class FText K2Node_Event_OfferText, class USimpleFeatured_YellowButton_C* K2Node_DynamicCast_AsSimple_Featured_Yellow_Button_1, bool K2Node_DynamicCast_bSuccess_1);
};

}


