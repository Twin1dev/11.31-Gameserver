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

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IslandPortalInteractionInterface.IslandPortalInteractionInterface_C
class IIslandPortalInteractionInterface_C : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("IslandPortalInteractionInterface_C");
		return Clss;
	}

	void BroadcastIsBeingInteractedWith(bool IsInteracting);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
