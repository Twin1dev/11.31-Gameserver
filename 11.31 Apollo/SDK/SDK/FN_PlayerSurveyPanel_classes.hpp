#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x480 - 0x458)
// WidgetBlueprintGeneratedClass PlayerSurveyPanel.PlayerSurveyPanel_C
class UPlayerSurveyPanel_C : public UFortPlayerSurveyPanelBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x458(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Outro;                                             // 0x460(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x468(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UScaleBox*                             PanelScale;                                        // 0x470(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPlayerSurveyPanelContents_C*          PlayerSurveyPanelContents;                         // 0x478(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UPlayerSurveyPanel_C* GetDefaultObj();

	void Construct();
	void BndEvt__PlayerSurveyPanelContents_K2Node_ComponentBoundEvent_0_OnSurveyEnded__DelegateSignature();
	void IntroDone();
	void OutroDone();
	void HandleSurveyChanged();
	void BP_OnActivated();
	void StartIntro();
	void ExecuteUbergraph_PlayerSurveyPanel(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsMobilePlatform_ReturnValue, float K2Node_Select_Default);
};

}


