#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle-BurbankSmall-XS-Cyan_25pc.TextStyle-BurbankSmall-XS-Cyan_25pc_C
// (None)

class UClass* UTextStyleMinusBurbankSmallMinusXSMinusCyan_25pc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle-BurbankSmall-XS-Cyan_25pc_C");

	return Clss;
}


// TextStyle-BurbankSmall-XS-Cyan_25pc_C TextStyle-BurbankSmall-XS-Cyan_25pc.Default__TextStyle-BurbankSmall-XS-Cyan_25pc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyleMinusBurbankSmallMinusXSMinusCyan_25pc_C* UTextStyleMinusBurbankSmallMinusXSMinusCyan_25pc_C::GetDefaultObj()
{
	static class UTextStyleMinusBurbankSmallMinusXSMinusCyan_25pc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyleMinusBurbankSmallMinusXSMinusCyan_25pc_C*>(UTextStyleMinusBurbankSmallMinusXSMinusCyan_25pc_C::StaticClass()->DefaultObject);

	return Default;
}

}


