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


// Function LeaderboardListView.LeaderboardListView_C.FocusListView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULeaderboardListView_C::FocusListView()
{
	static auto Func = Class->GetFunction("LeaderboardListView_C", "FocusListView");

	Params::ULeaderboardListView_C_FocusListView_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
