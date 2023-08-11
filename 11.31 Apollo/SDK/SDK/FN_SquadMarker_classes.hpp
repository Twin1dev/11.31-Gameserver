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

// 0x10 (0x568 - 0x558)
// WidgetBlueprintGeneratedClass SquadMarker.SquadMarker_C
class USquadMarker_C : public UAthenaSquadIndicator
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x558(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                burst;                                             // 0x560(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SquadMarker_C");
		return Clss;
	}

	void ExecuteUbergraph_SquadMarker(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
