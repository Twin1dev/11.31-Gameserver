#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// class UModularSynthPresetBank*     InBank                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FModularSynthPreset         Preset                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      PresetName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthLibrary::AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, struct FModularSynthPreset& Preset, const class FString& PresetName)
{
	static auto Func = Class->GetFunction("ModularSynthLibrary", "AddModularSynthPresetToBankAsset");

	Params::UModularSynthLibrary_AddModularSynthPresetToBankAsset_Params Parms;

	Parms.InBank = InBank;
	Parms.Preset = Preset;
	Parms.PresetName = PresetName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetSynthPreset
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FModularSynthPreset         SynthPreset                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetSynthPreset(struct FModularSynthPreset& SynthPreset)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetSynthPreset");

	Params::UModularSynthComponent_SetSynthPreset_Params Parms;

	Parms.SynthPreset = SynthPreset;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SustainGain                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetSustainGain(float SustainGain)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetSustainGain");

	Params::UModularSynthComponent_SetSustainGain_Params Parms;

	Parms.SustainGain = SustainGain;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DelayWetlevel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayWetlevel(float DelayWetlevel)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayWetlevel");

	Params::UModularSynthComponent_SetStereoDelayWetlevel_Params Parms;

	Parms.DelayWetlevel = DelayWetlevel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DelayTimeMsec                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayTime(float DelayTimeMsec)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayTime");

	Params::UModularSynthComponent_SetStereoDelayTime_Params Parms;

	Parms.DelayTimeMsec = DelayTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayRatio
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DelayRatio                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayRatio(float DelayRatio)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayRatio");

	Params::UModularSynthComponent_SetStereoDelayRatio_Params Parms;

	Parms.DelayRatio = DelayRatio;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthStereoDelayMode   StereoDelayMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayMode(enum class ESynthStereoDelayMode StereoDelayMode)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayMode");

	Params::UModularSynthComponent_SetStereoDelayMode_Params Parms;

	Parms.StereoDelayMode = StereoDelayMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               StereoDelayEnabled                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayIsEnabled(bool StereoDelayEnabled)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayIsEnabled");

	Params::UModularSynthComponent_SetStereoDelayIsEnabled_Params Parms;

	Parms.StereoDelayEnabled = StereoDelayEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DelayFeedback                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetStereoDelayFeedback(float DelayFeedback)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetStereoDelayFeedback");

	Params::UModularSynthComponent_SetStereoDelayFeedback_Params Parms;

	Parms.DelayFeedback = DelayFeedback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetSpread
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Spread                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetSpread(float Spread)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetSpread");

	Params::UModularSynthComponent_SetSpread_Params Parms;

	Parms.Spread = Spread;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReleaseTimeMsec                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetReleaseTime(float ReleaseTimeMsec)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetReleaseTime");

	Params::UModularSynthComponent_SetReleaseTime_Params Parms;

	Parms.ReleaseTimeMsec = ReleaseTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetPortamento
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Portamento                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetPortamento(float Portamento)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetPortamento");

	Params::UModularSynthComponent_SetPortamento_Params Parms;

	Parms.Portamento = Portamento;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetPitchBend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              PitchBend                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetPitchBend(float PitchBend)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetPitchBend");

	Params::UModularSynthComponent_SetPitchBend_Params Parms;

	Parms.PitchBend = PitchBend;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetPan
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Pan                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetPan(float Pan)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetPan");

	Params::UModularSynthComponent_SetPan_Params Parms;

	Parms.Pan = Pan;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetOscType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESynth1OscType          OscType                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscType(int32 OscIndex, enum class ESynth1OscType OscType)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetOscType");

	Params::UModularSynthComponent_SetOscType_Params Parms;

	Parms.OscIndex = OscIndex;
	Parms.OscType = OscType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetOscSync
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsSynced                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscSync(bool bIsSynced)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetOscSync");

	Params::UModularSynthComponent_SetOscSync_Params Parms;

	Parms.bIsSynced = bIsSynced;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetOscSemitones
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Semitones                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscSemitones(int32 OscIndex, float Semitones)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetOscSemitones");

	Params::UModularSynthComponent_SetOscSemitones_Params Parms;

	Parms.OscIndex = OscIndex;
	Parms.Semitones = Semitones;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetOscPulsewidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Pulsewidth                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscPulsewidth(int32 OscIndex, float Pulsewidth)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetOscPulsewidth");

	Params::UModularSynthComponent_SetOscPulsewidth_Params Parms;

	Parms.OscIndex = OscIndex;
	Parms.Pulsewidth = Pulsewidth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetOscOctave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Octave                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscOctave(int32 OscIndex, float Octave)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetOscOctave");

	Params::UModularSynthComponent_SetOscOctave_Params Parms;

	Parms.OscIndex = OscIndex;
	Parms.Octave = Octave;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetOscGainMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OscGainMod                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscGainMod(int32 OscIndex, float OscGainMod)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetOscGainMod");

	Params::UModularSynthComponent_SetOscGainMod_Params Parms;

	Parms.OscIndex = OscIndex;
	Parms.OscGainMod = OscGainMod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetOscGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OscGain                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscGain(int32 OscIndex, float OscGain)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetOscGain");

	Params::UModularSynthComponent_SetOscGain_Params Parms;

	Parms.OscIndex = OscIndex;
	Parms.OscGain = OscGain;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetOscFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OscFreqMod                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscFrequencyMod(int32 OscIndex, float OscFreqMod)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetOscFrequencyMod");

	Params::UModularSynthComponent_SetOscFrequencyMod_Params Parms;

	Parms.OscIndex = OscIndex;
	Parms.OscFreqMod = OscFreqMod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetOscCents
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              OscIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Cents                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetOscCents(int32 OscIndex, float Cents)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetOscCents");

	Params::UModularSynthComponent_SetOscCents_Params Parms;

	Parms.OscIndex = OscIndex;
	Parms.Cents = Cents;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SustainGain                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvSustainGain(float SustainGain)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetModEnvSustainGain");

	Params::UModularSynthComponent_SetModEnvSustainGain_Params Parms;

	Parms.SustainGain = SustainGain;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Release                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvReleaseTime(float Release)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetModEnvReleaseTime");

	Params::UModularSynthComponent_SetModEnvReleaseTime_Params Parms;

	Parms.Release = Release;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvPatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthModEnvPatch       InPatchType                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvPatch(enum class ESynthModEnvPatch InPatchType)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetModEnvPatch");

	Params::UModularSynthComponent_SetModEnvPatch_Params Parms;

	Parms.InPatchType = InPatchType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInvert                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvInvert(bool bInvert)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetModEnvInvert");

	Params::UModularSynthComponent_SetModEnvInvert_Params Parms;

	Parms.bInvert = bInvert;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Depth                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvDepth(float Depth)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetModEnvDepth");

	Params::UModularSynthComponent_SetModEnvDepth_Params Parms;

	Parms.Depth = Depth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DecayTimeMsec                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvDecayTime(float DecayTimeMsec)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetModEnvDecayTime");

	Params::UModularSynthComponent_SetModEnvDecayTime_Params Parms;

	Parms.DecayTimeMsec = DecayTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthModEnvBiasPatch   InPatchType                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch InPatchType)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetModEnvBiasPatch");

	Params::UModularSynthComponent_SetModEnvBiasPatch_Params Parms;

	Parms.InPatchType = InPatchType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInvert                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvBiasInvert(bool bInvert)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetModEnvBiasInvert");

	Params::UModularSynthComponent_SetModEnvBiasInvert_Params Parms;

	Parms.bInvert = bInvert;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetModEnvAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttackTimeMsec                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetModEnvAttackTime(float AttackTimeMsec)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetModEnvAttackTime");

	Params::UModularSynthComponent_SetModEnvAttackTime_Params Parms;

	Parms.AttackTimeMsec = AttackTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetLFOType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESynthLFOType           LFOType                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOType(int32 LFOIndex, enum class ESynthLFOType LFOType)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetLFOType");

	Params::UModularSynthComponent_SetLFOType_Params Parms;

	Parms.LFOIndex = LFOIndex;
	Parms.LFOType = LFOType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetLFOPatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESynthLFOPatchType      LFOPatchType                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOPatch(int32 LFOIndex, enum class ESynthLFOPatchType LFOPatchType)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetLFOPatch");

	Params::UModularSynthComponent_SetLFOPatch_Params Parms;

	Parms.LFOIndex = LFOIndex;
	Parms.LFOPatchType = LFOPatchType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetLFOMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESynthLFOMode           LFOMode                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOMode(int32 LFOIndex, enum class ESynthLFOMode LFOMode)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetLFOMode");

	Params::UModularSynthComponent_SetLFOMode_Params Parms;

	Parms.LFOIndex = LFOIndex;
	Parms.LFOMode = LFOMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetLFOGainMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              GainMod                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOGainMod(int32 LFOIndex, float GainMod)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetLFOGainMod");

	Params::UModularSynthComponent_SetLFOGainMod_Params Parms;

	Parms.LFOIndex = LFOIndex;
	Parms.GainMod = GainMod;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetLFOGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Gain                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOGain(int32 LFOIndex, float Gain)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetLFOGain");

	Params::UModularSynthComponent_SetLFOGain_Params Parms;

	Parms.LFOIndex = LFOIndex;
	Parms.Gain = Gain;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FrequencyModHz                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOFrequencyMod(int32 LFOIndex, float FrequencyModHz)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetLFOFrequencyMod");

	Params::UModularSynthComponent_SetLFOFrequencyMod_Params Parms;

	Parms.LFOIndex = LFOIndex;
	Parms.FrequencyModHz = FrequencyModHz;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetLFOFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              LFOIndex                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              FrequencyHz                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetLFOFrequency(int32 LFOIndex, float FrequencyHz)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetLFOFrequency");

	Params::UModularSynthComponent_SetLFOFrequency_Params Parms;

	Parms.LFOIndex = LFOIndex;
	Parms.FrequencyHz = FrequencyHz;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetGainDb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              GainDb                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetGainDb(float GainDb)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetGainDb");

	Params::UModularSynthComponent_SetGainDb_Params Parms;

	Parms.GainDb = GainDb;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetFilterType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthFilterType        FilterType                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterType(enum class ESynthFilterType FilterType)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetFilterType");

	Params::UModularSynthComponent_SetFilterType_Params Parms;

	Parms.FilterType = FilterType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetFilterQMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FilterQ                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterQMod(float FilterQ)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetFilterQMod");

	Params::UModularSynthComponent_SetFilterQMod_Params Parms;

	Parms.FilterQ = FilterQ;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetFilterQ
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FilterQ                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterQ(float FilterQ)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetFilterQ");

	Params::UModularSynthComponent_SetFilterQ_Params Parms;

	Parms.FilterQ = FilterQ;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FilterFrequencyHz                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterFrequencyMod(float FilterFrequencyHz)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetFilterFrequencyMod");

	Params::UModularSynthComponent_SetFilterFrequencyMod_Params Parms;

	Parms.FilterFrequencyHz = FilterFrequencyHz;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetFilterFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FilterFrequencyHz                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterFrequency(float FilterFrequencyHz)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetFilterFrequency");

	Params::UModularSynthComponent_SetFilterFrequency_Params Parms;

	Parms.FilterFrequencyHz = FilterFrequencyHz;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetFilterAlgorithm
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthFilterAlgorithm   FilterAlgorithm                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetFilterAlgorithm(enum class ESynthFilterAlgorithm FilterAlgorithm)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetFilterAlgorithm");

	Params::UModularSynthComponent_SetFilterAlgorithm_Params Parms;

	Parms.FilterAlgorithm = FilterAlgorithm;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetEnableUnison
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               EnableUnison                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetEnableUnison(bool EnableUnison)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetEnableUnison");

	Params::UModularSynthComponent_SetEnableUnison_Params Parms;

	Parms.EnableUnison = EnableUnison;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetEnableRetrigger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               RetriggerEnabled                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetEnableRetrigger(bool RetriggerEnabled)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetEnableRetrigger");

	Params::UModularSynthComponent_SetEnableRetrigger_Params Parms;

	Parms.RetriggerEnabled = RetriggerEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetEnablePolyphony
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnablePolyphony                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetEnablePolyphony(bool bEnablePolyphony)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetEnablePolyphony");

	Params::UModularSynthComponent_SetEnablePolyphony_Params Parms;

	Parms.bEnablePolyphony = bEnablePolyphony;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetEnablePatch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FPatchId                    PatchId                                                          (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bIsEnabled                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UModularSynthComponent::SetEnablePatch(const struct FPatchId& PatchId, bool bIsEnabled)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetEnablePatch");

	Params::UModularSynthComponent_SetEnablePatch_Params Parms;

	Parms.PatchId = PatchId;
	Parms.bIsEnabled = bIsEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.ModularSynthComponent.SetEnableLegato
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               LegatoEnabled                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetEnableLegato(bool LegatoEnabled)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetEnableLegato");

	Params::UModularSynthComponent_SetEnableLegato_Params Parms;

	Parms.LegatoEnabled = LegatoEnabled;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DecayTimeMsec                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetDecayTime(float DecayTimeMsec)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetDecayTime");

	Params::UModularSynthComponent_SetDecayTime_Params Parms;

	Parms.DecayTimeMsec = DecayTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetChorusFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Frequency                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetChorusFrequency(float Frequency)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetChorusFrequency");

	Params::UModularSynthComponent_SetChorusFrequency_Params Parms;

	Parms.Frequency = Frequency;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetChorusFeedback
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Feedback                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetChorusFeedback(float Feedback)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetChorusFeedback");

	Params::UModularSynthComponent_SetChorusFeedback_Params Parms;

	Parms.Feedback = Feedback;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetChorusEnabled
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               EnableChorus                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetChorusEnabled(bool EnableChorus)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetChorusEnabled");

	Params::UModularSynthComponent_SetChorusEnabled_Params Parms;

	Parms.EnableChorus = EnableChorus;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetChorusDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Depth                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetChorusDepth(float Depth)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetChorusDepth");

	Params::UModularSynthComponent_SetChorusDepth_Params Parms;

	Parms.Depth = Depth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.SetAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttackTimeMsec                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::SetAttackTime(float AttackTimeMsec)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "SetAttackTime");

	Params::UModularSynthComponent_SetAttackTime_Params Parms;

	Parms.AttackTimeMsec = AttackTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.NoteOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Note                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Velocity                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::NoteOn(float Note, int32 Velocity, float Duration)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "NoteOn");

	Params::UModularSynthComponent_NoteOn_Params Parms;

	Parms.Note = Note;
	Parms.Velocity = Velocity;
	Parms.Duration = Duration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.NoteOff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Note                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllNotesOff                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bKillAllNotes                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UModularSynthComponent::NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "NoteOff");

	Params::UModularSynthComponent_NoteOff_Params Parms;

	Parms.Note = Note;
	Parms.bAllNotesOff = bAllNotesOff;
	Parms.bKillAllNotes = bKillAllNotes;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.ModularSynthComponent.CreatePatch
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ESynth1PatchSource      PatchSource                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FSynth1PatchCable>   PatchCables                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bEnableByDefault                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FPatchId                    ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FPatchId UModularSynthComponent::CreatePatch(enum class ESynth1PatchSource PatchSource, TArray<struct FSynth1PatchCable>& PatchCables, bool bEnableByDefault)
{
	static auto Func = Class->GetFunction("ModularSynthComponent", "CreatePatch");

	Params::UModularSynthComponent_CreatePatch_Params Parms;

	Parms.PatchSource = PatchSource;
	Parms.PatchCables = PatchCables;
	Parms.bEnableByDefault = bEnableByDefault;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SourceEffectBitCrusherPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectBitCrusherSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectBitCrusherPreset::SetSettings(struct FSourceEffectBitCrusherSettings& InSettings)
{
	static auto Func = Class->GetFunction("SourceEffectBitCrusherPreset", "SetSettings");

	Params::USourceEffectBitCrusherPreset_SetSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectChorusPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectChorusSettings InSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectChorusPreset::SetSettings(struct FSourceEffectChorusSettings& InSettings)
{
	static auto Func = Class->GetFunction("SourceEffectChorusPreset", "SetSettings");

	Params::USourceEffectChorusPreset_SetSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectDynamicsProcessorSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectDynamicsProcessorPreset::SetSettings(struct FSourceEffectDynamicsProcessorSettings& InSettings)
{
	static auto Func = Class->GetFunction("SourceEffectDynamicsProcessorPreset", "SetSettings");

	Params::USourceEffectDynamicsProcessorPreset_SetSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEnvelopeFollowerListener*   EnvelopeFollowerListener                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectEnvelopeFollowerPreset::UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener)
{
	static auto Func = Class->GetFunction("SourceEffectEnvelopeFollowerPreset", "UnregisterEnvelopeFollowerListener");

	Params::USourceEffectEnvelopeFollowerPreset_UnregisterEnvelopeFollowerListener_Params Parms;

	Parms.EnvelopeFollowerListener = EnvelopeFollowerListener;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectEnvelopeFollowerSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectEnvelopeFollowerPreset::SetSettings(struct FSourceEffectEnvelopeFollowerSettings& InSettings)
{
	static auto Func = Class->GetFunction("SourceEffectEnvelopeFollowerPreset", "SetSettings");

	Params::USourceEffectEnvelopeFollowerPreset_SetSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEnvelopeFollowerListener*   EnvelopeFollowerListener                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USourceEffectEnvelopeFollowerPreset::RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener)
{
	static auto Func = Class->GetFunction("SourceEffectEnvelopeFollowerPreset", "RegisterEnvelopeFollowerListener");

	Params::USourceEffectEnvelopeFollowerPreset_RegisterEnvelopeFollowerListener_Params Parms;

	Parms.EnvelopeFollowerListener = EnvelopeFollowerListener;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectEQPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectEQSettings     InSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USourceEffectEQPreset::SetSettings(struct FSourceEffectEQSettings& InSettings)
{
	static auto Func = Class->GetFunction("SourceEffectEQPreset", "SetSettings");

	Params::USourceEffectEQPreset_SetSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectFilterPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectFilterSettings InSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectFilterPreset::SetSettings(struct FSourceEffectFilterSettings& InSettings)
{
	static auto Func = Class->GetFunction("SourceEffectFilterPreset", "SetSettings");

	Params::USourceEffectFilterPreset_SetSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectFoldbackDistortionSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectFoldbackDistortionPreset::SetSettings(struct FSourceEffectFoldbackDistortionSettings& InSettings)
{
	static auto Func = Class->GetFunction("SourceEffectFoldbackDistortionPreset", "SetSettings");

	Params::USourceEffectFoldbackDistortionPreset_SetSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectMidSideSpreaderSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectMidSideSpreaderPreset::SetSettings(struct FSourceEffectMidSideSpreaderSettings& InSettings)
{
	static auto Func = Class->GetFunction("SourceEffectMidSideSpreaderPreset", "SetSettings");

	Params::USourceEffectMidSideSpreaderPreset_SetSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectPannerPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectPannerSettings InSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectPannerPreset::SetSettings(struct FSourceEffectPannerSettings& InSettings)
{
	static auto Func = Class->GetFunction("SourceEffectPannerPreset", "SetSettings");

	Params::USourceEffectPannerPreset_SetSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectPhaserPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectPhaserSettings InSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectPhaserPreset::SetSettings(struct FSourceEffectPhaserSettings& InSettings)
{
	static auto Func = Class->GetFunction("SourceEffectPhaserPreset", "SetSettings");

	Params::USourceEffectPhaserPreset_SetSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectRingModulationPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectRingModulationSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectRingModulationPreset::SetSettings(struct FSourceEffectRingModulationSettings& InSettings)
{
	static auto Func = Class->GetFunction("SourceEffectRingModulationPreset", "SetSettings");

	Params::USourceEffectRingModulationPreset_SetSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectSimpleDelaySettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectSimpleDelayPreset::SetSettings(struct FSourceEffectSimpleDelaySettings& InSettings)
{
	static auto Func = Class->GetFunction("SourceEffectSimpleDelayPreset", "SetSettings");

	Params::USourceEffectSimpleDelayPreset_SetSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectStereoDelayPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectStereoDelaySettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectStereoDelayPreset::SetSettings(struct FSourceEffectStereoDelaySettings& InSettings)
{
	static auto Func = Class->GetFunction("SourceEffectStereoDelayPreset", "SetSettings");

	Params::USourceEffectStereoDelayPreset_SetSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SourceEffectWaveShaperPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSourceEffectWaveShaperSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USourceEffectWaveShaperPreset::SetSettings(struct FSourceEffectWaveShaperSettings& InSettings)
{
	static auto Func = Class->GetFunction("SourceEffectWaveShaperPreset", "SetSettings");

	Params::USourceEffectWaveShaperPreset_SetSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectDelayPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectDelaySettings  InSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USubmixEffectDelayPreset::SetSettings(struct FSubmixEffectDelaySettings& InSettings)
{
	static auto Func = Class->GetFunction("SubmixEffectDelayPreset", "SetSettings");

	Params::USubmixEffectDelayPreset_SetSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectDelayPreset::SetInterpolationTime(float Time)
{
	static auto Func = Class->GetFunction("SubmixEffectDelayPreset", "SetInterpolationTime");

	Params::USubmixEffectDelayPreset_SetInterpolationTime_Params Parms;

	Parms.Time = Time;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectDelayPreset.SetDelay
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectDelayPreset::SetDelay(float Length)
{
	static auto Func = Class->GetFunction("SubmixEffectDelayPreset", "SetDelay");

	Params::USubmixEffectDelayPreset_SetDelay_Params Parms;

	Parms.Length = Length;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USubmixEffectDelayPreset::GetMaxDelayInMilliseconds()
{
	static auto Func = Class->GetFunction("SubmixEffectDelayPreset", "GetMaxDelayInMilliseconds");

	Params::USubmixEffectDelayPreset_GetMaxDelayInMilliseconds_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectFilterPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectFilterSettings InSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetSettings(struct FSubmixEffectFilterSettings& InSettings)
{
	static auto Func = Class->GetFunction("SubmixEffectFilterPreset", "SetSettings");

	Params::USubmixEffectFilterPreset_SetSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESubmixFilterType       InType                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterType(enum class ESubmixFilterType InType)
{
	static auto Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterType");

	Params::USubmixEffectFilterPreset_SetFilterType_Params Parms;

	Parms.InType = InType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InQ                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterQMod(float InQ)
{
	static auto Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterQMod");

	Params::USubmixEffectFilterPreset_SetFilterQMod_Params Parms;

	Parms.InQ = InQ;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterQ
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InQ                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterQ(float InQ)
{
	static auto Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterQ");

	Params::USubmixEffectFilterPreset_SetFilterQ_Params Parms;

	Parms.InQ = InQ;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFrequency                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterCutoffFrequencyMod(float InFrequency)
{
	static auto Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterCutoffFrequencyMod");

	Params::USubmixEffectFilterPreset_SetFilterCutoffFrequencyMod_Params Parms;

	Parms.InFrequency = InFrequency;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFrequency                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterCutoffFrequency(float InFrequency)
{
	static auto Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterCutoffFrequency");

	Params::USubmixEffectFilterPreset_SetFilterCutoffFrequency_Params Parms;

	Parms.InFrequency = InFrequency;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESubmixFilterAlgorithm  InAlgorithm                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectFilterPreset::SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InAlgorithm)
{
	static auto Func = Class->GetFunction("SubmixEffectFilterPreset", "SetFilterAlgorithm");

	Params::USubmixEffectFilterPreset_SetFilterAlgorithm_Params Parms;

	Parms.InAlgorithm = InAlgorithm;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectFlexiverbSettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USubmixEffectFlexiverbPreset::SetSettings(struct FSubmixEffectFlexiverbSettings& InSettings)
{
	static auto Func = Class->GetFunction("SubmixEffectFlexiverbPreset", "SetSettings");

	Params::USubmixEffectFlexiverbPreset_SetSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectTapDelayPreset.SetTap
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              TapId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTapDelayInfo               TapInfo                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::SetTap(int32 TapId, struct FTapDelayInfo& TapInfo)
{
	static auto Func = Class->GetFunction("SubmixEffectTapDelayPreset", "SetTap");

	Params::USubmixEffectTapDelayPreset_SetTap_Params Parms;

	Parms.TapId = TapId;
	Parms.TapInfo = TapInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectTapDelayPreset.SetSettings
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSubmixEffectTapDelaySettingsInSettings                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::SetSettings(struct FSubmixEffectTapDelaySettings& InSettings)
{
	static auto Func = Class->GetFunction("SubmixEffectTapDelayPreset", "SetSettings");

	Params::USubmixEffectTapDelayPreset_SetSettings_Params Parms;

	Parms.InSettings = InSettings;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Time                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::SetInterpolationTime(float Time)
{
	static auto Func = Class->GetFunction("SubmixEffectTapDelayPreset", "SetInterpolationTime");

	Params::USubmixEffectTapDelayPreset_SetInterpolationTime_Params Parms;

	Parms.Time = Time;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TapId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::RemoveTap(int32 TapId)
{
	static auto Func = Class->GetFunction("SubmixEffectTapDelayPreset", "RemoveTap");

	Params::USubmixEffectTapDelayPreset_RemoveTap_Params Parms;

	Parms.TapId = TapId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      TapIds                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::GetTapIds(TArray<int32>* TapIds)
{
	static auto Func = Class->GetFunction("SubmixEffectTapDelayPreset", "GetTapIds");

	Params::USubmixEffectTapDelayPreset_GetTapIds_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (TapIds != nullptr)
		*TapIds = Parms.TapIds;

}


// Function Synthesis.SubmixEffectTapDelayPreset.GetTap
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              TapId                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTapDelayInfo               TapInfo                                                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::GetTap(int32 TapId, struct FTapDelayInfo* TapInfo)
{
	static auto Func = Class->GetFunction("SubmixEffectTapDelayPreset", "GetTap");

	Params::USubmixEffectTapDelayPreset_GetTap_Params Parms;

	Parms.TapId = TapId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (TapInfo != nullptr)
		*TapInfo = Parms.TapInfo;

}


// Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USubmixEffectTapDelayPreset::GetMaxDelayInMilliseconds()
{
	static auto Func = Class->GetFunction("SubmixEffectTapDelayPreset", "GetMaxDelayInMilliseconds");

	Params::USubmixEffectTapDelayPreset_GetMaxDelayInMilliseconds_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SubmixEffectTapDelayPreset.AddTap
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              TapId                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USubmixEffectTapDelayPreset::AddTap(int32* TapId)
{
	static auto Func = Class->GetFunction("SubmixEffectTapDelayPreset", "AddTap");

	Params::USubmixEffectTapDelayPreset_AddTap_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (TapId != nullptr)
		*TapId = Parms.TapId;

}


// Function Synthesis.Synth2DSlider.SetValue
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector2D                   InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynth2DSlider::SetValue(const struct FVector2D& InValue)
{
	static auto Func = Class->GetFunction("Synth2DSlider", "SetValue");

	Params::USynth2DSlider_SetValue_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.Synth2DSlider.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynth2DSlider::SetStepSize(float InValue)
{
	static auto Func = Class->GetFunction("Synth2DSlider", "SetStepSize");

	Params::USynth2DSlider_SetStepSize_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.Synth2DSlider.SetSliderHandleColor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FLinearColor                InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynth2DSlider::SetSliderHandleColor(const struct FLinearColor& InValue)
{
	static auto Func = Class->GetFunction("Synth2DSlider", "SetSliderHandleColor");

	Params::USynth2DSlider_SetSliderHandleColor_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.Synth2DSlider.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynth2DSlider::SetLocked(bool InValue)
{
	static auto Func = Class->GetFunction("Synth2DSlider", "SetLocked");

	Params::USynth2DSlider_SetLocked_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.Synth2DSlider.SetIndentHandle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynth2DSlider::SetIndentHandle(bool InValue)
{
	static auto Func = Class->GetFunction("Synth2DSlider", "SetIndentHandle");

	Params::USynth2DSlider_SetIndentHandle_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.Synth2DSlider.GetValue
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D USynth2DSlider::GetValue()
{
	static auto Func = Class->GetFunction("Synth2DSlider", "GetValue");

	Params::USynth2DSlider_GetValue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.SetSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              SustainGain                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetSustainGain(float SustainGain)
{
	static auto Func = Class->GetFunction("GranularSynth", "SetSustainGain");

	Params::UGranularSynth_SetSustainGain_Params Parms;

	Parms.SustainGain = SustainGain;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetSoundWave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundWave*                  InSoundWave                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetSoundWave(class USoundWave* InSoundWave)
{
	static auto Func = Class->GetFunction("GranularSynth", "SetSoundWave");

	Params::UGranularSynth_SetSoundWave_Params Parms;

	Parms.InSoundWave = InSoundWave;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetScrubMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bScrubMode                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetScrubMode(bool bScrubMode)
{
	static auto Func = Class->GetFunction("GranularSynth", "SetScrubMode");

	Params::UGranularSynth_SetScrubMode_Params Parms;

	Parms.bScrubMode = bScrubMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetReleaseTimeMsec
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReleaseTimeMsec                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetReleaseTimeMsec(float ReleaseTimeMsec)
{
	static auto Func = Class->GetFunction("GranularSynth", "SetReleaseTimeMsec");

	Params::UGranularSynth_SetReleaseTimeMsec_Params Parms;

	Parms.ReleaseTimeMsec = ReleaseTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetPlayheadTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPositionSec                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LerpTimeSec                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EGranularSynthSeekType  SeekType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType)
{
	static auto Func = Class->GetFunction("GranularSynth", "SetPlayheadTime");

	Params::UGranularSynth_SetPlayheadTime_Params Parms;

	Parms.InPositionSec = InPositionSec;
	Parms.LerpTimeSec = LerpTimeSec;
	Parms.SeekType = SeekType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetPlaybackSpeed
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPlayheadRate                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetPlaybackSpeed(float InPlayheadRate)
{
	static auto Func = Class->GetFunction("GranularSynth", "SetPlaybackSpeed");

	Params::UGranularSynth_SetPlaybackSpeed_Params Parms;

	Parms.InPlayheadRate = InPlayheadRate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetGrainVolume
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              BaseVolume                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   VolumeRange                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainVolume(float BaseVolume, const struct FVector2D& VolumeRange)
{
	static auto Func = Class->GetFunction("GranularSynth", "SetGrainVolume");

	Params::UGranularSynth_SetGrainVolume_Params Parms;

	Parms.BaseVolume = BaseVolume;
	Parms.VolumeRange = VolumeRange;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetGrainsPerSecond
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InGrainsPerSecond                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainsPerSecond(float InGrainsPerSecond)
{
	static auto Func = Class->GetFunction("GranularSynth", "SetGrainsPerSecond");

	Params::UGranularSynth_SetGrainsPerSecond_Params Parms;

	Parms.InGrainsPerSecond = InGrainsPerSecond;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetGrainProbability
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InGrainProbability                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainProbability(float InGrainProbability)
{
	static auto Func = Class->GetFunction("GranularSynth", "SetGrainProbability");

	Params::UGranularSynth_SetGrainProbability_Params Parms;

	Parms.InGrainProbability = InGrainProbability;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetGrainPitch
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              BasePitch                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   PitchRange                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainPitch(float BasePitch, const struct FVector2D& PitchRange)
{
	static auto Func = Class->GetFunction("GranularSynth", "SetGrainPitch");

	Params::UGranularSynth_SetGrainPitch_Params Parms;

	Parms.BasePitch = BasePitch;
	Parms.PitchRange = PitchRange;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetGrainPan
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              BasePan                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   PanRange                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainPan(float BasePan, const struct FVector2D& PanRange)
{
	static auto Func = Class->GetFunction("GranularSynth", "SetGrainPan");

	Params::UGranularSynth_SetGrainPan_Params Parms;

	Parms.BasePan = BasePan;
	Parms.PanRange = PanRange;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetGrainEnvelopeType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EGranularSynthEnvelopeTypeEnvelopeType                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType EnvelopeType)
{
	static auto Func = Class->GetFunction("GranularSynth", "SetGrainEnvelopeType");

	Params::UGranularSynth_SetGrainEnvelopeType_Params Parms;

	Parms.EnvelopeType = EnvelopeType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetGrainDuration
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// float                              BaseDurationMsec                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   DurationRange                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetGrainDuration(float BaseDurationMsec, const struct FVector2D& DurationRange)
{
	static auto Func = Class->GetFunction("GranularSynth", "SetGrainDuration");

	Params::UGranularSynth_SetGrainDuration_Params Parms;

	Parms.BaseDurationMsec = BaseDurationMsec;
	Parms.DurationRange = DurationRange;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              DecayTimeMsec                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetDecayTime(float DecayTimeMsec)
{
	static auto Func = Class->GetFunction("GranularSynth", "SetDecayTime");

	Params::UGranularSynth_SetDecayTime_Params Parms;

	Parms.DecayTimeMsec = DecayTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.SetAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              AttackTimeMsec                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::SetAttackTime(float AttackTimeMsec)
{
	static auto Func = Class->GetFunction("GranularSynth", "SetAttackTime");

	Params::UGranularSynth_SetAttackTime_Params Parms;

	Parms.AttackTimeMsec = AttackTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.NoteOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Note                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Velocity                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::NoteOn(float Note, int32 Velocity, float Duration)
{
	static auto Func = Class->GetFunction("GranularSynth", "NoteOn");

	Params::UGranularSynth_NoteOn_Params Parms;

	Parms.Note = Note;
	Parms.Velocity = Velocity;
	Parms.Duration = Duration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.NoteOff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Note                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bKill                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGranularSynth::NoteOff(float Note, bool bKill)
{
	static auto Func = Class->GetFunction("GranularSynth", "NoteOff");

	Params::UGranularSynth_NoteOff_Params Parms;

	Parms.Note = Note;
	Parms.bKill = bKill;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.GranularSynth.IsLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UGranularSynth::IsLoaded()
{
	static auto Func = Class->GetFunction("GranularSynth", "IsLoaded");

	Params::UGranularSynth_IsLoaded_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.GetSampleDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGranularSynth::GetSampleDuration()
{
	static auto Func = Class->GetFunction("GranularSynth", "GetSampleDuration");

	Params::UGranularSynth_GetSampleDuration_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.GranularSynth.GetCurrentPlayheadTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UGranularSynth::GetCurrentPlayheadTime()
{
	static auto Func = Class->GetFunction("GranularSynth", "GetCurrentPlayheadTime");

	Params::UGranularSynth_GetCurrentPlayheadTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPosition                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetWaveTablePosition(float InPosition)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetWaveTablePosition");

	Params::USynthComponentMonoWaveTable_SetWaveTablePosition_Params Parms;

	Parms.InPosition = InPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InSustainPedalState                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetSustainPedalState(bool InSustainPedalState)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetSustainPedalState");

	Params::USynthComponentMonoWaveTable_SetSustainPedalState_Params Parms;

	Parms.InSustainPedalState = InSustainPedalState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESynthLFOType           InLfoType                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPosLfoType(enum class ESynthLFOType InLfoType)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPosLfoType");

	Params::USynthComponentMonoWaveTable_SetPosLfoType_Params Parms;

	Parms.InLfoType = InLfoType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InLfoFrequency                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPosLfoFrequency(float InLfoFrequency)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPosLfoFrequency");

	Params::USynthComponentMonoWaveTable_SetPosLfoFrequency_Params Parms;

	Parms.InLfoFrequency = InLfoFrequency;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InLfoDepth                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPosLfoDepth(float InLfoDepth)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPosLfoDepth");

	Params::USynthComponentMonoWaveTable_SetPosLfoDepth_Params Parms;

	Parms.InLfoDepth = InLfoDepth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSustainGain                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeSustainGain(float InSustainGain)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeSustainGain");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeSustainGain_Params Parms;

	Parms.InSustainGain = InSustainGain;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReleaseTimeMsec                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeReleaseTime");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeReleaseTime_Params Parms;

	Parms.InReleaseTimeMsec = InReleaseTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInInvert                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeInvert(bool bInInvert)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeInvert");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeInvert_Params Parms;

	Parms.bInInvert = bInInvert;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeDepth(float InDepth)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeDepth");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeDepth_Params Parms;

	Parms.InDepth = InDepth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDecayTimeMsec                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeDecayTime(float InDecayTimeMsec)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeDecayTime");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeDecayTime_Params Parms;

	Parms.InDecayTimeMsec = InDecayTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInBiasInvert                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasInvert(bool bInBiasInvert)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeBiasInvert");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeBiasInvert_Params Parms;

	Parms.bInBiasInvert = bInBiasInvert;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeBiasDepth(float InDepth)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeBiasDepth");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeBiasDepth_Params Parms;

	Parms.InDepth = InDepth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InAttackTimeMsec                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetPositionEnvelopeAttackTime(float InAttackTimeMsec)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetPositionEnvelopeAttackTime");

	Params::USynthComponentMonoWaveTable_SetPositionEnvelopeAttackTime_Params Parms;

	Parms.InAttackTimeMsec = InAttackTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewQ                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetLowPassFilterResonance(float InNewQ)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetLowPassFilterResonance");

	Params::USynthComponentMonoWaveTable_SetLowPassFilterResonance_Params Parms;

	Parms.InNewQ = InNewQ;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InNewFrequency                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetLowPassFilterFrequency(float InNewFrequency)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetLowPassFilterFrequency");

	Params::USynthComponentMonoWaveTable_SetLowPassFilterFrequency_Params Parms;

	Parms.InNewFrequency = InNewFrequency;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMidiNote                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFrequencyWithMidiNote(float InMidiNote)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFrequencyWithMidiNote");

	Params::USynthComponentMonoWaveTable_SetFrequencyWithMidiNote_Params Parms;

	Parms.InMidiNote = InMidiNote;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FrequencyOffsetCents                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFrequencyPitchBend(float FrequencyOffsetCents)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFrequencyPitchBend");

	Params::USynthComponentMonoWaveTable_SetFrequencyPitchBend_Params Parms;

	Parms.FrequencyOffsetCents = FrequencyOffsetCents;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFrequency
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              FrequencyHz                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFrequency(float FrequencyHz)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFrequency");

	Params::USynthComponentMonoWaveTable_SetFrequency_Params Parms;

	Parms.FrequencyHz = FrequencyHz;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSustainGain                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopeSustainGain(float InSustainGain)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeSustainGain");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeSustainGain_Params Parms;

	Parms.InSustainGain = InSustainGain;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReleaseTimeMsec                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeReleaseTime");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeReleaseTime_Params Parms;

	Parms.InReleaseTimeMsec = InReleaseTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDecayTimeMsec                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopenDecayTime(float InDecayTimeMsec)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopenDecayTime");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopenDecayTime_Params Parms;

	Parms.InDecayTimeMsec = InDecayTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInInvert                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopeInvert(bool bInInvert)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeInvert");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeInvert_Params Parms;

	Parms.bInInvert = bInInvert;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopeDepth(float InDepth)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeDepth");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeDepth_Params Parms;

	Parms.InDepth = InDepth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInBiasInvert                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasInvert(bool bInBiasInvert)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeBiasInvert");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeBiasInvert_Params Parms;

	Parms.bInBiasInvert = bInBiasInvert;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopeBiasDepth(float InDepth)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeBiasDepth");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeBiasDepth_Params Parms;

	Parms.InDepth = InDepth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InAttackTimeMsec                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetFilterEnvelopeAttackTime(float InAttackTimeMsec)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetFilterEnvelopeAttackTime");

	Params::USynthComponentMonoWaveTable_SetFilterEnvelopeAttackTime_Params Parms;

	Parms.InAttackTimeMsec = InAttackTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TableIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              KeyframeIndex                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              NewValue                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USynthComponentMonoWaveTable::SetCurveValue(int32 TableIndex, int32 KeyframeIndex, float NewValue)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetCurveValue");

	Params::USynthComponentMonoWaveTable_SetCurveValue_Params Parms;

	Parms.TableIndex = TableIndex;
	Parms.KeyframeIndex = KeyframeIndex;
	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TableIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InNewTangent                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USynthComponentMonoWaveTable::SetCurveTangent(int32 TableIndex, float InNewTangent)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetCurveTangent");

	Params::USynthComponentMonoWaveTable_SetCurveTangent_Params Parms;

	Parms.TableIndex = TableIndex;
	Parms.InNewTangent = InNewTangent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECurveInterpolationType InterpolationType                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TableIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USynthComponentMonoWaveTable::SetCurveInterpolationType(enum class ECurveInterpolationType InterpolationType, int32 TableIndex)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetCurveInterpolationType");

	Params::USynthComponentMonoWaveTable_SetCurveInterpolationType_Params Parms;

	Parms.InterpolationType = InterpolationType;
	Parms.TableIndex = TableIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSustainGain                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeSustainGain(float InSustainGain)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeSustainGain");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeSustainGain_Params Parms;

	Parms.InSustainGain = InSustainGain;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InReleaseTimeMsec                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeReleaseTime");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeReleaseTime_Params Parms;

	Parms.InReleaseTimeMsec = InReleaseTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInInvert                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeInvert(bool bInInvert)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeInvert");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeInvert_Params Parms;

	Parms.bInInvert = bInInvert;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeDepth(float InDepth)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeDepth");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeDepth_Params Parms;

	Parms.InDepth = InDepth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDecayTimeMsec                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeDecayTime(float InDecayTimeMsec)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeDecayTime");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeDecayTime_Params Parms;

	Parms.InDecayTimeMsec = InDecayTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInBiasInvert                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasInvert(bool bInBiasInvert)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeBiasInvert");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeBiasInvert_Params Parms;

	Parms.bInBiasInvert = bInBiasInvert;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InDepth                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeBiasDepth(float InDepth)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeBiasDepth");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeBiasDepth_Params Parms;

	Parms.InDepth = InDepth;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InAttackTimeMsec                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::SetAmpEnvelopeAttackTime(float InAttackTimeMsec)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "SetAmpEnvelopeAttackTime");

	Params::USynthComponentMonoWaveTable_SetAmpEnvelopeAttackTime_Params Parms;

	Parms.InAttackTimeMsec = InAttackTimeMsec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::RefreshWaveTable(int32 Index)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "RefreshWaveTable");

	Params::USynthComponentMonoWaveTable_RefreshWaveTable_Params Parms;

	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USynthComponentMonoWaveTable::RefreshAllWaveTables()
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "RefreshAllWaveTables");

	Params::USynthComponentMonoWaveTable_RefreshAllWaveTables_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.NoteOn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMidiNote                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InVelocity                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::NoteOn(float InMidiNote, float InVelocity)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "NoteOn");

	Params::USynthComponentMonoWaveTable_NoteOn_Params Parms;

	Parms.InMidiNote = InMidiNote;
	Parms.InVelocity = InVelocity;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.NoteOff
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InMidiNote                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthComponentMonoWaveTable::NoteOff(float InMidiNote)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "NoteOff");

	Params::USynthComponentMonoWaveTable_NoteOff_Params Parms;

	Parms.InMidiNote = InMidiNote;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USynthComponentMonoWaveTable::GetNumTableEntries()
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetNumTableEntries");

	Params::USynthComponentMonoWaveTable_GetNumTableEntries_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 USynthComponentMonoWaveTable::GetMaxTableIndex()
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetMaxTableIndex");

	Params::USynthComponentMonoWaveTable_GetMaxTableIndex_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              TableIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> USynthComponentMonoWaveTable::GetKeyFrameValuesForTable(float TableIndex)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetKeyFrameValuesForTable");

	Params::USynthComponentMonoWaveTable_GetKeyFrameValuesForTable_Params Parms;

	Parms.TableIndex = TableIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              TableIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USynthComponentMonoWaveTable::GetCurveTangent(int32 TableIndex)
{
	static auto Func = Class->GetFunction("SynthComponentMonoWaveTable", "GetCurveTangent");

	Params::USynthComponentMonoWaveTable_GetCurveTangent_Params Parms;

	Parms.TableIndex = TableIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthSamplePlayer.SetSoundWave
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class USoundWave*                  InSoundWave                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthSamplePlayer::SetSoundWave(class USoundWave* InSoundWave)
{
	static auto Func = Class->GetFunction("SynthSamplePlayer", "SetSoundWave");

	Params::USynthSamplePlayer_SetSoundWave_Params Parms;

	Parms.InSoundWave = InSoundWave;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InScrubTimeWidthSec                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthSamplePlayer::SetScrubTimeWidth(float InScrubTimeWidthSec)
{
	static auto Func = Class->GetFunction("SynthSamplePlayer", "SetScrubTimeWidth");

	Params::USynthSamplePlayer_SetScrubTimeWidth_Params Parms;

	Parms.InScrubTimeWidthSec = InScrubTimeWidthSec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthSamplePlayer.SetScrubMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bScrubMode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthSamplePlayer::SetScrubMode(bool bScrubMode)
{
	static auto Func = Class->GetFunction("SynthSamplePlayer", "SetScrubMode");

	Params::USynthSamplePlayer_SetScrubMode_Params Parms;

	Parms.bScrubMode = bScrubMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthSamplePlayer.SetPitch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InPitch                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TimeSec                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthSamplePlayer::SetPitch(float InPitch, float TimeSec)
{
	static auto Func = Class->GetFunction("SynthSamplePlayer", "SetPitch");

	Params::USynthSamplePlayer_SetPitch_Params Parms;

	Parms.InPitch = InPitch;
	Parms.TimeSec = TimeSec;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthSamplePlayer.SeekToTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TimeSec                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESamplePlayerSeekType   SeekType                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWrap                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthSamplePlayer::SeekToTime(float TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap)
{
	static auto Func = Class->GetFunction("SynthSamplePlayer", "SeekToTime");

	Params::USynthSamplePlayer_SeekToTime_Params Parms;

	Parms.TimeSec = TimeSec;
	Parms.SeekType = SeekType;
	Parms.bWrap = bWrap;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthSamplePlayer.IsLoaded
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USynthSamplePlayer::IsLoaded()
{
	static auto Func = Class->GetFunction("SynthSamplePlayer", "IsLoaded");

	Params::USynthSamplePlayer_IsLoaded_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthSamplePlayer.GetSampleDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USynthSamplePlayer::GetSampleDuration()
{
	static auto Func = Class->GetFunction("SynthSamplePlayer", "GetSampleDuration");

	Params::USynthSamplePlayer_GetSampleDuration_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USynthSamplePlayer::GetCurrentPlaybackProgressTime()
{
	static auto Func = Class->GetFunction("SynthSamplePlayer", "GetCurrentPlaybackProgressTime");

	Params::USynthSamplePlayer_GetCurrentPlaybackProgressTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USynthSamplePlayer::GetCurrentPlaybackProgressPercent()
{
	static auto Func = Class->GetFunction("SynthSamplePlayer", "GetCurrentPlaybackProgressPercent");

	Params::USynthSamplePlayer_GetCurrentPlaybackProgressPercent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Synthesis.SynthKnob.SetValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthKnob::SetValue(float InValue)
{
	static auto Func = Class->GetFunction("SynthKnob", "SetValue");

	Params::USynthKnob_SetValue_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthKnob.SetStepSize
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthKnob::SetStepSize(float InValue)
{
	static auto Func = Class->GetFunction("SynthKnob", "SetStepSize");

	Params::USynthKnob_SetStepSize_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthKnob.SetLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USynthKnob::SetLocked(bool InValue)
{
	static auto Func = Class->GetFunction("SynthKnob", "SetLocked");

	Params::USynthKnob_SetLocked_Params Parms;

	Parms.InValue = InValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Synthesis.SynthKnob.GetValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float USynthKnob::GetValue()
{
	static auto Func = Class->GetFunction("SynthKnob", "GetValue");

	Params::USynthKnob_GetValue_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
