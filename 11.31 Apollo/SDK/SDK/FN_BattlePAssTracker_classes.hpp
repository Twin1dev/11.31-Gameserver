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

// 0x8 (0x2E8 - 0x2E0)
// WidgetBlueprintGeneratedClass BattlePAssTracker.BattlePassTracker_C
class UBattlePassTracker_C : public UAthenaBattlePassTracker
{
public:
	class UWidgetAnimation*                      BattlePassButtonIn;                                // 0x2E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BattlePassTracker_C");
		return Clss;
	}

	void HandleButtonIn(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
	void HandleInitialState(class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker, bool K2Node_DynamicCast_bSuccess, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_1, bool K2Node_DynamicCast_bSuccess_1, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_2, bool K2Node_DynamicCast_bSuccess_2, class UBattlePassItemTracker_C* K2Node_DynamicCast_AsBattle_Pass_Item_Tracker_3, bool K2Node_DynamicCast_bSuccess_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
