#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaMainMenuLeaveButton.AthenaMainMenuLeaveButton_C
// (None)

class UClass* UAthenaMainMenuLeaveButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaMainMenuLeaveButton_C");

	return Clss;
}


// AthenaMainMenuLeaveButton_C AthenaMainMenuLeaveButton.Default__AthenaMainMenuLeaveButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaMainMenuLeaveButton_C* UAthenaMainMenuLeaveButton_C::GetDefaultObj()
{
	static class UAthenaMainMenuLeaveButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaMainMenuLeaveButton_C*>(UAthenaMainMenuLeaveButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


