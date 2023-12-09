#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ActivatableMovieWidget_Frontend.ActivatableMovieWidget_Frontend_C
// (None)

class UClass* UActivatableMovieWidget_Frontend_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActivatableMovieWidget_Frontend_C");

	return Clss;
}


// ActivatableMovieWidget_Frontend_C ActivatableMovieWidget_Frontend.Default__ActivatableMovieWidget_Frontend_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActivatableMovieWidget_Frontend_C* UActivatableMovieWidget_Frontend_C::GetDefaultObj()
{
	static class UActivatableMovieWidget_Frontend_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActivatableMovieWidget_Frontend_C*>(UActivatableMovieWidget_Frontend_C::StaticClass()->DefaultObject);

	return Default;
}

}


