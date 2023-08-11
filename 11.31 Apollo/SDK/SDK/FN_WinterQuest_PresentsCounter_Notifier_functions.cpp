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


// Function WinterQuest_PresentsCounter_Notifier.WinterQuest_PresentsCounter_Notifier_C.ShowPresentNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuest_PresentsCounter_Notifier_C::ShowPresentNotification(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static auto Func = Class->GetFunction("WinterQuest_PresentsCounter_Notifier_C", "ShowPresentNotification");

	Params::UWinterQuest_PresentsCounter_Notifier_C_ShowPresentNotification_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuest_PresentsCounter_Notifier.WinterQuest_PresentsCounter_Notifier_C.OnShowCountdown
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bShowCountDown                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWinterQuest_PresentsCounter_Notifier_C::OnShowCountdown(bool bShowCountDown)
{
	static auto Func = Class->GetFunction("WinterQuest_PresentsCounter_Notifier_C", "OnShowCountdown");

	Params::UWinterQuest_PresentsCounter_Notifier_C_OnShowCountdown_Params Parms;

	Parms.bShowCountDown = bShowCountDown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuest_PresentsCounter_Notifier.WinterQuest_PresentsCounter_Notifier_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWinterQuest_PresentsCounter_Notifier_C::Construct()
{
	static auto Func = Class->GetFunction("WinterQuest_PresentsCounter_Notifier_C", "Construct");

	Params::UWinterQuest_PresentsCounter_Notifier_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuest_PresentsCounter_Notifier.WinterQuest_PresentsCounter_Notifier_C.ExecuteUbergraph_WinterQuest_PresentsCounter_Notifier
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowCountdown                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWinterQuest_PresentsCounter_Notifier_C::ExecuteUbergraph_WinterQuest_PresentsCounter_Notifier(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_bShowCountdown)
{
	static auto Func = Class->GetFunction("WinterQuest_PresentsCounter_Notifier_C", "ExecuteUbergraph_WinterQuest_PresentsCounter_Notifier");

	Params::UWinterQuest_PresentsCounter_Notifier_C_ExecuteUbergraph_WinterQuest_PresentsCounter_Notifier_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_bShowCountdown = K2Node_Event_bShowCountdown;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
