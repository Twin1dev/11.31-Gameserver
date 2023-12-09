#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_SimpleCycleArrowEmphasizedClick_Left.ButtonStyle_SimpleCycleArrowEmphasizedClick_Left_C
// (None)

class UClass* UButtonStyle_SimpleCycleArrowEmphasizedClick_Left_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_SimpleCycleArrowEmphasizedClick_Left_C");

	return Clss;
}


// ButtonStyle_SimpleCycleArrowEmphasizedClick_Left_C ButtonStyle_SimpleCycleArrowEmphasizedClick_Left.Default__ButtonStyle_SimpleCycleArrowEmphasizedClick_Left_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_SimpleCycleArrowEmphasizedClick_Left_C* UButtonStyle_SimpleCycleArrowEmphasizedClick_Left_C::GetDefaultObj()
{
	static class UButtonStyle_SimpleCycleArrowEmphasizedClick_Left_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_SimpleCycleArrowEmphasizedClick_Left_C*>(UButtonStyle_SimpleCycleArrowEmphasizedClick_Left_C::StaticClass()->DefaultObject);

	return Default;
}

}


