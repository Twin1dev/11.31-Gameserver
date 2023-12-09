#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x270 - 0x260)
// WidgetBlueprintGeneratedClass MinimalChallengeEntry.MinimalChallengeEntry_C
class UMinimalChallengeEntry_C : public UAthenaMinimalChallengeInfoEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UCommonWidgetSwitcher*                 SwitcherProgressInfo;                              // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMinimalChallengeEntry_C* GetDefaultObj();

	void OnChallengeInfoSet(bool bIsInProgress);
	void ExecuteUbergraph_MinimalChallengeEntry(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, bool K2Node_Event_bIsInProgress, int32 K2Node_Select_Default);
};

}


