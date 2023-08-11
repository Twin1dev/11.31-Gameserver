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


// Function MissionRewardEntry.MissionRewardEntry_C.ShowCompletionCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionRewardEntry_C::ShowCompletionCheck()
{
	static auto Func = Class->GetFunction("MissionRewardEntry_C", "ShowCompletionCheck");

	Params::UMissionRewardEntry_C_ShowCompletionCheck_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionRewardEntry.MissionRewardEntry_C.HideCompletionCheck
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionRewardEntry_C::HideCompletionCheck()
{
	static auto Func = Class->GetFunction("MissionRewardEntry_C", "HideCompletionCheck");

	Params::UMissionRewardEntry_C_HideCompletionCheck_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionRewardEntry.MissionRewardEntry_C.HideSelectionBorder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMissionRewardEntry_C::HideSelectionBorder()
{
	static auto Func = Class->GetFunction("MissionRewardEntry_C", "HideSelectionBorder");

	Params::UMissionRewardEntry_C_HideSelectionBorder_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionRewardEntry.MissionRewardEntry_C.ShowSelectionBorder
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionRewardEntry_C::ShowSelectionBorder(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("MissionRewardEntry_C", "ShowSelectionBorder");

	Params::UMissionRewardEntry_C_ShowSelectionBorder_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionRewardEntry.MissionRewardEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMissionRewardEntry_C::Construct()
{
	static auto Func = Class->GetFunction("MissionRewardEntry_C", "Construct");

	Params::UMissionRewardEntry_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MissionRewardEntry.MissionRewardEntry_C.ExecuteUbergraph_MissionRewardEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMissionRewardEntry_C::ExecuteUbergraph_MissionRewardEntry(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("MissionRewardEntry_C", "ExecuteUbergraph_MissionRewardEntry");

	Params::UMissionRewardEntry_C_ExecuteUbergraph_MissionRewardEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
