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


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.OnUnlockingInfoSet
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bShowProgression                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaLockedStyleNotification_C::OnUnlockingInfoSet(bool bShowProgression)
{
	static auto Func = Class->GetFunction("AthenaLockedStyleNotification_C", "OnUnlockingInfoSet");

	Params::UAthenaLockedStyleNotification_C_OnUnlockingInfoSet_Params Parms;

	Parms.bShowProgression = bShowProgression;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestUpdateAnim
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLockedStyleNotification_C::RequestUpdateAnim()
{
	static auto Func = Class->GetFunction("AthenaLockedStyleNotification_C", "RequestUpdateAnim");

	Params::UAthenaLockedStyleNotification_C_RequestUpdateAnim_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestIntroAnim
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLockedStyleNotification_C::RequestIntroAnim()
{
	static auto Func = Class->GetFunction("AthenaLockedStyleNotification_C", "RequestIntroAnim");

	Params::UAthenaLockedStyleNotification_C_RequestIntroAnim_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.RequestOutroAnim
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaLockedStyleNotification_C::RequestOutroAnim()
{
	static auto Func = Class->GetFunction("AthenaLockedStyleNotification_C", "RequestOutroAnim");

	Params::UAthenaLockedStyleNotification_C_RequestOutroAnim_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.OutroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaLockedStyleNotification_C::OutroFinished()
{
	static auto Func = Class->GetFunction("AthenaLockedStyleNotification_C", "OutroFinished");

	Params::UAthenaLockedStyleNotification_C_OutroFinished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaLockedStyleNotification.AthenaLockedStyleNotification_C.ExecuteUbergraph_AthenaLockedStyleNotification
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_bShowProgression                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaLockedStyleNotification_C::ExecuteUbergraph_AthenaLockedStyleNotification(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_bShowProgression, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static auto Func = Class->GetFunction("AthenaLockedStyleNotification_C", "ExecuteUbergraph_AthenaLockedStyleNotification");

	Params::UAthenaLockedStyleNotification_C_ExecuteUbergraph_AthenaLockedStyleNotification_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_bShowProgression = K2Node_Event_bShowProgression;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
