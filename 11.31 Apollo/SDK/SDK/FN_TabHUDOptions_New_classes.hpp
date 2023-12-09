#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x338 - 0x330)
// WidgetBlueprintGeneratedClass TabHUDOptions_New.TabHUDOptions_New_C
class UTabHUDOptions_New_C : public UFortTabHUDOptions_TempNew
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x330(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UTabHUDOptions_New_C* GetDefaultObj();

	void SettingValueChanged(float Value);
	void CenterOnTab();
	void ExecuteUbergraph_TabHUDOptions_New(int32 EntryPoint, float K2Node_CustomEvent_Value);
};

}


