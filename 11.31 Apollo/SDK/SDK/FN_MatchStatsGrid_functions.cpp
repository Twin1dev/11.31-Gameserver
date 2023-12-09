#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MatchStatsGrid.MatchStatsGrid_C
// (None)

class UClass* UMatchStatsGrid_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatchStatsGrid_C");

	return Clss;
}


// MatchStatsGrid_C MatchStatsGrid.Default__MatchStatsGrid_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMatchStatsGrid_C* UMatchStatsGrid_C::GetDefaultObj()
{
	static class UMatchStatsGrid_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatchStatsGrid_C*>(UMatchStatsGrid_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MatchStatsGrid.MatchStatsGrid_C.SetStats
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaMatchStatView*        AthenaMatchStats                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchStatsGrid_C::SetStats(class UAthenaMatchStatView* AthenaMatchStats)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchStatsGrid_C", "SetStats");

	Params::UMatchStatsGrid_C_SetStats_Params Parms{};

	Parms.AthenaMatchStats = AthenaMatchStats;

	UObject::ProcessEvent(Func, &Parms);

}

}


