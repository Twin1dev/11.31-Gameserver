#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// Class Synthesis.ModularSynthPresetBank
class UModularSynthPresetBank : public UObject
{
public:
	TArray<struct FModularSynthPresetBankEntry>  Presets;                                           // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UModularSynthPresetBank* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Synthesis.ModularSynthLibrary
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UModularSynthLibrary* GetDefaultObj();

	void AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, struct FModularSynthPreset& Preset, const class FString& PresetName);
};

// 0x6A0 (0xCC0 - 0x620)
// Class Synthesis.ModularSynthComponent
class UModularSynthComponent : public USynthComponent
{
public:
	int32                                        VoiceCount;                                        // 0x620(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15DE[0x69C];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UModularSynthComponent* GetDefaultObj();

	void SetSynthPreset(struct FModularSynthPreset& SynthPreset);
	void SetSustainGain(float SustainGain);
	void SetStereoDelayWetlevel(float DelayWetlevel);
	void SetStereoDelayTime(float DelayTimeMsec);
	void SetStereoDelayRatio(float DelayRatio);
	void SetStereoDelayMode(enum class ESynthStereoDelayMode StereoDelayMode);
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled);
	void SetStereoDelayFeedback(float DelayFeedback);
	void SetSpread(float Spread);
	void SetReleaseTime(float ReleaseTimeMsec);
	void SetPortamento(float Portamento);
	void SetPitchBend(float PitchBend);
	void SetPan(float Pan);
	void SetOscType(int32 OscIndex, enum class ESynth1OscType OscType);
	void SetOscSync(bool bIsSynced);
	void SetOscSemitones(int32 OscIndex, float Semitones);
	void SetOscPulsewidth(int32 OscIndex, float Pulsewidth);
	void SetOscOctave(int32 OscIndex, float Octave);
	void SetOscGainMod(int32 OscIndex, float OscGainMod);
	void SetOscGain(int32 OscIndex, float OscGain);
	void SetOscFrequencyMod(int32 OscIndex, float OscFreqMod);
	void SetOscCents(int32 OscIndex, float Cents);
	void SetModEnvSustainGain(float SustainGain);
	void SetModEnvReleaseTime(float Release);
	void SetModEnvPatch(enum class ESynthModEnvPatch InPatchType);
	void SetModEnvInvert(bool bInvert);
	void SetModEnvDepth(float Depth);
	void SetModEnvDecayTime(float DecayTimeMsec);
	void SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch InPatchType);
	void SetModEnvBiasInvert(bool bInvert);
	void SetModEnvAttackTime(float AttackTimeMsec);
	void SetLFOType(int32 LFOIndex, enum class ESynthLFOType LFOType);
	void SetLFOPatch(int32 LFOIndex, enum class ESynthLFOPatchType LFOPatchType);
	void SetLFOMode(int32 LFOIndex, enum class ESynthLFOMode LFOMode);
	void SetLFOGainMod(int32 LFOIndex, float GainMod);
	void SetLFOGain(int32 LFOIndex, float Gain);
	void SetLFOFrequencyMod(int32 LFOIndex, float FrequencyModHz);
	void SetLFOFrequency(int32 LFOIndex, float FrequencyHz);
	void SetGainDb(float GainDb);
	void SetFilterType(enum class ESynthFilterType FilterType);
	void SetFilterQMod(float FilterQ);
	void SetFilterQ(float FilterQ);
	void SetFilterFrequencyMod(float FilterFrequencyHz);
	void SetFilterFrequency(float FilterFrequencyHz);
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm FilterAlgorithm);
	void SetEnableUnison(bool EnableUnison);
	void SetEnableRetrigger(bool RetriggerEnabled);
	void SetEnablePolyphony(bool bEnablePolyphony);
	bool SetEnablePatch(const struct FPatchId& PatchId, bool bIsEnabled);
	void SetEnableLegato(bool LegatoEnabled);
	void SetDecayTime(float DecayTimeMsec);
	void SetChorusFrequency(float Frequency);
	void SetChorusFeedback(float Feedback);
	void SetChorusEnabled(bool EnableChorus);
	void SetChorusDepth(float Depth);
	void SetAttackTime(float AttackTimeMsec);
	void NoteOn(float Note, int32 Velocity, float Duration);
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);
	struct FPatchId CreatePatch(enum class ESynth1PatchSource PatchSource, TArray<struct FSynth1PatchCable>& PatchCables, bool bEnableByDefault);
};

