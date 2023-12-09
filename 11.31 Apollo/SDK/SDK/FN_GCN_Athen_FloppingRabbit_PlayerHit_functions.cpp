#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GCN_Athen_FloppingRabbit_PlayerHit.GCN_Athen_FloppingRabbit_PlayerHit_C
// (None)

class UClass* UGCN_Athen_FloppingRabbit_PlayerHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GCN_Athen_FloppingRabbit_PlayerHit_C");

	return Clss;
}


// GCN_Athen_FloppingRabbit_PlayerHit_C GCN_Athen_FloppingRabbit_PlayerHit.Default__GCN_Athen_FloppingRabbit_PlayerHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGCN_Athen_FloppingRabbit_PlayerHit_C* UGCN_Athen_FloppingRabbit_PlayerHit_C::GetDefaultObj()
{
	static class UGCN_Athen_FloppingRabbit_PlayerHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGCN_Athen_FloppingRabbit_PlayerHit_C*>(UGCN_Athen_FloppingRabbit_PlayerHit_C::StaticClass()->DefaultObject);

	return Default;
}

}


