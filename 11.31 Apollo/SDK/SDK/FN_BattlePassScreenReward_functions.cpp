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


// Function BattlePassScreenReward.BattlePassScreenReward_C.HandleMultiRewardSelectionChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassScreenReward_C::HandleMultiRewardSelectionChange(bool bIsSelected, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "HandleMultiRewardSelectionChange");

	Params::UBattlePassScreenReward_C_HandleMultiRewardSelectionChange_Params Parms;

	Parms.bIsSelected = bIsSelected;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.HandleMultiRewardSetup
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   RewardItem                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   RewardTexture                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
// bool                               bHasAdditionalStylesToDisplay                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenReward_C::HandleMultiRewardSetup(class UFortItem* RewardItem, TSoftObjectPtr<class UTexture2D>& RewardTexture, bool bHasAdditionalStylesToDisplay, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1)
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "HandleMultiRewardSetup");

	Params::UBattlePassScreenReward_C_HandleMultiRewardSetup_Params Parms;

	Parms.RewardItem = RewardItem;
	Parms.RewardTexture = RewardTexture;
	Parms.bHasAdditionalStylesToDisplay = bHasAdditionalStylesToDisplay;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1 = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.HandleHover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenReward_C::HandleHover(class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "HandleHover");

	Params::UBattlePassScreenReward_C_HandleHover_Params Parms;

	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.HandleUnhover
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenReward_C::HandleUnhover(class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "HandleUnhover");

	Params::UBattlePassScreenReward_C_HandleUnhover_Params Parms;

	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.HandleMultiRewardTickFillAnimation
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize_1                               (NoDestructor)

