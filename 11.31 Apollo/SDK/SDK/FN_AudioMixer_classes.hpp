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

// 0x430 (0x620 - 0x1F0)
// Class AudioMixer.SynthComponent
class USynthComponent : public USceneComponent
{
public:
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x1F0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bStopWhenOwnerDestroyed : 1;                       // Mask: 0x2, PropSize: 0x10x1F0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowSpatialization : 1;                          // Mask: 0x4, PropSize: 0x10x1F0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideAttenuation : 1;                          // Mask: 0x8, PropSize: 0x10x1F0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_162 : 4;                                    // Fixing Bit-Field Size  [ Dumper-8 ]
	uint8                                        Pad_17F6[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	uint8                                        bOutputToBusOnly : 1;                              // Mask: 0x1, PropSize: 0x10x1F4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_163 : 7;                                    // Fixing Bit-Field Size  [ Dumper-8 ]
	uint8                                        Pad_17F7[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	class USoundAttenuation*                     AttenuationSettings;                               // 0x1F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundAttenuationSettings             AttenuationOverrides;                              // 0x200(0x2F0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	class USoundConcurrency*                     ConcurrencySettings;                               // 0x4F0(0x8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class USoundConcurrency*>               ConcurrencySet;                                    // 0x4F8(0x50)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	class USoundClass*                           SoundClass;                                        // 0x548(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundEffectSourcePresetChain*         SourceEffectChain;                                 // 0x550(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundSubmix*                          SoundSubmix;                                       // 0x558(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FSoundSubmixSendInfo>          SoundSubmixSends;                                  // 0x560(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>       BusSends;                                          // 0x570(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSoundModulation                      Modulation;                                        // 0x580(0x10)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FSoundSourceBusSendInfo>       PreEffectBusSends;                                 // 0x590(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bIsUISound : 1;                                    // Mask: 0x1, PropSize: 0x10x5A0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsPreviewSound : 1;                               // Mask: 0x2, PropSize: 0x10x5A0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_164 : 6;                                    // Fixing Bit-Field Size  [ Dumper-8 ]
	uint8                                        Pad_17F8[0x3];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	int32                                        EnvelopeFollowerAttackTime;                        // 0x5A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        EnvelopeFollowerReleaseTime;                       // 0x5A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_17F9[0x4];                                     // Fixing Size After Last Property  [ Dumper-8 ]
	UMulticastInlineDelegateProperty_            OnAudioEnvelopeValue;                              // 0x5B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_17FA[0x20];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	class USynthSound*                           Synth;                                             // 0x5E0(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UAudioComponent*                       AudioComponent;                                    // 0x5E8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_17FB[0x30];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SynthComponent");
		return Clss;
	}

	void Stop();
	void Start();
	void SetVolumeMultiplier(float VolumeMultiplier);
	void SetSubmixSend(class USoundSubmix* Submix, float SendLevel);
	bool IsPlaying();
};

// 0x80 (0xA8 - 0x28)
// Class AudioMixer.AudioGenerator
class UAudioGenerator : public UObject
{
public:
	uint8                                        Pad_17FC[0x80];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioGenerator");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class AudioMixer.AudioMixerBlueprintLibrary
class UAudioMixerBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioMixerBlueprintLibrary");
		return Clss;
	}

	float TrimAudioCache(float InMegabytesToFree);
	class USoundWave* StopRecordingOutput(class UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, const class FString& Name, const class FString& Path, class USoundSubmix* SubmixToRecord, class USoundWave* ExistingSoundWaveToOverwrite);
	void StopAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToStopAnalyzing);
	void StartRecordingOutput(class UObject* WorldContextObject, float ExpectedDuration, class USoundSubmix* SubmixToRecord);
	void StartAnalyzingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToAnalyze, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod InterpolationMethod, enum class EFFTWindowType WindowType, float HopSize);
	void SetBypassSourceEffectChainEntry(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex, bool bBypassed);
	void ResumeRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	void RemoveSourceEffectFromPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, int32 EntryIndex);
	void RemoveMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
	void PrimeSoundForPlayback(class USoundWave* SoundWave, UDelegateProperty_ OnLoadCompletion);
	void PrimeSoundCueForPlayback(class USoundCue* SoundCue);
	void PauseRecordingOutput(class UObject* WorldContextObject, class USoundSubmix* SubmixToPause);
	void GetPhaseForFrequencies(class UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>* Phases, class USoundSubmix* SubmixToAnalyze);
	int32 GetNumberOfEntriesInSourceEffectChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain);
	void GetMagnitudeForFrequencies(class UObject* WorldContextObject, TArray<float>& Frequencies, TArray<float>* Magnitudes, class USoundSubmix* SubmixToAnalyze);
	void ClearMasterSubmixEffects(class UObject* WorldContextObject);
	void AddSourceEffectToPresetChain(class UObject* WorldContextObject, class USoundEffectSourcePresetChain* PresetChain, const struct FSourceEffectChainEntry& Entry);
	void AddMasterSubmixEffect(class UObject* WorldContextObject, class USoundEffectSubmixPreset* SubmixEffectPreset);
};

// 0x78 (0xB8 - 0x40)
// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
class USubmixEffectDynamicsProcessorPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1803[0x50];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSubmixEffectDynamicsProcessorSettings Settings;                                          // 0x90(0x28)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectDynamicsProcessorPreset");
		return Clss;
	}

	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings& InSettings);
};

// 0x48 (0x88 - 0x40)
// Class AudioMixer.SubmixEffectSubmixEQPreset
class USubmixEffectSubmixEQPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1804[0x38];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSubmixEffectSubmixEQSettings         Settings;                                          // 0x78(0x10)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectSubmixEQPreset");
		return Clss;
	}

	void SetSettings(struct FSubmixEffectSubmixEQSettings& InSettings);
};

// 0x90 (0xD0 - 0x40)
// Class AudioMixer.SubmixEffectReverbPreset
class USubmixEffectReverbPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1805[0x5C];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSubmixEffectReverbSettings           Settings;                                          // 0x9C(0x34)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectReverbPreset");
		return Clss;
	}

	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(struct FSubmixEffectReverbSettings& InSettings);
};

// 0x90 (0xD0 - 0x40)
// Class AudioMixer.SubmixEffectReverbFastPreset
class USubmixEffectReverbFastPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1806[0x5C];                                    // Fixing Size After Last Property  [ Dumper-8 ]
	struct FSubmixEffectReverbFastSettings       Settings;                                          // 0x9C(0x34)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubmixEffectReverbFastPreset");
		return Clss;
	}

	void SetSettingsWithReverbEffect(class UReverbEffect* InReverbEffect, float WetLevel, float DryLevel);
	void SetSettings(struct FSubmixEffectReverbFastSettings& InSettings);
};

// 0x20 (0x3F0 - 0x3D0)
// Class AudioMixer.SynthSound
class USynthSound : public USoundWaveProcedural
{
public:
	class USynthComponent*                       OwningSynthComponent;                              // 0x3D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1807[0x18];                                    // Fixing Size Of Struct [ Dumper-8 ]

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SynthSound");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
