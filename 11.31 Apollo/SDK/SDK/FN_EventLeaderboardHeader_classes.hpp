#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x628 - 0x610)
// WidgetBlueprintGeneratedClass EventLeaderboardHeader.EventLeaderboardHeader_C
class UEventLeaderboardHeader_C : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x610(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         CommonBorder_ScoringTitleBG;                       // 0x618(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_RoundTitle;                                   // 0x620(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEventLeaderboardHeader_C* GetDefaultObj();

	void RefreshDataBP();
	void ExecuteUbergraph_EventLeaderboardHeader(int32 EntryPoint, class FText CallFunc_GetWindowRoundDisplayString_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
};

}


