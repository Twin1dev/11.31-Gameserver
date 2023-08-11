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

// 0x8 (0x260 - 0x258)
// WidgetBlueprintGeneratedClass LeaderboardListView.LeaderboardListView_C
class ULeaderboardListView_C : public UCommonUserWidget
{
public:
	class UCommonListView*                       List;                                              // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LeaderboardListView_C");
		return Clss;
	}

	void FocusListView();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
