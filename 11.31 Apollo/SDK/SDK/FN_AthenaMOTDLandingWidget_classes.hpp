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

// 0x78 (0x3C8 - 0x350)
// WidgetBlueprintGeneratedClass AthenaMOTDLandingWidget.AthenaMOTDLandingWidget_C
class UAthenaMOTDLandingWidget_C : public UFortAthenaMOTDLandingWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_CornerTriangle;                              // 0x358(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_TextFloater;                                 // 0x360(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  ButtonDefaultText_ViewItem;                        // 0x368(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ButtonDefaultText_ViewRMTItem;                     // 0x380(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ButtonDefaultText_OpenWebsite;                     // 0x398(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ButtonDefaultText_NavigateToTab;                   // 0x3B0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaMOTDLandingWidget_C");
		return Clss;
	}

	void SetTextIfValidOrDefault(class UCommonButton* Button, const class FString& String, class FText DefaultText, bool Temp_bool_Variable, class FText CallFunc_Conv_StringToText_ReturnValue, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, bool CallFunc_TextIsEmpty_ReturnValue, class FText K2Node_Select_Default);
	void OnInitialized();
	void OnPopulateNews(struct FAthenaNewsEntry& NewsEntry);
	void ExecuteUbergraph_AthenaMOTDLandingWidget(int32 EntryPoint, const struct FAthenaNewsEntry& K2Node_Event_NewsEntry, bool K2Node_SwitchEnum_CmpSuccess, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button_1, bool K2Node_DynamicCast_bSuccess_1, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button_2, bool K2Node_DynamicCast_bSuccess_2);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
