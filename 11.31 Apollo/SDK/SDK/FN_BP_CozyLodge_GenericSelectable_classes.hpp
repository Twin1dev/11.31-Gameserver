#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x470 - 0x468)
// BlueprintGeneratedClass BP_CozyLodge_GenericSelectable.BP_CozyLodge_GenericSelectable_C
class ABP_CozyLodge_GenericSelectable_C : public AFortEventLevelNavigationActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_CozyLodge_GenericSelectable_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CozyLodge_GenericSelectable(int32 EntryPoint);
};

}


