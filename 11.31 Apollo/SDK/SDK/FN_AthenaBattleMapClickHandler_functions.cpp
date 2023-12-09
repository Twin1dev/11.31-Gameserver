#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaBattleMapClickHandler.AthenaBattleMapClickHandler_C
// (None)

class UClass* UAthenaBattleMapClickHandler_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaBattleMapClickHandler_C");

	return Clss;
}


// AthenaBattleMapClickHandler_C AthenaBattleMapClickHandler.Default__AthenaBattleMapClickHandler_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaBattleMapClickHandler_C* UAthenaBattleMapClickHandler_C::GetDefaultObj()
{
	static class UAthenaBattleMapClickHandler_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaBattleMapClickHandler_C*>(UAthenaBattleMapClickHandler_C::StaticClass()->DefaultObject);

	return Default;
}

}


