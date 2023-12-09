#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x291 - 0x268)
// WidgetBlueprintGeneratedClass BattlePassItemTracker.BattlePassItemTracker_C
class UBattlePassItemTracker_C : public UAthenaBattlePassItemTracker
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      InitialState;                                      // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SetNumberVisible;                                  // 0x278(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      IntroAnim;                                         // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Increase;                                          // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSecondary;                                       // 0x290(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBattlePassItemTracker_C* GetDefaultObj();

	void HandleInitialState(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HandleNumberVisible(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HandleIncrease(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HandleIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void OnInterpEnded(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted);
	void OnInterpStarted();
	void ExecuteUbergraph_BattlePassItemTracker(int32 EntryPoint, class UCommonNumericTextBlock* K2Node_Event_NumericTextBlock, bool K2Node_Event_HadCompleted);
};

}


