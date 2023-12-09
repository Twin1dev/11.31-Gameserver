#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x488 - 0x478)
// WidgetBlueprintGeneratedClass JoinServer.JoinServer_C
class UJoinServer_C : public UFortUIStateWidget_JoinServer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x478(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBuildWatermark_C*                     BuildWatermark;                                    // 0x480(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UJoinServer_C* GetDefaultObj();

	void OnEnterState(enum class EFortUIState PreviousUIState);
	void OnShowTutorialDialog();
	void ExecuteUbergraph_JoinServer(int32 EntryPoint, enum class EFortUIState K2Node_Event_PreviousUIState);
};

}


