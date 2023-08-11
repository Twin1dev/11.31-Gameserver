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


// Function PlayerBattlePassXpAndReward.PlayerBattlePassXpAndReward_C.SetupReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     Container                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTextBlock*                  RewardText                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDailyQuestRewardInfo_C*     RewardInfoWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasReward                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortItemQuantityPair       RewardItem                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// int32                              LevelRewarded                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerBattlePassXpAndReward_C::SetupReward(class UWidget* Container, class UTextBlock* RewardText, class UDailyQuestRewardInfo_C* RewardInfoWidget, bool HasReward, const struct FFortItemQuantityPair& RewardItem, int32 LevelRewarded, enum class ESlateVisibility Temp_byte_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("PlayerBattlePassXpAndReward_C", "SetupReward");

	Params::UPlayerBattlePassXpAndReward_C_SetupReward_Params Parms;

	Parms.Container = Container;
	Parms.RewardText = RewardText;
	Parms.RewardInfoWidget = RewardInfoWidget;
	Parms.HasReward = HasReward;
	Parms.RewardItem = RewardItem;
	Parms.LevelRewarded = LevelRewarded;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBattlePassXpAndReward.PlayerBattlePassXpAndReward_C.Refresh
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo      FortPublicAccountInfo                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// class FText                        CallFunc_GetCurrentSeasonNumberAsText_ReturnValue                ()
// class FText                        CallFunc_GetCurrentChapterAsText_ReturnValue                     ()

void UPlayerBattlePassXpAndReward_C::Refresh(struct FFortPublicAccountInfo& FortPublicAccountInfo, class FText CallFunc_GetCurrentSeasonNumberAsText_ReturnValue, class FText CallFunc_GetCurrentChapterAsText_ReturnValue)
{
	static auto Func = Class->GetFunction("PlayerBattlePassXpAndReward_C", "Refresh");

	Params::UPlayerBattlePassXpAndReward_C_Refresh_Params Parms;

	Parms.FortPublicAccountInfo = FortPublicAccountInfo;
	Parms.CallFunc_GetCurrentSeasonNumberAsText_ReturnValue = CallFunc_GetCurrentSeasonNumberAsText_ReturnValue;
	Parms.CallFunc_GetCurrentChapterAsText_ReturnValue = CallFunc_GetCurrentChapterAsText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBattlePassXpAndReward.PlayerBattlePassXpAndReward_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerBattlePassXpAndReward_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("PlayerBattlePassXpAndReward_C", "PreConstruct");

	Params::UPlayerBattlePassXpAndReward_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBattlePassXpAndReward.PlayerBattlePassXpAndReward_C.OnAccountInfoChanged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FFortPublicAccountInfo      Result                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UPlayerBattlePassXpAndReward_C::OnAccountInfoChanged(struct FFortPublicAccountInfo& Result)
{
	static auto Func = Class->GetFunction("PlayerBattlePassXpAndReward_C", "OnAccountInfoChanged");

	Params::UPlayerBattlePassXpAndReward_C_OnAccountInfoChanged_Params Parms;

	Parms.Result = Result;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerBattlePassXpAndReward.PlayerBattlePassXpAndReward_C.ExecuteUbergraph_PlayerBattlePassXpAndReward
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortPublicAccountInfo      K2Node_Event_Result                                              (ConstParm, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerBattlePassXpAndReward_C::ExecuteUbergraph_PlayerBattlePassXpAndReward(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool K2Node_Event_IsDesignTime, const struct FFortPublicAccountInfo& K2Node_Event_Result, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static auto Func = Class->GetFunction("PlayerBattlePassXpAndReward_C", "ExecuteUbergraph_PlayerBattlePassXpAndReward");

	Params::UPlayerBattlePassXpAndReward_C_ExecuteUbergraph_PlayerBattlePassXpAndReward_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_Result = K2Node_Event_Result;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
