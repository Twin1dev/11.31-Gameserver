#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass com_ButtonStyle_CloseTutorial.com_ButtonStyle_CloseTutorial_C
// (None)

class UClass* UCom_ButtonStyle_CloseTutorial_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("com_ButtonStyle_CloseTutorial_C");

	return Clss;
}


// com_ButtonStyle_CloseTutorial_C com_ButtonStyle_CloseTutorial.Default__com_ButtonStyle_CloseTutorial_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCom_ButtonStyle_CloseTutorial_C* UCom_ButtonStyle_CloseTutorial_C::GetDefaultObj()
{
	static class UCom_ButtonStyle_CloseTutorial_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCom_ButtonStyle_CloseTutorial_C*>(UCom_ButtonStyle_CloseTutorial_C::StaticClass()->DefaultObject);

	return Default;
}

}


