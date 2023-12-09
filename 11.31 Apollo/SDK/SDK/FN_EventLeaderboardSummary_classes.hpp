#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x6B8 - 0x610)
// WidgetBlueprintGeneratedClass EventLeaderboardSummary.EventLeaderboardSummary_C
class UEventLeaderboardSummary_C : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x610(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ViewAllHover;                                      // 0x618(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UIconTextButton_C*                     Button_ViewAll;                                    // 0x620(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_ContainerBG;                          // 0x628(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_ScoringTitleBG;                       // 0x630(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_ViewAllBG;                            // 0x638(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      CommonTextBlock_Title;                             // 0x640(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*              EventLeaderboardEntry;                             // 0x648(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*              EventLeaderboardEntry_0;                           // 0x650(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*              EventLeaderboardEntry_1;                           // 0x658(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*              EventLeaderboardEntry_2;                           // 0x660(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*              EventLeaderboardEntry_3;                           // 0x668(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*              EventLeaderboardEntry_4;                           // 0x670(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*              EventLeaderboardEntry_5;                           // 0x678(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*              EventLeaderboardEntry_6;                           // 0x680(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*              EventLeaderboardEntry_7;                           // 0x688(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEventLeaderboardEntry_C*              EventLeaderboardEntry_8;                           // 0x690(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_SummaryContent;                            // 0x698(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_ViewFullLeaderboard;                          // 0x6A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	UMulticastInlineDelegateProperty_            EventViewFullLeaderboard;                          // 0x6A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UEventLeaderboardSummary_C* GetDefaultObj();

	void BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void EventColorize(const struct FFortTournamentDisplayInfo& TournamentDisplayInfo);
	void BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__Button_ViewAll_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void RefreshDataBP();
	void ExecuteUbergraph_EventLeaderboardSummary(int32 EntryPoint, bool Temp_bool_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, const struct FFortTournamentDisplayInfo& K2Node_CustomEvent_TournamentDisplayInfo, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float Temp_float_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UCommonButton* K2Node_ComponentBoundEvent_Button, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_2, float CallFunc_GetStartTime_ReturnValue_1, float CallFunc_PauseAnimation_ReturnValue_3, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_GetEndTime_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_IsEventLeaderboardAvailable_ReturnValue, float K2Node_Select_Default, const class FString& CallFunc_GetTournamentId_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, const class FString& CallFunc_GetEventId_ReturnValue, float Temp_float_Variable_1, float K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3);
	void EventViewFullLeaderboard__DelegateSignature(const class FString& TournamentId, const class FString& EventId);
};

}


