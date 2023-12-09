#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_FrenchYedoc_UnFriendly_Athena_Weap.B_FrenchYedoc_UnFriendly_Athena_Weap_C
// (Actor)

class UClass* AB_FrenchYedoc_UnFriendly_Athena_Weap_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_FrenchYedoc_UnFriendly_Athena_Weap_C");

	return Clss;
}


// B_FrenchYedoc_UnFriendly_Athena_Weap_C B_FrenchYedoc_UnFriendly_Athena_Weap.Default__B_FrenchYedoc_UnFriendly_Athena_Weap_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_FrenchYedoc_UnFriendly_Athena_Weap_C* AB_FrenchYedoc_UnFriendly_Athena_Weap_C::GetDefaultObj()
{
	static class AB_FrenchYedoc_UnFriendly_Athena_Weap_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_FrenchYedoc_UnFriendly_Athena_Weap_C*>(AB_FrenchYedoc_UnFriendly_Athena_Weap_C::StaticClass()->DefaultObject);

	return Default;
}

}


