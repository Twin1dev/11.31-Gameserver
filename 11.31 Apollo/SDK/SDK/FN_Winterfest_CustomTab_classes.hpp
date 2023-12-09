#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x320 - 0x300)
// WidgetBlueprintGeneratedClass Winterfest_CustomTab.Winterfest_CustomTab_C
class UWinterfest_CustomTab_C : public UFortWinterQuestTabIcon
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x300(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnHover;                                           // 0x308(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      PresentJump;                                       // 0x310(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      Exclamation;                                       // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWinterfest_CustomTab_C* GetDefaultObj();

	void PlayHoverAnimBackward(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue);
	void PlayHoverAnimForward(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void Construct();
	void ExecuteUbergraph_Winterfest_CustomTab(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

}


