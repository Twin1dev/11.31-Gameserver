#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-Base-L-S.TextStyle-Base-L-S_C
// (None)

class UClass* UTextStyleMinusBaseMinusLMinusS_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-Base-L-S_C");

	return Clss;
}


// TextStyle-Base-L-S_C TextStyle-Base-L-S.Default__TextStyle-Base-L-S_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBaseMinusLMinusS_C* UTextStyleMinusBaseMinusLMinusS_C::GetDefaultObj()
{
	static class UTextStyleMinusBaseMinusLMinusS_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBaseMinusLMinusS_C*>(UTextStyleMinusBaseMinusLMinusS_C::StaticClass()->DefaultObject);

	return Default;
}

}


