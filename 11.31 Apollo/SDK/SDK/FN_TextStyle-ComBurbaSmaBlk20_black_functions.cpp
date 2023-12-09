#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-ComBurbaSmaBlk20_black.TextStyle-ComBurbaSmaBlk20_black_C
// (None)

class UClass* UTextStyleMinusComBurbaSmaBlk20_black_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-ComBurbaSmaBlk20_black_C");

	return Clss;
}


// TextStyle-ComBurbaSmaBlk20_black_C TextStyle-ComBurbaSmaBlk20_black.Default__TextStyle-ComBurbaSmaBlk20_black_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusComBurbaSmaBlk20_black_C* UTextStyleMinusComBurbaSmaBlk20_black_C::GetDefaultObj()
{
	static class UTextStyleMinusComBurbaSmaBlk20_black_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusComBurbaSmaBlk20_black_C*>(UTextStyleMinusComBurbaSmaBlk20_black_C::StaticClass()->DefaultObject);

	return Default;
}

}


