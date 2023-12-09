#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0xC19 - 0xBF0)
// WidgetBlueprintGeneratedClass ActivityBrowserTile.ActivityBrowserTile_C
class UActivityBrowserTile_C : public UFortActivityBrowserTile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0xBF8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SetDisabled;                                       // 0xC00(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SetEnabled;                                        // 0xC08(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnHover;                                           // 0xC10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	bool                                         NewVar_0;                                          // 0xC18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UActivityBrowserTile_C* GetDefaultObj();

	void Set_Disabled(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void Set_Enabled(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void Construct();
	void BP_OnSelected();
	void BP_OnDeselected();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_ActivityBrowserTile(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2);
};

}


