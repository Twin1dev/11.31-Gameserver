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


// Function BattlePassScreen.BattlePassScreen_C.RevealRightSideActions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::RevealRightSideActions(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "RevealRightSideActions");

	Params::UBattlePassScreen_C_RevealRightSideActions_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.HideRightSideActions
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::HideRightSideActions(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "HideRightSideActions");

	Params::UBattlePassScreen_C_HideRightSideActions_Params Parms;

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.HandleShowVariantCycleLabel
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bShowCycleLabel                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::HandleShowVariantCycleLabel(bool bShowCycleLabel, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "HandleShowVariantCycleLabel");

	Params::UBattlePassScreen_C_HandleShowVariantCycleLabel_Params Parms;

	Parms.bShowCycleLabel = bShowCycleLabel;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.HandleOffscreenIndicatorAnimations
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              LeftFriendCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RightFriendCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::HandleOffscreenIndicatorAnimations(int32 LeftFriendCount, int32 RightFriendCount, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1)
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "HandleOffscreenIndicatorAnimations");

	Params::UBattlePassScreen_C_HandleOffscreenIndicatorAnimations_Params Parms;

	Parms.LeftFriendCount = LeftFriendCount;
	Parms.RightFriendCount = RightFriendCount;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue_1 = CallFunc_GetVisibility_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue_1 = CallFunc_PlayAnimationReverse_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.HandleRewardTimelineAnimation
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAnimateRewardTimeline                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EUMGSequencePlayMode    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EUMGSequencePlayMode    K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::HandleRewardTimelineAnimation(bool bAnimateRewardTimeline, float Temp_float_Variable, float Temp_float_Variable_1, bool Temp_bool_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable, enum class EUMGSequencePlayMode Temp_byte_Variable_1, enum class EUMGSequencePlayMode K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool Temp_bool_Variable_1, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, float K2Node_Select_Default_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "HandleRewardTimelineAnimation");

	Params::UBattlePassScreen_C_HandleRewardTimelineAnimation_Params Parms;

	Parms.bAnimateRewardTimeline = bAnimateRewardTimeline;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.HandleWatchVideoRequest
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               PlayFromDisc                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_UseElectraForWatchBattlePassMovie_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActivatableMovieWidget_Monolithic_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LoadStreamingVideo_NoAutoPlay                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortStreamMediaSource*      CallFunc_LoadStreamingVideo_MediaSource                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::HandleWatchVideoRequest(bool PlayFromDisc, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_UseElectraForWatchBattlePassMovie_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UActivatableMovieWidget_Monolithic_C* CallFunc_Create_ReturnValue, bool CallFunc_LoadStreamingVideo_NoAutoPlay, class UFortStreamMediaSource* CallFunc_LoadStreamingVideo_MediaSource)
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "HandleWatchVideoRequest");

	Params::UBattlePassScreen_C_HandleWatchVideoRequest_Params Parms;

	Parms.PlayFromDisc = PlayFromDisc;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_UseElectraForWatchBattlePassMovie_ReturnValue = CallFunc_UseElectraForWatchBattlePassMovie_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_LoadStreamingVideo_NoAutoPlay = CallFunc_LoadStreamingVideo_NoAutoPlay;
	Parms.CallFunc_LoadStreamingVideo_MediaSource = CallFunc_LoadStreamingVideo_MediaSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.HandleViewReward
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bInNoReward                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              InNumRewardsToPurchase                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USimpleFeatured_YellowButton_C*K2Node_DynamicCast_AsSimple_Featured_Yellow_Button               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UBattlePassScreen_C::HandleViewReward(bool bInNoReward, int32 InNumRewardsToPurchase, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class USimpleFeatured_YellowButton_C* K2Node_DynamicCast_AsSimple_Featured_Yellow_Button, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "HandleViewReward");

	Params::UBattlePassScreen_C_HandleViewReward_Params Parms;

	Parms.bInNoReward = bInNoReward;
	Parms.InNumRewardsToPurchase = InNumRewardsToPurchase;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_DynamicCast_AsSimple_Featured_Yellow_Button = K2Node_DynamicCast_AsSimple_Featured_Yellow_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.HandleOnViewReward
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortRarityItemData         Rarity                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               bNoReward                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              NumRewardsToPurchase                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::HandleOnViewReward(const struct FFortRarityItemData& Rarity, bool bNoReward, int32 NumRewardsToPurchase)
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "HandleOnViewReward");

	Params::UBattlePassScreen_C_HandleOnViewReward_Params Parms;

	Parms.Rarity = Rarity;
	Parms.bNoReward = bNoReward;
	Parms.NumRewardsToPurchase = NumRewardsToPurchase;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.OnSetupPurchaseSeasonLevel
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// TMap<int32, class UFortSeasonPassLevelInfo*>SeasonLevelInfos                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm)
// class UAthenaSeasonItemDefinition* CurrentSeasonData                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSeasonPassLevelInfo*    CurrentLevel                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MaxLevelToPurchase                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              LevelToBePurchased                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::OnSetupPurchaseSeasonLevel(TMap<int32, class UFortSeasonPassLevelInfo*>& SeasonLevelInfos, class UAthenaSeasonItemDefinition* CurrentSeasonData, class UFortSeasonPassLevelInfo* CurrentLevel, int32 MaxLevelToPurchase, int32 LevelToBePurchased)
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "OnSetupPurchaseSeasonLevel");

	Params::UBattlePassScreen_C_OnSetupPurchaseSeasonLevel_Params Parms;

	Parms.SeasonLevelInfos = SeasonLevelInfos;
	Parms.CurrentSeasonData = CurrentSeasonData;
	Parms.CurrentLevel = CurrentLevel;
	Parms.MaxLevelToPurchase = MaxLevelToPurchase;
	Parms.LevelToBePurchased = LevelToBePurchased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.HandleOnUpdatedVisibleFriendCount
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              LeftFriendCount                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RightFriendCount                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::HandleOnUpdatedVisibleFriendCount(int32 LeftFriendCount, int32 RightFriendCount)
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "HandleOnUpdatedVisibleFriendCount");

	Params::UBattlePassScreen_C_HandleOnUpdatedVisibleFriendCount_Params Parms;

	Parms.LeftFriendCount = LeftFriendCount;
	Parms.RightFriendCount = RightFriendCount;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.OnHandleReplayCinematic
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreen_C::OnHandleReplayCinematic()
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "OnHandleReplayCinematic");

	Params::UBattlePassScreen_C_OnHandleReplayCinematic_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.OnHandleAboutBattlePass
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreen_C::OnHandleAboutBattlePass()
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "OnHandleAboutBattlePass");

	Params::UBattlePassScreen_C_OnHandleAboutBattlePass_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.OnHandleWatchVideo
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreen_C::OnHandleWatchVideo()
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "OnHandleWatchVideo");

	Params::UBattlePassScreen_C_OnHandleWatchVideo_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreen_C::BP_OnActivated()
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "BP_OnActivated");

	Params::UBattlePassScreen_C_BP_OnActivated_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.OnHandleViewAllRewards
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreen_C::OnHandleViewAllRewards()
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "OnHandleViewAllRewards");

	Params::UBattlePassScreen_C_OnHandleViewAllRewards_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.OnRequestViewReward
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreen_C::OnRequestViewReward()
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "OnRequestViewReward");

	Params::UBattlePassScreen_C_OnRequestViewReward_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.OnRequestViewRewardComplete
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreen_C::OnRequestViewRewardComplete()
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "OnRequestViewRewardComplete");

	Params::UBattlePassScreen_C_OnRequestViewRewardComplete_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.OnVariantUpdate
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              CurrentIndex                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TotalNumVariants                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::OnVariantUpdate(int32 CurrentIndex, int32 TotalNumVariants)
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "OnVariantUpdate");

	Params::UBattlePassScreen_C_OnVariantUpdate_Params Parms;

	Parms.CurrentIndex = CurrentIndex;
	Parms.TotalNumVariants = TotalNumVariants;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.OnBattlePassViewChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EBattlePassView         NewView                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::OnBattlePassViewChanged(enum class EBattlePassView NewView)
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "OnBattlePassViewChanged");

	Params::UBattlePassScreen_C_OnBattlePassViewChanged_Params Parms;

	Parms.NewView = NewView;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.OnSetGiftButtonLabel
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        MainLabel                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class FText                        PriceText                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UBattlePassScreen_C::OnSetGiftButtonLabel(class FText& MainLabel, class FText& PriceText)
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "OnSetGiftButtonLabel");

	Params::UBattlePassScreen_C_OnSetGiftButtonLabel_Params Parms;

	Parms.MainLabel = MainLabel;
	Parms.PriceText = PriceText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.OnSetPurchasedAnnualPass
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsPurchased                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassScreen_C::OnSetPurchasedAnnualPass(bool bIsPurchased)
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "OnSetPurchasedAnnualPass");

	Params::UBattlePassScreen_C_OnSetPurchasedAnnualPass_Params Parms;

	Parms.bIsPurchased = bIsPurchased;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreen.BattlePassScreen_C.ExecuteUbergraph_BattlePassScreen
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_True_if_break_was_hit_Variable_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortRarityItemData         K2Node_Event_Rarity                                              ()
// bool                               K2Node_Event_bNoReward                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_NumRewardsToPurchase                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TMap<int32, class UFortSeasonPassLevelInfo*>K2Node_Event_SeasonLevelInfos                                    (ConstParm, ZeroConstructor)
// class UAthenaSeasonItemDefinition* K2Node_Event_CurrentSeasonData                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSeasonPassLevelInfo*    K2Node_Event_CurrentLevel                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_MaxLevelToPurchase                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_LevelToBePurchased                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_LeftFriendCount                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_RightFriendCount                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSeasonLevelConfirmationScreen_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSeasonAboutWidget_C*  CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBattlePassViewRewardsScreen_C*CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_CurrentIndex                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_TotalNumVariants                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EBattlePassView         K2Node_Event_NewView                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USimpleFeatured_YellowButton_C*K2Node_DynamicCast_AsSimple_Featured_Yellow_Button               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_MainLabel                                           (ConstParm)
// class FText                        K2Node_Event_PriceText                                           (ConstParm)
// TArray<class AVaultWorld_C*>       CallFunc_GetAllActorsOfClass_OutActors                           (ZeroConstructor, ReferenceParm)
// TArray<class AFrontendCamera_VaultRotator_C*>CallFunc_GetAllActorsOfClass_OutActors_1                         (ZeroConstructor, ReferenceParm)
// class AVaultWorld_C*               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFrontendCamera_VaultRotator_C*CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AVaultRotator_C*             CallFunc_GetVaultRotator_VaultRotator                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ActorHasTag_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ActorHasTag_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsPurchased                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreen_C::ExecuteUbergraph_BattlePassScreen(int32 EntryPoint, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, int32 Temp_int_Array_Index_Variable, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable_1, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_Not_PreBool_ReturnValue_1, const struct FFortRarityItemData& K2Node_Event_Rarity, bool K2Node_Event_bNoReward, int32 K2Node_Event_NumRewardsToPurchase, TMap<int32, class UFortSeasonPassLevelInfo*> K2Node_Event_SeasonLevelInfos, class UAthenaSeasonItemDefinition* K2Node_Event_CurrentSeasonData, class UFortSeasonPassLevelInfo* K2Node_Event_CurrentLevel, int32 K2Node_Event_MaxLevelToPurchase, int32 K2Node_Event_LevelToBePurchased, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 K2Node_Event_LeftFriendCount, int32 K2Node_Event_RightFriendCount, class UAthenaSeasonLevelConfirmationScreen_C* CallFunc_Create_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UAthenaSeasonAboutWidget_C* CallFunc_Create_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class UBattlePassViewRewardsScreen_C* CallFunc_Create_ReturnValue_2, int32 K2Node_Event_CurrentIndex, int32 K2Node_Event_TotalNumVariants, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable_1, enum class EBattlePassView K2Node_Event_NewView, bool K2Node_SwitchEnum_CmpSuccess, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, class USimpleFeatured_YellowButton_C* K2Node_DynamicCast_AsSimple_Featured_Yellow_Button, bool K2Node_DynamicCast_bSuccess, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_Event_MainLabel, class FText K2Node_Event_PriceText, TArray<class AVaultWorld_C*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<class AFrontendCamera_VaultRotator_C*>& CallFunc_GetAllActorsOfClass_OutActors_1, class AVaultWorld_C* CallFunc_Array_Get_Item, class AFrontendCamera_VaultRotator_C* CallFunc_Array_Get_Item_1, class AVaultRotator_C* CallFunc_GetVaultRotator_VaultRotator, bool CallFunc_ActorHasTag_ReturnValue, bool CallFunc_ActorHasTag_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool K2Node_Event_bIsPurchased, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static auto Func = Class->GetFunction("BattlePassScreen_C", "ExecuteUbergraph_BattlePassScreen");

	Params::UBattlePassScreen_C_ExecuteUbergraph_BattlePassScreen_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable_1 = Temp_bool_True_if_break_was_hit_Variable_1;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.K2Node_Event_Rarity = K2Node_Event_Rarity;
	Parms.K2Node_Event_bNoReward = K2Node_Event_bNoReward;
	Parms.K2Node_Event_NumRewardsToPurchase = K2Node_Event_NumRewardsToPurchase;
	Parms.K2Node_Event_SeasonLevelInfos = K2Node_Event_SeasonLevelInfos;
	Parms.K2Node_Event_CurrentSeasonData = K2Node_Event_CurrentSeasonData;
	Parms.K2Node_Event_CurrentLevel = K2Node_Event_CurrentLevel;
	Parms.K2Node_Event_MaxLevelToPurchase = K2Node_Event_MaxLevelToPurchase;
	Parms.K2Node_Event_LevelToBePurchased = K2Node_Event_LevelToBePurchased;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_Event_LeftFriendCount = K2Node_Event_LeftFriendCount;
	Parms.K2Node_Event_RightFriendCount = K2Node_Event_RightFriendCount;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_1 = CallFunc_GetOwningPlayer_ReturnValue_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue_2 = CallFunc_GetOwningPlayer_ReturnValue_2;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.K2Node_Event_CurrentIndex = K2Node_Event_CurrentIndex;
	Parms.K2Node_Event_TotalNumVariants = K2Node_Event_TotalNumVariants;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Event_NewView = K2Node_Event_NewView;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.K2Node_DynamicCast_AsSimple_Featured_Yellow_Button = K2Node_DynamicCast_AsSimple_Featured_Yellow_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_MainLabel = K2Node_Event_MainLabel;
	Parms.K2Node_Event_PriceText = K2Node_Event_PriceText;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_GetAllActorsOfClass_OutActors_1 = CallFunc_GetAllActorsOfClass_OutActors_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_GetVaultRotator_VaultRotator = CallFunc_GetVaultRotator_VaultRotator;
	Parms.CallFunc_ActorHasTag_ReturnValue = CallFunc_ActorHasTag_ReturnValue;
	Parms.CallFunc_ActorHasTag_ReturnValue_1 = CallFunc_ActorHasTag_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.K2Node_Event_bIsPurchased = K2Node_Event_bIsPurchased;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
