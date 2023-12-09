#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Frontend_BattlePass.Frontend_BattlePass_C
// (Actor)

class UClass* AFrontend_BattlePass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Frontend_BattlePass_C");

	return Clss;
}


// Frontend_BattlePass_C Frontend_BattlePass.Default__Frontend_BattlePass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AFrontend_BattlePass_C* AFrontend_BattlePass_C::GetDefaultObj()
{
	static class AFrontend_BattlePass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AFrontend_BattlePass_C*>(AFrontend_BattlePass_C::StaticClass()->DefaultObject);

	return Default;
}

}


