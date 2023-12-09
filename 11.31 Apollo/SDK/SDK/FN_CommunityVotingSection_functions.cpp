#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CommunityVotingSection.CommunityVotingSection_C
// (None)

class UClass* UCommunityVotingSection_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CommunityVotingSection_C");

	return Clss;
}


// CommunityVotingSection_C CommunityVotingSection.Default__CommunityVotingSection_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCommunityVotingSection_C* UCommunityVotingSection_C::GetDefaultObj()
{
	static class UCommunityVotingSection_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCommunityVotingSection_C*>(UCommunityVotingSection_C::StaticClass()->DefaultObject);

	return Default;
}

}


