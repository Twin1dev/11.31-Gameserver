#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass VoiceChannelHeaderButton.VoiceChannelHeaderButton_C
// (None)

class UClass* UVoiceChannelHeaderButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VoiceChannelHeaderButton_C");

	return Clss;
}


// VoiceChannelHeaderButton_C VoiceChannelHeaderButton.Default__VoiceChannelHeaderButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVoiceChannelHeaderButton_C* UVoiceChannelHeaderButton_C::GetDefaultObj()
{
	static class UVoiceChannelHeaderButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UVoiceChannelHeaderButton_C*>(UVoiceChannelHeaderButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.OnUpdateVisuals
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsActive                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bRepresentingPlatformChat                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bChannelAvailable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVoiceChannelHeaderButton_C::OnUpdateVisuals(bool bIsActive, bool bRepresentingPlatformChat, bool bChannelAvailable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceChannelHeaderButton_C", "OnUpdateVisuals");

	Params::UVoiceChannelHeaderButton_C_OnUpdateVisuals_Params Parms{};

	Parms.bIsActive = bIsActive;
	Parms.bRepresentingPlatformChat = bRepresentingPlatformChat;
	Parms.bChannelAvailable = bChannelAvailable;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVoiceChannelHeaderButton_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceChannelHeaderButton_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVoiceChannelHeaderButton_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceChannelHeaderButton_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnDisabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVoiceChannelHeaderButton_C::BP_OnDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceChannelHeaderButton_C", "BP_OnDisabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.BP_OnEnabled
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVoiceChannelHeaderButton_C::BP_OnEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceChannelHeaderButton_C", "BP_OnEnabled");



	UObject::ProcessEvent(Func, nullptr);

}


// Function VoiceChannelHeaderButton.VoiceChannelHeaderButton_C.ExecuteUbergraph_VoiceChannelHeaderButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsActive                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bRepresentingPlatformChat                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bChannelAvailable                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanJoinChannel_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanJoinChannel_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActiveChannel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsActiveChannel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UVoiceChannelHeaderButton_C::ExecuteUbergraph_VoiceChannelHeaderButton(int32 EntryPoint, bool K2Node_Event_bIsActive, bool K2Node_Event_bRepresentingPlatformChat, bool K2Node_Event_bChannelAvailable, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_CanJoinChannel_ReturnValue, bool CallFunc_CanJoinChannel_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, bool CallFunc_IsActiveChannel_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsActiveChannel_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VoiceChannelHeaderButton_C", "ExecuteUbergraph_VoiceChannelHeaderButton");

	Params::UVoiceChannelHeaderButton_C_ExecuteUbergraph_VoiceChannelHeaderButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bIsActive = K2Node_Event_bIsActive;
	Parms.K2Node_Event_bRepresentingPlatformChat = K2Node_Event_bRepresentingPlatformChat;
	Parms.K2Node_Event_bChannelAvailable = K2Node_Event_bChannelAvailable;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_CanJoinChannel_ReturnValue = CallFunc_CanJoinChannel_ReturnValue;
	Parms.CallFunc_CanJoinChannel_ReturnValue_1 = CallFunc_CanJoinChannel_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.CallFunc_IsActiveChannel_ReturnValue = CallFunc_IsActiveChannel_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_IsActiveChannel_ReturnValue_1 = CallFunc_IsActiveChannel_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