// 0x38 (0x78 - 0x40)
// Class Synthesis.SourceEffectBitCrusherPreset
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_15E5[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectBitCrusherSettings       Settings;                                          // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USourceEffectBitCrusherPreset* GetDefaultObj();

	void SetSettings(struct FSourceEffectBitCrusherSettings& InSettings);
};

// 0x58 (0x98 - 0x40)
// Class Synthesis.SourceEffectChorusPreset
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_15E8[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectChorusSettings           Settings;                                          // 0x80(0x18)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USourceEffectChorusPreset* GetDefaultObj();

	void SetSettings(struct FSourceEffectChorusSettings& InSettings);
};

// 0x78 (0xB8 - 0x40)
// Class Synthesis.SourceEffectDynamicsProcessorPreset
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_15EB[0x50];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectDynamicsProcessorSettings Settings;                                          // 0x90(0x28)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USourceEffectDynamicsProcessorPreset* GetDefaultObj();

	void SetSettings(struct FSourceEffectDynamicsProcessorSettings& InSettings);
};

// 0x20 (0xD0 - 0xB0)
// Class Synthesis.EnvelopeFollowerListener
class UEnvelopeFollowerListener : public UActorComponent
{
public:
	UMulticastInlineDelegateProperty_            OnEnvelopeFollowerUpdate;                          // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_15ED[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UEnvelopeFollowerListener* GetDefaultObj();

};

// 0x40 (0x80 - 0x40)
// Class Synthesis.SourceEffectEnvelopeFollowerPreset
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_15EF[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectEnvelopeFollowerSettings Settings;                                          // 0x74(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USourceEffectEnvelopeFollowerPreset* GetDefaultObj();

	void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
	void SetSettings(struct FSourceEffectEnvelopeFollowerSettings& InSettings);
	void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);
};

// 0x48 (0x88 - 0x40)
// Class Synthesis.SourceEffectEQPreset
class USourceEffectEQPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_15F1[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectEQSettings               Settings;                                          // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USourceEffectEQPreset* GetDefaultObj();

	void SetSettings(struct FSourceEffectEQSettings& InSettings);
};

// 0x40 (0x80 - 0x40)
// Class Synthesis.SourceEffectFilterPreset
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_15F4[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectFilterSettings           Settings;                                          // 0x74(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USourceEffectFilterPreset* GetDefaultObj();

	void SetSettings(struct FSourceEffectFilterSettings& InSettings);
};

// 0x40 (0x80 - 0x40)
// Class Synthesis.SourceEffectFoldbackDistortionPreset
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_15F7[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectFoldbackDistortionSettings Settings;                                          // 0x74(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USourceEffectFoldbackDistortionPreset* GetDefaultObj();

	void SetSettings(struct FSourceEffectFoldbackDistortionSettings& InSettings);
};

// 0x40 (0x80 - 0x40)
// Class Synthesis.SourceEffectMidSideSpreaderPreset
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_15F9[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectMidSideSpreaderSettings  Settings;                                          // 0x74(0xC)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USourceEffectMidSideSpreaderPreset* GetDefaultObj();

	void SetSettings(struct FSourceEffectMidSideSpreaderSettings& InSettings);
};

// 0x38 (0x78 - 0x40)
// Class Synthesis.SourceEffectPannerPreset
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_15FA[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectPannerSettings           Settings;                                          // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USourceEffectPannerPreset* GetDefaultObj();

	void SetSettings(struct FSourceEffectPannerSettings& InSettings);
};

// 0x48 (0x88 - 0x40)
// Class Synthesis.SourceEffectPhaserPreset
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_15FE[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectPhaserSettings           Settings;                                          // 0x78(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USourceEffectPhaserPreset* GetDefaultObj();

	void SetSettings(struct FSourceEffectPhaserSettings& InSettings);
};

