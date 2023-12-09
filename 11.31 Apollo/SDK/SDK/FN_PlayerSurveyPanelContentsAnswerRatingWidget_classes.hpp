#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x330 - 0x2A8)
// WidgetBlueprintGeneratedClass PlayerSurveyPanelContentsAnswerRatingWidget.PlayerSurveyPanelContentsAnswerRatingWidget_C
class UPlayerSurveyPanelContentsAnswerRatingWidget_C : public UFortPlayerSurveyButtonGroupMultipleChoiceAnswerWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2A8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonActionWidget*                   CommonActionWidget_0;                              // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               DummyButton;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MaxRatingTextBlock;                                // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      MinRatingTextBlock;                                // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     RatingButton_1;                                    // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     RatingButton_2;                                    // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     RatingButton_3;                                    // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     RatingButton_4;                                    // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIconTextButton_C*                     RatingButton_5;                                    // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UCommonButton*>                 RatingButtons;                                     // 0x308(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference)
	class FText                                  Text_Subtitle;                                     // 0x318(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UPlayerSurveyPanelContentsAnswerRatingWidget_C* GetDefaultObj();

	class FText GetSubtitleText();
	void HandlePlayerRequestAnswer(int32 AnswerIndex, const struct FTimespan& CallFunc_GetStopwatchTime_ReturnValue, const struct FFortPlayerSurveyAnswerMultipleChoice& K2Node_MakeStruct_FortPlayerSurveyAnswerMultipleChoice);
	class UWidget* GetDefaultFocusedWidgetPostDummy(enum class EUINavigation Navigation);
	class UWidget* GetDefaultFocusedWidget(int32 DefaultIndex, class UWidget* TargetWidget, int32 SelectedIndex, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetCurrentAnswer_bOutIsSet, const struct FFortPlayerSurveyAnswerMultipleChoice& CallFunc_GetCurrentAnswer_OutAnswer, class UCommonButton* CallFunc_GetButtonAtIndex_ReturnValue);
	void UpdateRatingButtons(class UFortPlayerSurveyQuestionMultipleChoice* CurrentQuestion, int32 NumRatingButtons, class UFortPlayerSurveyQuestionMultipleChoice* CallFunc_GetCurrentQuestion_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void UpdateText(class UFortPlayerSurveyQuestionMultipleChoice* CurrentQuestion, class FText MaxRatingText, class FText MinRatingText, class UFortPlayerSurveyQuestionMultipleChoice* CallFunc_GetCurrentQuestion_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnInitialized();
	void HandleButtonClicked(int32 ButtonIndex);
	void Construct();
	void HandleButtonFocused(int32 ButtonIndex);
	void HandleCommitCurrentAnswer();
	void HandleQuestionChanged();
	void ExecuteUbergraph_PlayerSurveyPanelContentsAnswerRatingWidget(int32 EntryPoint, int32 K2Node_Event_ButtonIndex_1, TArray<class UCommonButton*>& K2Node_MakeArray_Array, int32 K2Node_Event_ButtonIndex, bool CallFunc_GetCurrentAnswer_bOutIsSet, const struct FFortPlayerSurveyAnswerMultipleChoice& CallFunc_GetCurrentAnswer_OutAnswer);
};

}


