#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x280 - 0x258)
// WidgetBlueprintGeneratedClass EmergencyNoticeWidgetBR.EmergencyNoticeWidgetBR_C
class UEmergencyNoticeWidgetBR_C : public UEmergencyNoticeBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Entrance;                                          // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      BodyText;                                          // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      TitleText;                                         // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              VisibilitySB;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEmergencyNoticeWidgetBR_C* GetDefaultObj();

	void Show_Notice(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void ShowNotice(class FText& Title, class FText& Body);
	void HideNotice();
	void ExecuteUbergraph_EmergencyNoticeWidgetBR(int32 EntryPoint, class FText K2Node_Event_Title, class FText K2Node_Event_Body, class FText CallFunc_TextToUpper_ReturnValue);
};

}


