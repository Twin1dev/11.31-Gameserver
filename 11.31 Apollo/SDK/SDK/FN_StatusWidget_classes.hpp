#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4A8 - 0x4A0)
// WidgetBlueprintGeneratedClass StatusWidget.StatusWidget_C
class UStatusWidget_C : public UFortLoginStatus
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4A0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UStatusWidget_C* GetDefaultObj();

	void SetContinueButtonText(class FText& ContinueText);
	void ExecuteUbergraph_StatusWidget(int32 EntryPoint, class FText K2Node_Event_ContinueText, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess);
};

}


