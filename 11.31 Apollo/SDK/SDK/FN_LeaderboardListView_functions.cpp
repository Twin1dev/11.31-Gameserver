#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LeaderboardListView.LeaderboardListView_C
// (None)

class UClass* ULeaderboardListView_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LeaderboardListView_C");

	return Clss;
}


// LeaderboardListView_C LeaderboardListView.Default__LeaderboardListView_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULeaderboardListView_C* ULeaderboardListView_C::GetDefaultObj()
{
	static class ULeaderboardListView_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULeaderboardListView_C*>(ULeaderboardListView_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LeaderboardListView.LeaderboardListView_C.FocusListView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULeaderboardListView_C::FocusListView()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LeaderboardListView_C", "FocusListView");



	UObject::ProcessEvent(Func, nullptr);

}

}


