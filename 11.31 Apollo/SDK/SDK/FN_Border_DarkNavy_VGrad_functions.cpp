#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Border_DarkNavy_VGrad.Border_DarkNavy_VGrad_C
// (None)

class UClass* UBorder_DarkNavy_VGrad_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Border_DarkNavy_VGrad_C");

	return Clss;
}


// Border_DarkNavy_VGrad_C Border_DarkNavy_VGrad.Default__Border_DarkNavy_VGrad_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBorder_DarkNavy_VGrad_C* UBorder_DarkNavy_VGrad_C::GetDefaultObj()
{
	static class UBorder_DarkNavy_VGrad_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBorder_DarkNavy_VGrad_C*>(UBorder_DarkNavy_VGrad_C::StaticClass()->DefaultObject);

	return Default;
}

}


