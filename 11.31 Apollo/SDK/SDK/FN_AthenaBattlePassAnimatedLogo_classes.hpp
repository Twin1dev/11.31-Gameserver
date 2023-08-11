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

// 0x58 (0x2B0 - 0x258)
// WidgetBlueprintGeneratedClass AthenaBattlePassAnimatedLogo.AthenaBattlePassAnimatedLogo_C
class UAthenaBattlePassAnimatedLogo_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x258(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Outro;                                             // 0x260(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Idle;                                              // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Intro;                                             // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                BPImage;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SeasonNumber;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UFortHelpItem*>                 TopLevelHelpItems;                                 // 0x288(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class FText                                  Header_Display_Text;                               // 0x298(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaBattlePassAnimatedLogo_C");
		return Clss;
	}

	void OnAnimationFinished(class UWidgetAnimation* Animation);
	void PlayIntroAnim();
	void Construct();
	void ExecuteUbergraph_AthenaBattlePassAnimatedLogo(int32 EntryPoint, class UWidgetAnimation* K2Node_Event_Animation, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UAthenaAccountContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetCurrentChapterAndSeasonText_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
