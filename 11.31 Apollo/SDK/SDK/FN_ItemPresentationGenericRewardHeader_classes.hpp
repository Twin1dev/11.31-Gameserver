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

// 0x18 (0x298 - 0x280)
// WidgetBlueprintGeneratedClass ItemPresentationGenericRewardHeader.ItemPresentationGenericRewardHeader_C
class UItemPresentationGenericRewardHeader_C : public UFortItemReceivedHeaderBase
{
public:
	class UWidgetAnimation*                      FadeAnim;                                          // 0x280(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      InitialState;                                      // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      IntroAnim;                                         // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemPresentationGenericRewardHeader_C");
		return Clss;
	}

	void HandleOutro(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void HandleInitialState(class UUMGSequencePlayer* CallFunc_PlayAnimationTimeRange_ReturnValue);
	void HandleIntro(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
