#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaDetachRCPawn.AthenaDetachRCPawn_C
// (None)

class UClass* UAthenaDetachRCPawn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaDetachRCPawn_C");

	return Clss;
}


// AthenaDetachRCPawn_C AthenaDetachRCPawn.Default__AthenaDetachRCPawn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaDetachRCPawn_C* UAthenaDetachRCPawn_C::GetDefaultObj()
{
	static class UAthenaDetachRCPawn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaDetachRCPawn_C*>(UAthenaDetachRCPawn_C::StaticClass()->DefaultObject);

	return Default;
}

}


