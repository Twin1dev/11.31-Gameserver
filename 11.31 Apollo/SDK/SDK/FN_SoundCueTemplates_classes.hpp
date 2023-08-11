#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x480 - 0x480)
// Class SoundCueTemplates.SoundCueContainer
class USoundCueContainer : public USoundCueTemplate
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SoundCueContainer");
		return Clss;
	}

};

// 0x0 (0x480 - 0x480)
// Class SoundCueTemplates.SoundCueDistanceCrossfade
class USoundCueDistanceCrossfade : public USoundCueTemplate
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SoundCueDistanceCrossfade");
		return Clss;
	}

};

// 0x0 (0x38 - 0x38)
// Class SoundCueTemplates.SoundCueTemplateSettings
class USoundCueTemplateSettings : public UDeveloperSettings
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SoundCueTemplateSettings");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
