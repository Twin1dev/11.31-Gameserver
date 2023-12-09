#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0x241 - 0x230)
// WidgetBlueprintGeneratedClass XpReasonFeed.XpReasonFeed_C
class UXpReasonFeed_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UDynamicEntryBox*                      DynamicXpFeed;                                     // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Animating;                                         // 0x240(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UXpReasonFeed_C* GetDefaultObj();

	void ImmediatelyShowXpRewards(TArray<struct FAthenaMatchXpReward>& XpRewards, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FAthenaMatchXpReward& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UUserWidget* CallFunc_BP_CreateEntry_ReturnValue, class UXpReasonFeedItem_C* K2Node_DynamicCast_AsXp_Reason_Feed_Item, bool K2Node_DynamicCast_bSuccess);
	void IsReadyForNextXpReward(bool* Ready, bool CallFunc_Not_PreBool_ReturnValue);
	void Play_Xp_Reward(struct FAthenaMatchXpReward& Reward);
	void Reset_Feed();
	void Destruct();
	void ExecuteUbergraph_XpReasonFeed(int32 EntryPoint, const struct FAthenaMatchXpReward& K2Node_CustomEvent_Reward, class UUserWidget* CallFunc_BP_CreateEntry_ReturnValue, class UXpReasonFeedItem_C* K2Node_DynamicCast_AsXp_Reason_Feed_Item, bool K2Node_DynamicCast_bSuccess);
};

}


