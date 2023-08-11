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

// 0x28 (0xBC8 - 0xBA0)
// WidgetBlueprintGeneratedClass BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C
class UBattlePassScreenDetailRewardIcon_C : public UBattlePassScreenTierListAdditionalStylesEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xBA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortMultiSizeItemCard*                Card;                                              // 0xBA8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Hovered;                                           // 0xBB0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0xBB8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LockImage;                                         // 0xBC0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BattlePassScreenDetailRewardIcon_C");
		return Clss;
	}

	void BPSetup(class UFortItem* InReward);
	void BP_OnHovered();
	void BP_OnUnhovered();
	void OnSetupVariant();
	void ExecuteUbergraph_BattlePassScreenDetailRewardIcon(int32 EntryPoint, class UFortItem* K2Node_Event_InReward);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
