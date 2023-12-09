#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Athena_FrenchYedoc_JWUnfriendly.B_Athena_FrenchYedoc_JWUnfriendly_C
// (Actor)

class UClass* AB_Athena_FrenchYedoc_JWUnfriendly_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Athena_FrenchYedoc_JWUnfriendly_C");

	return Clss;
}


// B_Athena_FrenchYedoc_JWUnfriendly_C B_Athena_FrenchYedoc_JWUnfriendly.Default__B_Athena_FrenchYedoc_JWUnfriendly_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_Athena_FrenchYedoc_JWUnfriendly_C* AB_Athena_FrenchYedoc_JWUnfriendly_C::GetDefaultObj()
{
	static class AB_Athena_FrenchYedoc_JWUnfriendly_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_Athena_FrenchYedoc_JWUnfriendly_C*>(AB_Athena_FrenchYedoc_JWUnfriendly_C::StaticClass()->DefaultObject);

	return Default;
}

}


