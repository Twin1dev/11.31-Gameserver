#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C
// (None)

class UClass* UFortVoiceChannelSpeaker_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortVoiceChannelSpeaker_C");

	return Clss;
}


// FortVoiceChannelSpeaker_C FortVoiceChannelSpeaker.Default__FortVoiceChannelSpeaker_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortVoiceChannelSpeaker_C* UFortVoiceChannelSpeaker_C::GetDefaultObj()
{
	static class UFortVoiceChannelSpeaker_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortVoiceChannelSpeaker_C*>(UFortVoiceChannelSpeaker_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.OnStyleAssigned
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EChannelSpeakerStyle    NewStyle                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortVoiceChannelSpeaker_C::OnStyleAssigned(enum class EChannelSpeakerStyle NewStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVoiceChannelSpeaker_C", "OnStyleAssigned");

	Params::UFortVoiceChannelSpeaker_C_OnStyleAssigned_Params Parms{};

	Parms.NewStyle = NewStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortVoiceChannelSpeaker_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVoiceChannelSpeaker_C", "PreConstruct");

	Params::UFortVoiceChannelSpeaker_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.OnAnimateTalkingChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsNowTalking                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UFortVoiceChannelSpeaker_C::OnAnimateTalkingChanged(bool bIsNowTalking)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVoiceChannelSpeaker_C", "OnAnimateTalkingChanged");

	Params::UFortVoiceChannelSpeaker_C_OnAnimateTalkingChanged_Params Parms{};

	Parms.bIsNowTalking = bIsNowTalking;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortVoiceChannelSpeaker.FortVoiceChannelSpeaker_C.ExecuteUbergraph_FortVoiceChannelSpeaker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EChannelSpeakerStyle    K2Node_Event_NewStyle                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsNowTalking                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortVoiceChannelSpeaker_C::ExecuteUbergraph_FortVoiceChannelSpeaker(int32 EntryPoint, enum class EChannelSpeakerStyle K2Node_Event_NewStyle, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_Event_IsDesignTime, bool K2Node_Event_bIsNowTalking, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortVoiceChannelSpeaker_C", "ExecuteUbergraph_FortVoiceChannelSpeaker");

	Params::UFortVoiceChannelSpeaker_C_ExecuteUbergraph_FortVoiceChannelSpeaker_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewStyle = K2Node_Event_NewStyle;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_bIsNowTalking = K2Node_Event_bIsNowTalking;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


