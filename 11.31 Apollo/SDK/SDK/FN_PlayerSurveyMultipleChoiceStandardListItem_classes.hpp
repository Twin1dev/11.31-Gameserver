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

// 0x40 (0xBB0 - 0xB70)
// WidgetBlueprintGeneratedClass PlayerSurveyMultipleChoiceStandardListItem.PlayerSurveyMultipleChoiceStandardListItem_C
class UPlayerSurveyMultipleChoiceStandardListItem_C : public UCommonButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB70(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortCheckbox_C*                       CheckBox;                                          // 0xB78(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Choice;                                       // 0xB80(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Number;                                       // 0xB88(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        ChoiceIndex;                                       // 0xB90(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5313[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	struct FFortPlayerSurveyQuestionChoice       ChoiceData;                                        // 0xB98(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerSurveyMultipleChoiceStandardListItem_C");
		return Clss;
	}

	void UpdateTextStyle(class UClass* CallFunc_GetCurrentTextStyleClass_ReturnValue, class UCommonTextStyle* CallFunc_GetCurrentTextStyle_ReturnValue, const struct FLinearColor& CallFunc_GetColor_OutColor);
	void UpdateCheckBox(bool CallFunc_GetSelected_ReturnValue);
	void MakeChoiceIndexText(int32 Index, class FText* Text, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void UpdateChoiceIndexText(class FText CallFunc_MakeChoiceIndexText_Text);
	void UpdateChoiceText();
	void Construct();
	void BP_OnSelected();
	void BP_OnDeselected();
	void SetChoiceData(const struct FFortPlayerSurveyQuestionChoice& Value);
	void SetIndex(int32 Value);
	void OnCurrentTextStyleChanged();
	void ExecuteUbergraph_PlayerSurveyMultipleChoiceStandardListItem(int32 EntryPoint, const struct FFortPlayerSurveyQuestionChoice& K2Node_Event_Value_1, int32 K2Node_Event_Value);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
