#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass I_FrontendBackplateMatchmakingInteraction.I_FrontendBackplateMatchmakingInteraction_C
class II_FrontendBackplateMatchmakingInteraction_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class II_FrontendBackplateMatchmakingInteraction_C* GetDefaultObj();

	void MatchmakingEnded(bool bWasSuccess);
	void HasMatcmakingInteraction(bool* HasInteraction);
	void EnteringMatchmaking();
};

}


