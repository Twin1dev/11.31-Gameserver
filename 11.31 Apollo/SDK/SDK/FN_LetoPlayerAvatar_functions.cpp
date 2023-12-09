#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LetoPlayerAvatar.LetoPlayerAvatar_C
// (None)

class UClass* ULetoPlayerAvatar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LetoPlayerAvatar_C");

	return Clss;
}


// LetoPlayerAvatar_C LetoPlayerAvatar.Default__LetoPlayerAvatar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULetoPlayerAvatar_C* ULetoPlayerAvatar_C::GetDefaultObj()
{
	static class ULetoPlayerAvatar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULetoPlayerAvatar_C*>(ULetoPlayerAvatar_C::StaticClass()->DefaultObject);

	return Default;
}

}


