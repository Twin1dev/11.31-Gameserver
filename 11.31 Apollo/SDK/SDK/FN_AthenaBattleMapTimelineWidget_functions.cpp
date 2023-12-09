#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaBattleMapTimelineWidget.AthenaBattleMapTimelineWidget_C
// (None)

class UClass* UAthenaBattleMapTimelineWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaBattleMapTimelineWidget_C");

	return Clss;
}


// AthenaBattleMapTimelineWidget_C AthenaBattleMapTimelineWidget.Default__AthenaBattleMapTimelineWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaBattleMapTimelineWidget_C* UAthenaBattleMapTimelineWidget_C::GetDefaultObj()
{
	static class UAthenaBattleMapTimelineWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaBattleMapTimelineWidget_C*>(UAthenaBattleMapTimelineWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


