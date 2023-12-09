#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class AmbientAudio.AmbientAudioDataAsset
// (None)

class UClass* UAmbientAudioDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbientAudioDataAsset");

	return Clss;
}


// AmbientAudioDataAsset AmbientAudio.Default__AmbientAudioDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UAmbientAudioDataAsset* UAmbientAudioDataAsset::GetDefaultObj()
{
	static class UAmbientAudioDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UAmbientAudioDataAsset*>(UAmbientAudioDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class AmbientAudio.AmbientVolume
// (Actor)

class UClass* AAmbientVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AmbientVolume");

	return Clss;
}


// AmbientVolume AmbientAudio.Default__AmbientVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class AAmbientVolume* AAmbientVolume::GetDefaultObj()
{
	static class AAmbientVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<AAmbientVolume*>(AAmbientVolume::StaticClass()->DefaultObject);

	return Default;
}

}


