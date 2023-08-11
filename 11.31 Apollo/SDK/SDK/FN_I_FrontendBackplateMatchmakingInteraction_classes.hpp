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
// BlueprintGeneratedClass I_FrontendBackplateMatchmakingInteraction.I_FrontendBackplateMatchmakingInteraction_C
class II_FrontendBackplateMatchmakingInteraction_C : public IInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("I_FrontendBackplateMatchmakingInteraction_C");
		return Clss;
	}

	void MatchmakingEnded(bool bWasSuccess);
	void HasMatcmakingInteraction(bool* HasInteraction);
	void EnteringMatchmaking();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
