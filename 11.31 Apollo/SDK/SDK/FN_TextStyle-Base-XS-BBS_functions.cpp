#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-XS-BBS.TextStyle-Base-XS-BBS_C
// (None)

class UClass* UTextStyleMinusBaseMinusXSMinusBBS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-XS-BBS_C");

	return Clss;
}


// TextStyle-Base-XS-BBS_C TextStyle-Base-XS-BBS.Default__TextStyle-Base-XS-BBS_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusXSMinusBBS_C* UTextStyleMinusBaseMinusXSMinusBBS_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusXSMinusBBS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusXSMinusBBS_C*>(UTextStyleMinusBaseMinusXSMinusBBS_C::StaticClass()->DefaultObject);

	return Default;
}

}


