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


// Function BattlePassPreview.BattlePassPreview_C.CallRenderSwapOnBlade
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Object                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassPreview_C::CallRenderSwapOnBlade(class UObject* Object, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "CallRenderSwapOnBlade");

	Params::UBattlePassPreview_C_CallRenderSwapOnBlade_Params Parms;

	Parms.Object = Object;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.SetRotatingPreviewData
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortItem*                   ItemToDisplay                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReadyToUnlock                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              LevelUnlocked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class FText                        CallFunc_GetDisplayName_ReturnValue                              ()
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetSmallPreviewImage_ReturnValue                        (HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Select_Default                                            ()

void UBattlePassPreview_C::SetRotatingPreviewData(class UFortItem* ItemToDisplay, bool ReadyToUnlock, int32 LevelUnlocked, class FText Temp_text_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, class FText CallFunc_Format_ReturnValue, class FText CallFunc_GetDisplayName_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetSmallPreviewImage_ReturnValue, bool Temp_bool_Variable, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "SetRotatingPreviewData");

	Params::UBattlePassPreview_C_SetRotatingPreviewData_Params Parms;

	Parms.ItemToDisplay = ItemToDisplay;
	Parms.ReadyToUnlock = ReadyToUnlock;
	Parms.LevelUnlocked = LevelUnlocked;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_GetSmallPreviewImage_ReturnValue = CallFunc_GetSmallPreviewImage_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.HandleUnhovered
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBattlePassScreenPreviewRewardWidget*Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_2                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_3                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_3                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_4                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_4                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_5                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_5                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_6                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_6                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_7                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_7                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassPreview_C::HandleUnhovered(class UBattlePassScreenPreviewRewardWidget* Button, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget, bool K2Node_DynamicCast_bSuccess, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_3, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_4, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_4, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_5, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_5, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_6, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_6, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_7, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_7, bool K2Node_DynamicCast_bSuccess_7)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "HandleUnhovered");

	Params::UBattlePassPreview_C_HandleUnhovered_Params Parms;

	Parms.Button = Button;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_1 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_2 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_2 = CallFunc_EqualEqual_ObjectObject_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_3 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_3 = CallFunc_EqualEqual_ObjectObject_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_4 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_4 = CallFunc_EqualEqual_ObjectObject_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_5 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_5 = CallFunc_EqualEqual_ObjectObject_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_6 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_6 = CallFunc_EqualEqual_ObjectObject_ReturnValue_6;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_7 = CallFunc_EqualEqual_ObjectObject_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_7 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_7;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.ReplaceUpsellIcon
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UBattlePassPreview_C::ReplaceUpsellIcon()
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "ReplaceUpsellIcon");

	Params::UBattlePassPreview_C_ReplaceUpsellIcon_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.SetOtherRewardsEarned
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  TextOtherRewards                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPreviewUnlockRewardData    UpsellUnlockRewardData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPreview_C::SetOtherRewardsEarned(class UTextBlock* TextOtherRewards, struct FPreviewUnlockRewardData& UpsellUnlockRewardData, enum class ESlateVisibility Temp_byte_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool CallFunc_Greater_IntInt_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class ESlateVisibility Temp_byte_Variable_1, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "SetOtherRewardsEarned");

	Params::UBattlePassPreview_C_SetOtherRewardsEarned_Params Parms;

	Parms.TextOtherRewards = TextOtherRewards;
	Parms.UpsellUnlockRewardData = UpsellUnlockRewardData;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.SetVbucksEarned
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  TextVbucks                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPreviewUnlockRewardData    UpsellUnlockRewardData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPreview_C::SetVbucksEarned(class UTextBlock* TextVbucks, struct FPreviewUnlockRewardData& UpsellUnlockRewardData, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "SetVbucksEarned");

	Params::UBattlePassPreview_C_SetVbucksEarned_Params Parms;

	Parms.TextVbucks = TextVbucks;
	Parms.UpsellUnlockRewardData = UpsellUnlockRewardData;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.SetCharactersEarned
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTextBlock*                  TextCharacters                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPreviewUnlockRewardData    UpsellUnlockRewardData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRewardCharacterCount_CharacterCount                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetRewardCharacterCount_HasCharacters                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPreview_C::SetCharactersEarned(class UTextBlock* TextCharacters, struct FPreviewUnlockRewardData& UpsellUnlockRewardData, enum class ESlateVisibility Temp_byte_Variable, int32 CallFunc_GetRewardCharacterCount_CharacterCount, bool CallFunc_GetRewardCharacterCount_HasCharacters, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, enum class ESlateVisibility Temp_byte_Variable_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "SetCharactersEarned");

	Params::UBattlePassPreview_C_SetCharactersEarned_Params Parms;

	Parms.TextCharacters = TextCharacters;
	Parms.UpsellUnlockRewardData = UpsellUnlockRewardData;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_GetRewardCharacterCount_CharacterCount = CallFunc_GetRewardCharacterCount_CharacterCount;
	Parms.CallFunc_GetRewardCharacterCount_HasCharacters = CallFunc_GetRewardCharacterCount_HasCharacters;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.GetAdditionalRewardsVisibility
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPreviewUnlockRewardData    UpsellUnlockRewardData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UBattlePassPreview_C::GetAdditionalRewardsVisibility(struct FPreviewUnlockRewardData& UpsellUnlockRewardData, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_2, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "GetAdditionalRewardsVisibility");

	Params::UBattlePassPreview_C_GetAdditionalRewardsVisibility_Params Parms;

	Parms.UpsellUnlockRewardData = UpsellUnlockRewardData;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function BattlePassPreview.BattlePassPreview_C.GetRewardCharacterCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FPreviewUnlockRewardData    UpsellUnlockRewardData                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// int32                              CharacterCount                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasCharacters                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassPreview_C::GetRewardCharacterCount(struct FPreviewUnlockRewardData& UpsellUnlockRewardData, int32* CharacterCount, bool* HasCharacters, bool CallFunc_Greater_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "GetRewardCharacterCount");

	Params::UBattlePassPreview_C_GetRewardCharacterCount_Params Parms;

	Parms.UpsellUnlockRewardData = UpsellUnlockRewardData;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CharacterCount != nullptr)
		*CharacterCount = Parms.CharacterCount;

	if (HasCharacters != nullptr)
		*HasCharacters = Parms.HasCharacters;

}


