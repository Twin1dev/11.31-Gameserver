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

// 0x18 (0x628 - 0x610)
// WidgetBlueprintGeneratedClass EventLeaderboardHeader.EventLeaderboardHeader_C
class UEventLeaderboardHeader_C : public UFortShowdownDetailView
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x610(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonBorder*                         CommonBorder_ScoringTitleBG;                       // 0x618(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_RoundTitle;                                   // 0x620(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EventLeaderboardHeader_C");
		return Clss;
	}

	void RefreshDataBP();
	void ExecuteUbergraph_EventLeaderboardHeader(int32 EntryPoint, class FText CallFunc_GetWindowRoundDisplayString_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
