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

// 0x18 (0x5D8 - 0x5C0)
// WidgetBlueprintGeneratedClass WinterQuestPresentScreen.WinterQuestPresentScreen_C
class UWinterQuestPresentScreen_C : public UFortWinterQuestPresentScreen
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActivatableWidgetSwitcher*      PlatformTypeSwitcher;                              // 0x5C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Root_Overlay;                                      // 0x5D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WinterQuestPresentScreen_C");
		return Clss;
	}

	void OnStartOpeningPresent();
	void OnStopOpeningPresent();
	void OnUpdatePlatformType(enum class ECommonPlatformType PlatformType);
	void OnInputMethodChanged(enum class ECommonInputType NewMethod);
	void OnUpdateShakePercentage(float InPercentage);
	void BP_OnActivated();
	void OnUpdateShakeRecharge(float InPercentage);
	void ExecuteUbergraph_WinterQuestPresentScreen(int32 EntryPoint, enum class ECommonInputType Temp_byte_Variable, class UWinterQuest_ShakePrompt_C* K2Node_DynamicCast_AsWinter_Quest_Shake_Prompt, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, enum class ECommonPlatformType K2Node_Event_PlatformType, class UWinterQuest_OpenPrompt_C* K2Node_DynamicCast_AsWinter_Quest_Open_Prompt, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_SwitchEnum_CmpSuccess, enum class ECommonInputType K2Node_Event_NewMethod, float K2Node_Event_InPercentage_1, enum class ESlateVisibility K2Node_Select_Default, class UWinterQuest_ShakePrompt_C* K2Node_DynamicCast_AsWinter_Quest_Shake_Prompt_1, bool K2Node_DynamicCast_bSuccess_2, class UWinterQuest_OpenPrompt_C* K2Node_DynamicCast_AsWinter_Quest_Open_Prompt_1, bool K2Node_DynamicCast_bSuccess_3, float K2Node_Event_InPercentage);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
