#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_ShellUberBG.Border_ShellUberBG_C
// (None)

class UClass* UBorder_ShellUberBG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_ShellUberBG_C");

	return Clss;
}


// Border_ShellUberBG_C Border_ShellUberBG.Default__Border_ShellUberBG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_ShellUberBG_C* UBorder_ShellUberBG_C::GetDefaultObj()
{
	static class UBorder_ShellUberBG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_ShellUberBG_C*>(UBorder_ShellUberBG_C::StaticClass()->DefaultObject);

	return Default;
}

}