// 0x50 (0x90 - 0x40)
// Class Synthesis.SourceEffectRingModulationPreset
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1602[0x3C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectRingModulationSettings   Settings;                                          // 0x7C(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USourceEffectRingModulationPreset* GetDefaultObj();

	void SetSettings(struct FSourceEffectRingModulationSettings& InSettings);
};

// 0x58 (0x98 - 0x40)
// Class Synthesis.SourceEffectSimpleDelayPreset
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1606[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectSimpleDelaySettings      Settings;                                          // 0x80(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USourceEffectSimpleDelayPreset* GetDefaultObj();

	void SetSettings(struct FSourceEffectSimpleDelaySettings& InSettings);
};

// 0x50 (0x90 - 0x40)
// Class Synthesis.SourceEffectStereoDelayPreset
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1608[0x3C];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectStereoDelaySettings      Settings;                                          // 0x7C(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USourceEffectStereoDelayPreset* GetDefaultObj();

	void SetSettings(struct FSourceEffectStereoDelaySettings& InSettings);
};

// 0x38 (0x78 - 0x40)
// Class Synthesis.SourceEffectWaveShaperPreset
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{
public:
	uint8                                        Pad_1609[0x30];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSourceEffectWaveShaperSettings       Settings;                                          // 0x70(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USourceEffectWaveShaperPreset* GetDefaultObj();

	void SetSettings(struct FSourceEffectWaveShaperSettings& InSettings);
};

// 0x50 (0x90 - 0x40)
// Class Synthesis.SubmixEffectDelayPreset
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_160C[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectDelaySettings            Settings;                                          // 0x74(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	struct FSubmixEffectDelaySettings            DynamicSettings;                                   // 0x80(0xC)(Transient, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_160E[0x4];                                     // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USubmixEffectDelayPreset* GetDefaultObj();

	void SetSettings(struct FSubmixEffectDelaySettings& InSettings);
	void SetInterpolationTime(float Time);
	void SetDelay(float Length);
	float GetMaxDelayInMilliseconds();
};

// 0x40 (0x80 - 0x40)
// Class Synthesis.SubmixEffectFilterPreset
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_160F[0x34];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectFilterSettings           Settings;                                          // 0x74(0xC)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USubmixEffectFilterPreset* GetDefaultObj();

	void SetSettings(struct FSubmixEffectFilterSettings& InSettings);
	void SetFilterType(enum class ESubmixFilterType InType);
	void SetFilterQMod(float InQ);
	void SetFilterQ(float InQ);
	void SetFilterCutoffFrequencyMod(float InFrequency);
	void SetFilterCutoffFrequency(float InFrequency);
	void SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InAlgorithm);
};

// 0x48 (0x88 - 0x40)
// Class Synthesis.SubmixEffectFlexiverbPreset
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1610[0x38];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectFlexiverbSettings        Settings;                                          // 0x78(0x10)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class USubmixEffectFlexiverbPreset* GetDefaultObj();

	void SetSettings(struct FSubmixEffectFlexiverbSettings& InSettings);
};

// 0x70 (0xB0 - 0x40)
// Class Synthesis.SubmixEffectTapDelayPreset
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{
public:
	uint8                                        Pad_1616[0x40];                                    // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSubmixEffectTapDelaySettings         Settings;                                          // 0x80(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_1617[0x18];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USubmixEffectTapDelayPreset* GetDefaultObj();

	void SetTap(int32 TapId, struct FTapDelayInfo& TapInfo);
	void SetSettings(struct FSubmixEffectTapDelaySettings& InSettings);
	void SetInterpolationTime(float Time);
	void RemoveTap(int32 TapId);
	void GetTapIds(TArray<int32>* TapIds);
	void GetTap(int32 TapId, struct FTapDelayInfo* TapInfo);
	float GetMaxDelayInMilliseconds();
	void AddTap(int32* TapId);
};

