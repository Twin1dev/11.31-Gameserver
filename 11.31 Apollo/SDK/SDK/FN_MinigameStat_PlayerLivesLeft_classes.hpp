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

// 0x0 (0x190 - 0x190)
// BlueprintGeneratedClass MinigameStat_PlayerLivesLeft.MinigameStat_PlayerLivesLeft_C
class UMinigameStat_PlayerLivesLeft_C : public UFortMinigameStatFilter
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MinigameStat_PlayerLivesLeft_C");
		return Clss;
	}

	int32 Compare(int32 FirstScore, int32 SecondScore, int32 CallFunc_Subtract_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
