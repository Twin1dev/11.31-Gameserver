#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ActivatableMovieWidget.ActivatableMovieWidget_C
// (None)

class UClass* UActivatableMovieWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActivatableMovieWidget_C");

	return Clss;
}


// ActivatableMovieWidget_C ActivatableMovieWidget.Default__ActivatableMovieWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActivatableMovieWidget_C* UActivatableMovieWidget_C::GetDefaultObj()
{
	static class UActivatableMovieWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActivatableMovieWidget_C*>(UActivatableMovieWidget_C::StaticClass()->DefaultObject);

	return Default;
}

}


