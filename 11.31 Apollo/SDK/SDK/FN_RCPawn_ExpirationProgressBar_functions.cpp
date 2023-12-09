#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RCPawn_ExpirationProgressBar.RCPawn_ExpirationProgressBar_C
// (None)

class UClass* URCPawn_ExpirationProgressBar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RCPawn_ExpirationProgressBar_C");

	return Clss;
}


// RCPawn_ExpirationProgressBar_C RCPawn_ExpirationProgressBar.Default__RCPawn_ExpirationProgressBar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URCPawn_ExpirationProgressBar_C* URCPawn_ExpirationProgressBar_C::GetDefaultObj()
{
	static class URCPawn_ExpirationProgressBar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URCPawn_ExpirationProgressBar_C*>(URCPawn_ExpirationProgressBar_C::StaticClass()->DefaultObject);

	return Default;
}

}


