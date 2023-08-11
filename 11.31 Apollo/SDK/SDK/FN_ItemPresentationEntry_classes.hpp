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

// 0x22 (0xC6A - 0xC48)
// WidgetBlueprintGeneratedClass ItemPresentationEntry.ItemPresentationEntry_C
class UItemPresentationEntry_C : public UFortItemPresentationEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC48(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Intro;                                             // 0xC50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      InitialState;                                      // 0xC58(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hovered;                                           // 0xC60(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsSelected;                                       // 0xC68(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         bCanHover;                                         // 0xC69(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemPresentationEntry_C");
		return Clss;
	}

	void HandelDeselectedAnim(class UAthenaSeasonItemRewardIcon_C* K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon, bool K2Node_DynamicCast_bSuccess);
	void HandleSelectedAnim(float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UAthenaSeasonItemRewardIcon_C* K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon, bool K2Node_DynamicCast_bSuccess);
	void HandleUnhover(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UAthenaSeasonItemRewardIcon_C* K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon, bool K2Node_DynamicCast_bSuccess);
	void HandleHover(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UAthenaSeasonItemRewardIcon_C* K2Node_DynamicCast_AsAthena_Season_Item_Reward_Icon, bool K2Node_DynamicCast_bSuccess);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnSelected();
	void BP_OnDeselected();
	void DelayIntroAnimation(float Delay);
	void Construct();
	void OnInitialIconAnimation();
	void ExecuteUbergraph_ItemPresentationEntry(int32 EntryPoint, float K2Node_CustomEvent_Delay, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
