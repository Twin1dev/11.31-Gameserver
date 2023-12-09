#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class IIslandPortalInteractionInterface_C* GetDefaultObj();

	void BroadcastIsBeingInteractedWith(bool IsInteracting);
};

}


