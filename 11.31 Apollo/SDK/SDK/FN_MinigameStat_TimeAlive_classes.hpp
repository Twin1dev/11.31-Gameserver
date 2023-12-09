#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class UMinigameStat_TimeAlive_C* GetDefaultObj();

	int32 Compare(int32 FirstScore, int32 SecondScore, bool IsSecondValid, bool IsFirstValid, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1);
};

}


