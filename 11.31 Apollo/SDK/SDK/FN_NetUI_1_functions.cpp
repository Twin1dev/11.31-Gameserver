#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NetUI.NetUI_C
// (None)

class UClass* UNetUI_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetUI_C");

	return Clss;
}


// NetUI_C NetUI.Default__NetUI_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNetUI_C* UNetUI_C::GetDefaultObj()
{
	static class UNetUI_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetUI_C*>(UNetUI_C::StaticClass()->DefaultObject);

	return Default;
}

}


