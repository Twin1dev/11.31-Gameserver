#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_TransparentList_Nothing.ButtonStyle_TransparentList_Nothing_C
// (None)

class UClass* UButtonStyle_TransparentList_Nothing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_TransparentList_Nothing_C");

	return Clss;
}


// ButtonStyle_TransparentList_Nothing_C ButtonStyle_TransparentList_Nothing.Default__ButtonStyle_TransparentList_Nothing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_TransparentList_Nothing_C* UButtonStyle_TransparentList_Nothing_C::GetDefaultObj()
{
	static class UButtonStyle_TransparentList_Nothing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_TransparentList_Nothing_C*>(UButtonStyle_TransparentList_Nothing_C::StaticClass()->DefaultObject);

	return Default;
}

}


