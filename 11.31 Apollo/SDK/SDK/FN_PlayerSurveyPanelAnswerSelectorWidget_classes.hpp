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

// 0x78 (0x2B8 - 0x240)
// WidgetBlueprintGeneratedClass PlayerSurveyPanelAnswerSelectorWidget.PlayerSurveyPanelAnswerSelectorWidget_C
class UPlayerSurveyPanelAnswerSelectorWidget_C : public UFortPlayerSurveyQuestionDisplayWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USpacer*                               EmptyWidget;                                       // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcher*                 Switcher;                                          // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class UClass*, class UFortPlayerSurveyAnswerWidgetBase*> SwitcherWidgets;                                   // 0x258(0x50)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, ContainsInstancedReference)
	class UFortPlayerSurveyAnswerWidgetBase*     CurrentChild;                                      // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortPlayerSurveyAnswerWidgetDataTable* AnswerWidgetTable;                                 // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerSurveyPanelAnswerSelectorWidget_C");
		return Clss;
	}

	void GetCurrentQuestion(class UFortPlayerSurveyQuestion** Question, class UFortPlayerSurveyQuestion* QuestionValue, class UFortPlayerSurveyQuestion* CallFunc_GetQuestion_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void PropagateCurrentQuestion(class UFortPlayerSurveyQuestion* CallFunc_GetCurrentQuestion_Question, bool CallFunc_IsValid_ReturnValue);
	void GetSubtitleText(class FText* Text, class FText TextValue, class FText CallFunc_GetSubtitleText_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CommitCurrentAnswer(bool CallFunc_IsValid_ReturnValue);
	void GetDefaultFocusedWidget(class UWidget** Result, class UWidget* ResultValue, class UWidget* CallFunc_GetDefaultFocusedWidget_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetCurrentChild(class UFortPlayerSurveyAnswerWidgetBase* Widget, bool ForcePropagateQuestion, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void UpdateCurrentChild(bool ForcePropagateQuestion, class UFortPlayerSurveyAnswerWidgetBase* NewChildWidget, class UFortPlayerSurveyQuestion* Question, enum class EFortPlayerSurveyQuestionPresentationStyle CallFunc_GetPresentationStyle_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EFortPlayerSurveyQuestionType CallFunc_GetQuestionType_ReturnValue, class UClass* CallFunc_GetClassForSurvey_ReturnValue, class UFortPlayerSurveyAnswerWidgetBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UFortPlayerSurveyQuestion* CallFunc_GetQuestion_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void InitSwitcherChildren();
	void InitSwitcherChildrenLoop(enum class EFortPlayerSurveyQuestionType QuestionType, enum class EFortPlayerSurveyQuestionPresentationStyle PresentationStyle, class UClass* WidgetClass);
	void Construct();
	void OnInitialized();
	void HandleQuestionChanged();
	void ExecuteUbergraph_PlayerSurveyPanelAnswerSelectorWidget(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, enum class EFortPlayerSurveyQuestionType K2Node_CustomEvent_QuestionType, enum class EFortPlayerSurveyQuestionPresentationStyle K2Node_CustomEvent_PresentationStyle, class UClass* K2Node_CustomEvent_WidgetClass, class UFortPlayerSurveyAnswerWidgetBase* CallFunc_Create_ReturnValue, class UFortPlayerSurveyAnswerWidgetBase* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
