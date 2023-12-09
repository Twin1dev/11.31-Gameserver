#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WinterQuest_PresentsCounter_Notifier.WinterQuest_PresentsCounter_Notifier_C
// (None)

class UClass* UWinterQuest_PresentsCounter_Notifier_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WinterQuest_PresentsCounter_Notifier_C");

	return Clss;
}


// WinterQuest_PresentsCounter_Notifier_C WinterQuest_PresentsCounter_Notifier.Default__WinterQuest_PresentsCounter_Notifier_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinterQuest_PresentsCounter_Notifier_C* UWinterQuest_PresentsCounter_Notifier_C::GetDefaultObj()
{
	static class UWinterQuest_PresentsCounter_Notifier_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinterQuest_PresentsCounter_Notifier_C*>(UWinterQuest_PresentsCounter_Notifier_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WinterQuest_PresentsCounter_Notifier.WinterQuest_PresentsCounter_Notifier_C.ShowPresentNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuest_PresentsCounter_Notifier_C::ShowPresentNotification(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuest_PresentsCounter_Notifier_C", "ShowPresentNotification");

	Params::UWinterQuest_PresentsCounter_Notifier_C_ShowPresentNotification_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuest_PresentsCounter_Notifier_C", "OnShowCountdown");

	Params::UWinterQuest_PresentsCounter_Notifier_C_OnShowCountdown_Params Parms{};

	Parms.bShowCountDown = bShowCountDown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WinterQuest_PresentsCounter_Notifier.WinterQuest_PresentsCounter_Notifier_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWinterQuest_PresentsCounter_Notifier_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuest_PresentsCounter_Notifier_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WinterQuest_PresentsCounter_Notifier.WinterQuest_PresentsCounter_Notifier_C.ExecuteUbergraph_WinterQuest_PresentsCounter_Notifier
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bShowCountdown                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWinterQuest_PresentsCounter_Notifier_C::ExecuteUbergraph_WinterQuest_PresentsCounter_Notifier(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool K2Node_Event_bShowCountdown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuest_PresentsCounter_Notifier_C", "ExecuteUbergraph_WinterQuest_PresentsCounter_Notifier");

	Params::UWinterQuest_PresentsCounter_Notifier_C_ExecuteUbergraph_WinterQuest_PresentsCounter_Notifier_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_bShowCountdown = K2Node_Event_bShowCountdown;

	UObject::ProcessEvent(Func, &Parms);

}

}


