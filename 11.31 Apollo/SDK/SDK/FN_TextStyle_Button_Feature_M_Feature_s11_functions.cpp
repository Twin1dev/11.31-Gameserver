#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TextStyle_Button_Feature_M_Feature_s11.TextStyle_Button_Feature_M_Feature_s11_C
// (None)

class UClass* UTextStyle_Button_Feature_M_Feature_s11_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TextStyle_Button_Feature_M_Feature_s11_C");

	return Clss;
}


// TextStyle_Button_Feature_M_Feature_s11_C TextStyle_Button_Feature_M_Feature_s11.Default__TextStyle_Button_Feature_M_Feature_s11_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTextStyle_Button_Feature_M_Feature_s11_C* UTextStyle_Button_Feature_M_Feature_s11_C::GetDefaultObj()
{
	static class UTextStyle_Button_Feature_M_Feature_s11_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTextStyle_Button_Feature_M_Feature_s11_C*>(UTextStyle_Button_Feature_M_Feature_s11_C::StaticClass()->DefaultObject);

	return Default;
}

}


