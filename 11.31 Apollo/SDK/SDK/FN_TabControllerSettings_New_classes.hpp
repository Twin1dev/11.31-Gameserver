#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x338 - 0x330)
// WidgetBlueprintGeneratedClass TabControllerSettings_New.TabControllerSettings_New_C
class UTabControllerSettings_New_C : public UFortTabGamepadOptions_TempNew
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UTabControllerSettings_New_C* GetDefaultObj();

	void SettingValueChanged(float Value);
	void CenterOnTab();
	void ExecuteUbergraph_TabControllerSettings_New(int32 EntryPoint, float K2Node_CustomEvent_Value);
};

}


