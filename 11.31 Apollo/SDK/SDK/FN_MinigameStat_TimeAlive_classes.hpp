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

// 0x0 (0x191 - 0x191)
// BlueprintGeneratedClass MinigameStat_TimeAlive.MinigameStat_TimeAlive_C
class UMinigameStat_TimeAlive_C : public UMinigameStat_Time_C
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MinigameStat_TimeAlive_C");
		return Clss;
	}

	int32 Compare(int32 FirstScore, int32 SecondScore, bool IsSecondValid, bool IsFirstValid, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
