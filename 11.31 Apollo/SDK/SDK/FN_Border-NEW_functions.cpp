#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border-NEW.Border-NEW_C
// (None)

class UClass* UBorderMinusNEW_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border-NEW_C");

	return Clss;
}


// Border-NEW_C Border-NEW.Default__Border-NEW_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorderMinusNEW_C* UBorderMinusNEW_C::GetDefaultObj()
{
	static class UBorderMinusNEW_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorderMinusNEW_C*>(UBorderMinusNEW_C::StaticClass()->DefaultObject);

	return Default;
}

}


