#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function AthenaStatsRowLeaderboard.AthenaStatsRowLeaderboard_C.SetStatValueAsText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        StatValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaStatsRowLeaderboard_C::SetStatValueAsText(class FText StatValue)
{
	static auto Func = Class->GetFunction("AthenaStatsRowLeaderboard_C", "SetStatValueAsText");

	Params::UAthenaStatsRowLeaderboard_C_SetStatValueAsText_Params Parms;

	Parms.StatValue = StatValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsRowLeaderboard.AthenaStatsRowLeaderboard_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaStatsRowLeaderboard_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaStatsRowLeaderboard_C", "PreConstruct");

	Params::UAthenaStatsRowLeaderboard_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStatsRowLeaderboard.AthenaStatsRowLeaderboard_C.ExecuteUbergraph_AthenaStatsRowLeaderboard
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaStatsRowLeaderboard_C::ExecuteUbergraph_AthenaStatsRowLeaderboard(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static auto Func = Class->GetFunction("AthenaStatsRowLeaderboard_C", "ExecuteUbergraph_AthenaStatsRowLeaderboard");

	Params::UAthenaStatsRowLeaderboard_C_ExecuteUbergraph_AthenaStatsRowLeaderboard_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
