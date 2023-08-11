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


// Function BattlePassItemTracker.BattlePassItemTracker_C.HandleInitialState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassItemTracker_C::HandleInitialState(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassItemTracker_C", "HandleInitialState");

	Params::UBattlePassItemTracker_C_HandleInitialState_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassItemTracker.BattlePassItemTracker_C.HandleNumberVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassItemTracker_C::HandleNumberVisible(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassItemTracker_C", "HandleNumberVisible");

	Params::UBattlePassItemTracker_C_HandleNumberVisible_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassItemTracker.BattlePassItemTracker_C.HandleIncrease
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassItemTracker_C::HandleIncrease(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassItemTracker_C", "HandleIncrease");

	Params::UBattlePassItemTracker_C_HandleIncrease_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassItemTracker.BattlePassItemTracker_C.HandleIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassItemTracker_C::HandleIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassItemTracker_C", "HandleIntro");

	Params::UBattlePassItemTracker_C_HandleIntro_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassItemTracker.BattlePassItemTracker_C.OnInterpEnded
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UCommonNumericTextBlock*     NumericTextBlock                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HadCompleted                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassItemTracker_C::OnInterpEnded(class UCommonNumericTextBlock* NumericTextBlock, bool HadCompleted)
{
	static auto Func = Class->GetFunction("BattlePassItemTracker_C", "OnInterpEnded");

	Params::UBattlePassItemTracker_C_OnInterpEnded_Params Parms;

	Parms.NumericTextBlock = NumericTextBlock;
	Parms.HadCompleted = HadCompleted;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassItemTracker.BattlePassItemTracker_C.OnInterpStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassItemTracker_C::OnInterpStarted()
{
	static auto Func = Class->GetFunction("BattlePassItemTracker_C", "OnInterpStarted");

	Params::UBattlePassItemTracker_C_OnInterpStarted_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassItemTracker.BattlePassItemTracker_C.ExecuteUbergraph_BattlePassItemTracker
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonNumericTextBlock*     K2Node_Event_NumericTextBlock                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_HadCompleted                                        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassItemTracker_C::ExecuteUbergraph_BattlePassItemTracker(int32 EntryPoint, class UCommonNumericTextBlock* K2Node_Event_NumericTextBlock, bool K2Node_Event_HadCompleted)
{
	static auto Func = Class->GetFunction("BattlePassItemTracker_C", "ExecuteUbergraph_BattlePassItemTracker");

	Params::UBattlePassItemTracker_C_ExecuteUbergraph_BattlePassItemTracker_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NumericTextBlock = K2Node_Event_NumericTextBlock;
	Parms.K2Node_Event_HadCompleted = K2Node_Event_HadCompleted;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
