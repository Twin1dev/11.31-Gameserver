#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FortVoiceChannelSpeakerContainerHUD.FortVoiceChannelSpeakerContainerHUD_C
// (None)

class UClass* UFortVoiceChannelSpeakerContainerHUD_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortVoiceChannelSpeakerContainerHUD_C");

	return Clss;
}


// FortVoiceChannelSpeakerContainerHUD_C FortVoiceChannelSpeakerContainerHUD.Default__FortVoiceChannelSpeakerContainerHUD_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortVoiceChannelSpeakerContainerHUD_C* UFortVoiceChannelSpeakerContainerHUD_C::GetDefaultObj()
{
	static class UFortVoiceChannelSpeakerContainerHUD_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortVoiceChannelSpeakerContainerHUD_C*>(UFortVoiceChannelSpeakerContainerHUD_C::StaticClass()->DefaultObject);

	return Default;
}

}


