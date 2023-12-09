#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PostGameBottomBarWidget.PostGameBottomBarWidget_C
// (None)

class UClass* UPostGameBottomBarWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PostGameBottomBarWidget_C");

	return Clss;
}


// PostGameBottomBarWidget_C PostGameBottomBarWidget.Default__PostGameBottomBarWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPostGameBottomBarWidget_C* UPostGameBottomBarWidget_C::GetDefaultObj()
{
	static class UPostGameBottomBarWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPostGameBottomBarWidget_C*>(UPostGameBottomBarWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


