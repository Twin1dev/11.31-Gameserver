#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Header-XXL.TextStyle-Header-XXL_C
// (None)

class UClass* UTextStyleMinusHeaderMinusXXL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Header-XXL_C");

	return Clss;
}


// TextStyle-Header-XXL_C TextStyle-Header-XXL.Default__TextStyle-Header-XXL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusHeaderMinusXXL_C* UTextStyleMinusHeaderMinusXXL_C::GetDefaultObj()
{
	static class UTextStyleMinusHeaderMinusXXL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusHeaderMinusXXL_C*>(UTextStyleMinusHeaderMinusXXL_C::StaticClass()->DefaultObject);

	return Default;
}

}


