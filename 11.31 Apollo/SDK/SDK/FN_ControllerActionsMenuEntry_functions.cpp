#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ControllerActionsMenuEntry.ControllerActionsMenuEntry_C
// (None)

class UClass* UControllerActionsMenuEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControllerActionsMenuEntry_C");

	return Clss;
}


// ControllerActionsMenuEntry_C ControllerActionsMenuEntry.Default__ControllerActionsMenuEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UControllerActionsMenuEntry_C* UControllerActionsMenuEntry_C::GetDefaultObj()
{
	static class UControllerActionsMenuEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UControllerActionsMenuEntry_C*>(UControllerActionsMenuEntry_C::StaticClass()->DefaultObject);

	return Default;
}

}


