#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BuiltInEmotePopUP.BuiltInEmotePopUP_C
// (None)

class UClass* UBuiltInEmotePopUP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuiltInEmotePopUP_C");

	return Clss;
}


// BuiltInEmotePopUP_C BuiltInEmotePopUP.Default__BuiltInEmotePopUP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBuiltInEmotePopUP_C* UBuiltInEmotePopUP_C::GetDefaultObj()
{
	static class UBuiltInEmotePopUP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuiltInEmotePopUP_C*>(UBuiltInEmotePopUP_C::StaticClass()->DefaultObject);

	return Default;
}

}


