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

// 0x9 (0x69 - 0x60)
// BlueprintGeneratedClass PlayerSurveyDispatcher.PlayerSurveyDispatcher_C
class UPlayerSurveyDispatcher_C : public UFortPlayerSurveyDispatcher
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x60(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         DoIntroOnActivate;                                 // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PlayerSurveyDispatcher_C");
		return Clss;
	}

	void DoStartSurveyIntro(class UFortPlayerSurveyPanelBase* Widget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPlayerSurveyPanel_C* K2Node_DynamicCast_AsPlayer_Survey_Panel, bool K2Node_DynamicCast_bSuccess);
	void DisplaySurveyWidget(class UFortPlayerSurveyPanelBase* Widget);
	void StartSurveyIntro(class UFortPlayerSurveyPanelBase* Widget);
	void HandleFirstActivation(class UCommonActivatablePanel* Panel);
	void ExecuteUbergraph_PlayerSurveyDispatcher(int32 EntryPoint, class UCommonActivatablePanel* K2Node_CustomEvent_Panel, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UFortPlayerSurveyPanelBase* K2Node_DynamicCast_AsFort_Player_Survey_Panel_Base, bool K2Node_DynamicCast_bSuccess_1, class UFortPlayerSurveyPanelBase* K2Node_Event_Widget, class UFortPlayerSurveyPanelBase* K2Node_Event_Widget_1, bool CallFunc_IsActivated_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
