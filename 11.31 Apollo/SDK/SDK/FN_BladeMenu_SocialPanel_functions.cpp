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


// Function BladeMenu_SocialPanel.BladeMenu_SocialPanel_C.OnOpened
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBladeMenu_SocialPanel_C::OnOpened()
{
	static auto Func = Class->GetFunction("BladeMenu_SocialPanel_C", "OnOpened");

	Params::UBladeMenu_SocialPanel_C_OnOpened_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BladeMenu_SocialPanel.BladeMenu_SocialPanel_C.OnClosed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBladeMenu_SocialPanel_C::OnClosed()
{
	static auto Func = Class->GetFunction("BladeMenu_SocialPanel_C", "OnClosed");

	Params::UBladeMenu_SocialPanel_C_OnClosed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BladeMenu_SocialPanel.BladeMenu_SocialPanel_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBladeMenu_SocialPanel_C::OnInitialized()
{
	static auto Func = Class->GetFunction("BladeMenu_SocialPanel_C", "OnInitialized");

	Params::UBladeMenu_SocialPanel_C_OnInitialized_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BladeMenu_SocialPanel.BladeMenu_SocialPanel_C.OnCloseAnimationFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBladeMenu_SocialPanel_C::OnCloseAnimationFinished()
{
	static auto Func = Class->GetFunction("BladeMenu_SocialPanel_C", "OnCloseAnimationFinished");

	Params::UBladeMenu_SocialPanel_C_OnCloseAnimationFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BladeMenu_SocialPanel.BladeMenu_SocialPanel_C.ExecuteUbergraph_BladeMenu_SocialPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_PauseAnimation_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBladeMenu_SocialPanel_C::ExecuteUbergraph_BladeMenu_SocialPanel(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_GetEndTime_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, float CallFunc_PauseAnimation_ReturnValue_1, bool CallFunc_IsAnimationPlaying_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3)
{
	static auto Func = Class->GetFunction("BladeMenu_SocialPanel_C", "ExecuteUbergraph_BladeMenu_SocialPanel");

	Params::UBladeMenu_SocialPanel_C_ExecuteUbergraph_BladeMenu_SocialPanel_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PauseAnimation_ReturnValue = CallFunc_PauseAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetEndTime_ReturnValue_1 = CallFunc_GetEndTime_ReturnValue_1;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PauseAnimation_ReturnValue_1 = CallFunc_PauseAnimation_ReturnValue_1;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue_1 = CallFunc_IsAnimationPlaying_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
