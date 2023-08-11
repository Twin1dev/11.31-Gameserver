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

// 0x28 (0xBB0 - 0xB88)
// WidgetBlueprintGeneratedClass TournamentLiveGamesEntry.TournamentLiveGamesEntry_C
class UTournamentLiveGamesEntry_C : public UFortTournamentLiveGameSessionEntry
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Selected;                                          // 0xB90(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_IsPlayer;                             // 0xB98(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_Selected;                             // 0xBA0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonBorder*                         CommonBorder_Zebra;                                // 0xBA8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TournamentLiveGamesEntry_C");
		return Clss;
	}

	void OnEntrySet(int32 EntryIndex);
	void BP_OnSelected();
	void BP_OnDeselected();
	void ExecuteUbergraph_TournamentLiveGamesEntry(int32 EntryPoint, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, int32 K2Node_Event_EntryIndex, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FLinearColor& K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
