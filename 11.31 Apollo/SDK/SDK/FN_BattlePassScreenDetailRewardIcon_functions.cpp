#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C
// (None)

class UClass* UBattlePassScreenDetailRewardIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BattlePassScreenDetailRewardIcon_C");

	return Clss;
}


// BattlePassScreenDetailRewardIcon_C BattlePassScreenDetailRewardIcon.Default__BattlePassScreenDetailRewardIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBattlePassScreenDetailRewardIcon_C* UBattlePassScreenDetailRewardIcon_C::GetDefaultObj()
{
	static class UBattlePassScreenDetailRewardIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBattlePassScreenDetailRewardIcon_C*>(UBattlePassScreenDetailRewardIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C.BPSetup
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   InReward                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenDetailRewardIcon_C::BPSetup(class UFortItem* InReward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenDetailRewardIcon_C", "BPSetup");

	Params::UBattlePassScreenDetailRewardIcon_C_BPSetup_Params Parms{};

	Parms.InReward = InReward;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreenDetailRewardIcon_C::BP_OnHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenDetailRewardIcon_C", "BP_OnHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreenDetailRewardIcon_C::BP_OnUnhovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenDetailRewardIcon_C", "BP_OnUnhovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C.OnSetupVariant
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreenDetailRewardIcon_C::OnSetupVariant()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenDetailRewardIcon_C", "OnSetupVariant");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BattlePassScreenDetailRewardIcon.BattlePassScreenDetailRewardIcon_C.ExecuteUbergraph_BattlePassScreenDetailRewardIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_Event_InReward                                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenDetailRewardIcon_C::ExecuteUbergraph_BattlePassScreenDetailRewardIcon(int32 EntryPoint, class UFortItem* K2Node_Event_InReward)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BattlePassScreenDetailRewardIcon_C", "ExecuteUbergraph_BattlePassScreenDetailRewardIcon");

	Params::UBattlePassScreenDetailRewardIcon_C_ExecuteUbergraph_BattlePassScreenDetailRewardIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InReward = K2Node_Event_InReward;

	UObject::ProcessEvent(Func, &Parms);

}

}


