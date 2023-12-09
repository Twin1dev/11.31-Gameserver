#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x248 - 0x240)
// BlueprintGeneratedClass GSC_DynamicLevelStreaming.GSC_DynamicLevelStreaming_C
class UGSC_DynamicLevelStreaming_C : public UFortGameStateComponent_EventLevel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGSC_DynamicLevelStreaming_C* GetDefaultObj();

	void OnNavActorHovered();
	void OnNavActorSelected();
	void ExecuteUbergraph_GSC_DynamicLevelStreaming(int32 EntryPoint);
};

}


