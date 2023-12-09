#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ButtonStyle_VoiceSettings.ButtonStyle_VoiceSettings_C
// (None)

class UClass* UButtonStyle_VoiceSettings_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ButtonStyle_VoiceSettings_C");

	return Clss;
}


// ButtonStyle_VoiceSettings_C ButtonStyle_VoiceSettings.Default__ButtonStyle_VoiceSettings_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButtonStyle_VoiceSettings_C* UButtonStyle_VoiceSettings_C::GetDefaultObj()
{
	static class UButtonStyle_VoiceSettings_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButtonStyle_VoiceSettings_C*>(UButtonStyle_VoiceSettings_C::StaticClass()->DefaultObject);

	return Default;
}

}


