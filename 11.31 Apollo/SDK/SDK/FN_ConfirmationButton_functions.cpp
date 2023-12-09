#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ConfirmationButton.ConfirmationButton_C
// (None)

class UClass* UConfirmationButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ConfirmationButton_C");

	return Clss;
}


// ConfirmationButton_C ConfirmationButton.Default__ConfirmationButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UConfirmationButton_C* UConfirmationButton_C::GetDefaultObj()
{
	static class UConfirmationButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UConfirmationButton_C*>(UConfirmationButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