// 0x370 (0x478 - 0x108)
// Class Synthesis.Synth2DSlider
class USynth2DSlider : public UWidget
{
public:
	float                                        ValueX;                                            // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ValueY;                                            // 0x10C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ValueXDelegate;                                    // 0x110(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ValueYDelegate;                                    // 0x120(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSynth2DSliderStyle                   WidgetStyle;                                       // 0x130(0x2B8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                          SliderHandleColor;                                 // 0x3E8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IndentHandle;                                      // 0x3F8(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x3F9(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161C[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        StepSize;                                          // 0x3FC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0x400(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_161D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x408(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x418(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x428(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x438(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnValueChangedX;                                   // 0x448(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnValueChangedY;                                   // 0x458(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_161E[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USynth2DSlider* GetDefaultObj();

	void SetValue(const struct FVector2D& InValue);
	void SetStepSize(float InValue);
	void SetSliderHandleColor(const struct FLinearColor& InValue);
	void SetLocked(bool InValue);
	void SetIndentHandle(bool InValue);
	struct FVector2D GetValue();
};

// 0x350 (0x970 - 0x620)
// Class Synthesis.GranularSynth
class UGranularSynth : public USynthComponent
{
public:
	class USoundWave*                            GranulatedSoundWave;                               // 0x620(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_162E[0x348];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UGranularSynth* GetDefaultObj();

	void SetSustainGain(float SustainGain);
	void SetSoundWave(class USoundWave* InSoundWave);
	void SetScrubMode(bool bScrubMode);
	void SetReleaseTimeMsec(float ReleaseTimeMsec);
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType);
	void SetPlaybackSpeed(float InPlayheadRate);
	void SetGrainVolume(float BaseVolume, const struct FVector2D& VolumeRange);
	void SetGrainsPerSecond(float InGrainsPerSecond);
	void SetGrainProbability(float InGrainProbability);
	void SetGrainPitch(float BasePitch, const struct FVector2D& PitchRange);
	void SetGrainPan(float BasePan, const struct FVector2D& PanRange);
	void SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType EnvelopeType);
	void SetGrainDuration(float BaseDurationMsec, const struct FVector2D& DurationRange);
	void SetDecayTime(float DecayTimeMsec);
	void SetAttackTime(float AttackTimeMsec);
	void NoteOn(float Note, int32 Velocity, float Duration);
	void NoteOff(float Note, bool bKill);
	bool IsLoaded();
	float GetSampleDuration();
	float GetCurrentPlayheadTime();
};

// 0x148 (0x170 - 0x28)
// Class Synthesis.MonoWaveTableSynthPreset
class UMonoWaveTableSynthPreset : public UObject
{
public:
	class FString                                PresetName;                                        // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLockKeyframesToGridBool : 1;                      // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_CC : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1631[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LockKeyframesToGrid;                               // 0x3C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WaveTableResolution;                               // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1632[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FRuntimeFloatCurve>            WaveTable;                                         // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NonTransactional, NativeAccessSpecifierPublic)
	uint8                                        bNormalizeWaveTables : 1;                          // Mask: 0x1, PropSize: 0x10x58(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1633[0x117];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UMonoWaveTableSynthPreset* GetDefaultObj();

};

// 0x740 (0xD60 - 0x620)
// Class Synthesis.SynthComponentMonoWaveTable
class USynthComponentMonoWaveTable : public USynthComponent
{
public:
	UMulticastInlineDelegateProperty_            OnTableAltered;                                    // 0x620(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnNumTablesChanged;                                // 0x630(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class UMonoWaveTableSynthPreset*             CurrentPreset;                                     // 0x640(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_165A[0x718];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USynthComponentMonoWaveTable* GetDefaultObj();

