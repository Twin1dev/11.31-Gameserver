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

// 0x10 (0x278 - 0x268)
// WidgetBlueprintGeneratedClass ChallengeListEntry_Header.ChallengeListEntry_Header_C
class UChallengeListEntry_Header_C : public UAthenaChallengeListEntry_Header
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x268(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetSwitcher*                       SwitcherPaidFreeIcon;                              // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChallengeListEntry_Header_C");
		return Clss;
	}

	void OnSectionTypeSet(enum class EChallengeListSection SectionType);
	void ExecuteUbergraph_ChallengeListEntry_Header(int32 EntryPoint, enum class EChallengeListSection K2Node_Event_SectionType, bool K2Node_SwitchEnum_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
