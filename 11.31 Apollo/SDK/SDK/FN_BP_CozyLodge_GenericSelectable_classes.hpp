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

// 0x8 (0x470 - 0x468)
// BlueprintGeneratedClass BP_CozyLodge_GenericSelectable.BP_CozyLodge_GenericSelectable_C
class ABP_CozyLodge_GenericSelectable_C : public AFortEventLevelNavigationActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_CozyLodge_GenericSelectable_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_CozyLodge_GenericSelectable(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