	void SetWaveTablePosition(float InPosition);
	void SetSustainPedalState(bool InSustainPedalState);
	void SetPosLfoType(enum class ESynthLFOType InLfoType);
	void SetPosLfoFrequency(float InLfoFrequency);
	void SetPosLfoDepth(float InLfoDepth);
	void SetPositionEnvelopeSustainGain(float InSustainGain);
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetPositionEnvelopeInvert(bool bInInvert);
	void SetPositionEnvelopeDepth(float InDepth);
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);
	void SetPositionEnvelopeBiasDepth(float InDepth);
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);
	void SetLowPassFilterResonance(float InNewQ);
	void SetLowPassFilterFrequency(float InNewFrequency);
	void SetFrequencyWithMidiNote(float InMidiNote);
	void SetFrequencyPitchBend(float FrequencyOffsetCents);
	void SetFrequency(float FrequencyHz);
	void SetFilterEnvelopeSustainGain(float InSustainGain);
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);
	void SetFilterEnvelopeInvert(bool bInInvert);
	void SetFilterEnvelopeDepth(float InDepth);
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);
	void SetFilterEnvelopeBiasDepth(float InDepth);
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);
	bool SetCurveValue(int32 TableIndex, int32 KeyframeIndex, float NewValue);
	bool SetCurveTangent(int32 TableIndex, float InNewTangent);
	bool SetCurveInterpolationType(enum class ECurveInterpolationType InterpolationType, int32 TableIndex);
	void SetAmpEnvelopeSustainGain(float InSustainGain);
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);
	void SetAmpEnvelopeInvert(bool bInInvert);
	void SetAmpEnvelopeDepth(float InDepth);
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);
	void SetAmpEnvelopeBiasDepth(float InDepth);
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);
	void RefreshWaveTable(int32 Index);
	void RefreshAllWaveTables();
	void NoteOn(float InMidiNote, float InVelocity);
	void NoteOff(float InMidiNote);
	int32 GetNumTableEntries();
	int32 GetMaxTableIndex();
	TArray<float> GetKeyFrameValuesForTable(float TableIndex);
	float GetCurveTangent(int32 TableIndex);
};

// 0x130 (0x750 - 0x620)
// Class Synthesis.SynthSamplePlayer
class USynthSamplePlayer : public USynthComponent
{
public:
	class USoundWave*                            SoundWave;                                         // 0x620(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnSampleLoaded;                                    // 0x628(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnSamplePlaybackProgress;                          // 0x638(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1660[0x108];                                   // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USynthSamplePlayer* GetDefaultObj();

	void SetSoundWave(class USoundWave* InSoundWave);
	void SetScrubTimeWidth(float InScrubTimeWidthSec);
	void SetScrubMode(bool bScrubMode);
	void SetPitch(float InPitch, float TimeSec);
	void SeekToTime(float TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap);
	bool IsLoaded();
	float GetSampleDuration();
	float GetCurrentPlaybackProgressTime();
	float GetCurrentPlaybackProgressPercent();
};

// 0x2F8 (0x400 - 0x108)
// Class Synthesis.SynthKnob
class USynthKnob : public UWidget
{
public:
	float                                        Value;                                             // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StepSize;                                          // 0x10C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouseSpeed;                                        // 0x110(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MouseFineTuneSpeed;                                // 0x114(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        ShowTooltipInfo : 1;                               // Mask: 0x1, PropSize: 0x10x118(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_CD : 7;                                     // Fixing Bit-Field Size  [ Dumper-7 ]
	uint8                                        Pad_1662[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  ParameterName;                                     // 0x120(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FText                                  ParameterUnits;                                    // 0x138(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	UDelegateProperty_                           ValueDelegate;                                     // 0x150(0x10)(ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic)
	struct FSynthKnobStyle                       WidgetStyle;                                       // 0x160(0x238)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	bool                                         Locked;                                            // 0x398(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsFocusable;                                       // 0x399(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1663[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	UMulticastInlineDelegateProperty_            OnMouseCaptureBegin;                               // 0x3A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnMouseCaptureEnd;                                 // 0x3B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnControllerCaptureBegin;                          // 0x3C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnControllerCaptureEnd;                            // 0x3D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	UMulticastInlineDelegateProperty_            OnValueChanged;                                    // 0x3E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_1665[0x10];                                    // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class USynthKnob* GetDefaultObj();

	void SetValue(float InValue);
	void SetStepSize(float InValue);
	void SetLocked(bool InValue);
	float GetValue();
};

}


