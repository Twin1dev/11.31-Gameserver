#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Athena_ButtonStyle_AngledBlueMenuCreativeButton.Athena_ButtonStyle_AngledBlueMenuCreativeButton_C
// (None)

class UClass* UAthena_ButtonStyle_AngledBlueMenuCreativeButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Athena_ButtonStyle_AngledBlueMenuCreativeButton_C");

	return Clss;
}


// Athena_ButtonStyle_AngledBlueMenuCreativeButton_C Athena_ButtonStyle_AngledBlueMenuCreativeButton.Default__Athena_ButtonStyle_AngledBlueMenuCreativeButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthena_ButtonStyle_AngledBlueMenuCreativeButton_C* UAthena_ButtonStyle_AngledBlueMenuCreativeButton_C::GetDefaultObj()
{
	static class UAthena_ButtonStyle_AngledBlueMenuCreativeButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthena_ButtonStyle_AngledBlueMenuCreativeButton_C*>(UAthena_ButtonStyle_AngledBlueMenuCreativeButton_C::StaticClass()->DefaultObject);

	return Default;
}

}


