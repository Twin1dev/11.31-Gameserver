#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_VoiceHeader.ButtonStyle_VoiceHeader_C
// (None)

class UClass* UButtonStyle_VoiceHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_VoiceHeader_C");

	return Clss;
}


// ButtonStyle_VoiceHeader_C ButtonStyle_VoiceHeader.Default__ButtonStyle_VoiceHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_VoiceHeader_C* UButtonStyle_VoiceHeader_C::GetDefaultObj()
{
	static class UButtonStyle_VoiceHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_VoiceHeader_C*>(UButtonStyle_VoiceHeader_C::StaticClass()->DefaultObject);

	return Default;
}

}


