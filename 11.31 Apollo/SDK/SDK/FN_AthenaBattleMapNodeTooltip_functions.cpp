#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaBattleMapNodeTooltip.AthenaBattleMapNodeTooltip_C
// (None)

class UClass* UAthenaBattleMapNodeTooltip_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaBattleMapNodeTooltip_C");

	return Clss;
}


// AthenaBattleMapNodeTooltip_C AthenaBattleMapNodeTooltip.Default__AthenaBattleMapNodeTooltip_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaBattleMapNodeTooltip_C* UAthenaBattleMapNodeTooltip_C::GetDefaultObj()
{
	static class UAthenaBattleMapNodeTooltip_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaBattleMapNodeTooltip_C*>(UAthenaBattleMapNodeTooltip_C::StaticClass()->DefaultObject);

	return Default;
}

}


