#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaStormSurgePhase.AthenaStormSurgePhase_C
// (None)

class UClass* UAthenaStormSurgePhase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaStormSurgePhase_C");

	return Clss;
}


// AthenaStormSurgePhase_C AthenaStormSurgePhase.Default__AthenaStormSurgePhase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaStormSurgePhase_C* UAthenaStormSurgePhase_C::GetDefaultObj()
{
	static class UAthenaStormSurgePhase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaStormSurgePhase_C*>(UAthenaStormSurgePhase_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaStormSurgePhase.AthenaStormSurgePhase_C.Anim_Load
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaStormSurgePhase_C::Anim_Load(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStormSurgePhase_C", "Anim_Load");

	Params::UAthenaStormSurgePhase_C_Anim_Load_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStormSurgePhase.AthenaStormSurgePhase_C.OnStartDisplaying
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        TitleText                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        SubTitleText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bDisplaySubtitle                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bPlayDamageActiveSound                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaStormSurgePhase_C::OnStartDisplaying(class FText& TitleText, class FText& SubTitleText, bool bDisplaySubtitle, bool bPlayDamageActiveSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStormSurgePhase_C", "OnStartDisplaying");

	Params::UAthenaStormSurgePhase_C_OnStartDisplaying_Params Parms{};

	Parms.TitleText = TitleText;
	Parms.SubTitleText = SubTitleText;
	Parms.bDisplaySubtitle = bDisplaySubtitle;
	Parms.bPlayDamageActiveSound = bPlayDamageActiveSound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStormSurgePhase.AthenaStormSurgePhase_C.OnStopDisplaying
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaStormSurgePhase_C::OnStopDisplaying()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStormSurgePhase_C", "OnStopDisplaying");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaStormSurgePhase.AthenaStormSurgePhase_C.StopDisplayAfterTime
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaStormSurgePhase_C::StopDisplayAfterTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStormSurgePhase_C", "StopDisplayAfterTime");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaStormSurgePhase.AthenaStormSurgePhase_C.ExecuteUbergraph_AthenaStormSurgePhase
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_TitleText                                           (ConstParm)
// class FText                        K2Node_Event_SubTitleText                                        (ConstParm)
// bool                               K2Node_Event_bDisplaySubtitle                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bPlayDamageActiveSound                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaStormSurgePhase_C::ExecuteUbergraph_AthenaStormSurgePhase(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FText K2Node_Event_TitleText, class FText K2Node_Event_SubTitleText, bool K2Node_Event_bDisplaySubtitle, bool K2Node_Event_bPlayDamageActiveSound)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStormSurgePhase_C", "ExecuteUbergraph_AthenaStormSurgePhase");

	Params::UAthenaStormSurgePhase_C_ExecuteUbergraph_AthenaStormSurgePhase_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_TitleText = K2Node_Event_TitleText;
	Parms.K2Node_Event_SubTitleText = K2Node_Event_SubTitleText;
	Parms.K2Node_Event_bDisplaySubtitle = K2Node_Event_bDisplaySubtitle;
	Parms.K2Node_Event_bPlayDamageActiveSound = K2Node_Event_bPlayDamageActiveSound;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaStormSurgePhase.AthenaStormSurgePhase_C.StopStormSurgeDisplay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaStormSurgePhase_C::StopStormSurgeDisplay__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStormSurgePhase_C", "StopStormSurgeDisplay__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaStormSurgePhase.AthenaStormSurgePhase_C.StartStormSurgeDisplay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaStormSurgePhase_C::StartStormSurgeDisplay__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaStormSurgePhase_C", "StartStormSurgeDisplay__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


