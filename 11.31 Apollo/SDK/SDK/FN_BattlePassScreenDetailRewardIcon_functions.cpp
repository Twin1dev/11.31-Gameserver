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


// Function BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C.BPSetup
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   InReward                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenDetailRewardIcon_C::BPSetup(class UFortItem* InReward)
{
	static auto Func = Class->GetFunction("BattlePassScreenDetailRewardIcon_C", "BPSetup");

	Params::UBattlePassScreenDetailRewardIcon_C_BPSetup_Params Parms;

	Parms.InReward = InReward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreenDetailRewardIcon_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("BattlePassScreenDetailRewardIcon_C", "BP_OnHovered");

	Params::UBattlePassScreenDetailRewardIcon_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreenDetailRewardIcon_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("BattlePassScreenDetailRewardIcon_C", "BP_OnUnhovered");

	Params::UBattlePassScreenDetailRewardIcon_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C.OnSetupVariant
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreenDetailRewardIcon_C::OnSetupVariant()
{
	static auto Func = Class->GetFunction("BattlePassScreenDetailRewardIcon_C", "OnSetupVariant");

	Params::UBattlePassScreenDetailRewardIcon_C_OnSetupVariant_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C.ExecuteUbergraph_BattlePassScreenDetailRewardIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_Event_InReward                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenDetailRewardIcon_C::ExecuteUbergraph_BattlePassScreenDetailRewardIcon(int32 EntryPoint, class UFortItem* K2Node_Event_InReward)
{
	static auto Func = Class->GetFunction("BattlePassScreenDetailRewardIcon_C", "ExecuteUbergraph_BattlePassScreenDetailRewardIcon");

	Params::UBattlePassScreenDetailRewardIcon_C_ExecuteUbergraph_BattlePassScreenDetailRewardIcon_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InReward = K2Node_Event_InReward;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
