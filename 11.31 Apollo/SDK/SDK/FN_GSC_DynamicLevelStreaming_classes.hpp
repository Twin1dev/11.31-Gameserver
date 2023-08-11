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

// 0x8 (0x248 - 0x240)
// BlueprintGeneratedClass GSC_DynamicLevelStreaming.GSC_DynamicLevelStreaming_C
class UGSC_DynamicLevelStreaming_C : public UFortGameStateComponent_EventLevel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x240(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GSC_DynamicLevelStreaming_C");
		return Clss;
	}

	void OnNavActorHovered();
	void OnNavActorSelected();
	void ExecuteUbergraph_GSC_DynamicLevelStreaming(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
