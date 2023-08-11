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

// 0x40 (0x418 - 0x3D8)
// WidgetBlueprintGeneratedClass TopBar.TopBar_C
class UTopBar_C : public UAthenaTopBar
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      IntroTabLabel;                                     // 0x3E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UGameFeatureStatus_C*                  GameFeatureStatus_HighResTextureDownload;          // 0x3E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_TopContent;                          // 0x3F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class ULetoFrontendJoinPrompt_Side_C*        LetoFrontendJoinPrompt_Side;                       // 0x3F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              MobileTabTitle;                                    // 0x400(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USafeZone*                             SafeZone_7;                                        // 0x408(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWindowchromebuttons_C*                Windowchromebuttons;                               // 0x410(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TopBar_C");
		return Clss;
	}

	void UpdateMTXButton(enum class EFortRuntimeOptionTabState Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, TArray<struct FRuntimeOptionTabStateInfo>& CallFunc_GetDisabledFrontendNavigationTabs_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FRuntimeOptionTabStateInfo& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool K2Node_Select_Default);
	void Construct();
	void OnMobileTabLabelChanged();
	void ExecuteUbergraph_TopBar(int32 EntryPoint, const struct FMargin& K2Node_MakeStruct_Margin, bool CallFunc_IsMobileGame_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin_1, TScriptInterface<class IFortClientAnnouncement_TutorialInterface> K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IFortClientAnnouncement_TutorialInterface> K2Node_DynamicCast_AsFort_Client_Announcement_Tutorial_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