void UBattlePassScreenReward_C::HandleMultiRewardTickFillAnimation(bool CallFunc_IsValid_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_1)
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "HandleMultiRewardTickFillAnimation");

	Params::UBattlePassScreenReward_C_HandleMultiRewardTickFillAnimation_Params Parms;

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateChildSize_1 = K2Node_MakeStruct_SlateChildSize_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.HandleSelectedAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenReward_C::HandleSelectedAnim(class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "HandleSelectedAnim");

	Params::UBattlePassScreenReward_C_HandleSelectedAnim_Params Parms;

	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.HandleDeselectedAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenReward_C::HandleDeselectedAnim(class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "HandleDeselectedAnim");

	Params::UBattlePassScreenReward_C_HandleDeselectedAnim_Params Parms;

	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue_1 = CallFunc_GetDynamicFontMaterial_ReturnValue_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.HandleCompletionState
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsFree                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bOwnsBattlePass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              TierLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CurrentSeasonLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenReward_C::HandleCompletionState(bool bIsFree, bool bOwnsBattlePass, int32 TierLevel, int32 CurrentSeasonLevel, class UMaterialInterface* Temp_object_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue_1, class UMaterialInterface* Temp_object_Variable_1, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility K2Node_Select_Default_1, bool Temp_bool_Variable_2, class UMaterialInterface* K2Node_Select_Default_2)
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "HandleCompletionState");

	Params::UBattlePassScreenReward_C_HandleCompletionState_Params Parms;

	Parms.bIsFree = bIsFree;
	Parms.bOwnsBattlePass = bOwnsBattlePass;
	Parms.TierLevel = TierLevel;
	Parms.CurrentSeasonLevel = CurrentSeasonLevel;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue_1 = CallFunc_EqualEqual_BoolBool_ReturnValue_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.HandleFreeTagVisibility
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsFreeItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenReward_C::HandleFreeTagVisibility(bool bIsFreeItem, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "HandleFreeTagVisibility");

	Params::UBattlePassScreenReward_C_HandleFreeTagVisibility_Params Parms;

	Parms.bIsFreeItem = bIsFreeItem;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.HandleSecondaryRewardVisiblity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattlePassScreenReward_C::HandleSecondaryRewardVisiblity()
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "HandleSecondaryRewardVisiblity");

	Params::UBattlePassScreenReward_C_HandleSecondaryRewardVisiblity_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.HandleProgressBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ProgressAmount                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsLastEntry                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenReward_C::HandleProgressBar(float ProgressAmount, bool bIsLastEntry, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "HandleProgressBar");

	Params::UBattlePassScreenReward_C_HandleProgressBar_Params Parms;

	Parms.ProgressAmount = ProgressAmount;
	Parms.bIsLastEntry = bIsLastEntry;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.HandleLevelNumberStyling
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsCompletedLevel                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              TierLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              ()
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenReward_C::HandleLevelNumberStyling(bool bIsCompletedLevel, int32 TierLevel, bool Temp_bool_Variable, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, const struct FLinearColor& K2Node_Select_Default_1, const struct FLinearColor& Temp_struct_Variable_4, const struct FLinearColor& Temp_struct_Variable_5, bool Temp_bool_Variable_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, const struct FLinearColor& K2Node_Select_Default_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "HandleLevelNumberStyling");

	Params::UBattlePassScreenReward_C_HandleLevelNumberStyling_Params Parms;

	Parms.bIsCompletedLevel = bIsCompletedLevel;
	Parms.TierLevel = TierLevel;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.SelectReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UAthenaSeasonItemRewardIcon_C*RewardIcon                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassScreenReward_C::SelectReward(class UAthenaSeasonItemRewardIcon_C* RewardIcon, bool bIsSelected)
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "SelectReward");

	Params::UBattlePassScreenReward_C_SelectReward_Params Parms;

	Parms.RewardIcon = RewardIcon;
	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.PopulateRewardData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              TierLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsFree                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               OwnsBattlePass                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CurrentSeasonLevel                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_BoolBool_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_2                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_3                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_4                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_5                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicFontMaterial_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenReward_C::PopulateRewardData(int32 TierLevel, bool IsFree, bool OwnsBattlePass, int32 CurrentSeasonLevel, bool Temp_bool_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, bool Temp_bool_Variable_2, const struct FLinearColor& K2Node_Select_Default_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FLinearColor& Temp_struct_Variable_4, enum class ESlateVisibility K2Node_Select_Default_2, const struct FLinearColor& Temp_struct_Variable_5, bool Temp_bool_Variable_3, const struct FLinearColor& K2Node_Select_Default_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicFontMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "PopulateRewardData");

	Params::UBattlePassScreenReward_C_PopulateRewardData_Params Parms;

	Parms.TierLevel = TierLevel;
	Parms.IsFree = IsFree;
	Parms.OwnsBattlePass = OwnsBattlePass;
	Parms.CurrentSeasonLevel = CurrentSeasonLevel;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_BoolBool_ReturnValue = CallFunc_EqualEqual_BoolBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.Temp_struct_Variable_5 = Temp_struct_Variable_5;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_GetDynamicFontMaterial_ReturnValue = CallFunc_GetDynamicFontMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.OnSetReward
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UFortItem*                   InReward                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TierLevel                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              TierProgress                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsLastEntry                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bHasAdditionalStylesToDisplay                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   RewardTexture                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
// bool                               bIsFreeItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bOwnsBattlePass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              SeasonLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsFirstEntry                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassScreenReward_C::OnSetReward(class UFortItem* InReward, int32 TierLevel, float TierProgress, bool bIsLastEntry, bool bHasAdditionalStylesToDisplay, TSoftObjectPtr<class UTexture2D>& RewardTexture, bool bIsFreeItem, bool bOwnsBattlePass, int32 SeasonLevel, bool bIsFirstEntry)
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "OnSetReward");

	Params::UBattlePassScreenReward_C_OnSetReward_Params Parms;

	Parms.InReward = InReward;
	Parms.TierLevel = TierLevel;
	Parms.TierProgress = TierProgress;
	Parms.bIsLastEntry = bIsLastEntry;
	Parms.bHasAdditionalStylesToDisplay = bHasAdditionalStylesToDisplay;
	Parms.RewardTexture = RewardTexture;
	Parms.bIsFreeItem = bIsFreeItem;
	Parms.bOwnsBattlePass = bOwnsBattlePass;
	Parms.SeasonLevel = SeasonLevel;
	Parms.bIsFirstEntry = bIsFirstEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.BP_OnSelected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreenReward_C::BP_OnSelected()
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "BP_OnSelected");

	Params::UBattlePassScreenReward_C_BP_OnSelected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.BP_OnDeselected
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreenReward_C::BP_OnDeselected()
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "BP_OnDeselected");

	Params::UBattlePassScreenReward_C_BP_OnDeselected_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassScreenReward_C::Construct()
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "Construct");

	Params::UBattlePassScreenReward_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.FadeOutSocialUser
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bCallback                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassScreenReward_C::FadeOutSocialUser(bool bCallback)
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "FadeOutSocialUser");

	Params::UBattlePassScreenReward_C_FadeOutSocialUser_Params Parms;

	Parms.bCallback = bCallback;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.FadeInSocialUser
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreenReward_C::FadeInSocialUser()
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "FadeInSocialUser");

	Params::UBattlePassScreenReward_C_FadeInSocialUser_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.SetSocialPlayerProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Progress                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenReward_C::SetSocialPlayerProgress(float Progress)
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "SetSocialPlayerProgress");

	Params::UBattlePassScreenReward_C_SetSocialPlayerProgress_Params Parms;

	Parms.Progress = Progress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.OnLoadSocialIcon
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  Texture                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenReward_C::OnLoadSocialIcon(bool bSuccess, class UTexture2D* Texture)
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "OnLoadSocialIcon");

	Params::UBattlePassScreenReward_C_OnLoadSocialIcon_Params Parms;

	Parms.bSuccess = bSuccess;
	Parms.Texture = Texture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.OnSetRotatingReward
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class UFortItem*                   InReward                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bHasAdditionalStylesToDisplay                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   RewardTexture                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, UObjectWrapper, HasGetValueTypeHash)
// bool                               bIsFreeItem                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               bOwnsBattlePass                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              SeasonLevel                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenReward_C::OnSetRotatingReward(class UFortItem* InReward, bool bHasAdditionalStylesToDisplay, TSoftObjectPtr<class UTexture2D>& RewardTexture, bool bIsFreeItem, bool bOwnsBattlePass, int32 SeasonLevel)
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "OnSetRotatingReward");

	Params::UBattlePassScreenReward_C_OnSetRotatingReward_Params Parms;

	Parms.InReward = InReward;
	Parms.bHasAdditionalStylesToDisplay = bHasAdditionalStylesToDisplay;
	Parms.RewardTexture = RewardTexture;
	Parms.bIsFreeItem = bIsFreeItem;
	Parms.bOwnsBattlePass = bOwnsBattlePass;
	Parms.SeasonLevel = SeasonLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.OnRotateReward
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenReward_C::OnRotateReward(int32 Index)
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "OnRotateReward");

	Params::UBattlePassScreenReward_C_OnRotateReward_Params Parms;

	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenReward_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "Tick");

	Params::UBattlePassScreenReward_C_Tick_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreenReward_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "BP_OnUnhovered");

	Params::UBattlePassScreenReward_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassScreenReward_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "BP_OnHovered");

	Params::UBattlePassScreenReward_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassScreenReward.BattlePassScreenReward_C.ExecuteUbergraph_BattlePassScreenReward
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_Event_InReward_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_TierLevel                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_TierProgress                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsLastEntry                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bHasAdditionalStylesToDisplay_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   K2Node_Event_RewardTexture_1                                     (ConstParm, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsFreeItem_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bOwnsBattlePass_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_SeasonLevel_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsFirstEntry                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bCallback                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Progress                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSuccess                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UTexture2D*                  K2Node_Event_Texture                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_Event_InReward                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bHasAdditionalStylesToDisplay                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftObjectPtr<class UTexture2D>   K2Node_Event_RewardTexture                                       (ConstParm, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsFreeItem                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bOwnsBattlePass                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_SeasonLevel                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_Index                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaSeasonItemRewardIcon_C*K2Node_Select_Default_1                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassScreenReward_C::ExecuteUbergraph_BattlePassScreenReward(int32 EntryPoint, class UFortItem* K2Node_Event_InReward_1, int32 K2Node_Event_TierLevel, float K2Node_Event_TierProgress, bool K2Node_Event_bIsLastEntry, bool K2Node_Event_bHasAdditionalStylesToDisplay_1, TSoftObjectPtr<class UTexture2D> K2Node_Event_RewardTexture_1, bool K2Node_Event_bIsFreeItem_1, bool K2Node_Event_bOwnsBattlePass_1, int32 K2Node_Event_SeasonLevel_1, bool K2Node_Event_bIsFirstEntry, bool K2Node_Event_bCallback, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float K2Node_Event_Progress, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_Lerp_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool K2Node_Event_bSuccess, class UTexture2D* K2Node_Event_Texture, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UFortItem* K2Node_Event_InReward, bool K2Node_Event_bHasAdditionalStylesToDisplay, TSoftObjectPtr<class UTexture2D> K2Node_Event_RewardTexture, bool K2Node_Event_bIsFreeItem, bool K2Node_Event_bOwnsBattlePass, int32 K2Node_Event_SeasonLevel, int32 K2Node_Event_Index, bool CallFunc_EqualEqual_IntInt_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, enum class ESlateVisibility K2Node_Select_Default, class UAthenaSeasonItemRewardIcon_C* K2Node_Select_Default_1, bool CallFunc_LessEqual_IntInt_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2)
{
	static auto Func = Class->GetFunction("BattlePassScreenReward_C", "ExecuteUbergraph_BattlePassScreenReward");

	Params::UBattlePassScreenReward_C_ExecuteUbergraph_BattlePassScreenReward_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InReward_1 = K2Node_Event_InReward_1;
	Parms.K2Node_Event_TierLevel = K2Node_Event_TierLevel;
	Parms.K2Node_Event_TierProgress = K2Node_Event_TierProgress;
	Parms.K2Node_Event_bIsLastEntry = K2Node_Event_bIsLastEntry;
	Parms.K2Node_Event_bHasAdditionalStylesToDisplay_1 = K2Node_Event_bHasAdditionalStylesToDisplay_1;
	Parms.K2Node_Event_RewardTexture_1 = K2Node_Event_RewardTexture_1;
	Parms.K2Node_Event_bIsFreeItem_1 = K2Node_Event_bIsFreeItem_1;
	Parms.K2Node_Event_bOwnsBattlePass_1 = K2Node_Event_bOwnsBattlePass_1;
	Parms.K2Node_Event_SeasonLevel_1 = K2Node_Event_SeasonLevel_1;
	Parms.K2Node_Event_bIsFirstEntry = K2Node_Event_bIsFirstEntry;
	Parms.K2Node_Event_bCallback = K2Node_Event_bCallback;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_Event_Progress = K2Node_Event_Progress;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_Event_bSuccess = K2Node_Event_bSuccess;
	Parms.K2Node_Event_Texture = K2Node_Event_Texture;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Event_InReward = K2Node_Event_InReward;
	Parms.K2Node_Event_bHasAdditionalStylesToDisplay = K2Node_Event_bHasAdditionalStylesToDisplay;
	Parms.K2Node_Event_RewardTexture = K2Node_Event_RewardTexture;
	Parms.K2Node_Event_bIsFreeItem = K2Node_Event_bIsFreeItem;
	Parms.K2Node_Event_bOwnsBattlePass = K2Node_Event_bOwnsBattlePass;
	Parms.K2Node_Event_SeasonLevel = K2Node_Event_SeasonLevel;
	Parms.K2Node_Event_Index = K2Node_Event_Index;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
