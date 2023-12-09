#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x268 - 0x258)
// WidgetBlueprintGeneratedClass XpReasonFeedItem.XpReasonFeedItem_C
class UXpReasonFeedItem_C : public UCommonUserWidget
{
public:
	class UWidgetAnimation*                      Present_PopIn;                                     // 0x258(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class URichTextBlock*                        XpText;                                            // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UXpReasonFeedItem_C* GetDefaultObj();

	void SetXpText(class FText Text);
	void PlayPresentEffect(float PlaybackSpeed, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