// Function BattlePassPreview.BattlePassPreview_C.HandleInitData
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPreviewUnlockData          UpsellUnlockData                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UFortItem*                   SinglePreviewReward                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               SingleRewardReadyToUnlock                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              SingleRewardUnlockLevel                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              RewardUnlockLevel                                                (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bRewardReadyToUnlock                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortItem*                   SinglePreviewRewardData                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bEarnedRewardsHasCharacters                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPreviewUnlockRewardData    EarnedRewards                                                    (Edit, BlueprintVisible)
// struct FPreviewUnlockRewardData    InstantRewards                                                   (Edit, BlueprintVisible)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetAdditionalRewardsVisibility_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPreview_C::HandleInitData(struct FPreviewUnlockData& UpsellUnlockData, class UFortItem* SinglePreviewReward, bool SingleRewardReadyToUnlock, int32 SingleRewardUnlockLevel, int32 RewardUnlockLevel, bool bRewardReadyToUnlock, class UFortItem* SinglePreviewRewardData, bool bEarnedRewardsHasCharacters, const struct FPreviewUnlockRewardData& EarnedRewards, const struct FPreviewUnlockRewardData& InstantRewards, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility CallFunc_GetAdditionalRewardsVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "HandleInitData");

	Params::UBattlePassPreview_C_HandleInitData_Params Parms;

	Parms.UpsellUnlockData = UpsellUnlockData;
	Parms.SinglePreviewReward = SinglePreviewReward;
	Parms.SingleRewardReadyToUnlock = SingleRewardReadyToUnlock;
	Parms.SingleRewardUnlockLevel = SingleRewardUnlockLevel;
	Parms.RewardUnlockLevel = RewardUnlockLevel;
	Parms.bRewardReadyToUnlock = bRewardReadyToUnlock;
	Parms.SinglePreviewRewardData = SinglePreviewRewardData;
	Parms.bEarnedRewardsHasCharacters = bEarnedRewardsHasCharacters;
	Parms.EarnedRewards = EarnedRewards;
	Parms.InstantRewards = InstantRewards;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetAdditionalRewardsVisibility_ReturnValue = CallFunc_GetAdditionalRewardsVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassPreview_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "PreConstruct");

	Params::UBattlePassPreview_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBattlePassPreview_C::Construct()
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "Construct");

	Params::UBattlePassPreview_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPreview_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "Tick");

	Params::UBattlePassPreview_C_Tick_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.OnInitData
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPreviewUnlockData          Data                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UFortItem*                   SinglePreviewCycleReward                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bReadyToUnlock                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              LevelUnlocked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bPurchasedAnnualPass                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBattlePassPreview_C::OnInitData(struct FPreviewUnlockData& Data, class UFortItem* SinglePreviewCycleReward, bool bReadyToUnlock, int32 LevelUnlocked, bool bPurchasedAnnualPass)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "OnInitData");

	Params::UBattlePassPreview_C_OnInitData_Params Parms;

	Parms.Data = Data;
	Parms.SinglePreviewCycleReward = SinglePreviewCycleReward;
	Parms.bReadyToUnlock = bReadyToUnlock;
	Parms.LevelUnlocked = LevelUnlocked;
	Parms.bPurchasedAnnualPass = bPurchasedAnnualPass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.BndEvt__Button_ViewAllRewards_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPreview_C::BndEvt__Button_ViewAllRewards_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "BndEvt__Button_ViewAllRewards_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UBattlePassPreview_C_BndEvt__Button_ViewAllRewards_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.HandleOnGainedFocus
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBattlePassPreview_C::HandleOnGainedFocus()
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "HandleOnGainedFocus");

	Params::UBattlePassPreview_C_HandleOnGainedFocus_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.OnCyclePreviewReward
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortItem*                   NextReward                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bReadyToUnlock                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              LevelUnlocked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPreview_C::OnCyclePreviewReward(class UFortItem* NextReward, bool bReadyToUnlock, int32 LevelUnlocked)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "OnCyclePreviewReward");

	Params::UBattlePassPreview_C_OnCyclePreviewReward_Params Parms;

	Parms.NextReward = NextReward;
	Parms.bReadyToUnlock = bReadyToUnlock;
	Parms.LevelUnlocked = LevelUnlocked;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.BndEvt__Currency_Widget_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPreview_C::BndEvt__Currency_Widget_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "BndEvt__Currency_Widget_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UBattlePassPreview_C_BndEvt__Currency_Widget_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.BndEvt__Character_Widget2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPreview_C::BndEvt__Character_Widget2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "BndEvt__Character_Widget2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UBattlePassPreview_C_BndEvt__Character_Widget2_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.BndEvt__Character_Widget3_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPreview_C::BndEvt__Character_Widget3_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "BndEvt__Character_Widget3_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature");

	Params::UBattlePassPreview_C_BndEvt__Character_Widget3_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.BndEvt__Character_Widget4_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPreview_C::BndEvt__Character_Widget4_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "BndEvt__Character_Widget4_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature");

	Params::UBattlePassPreview_C_BndEvt__Character_Widget4_K2Node_ComponentBoundEvent_4_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.BndEvt__Character_Widget5_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPreview_C::BndEvt__Character_Widget5_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "BndEvt__Character_Widget5_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature");

	Params::UBattlePassPreview_C_BndEvt__Character_Widget5_K2Node_ComponentBoundEvent_5_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.BndEvt__Character_Widget6_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPreview_C::BndEvt__Character_Widget6_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "BndEvt__Character_Widget6_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");

	Params::UBattlePassPreview_C_BndEvt__Character_Widget6_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.BndEvt__Character_Widget7_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPreview_C::BndEvt__Character_Widget7_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "BndEvt__Character_Widget7_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature");

	Params::UBattlePassPreview_C_BndEvt__Character_Widget7_K2Node_ComponentBoundEvent_7_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.BndEvt__Character_Widget1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPreview_C::BndEvt__Character_Widget1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "BndEvt__Character_Widget1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature");

	Params::UBattlePassPreview_C_BndEvt__Character_Widget1_K2Node_ComponentBoundEvent_8_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BattlePassPreview.BattlePassPreview_C.ExecuteUbergraph_BattlePassPreview
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize                                 (NoDestructor)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_1                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize_1                               (NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_2                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_2                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize_2                               (NoDestructor)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_3                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize_3                               (NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_4                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPreviewUnlockData          K2Node_Event_Data                                                (ConstParm)
// class UFortItem*                   K2Node_Event_SinglePreviewCycleReward                            (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bReadyToUnlock_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_LevelUnlocked_1                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPurchasedAnnualPass                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize_4                               (NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_8                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBattlePassViewRewardsScreen_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_3                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_4                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_5                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_6                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize_5                               (NoDestructor)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize_6                               (NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   K2Node_Event_NextReward                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bReadyToUnlock                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_LevelUnlocked                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_7                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_7                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_6                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_8                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_9                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateChildSize             K2Node_MakeStruct_SlateChildSize_7                               (NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_10               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_5                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_11               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_6                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_12               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHorizontalBoxSlot*          CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_7                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_13               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_14               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_15               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBattlePassPreview_C::ExecuteUbergraph_BattlePassPreview(int32 EntryPoint, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_1, bool K2Node_DynamicCast_bSuccess_1, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_1, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_2, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_2, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_1, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_2, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_IsValid_ReturnValue_2, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_3, enum class ESlateVisibility Temp_byte_Variable, bool CallFunc_IsValid_ReturnValue_3, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_4, bool K2Node_DynamicCast_bSuccess_4, const struct FPreviewUnlockData& K2Node_Event_Data, class UFortItem* K2Node_Event_SinglePreviewCycleReward, bool K2Node_Event_bReadyToUnlock_1, int32 K2Node_Event_LevelUnlocked_1, bool K2Node_Event_bPurchasedAnnualPass, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_4, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_8, class UBattlePassViewRewardsScreen_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_3, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_4, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_5, bool K2Node_DynamicCast_bSuccess_5, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_6, bool K2Node_DynamicCast_bSuccess_6, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_5, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_6, bool CallFunc_IsValid_ReturnValue_5, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, class UFortItem* K2Node_Event_NextReward, bool K2Node_Event_bReadyToUnlock, int32 K2Node_Event_LevelUnlocked, class UCommonButton* K2Node_ComponentBoundEvent_Button_7, bool CallFunc_IsValid_ReturnValue_6, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_7, bool K2Node_DynamicCast_bSuccess_7, class UCommonButton* K2Node_ComponentBoundEvent_Button_6, class UCommonButton* K2Node_ComponentBoundEvent_Button_5, class UCommonButton* K2Node_ComponentBoundEvent_Button_4, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_8, bool K2Node_DynamicCast_bSuccess_8, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_9, bool K2Node_DynamicCast_bSuccess_9, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize_7, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsValid_ReturnValue_7, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_10, bool K2Node_DynamicCast_bSuccess_10, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_5, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_11, bool K2Node_DynamicCast_bSuccess_11, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_6, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_12, bool K2Node_DynamicCast_bSuccess_12, class UHorizontalBoxSlot* CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_7, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_13, bool K2Node_DynamicCast_bSuccess_13, bool K2Node_Event_IsDesignTime, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_14, bool K2Node_DynamicCast_bSuccess_14, class UBattlePassPreview_Widget_C* K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_15, bool K2Node_DynamicCast_bSuccess_15, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue_8, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("BattlePassPreview_C", "ExecuteUbergraph_BattlePassPreview");

	Params::UBattlePassPreview_C_ExecuteUbergraph_BattlePassPreview_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize = K2Node_MakeStruct_SlateChildSize;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_1 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue;
	Parms.K2Node_MakeStruct_SlateChildSize_1 = K2Node_MakeStruct_SlateChildSize_1;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1 = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_1;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_2 = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_2 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_2;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_MakeStruct_SlateChildSize_2 = K2Node_MakeStruct_SlateChildSize_2;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_3 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_3;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_MakeStruct_SlateChildSize_3 = K2Node_MakeStruct_SlateChildSize_3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_4 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_4;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_Event_Data = K2Node_Event_Data;
	Parms.K2Node_Event_SinglePreviewCycleReward = K2Node_Event_SinglePreviewCycleReward;
	Parms.K2Node_Event_bReadyToUnlock_1 = K2Node_Event_bReadyToUnlock_1;
	Parms.K2Node_Event_LevelUnlocked_1 = K2Node_Event_LevelUnlocked_1;
	Parms.K2Node_Event_bPurchasedAnnualPass = K2Node_Event_bPurchasedAnnualPass;
	Parms.K2Node_MakeStruct_SlateChildSize_4 = K2Node_MakeStruct_SlateChildSize_4;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_8 = K2Node_ComponentBoundEvent_Button_8;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_3 = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_3;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_4 = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_4;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_5 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_5;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_6 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_6;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_MakeStruct_SlateChildSize_5 = K2Node_MakeStruct_SlateChildSize_5;
	Parms.K2Node_MakeStruct_SlateChildSize_6 = K2Node_MakeStruct_SlateChildSize_6;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_1 = CallFunc_PlayAnimationForward_ReturnValue_1;
	Parms.CallFunc_PlayAnimationForward_ReturnValue_2 = CallFunc_PlayAnimationForward_ReturnValue_2;
	Parms.K2Node_Event_NextReward = K2Node_Event_NextReward;
	Parms.K2Node_Event_bReadyToUnlock = K2Node_Event_bReadyToUnlock;
	Parms.K2Node_Event_LevelUnlocked = K2Node_Event_LevelUnlocked;
	Parms.K2Node_ComponentBoundEvent_Button_7 = K2Node_ComponentBoundEvent_Button_7;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_7 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_7;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.K2Node_ComponentBoundEvent_Button_6 = K2Node_ComponentBoundEvent_Button_6;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_8 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_8;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_9 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_9;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.K2Node_MakeStruct_SlateChildSize_7 = K2Node_MakeStruct_SlateChildSize_7;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_10 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_10;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_5 = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_11 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_11;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_6 = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_12 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_12;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_7 = CallFunc_SlotAsHorizontalBoxSlot_ReturnValue_7;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_13 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_13;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_14 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_14;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_15 = K2Node_DynamicCast_AsBattle_Pass_Preview_Widget_15;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
