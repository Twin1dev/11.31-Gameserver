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


// Function BattlePassOverviewVideo.BattlePassOverviewVideo_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassOverviewVideo_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("BattlePassOverviewVideo_C", "BP_OnActivated");

	Params::UBattlePassOverviewVideo_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassOverviewVideo.BattlePassOverviewVideo_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassOverviewVideo_C::BP_OnDeactivated()
{
	static auto Func = Class->GetFunction("BattlePassOverviewVideo_C", "BP_OnDeactivated");

	Params::UBattlePassOverviewVideo_C_BP_OnDeactivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassOverviewVideo.BattlePassOverviewVideo_C.MediaOpened
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassOverviewVideo_C::MediaOpened()
{
	static auto Func = Class->GetFunction("BattlePassOverviewVideo_C", "MediaOpened");

	Params::UBattlePassOverviewVideo_C_MediaOpened_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassOverviewVideo.BattlePassOverviewVideo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassOverviewVideo_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("BattlePassOverviewVideo_C", "PreConstruct");

	Params::UBattlePassOverviewVideo_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassOverviewVideo.BattlePassOverviewVideo_C.ExecuteUbergraph_BattlePassOverviewVideo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassOverviewVideo_C::ExecuteUbergraph_BattlePassOverviewVideo(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassOverviewVideo_C", "ExecuteUbergraph_BattlePassOverviewVideo");

	Params::UBattlePassOverviewVideo_C_ExecuteUbergraph_BattlePassOverviewVideo_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
