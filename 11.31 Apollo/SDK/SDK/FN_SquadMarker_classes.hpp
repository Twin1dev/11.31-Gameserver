#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class USquadMarker_C* GetDefaultObj();

	void ExecuteUbergraph_SquadMarker(int32 EntryPoint);
};

}


