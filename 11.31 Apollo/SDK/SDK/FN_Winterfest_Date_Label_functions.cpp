#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Winterfest_Date_Label.Winterfest_Date_Label_C
// (None)

class UClass* UWinterfest_Date_Label_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Winterfest_Date_Label_C");

	return Clss;
}


// Winterfest_Date_Label_C Winterfest_Date_Label.Default__Winterfest_Date_Label_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinterfest_Date_Label_C* UWinterfest_Date_Label_C::GetDefaultObj()
{
	static class UWinterfest_Date_Label_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinterfest_Date_Label_C*>(UWinterfest_Date_Label_C::StaticClass()->DefaultObject);

	return Default;
}

}


