#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaHUDSpeakerContainerWrapper.AthenaHUDSpeakerContainerWrapper_C
// (None)

class UClass* UAthenaHUDSpeakerContainerWrapper_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaHUDSpeakerContainerWrapper_C");

	return Clss;
}


// AthenaHUDSpeakerContainerWrapper_C AthenaHUDSpeakerContainerWrapper.Default__AthenaHUDSpeakerContainerWrapper_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaHUDSpeakerContainerWrapper_C* UAthenaHUDSpeakerContainerWrapper_C::GetDefaultObj()
{
	static class UAthenaHUDSpeakerContainerWrapper_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaHUDSpeakerContainerWrapper_C*>(UAthenaHUDSpeakerContainerWrapper_C::StaticClass()->DefaultObject);

	return Default;
}

}


