#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass VoiceChannelHeader.VoiceChannelHeader_C
// (None)

class UClass* UVoiceChannelHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoiceChannelHeader_C");

	return Clss;
}


// VoiceChannelHeader_C VoiceChannelHeader.Default__VoiceChannelHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVoiceChannelHeader_C* UVoiceChannelHeader_C::GetDefaultObj()
{
	static class UVoiceChannelHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoiceChannelHeader_C*>(UVoiceChannelHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VoiceChannelHeader.VoiceChannelHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVoiceChannelHeader_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceChannelHeader_C", "PreConstruct");

	Params::UVoiceChannelHeader_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelHeader.VoiceChannelHeader_C.ExecuteUbergraph_VoiceChannelHeader
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UVoiceChannelHeader_C::ExecuteUbergraph_VoiceChannelHeader(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceChannelHeader_C", "ExecuteUbergraph_VoiceChannelHeader");

	Params::UVoiceChannelHeader_C_ExecuteUbergraph_VoiceChannelHeader_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


