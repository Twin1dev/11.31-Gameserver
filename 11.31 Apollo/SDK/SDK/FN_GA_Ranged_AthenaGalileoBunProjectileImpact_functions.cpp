#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GA_Ranged_AthenaGalileoBunProjectileImpact.GA_Ranged_AthenaGalileoBunProjectileImpact_C
// (None)

class UClass* UGA_Ranged_AthenaGalileoBunProjectileImpact_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GA_Ranged_AthenaGalileoBunProjectileImpact_C");

	return Clss;
}


// GA_Ranged_AthenaGalileoBunProjectileImpact_C GA_Ranged_AthenaGalileoBunProjectileImpact.Default__GA_Ranged_AthenaGalileoBunProjectileImpact_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGA_Ranged_AthenaGalileoBunProjectileImpact_C* UGA_Ranged_AthenaGalileoBunProjectileImpact_C::GetDefaultObj()
{
	static class UGA_Ranged_AthenaGalileoBunProjectileImpact_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGA_Ranged_AthenaGalileoBunProjectileImpact_C*>(UGA_Ranged_AthenaGalileoBunProjectileImpact_C::StaticClass()->DefaultObject);

	return Default;
}

}


