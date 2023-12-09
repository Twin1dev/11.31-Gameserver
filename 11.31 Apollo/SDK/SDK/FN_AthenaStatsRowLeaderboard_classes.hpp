#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2A0 - 0x290)
// WidgetBlueprintGeneratedClass AthenaStatsRowLeaderboard.AthenaStatsRowLeaderboard_C
class UAthenaStatsRowLeaderboard_C : public UFortProfileStatsRow
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x290(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_120;                                         // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaStatsRowLeaderboard_C* GetDefaultObj();

	void SetStatValueAsText(class FText StatValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_AthenaStatsRowLeaderboard(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
};

}


