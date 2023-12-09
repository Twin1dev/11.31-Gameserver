#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SoundCueTemplates.SoundCueContainer
// (None)

class UClass* USoundCueContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundCueContainer");

	return Clss;
}


// SoundCueContainer SoundCueTemplates.Default__SoundCueContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundCueContainer* USoundCueContainer::GetDefaultObj()
{
	static class USoundCueContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundCueContainer*>(USoundCueContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class SoundCueTemplates.SoundCueDistanceCrossfade
// (None)

class UClass* USoundCueDistanceCrossfade::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundCueDistanceCrossfade");

	return Clss;
}


// SoundCueDistanceCrossfade SoundCueTemplates.Default__SoundCueDistanceCrossfade
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundCueDistanceCrossfade* USoundCueDistanceCrossfade::GetDefaultObj()
{
	static class USoundCueDistanceCrossfade* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundCueDistanceCrossfade*>(USoundCueDistanceCrossfade::StaticClass()->DefaultObject);

	return Default;
}


// Class SoundCueTemplates.SoundCueTemplateSettings
// (None)

class UClass* USoundCueTemplateSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SoundCueTemplateSettings");

	return Clss;
}


// SoundCueTemplateSettings SoundCueTemplates.Default__SoundCueTemplateSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class USoundCueTemplateSettings* USoundCueTemplateSettings::GetDefaultObj()
{
	static class USoundCueTemplateSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<USoundCueTemplateSettings*>(USoundCueTemplateSettings::StaticClass()->DefaultObject);

	return Default;
}

}


