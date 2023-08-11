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


// Function TabAccount.TabAccount_C.HandleUserSettingsUINeedsUpdate
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabAccount_C::HandleUserSettingsUINeedsUpdate()
{
	static auto Func = Class->GetFunction("TabAccount_C", "HandleUserSettingsUINeedsUpdate");

	Params::UTabAccount_C_HandleUserSettingsUINeedsUpdate_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.InitPreviousValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortSettingsContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRotatorSettingValue_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccount_C::InitPreviousValues(class UFortSettingsContext* CallFunc_GetContext_ReturnValue, int32 CallFunc_GetRotatorSettingValue_ReturnValue)
{
	static auto Func = Class->GetFunction("TabAccount_C", "InitPreviousValues");

	Params::UTabAccount_C_InitPreviousValues_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetRotatorSettingValue_ReturnValue = CallFunc_GetRotatorSettingValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.UpdateSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FMargin                     TempPadding                                                      (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_Vector2DToVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class URotatorSelector_C*>  K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class URotatorSelector_C*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USizeBoxSlot*                K2Node_DynamicCast_AsSize_Box_Slot                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UWidget*>             K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UWidget*                     CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_DynamicCast_AsCommon_Button                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UTextBlock*>          K2Node_MakeArray_Array_2                                         (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// class UTextBlock*                  CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     CallFunc_FindParentWidgetOfType_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USizeBox*                    K2Node_DynamicCast_AsSize_Box                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UCommonTextBlock*>    K2Node_MakeArray_Array_3                                         (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonTextBlock*            CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabAccount_C::UpdateSize(const struct FMargin& TempPadding, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Array_Index_Variable_2, int32 Temp_int_Loop_Counter_Variable_3, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector& CallFunc_Conv_Vector2DToVector_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, TArray<class URotatorSelector_C*>& K2Node_MakeArray_Array, class URotatorSelector_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class USizeBoxSlot* K2Node_DynamicCast_AsSize_Box_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, int32 Temp_int_Array_Index_Variable_3, TArray<class UWidget*>& K2Node_MakeArray_Array_1, class UWidget* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, class UCommonButton* K2Node_DynamicCast_AsCommon_Button, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue, TArray<class UTextBlock*>& K2Node_MakeArray_Array_2, class UTextBlock* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UWidget* CallFunc_FindParentWidgetOfType_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, class USizeBox* K2Node_DynamicCast_AsSize_Box, bool K2Node_DynamicCast_bSuccess_2, TArray<class UCommonTextBlock*>& K2Node_MakeArray_Array_3, int32 CallFunc_Array_Length_ReturnValue_3, class UCommonTextBlock* CallFunc_Array_Get_Item_3, bool CallFunc_Less_IntInt_ReturnValue_3)
{
	static auto Func = Class->GetFunction("TabAccount_C", "UpdateSize");

	Params::UTabAccount_C_UpdateSize_Params Parms;

	Parms.TempPadding = TempPadding;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_Conv_Vector2DToVector_ReturnValue = CallFunc_Conv_Vector2DToVector_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue_1 = CallFunc_FTrunc_ReturnValue_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsSize_Box_Slot = K2Node_DynamicCast_AsSize_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsCommon_Button = K2Node_DynamicCast_AsCommon_Button;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_FindParentWidgetOfType_ReturnValue = CallFunc_FindParentWidgetOfType_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsSize_Box = K2Node_DynamicCast_AsSize_Box;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.SetScrollBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   DefaultSize                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   MobileSize                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccount_C::SetScrollBar(const struct FVector2D& DefaultSize, const struct FVector2D& MobileSize, bool Temp_bool_Variable, bool CallFunc_IsMobileGame_ReturnValue, const struct FVector2D& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("TabAccount_C", "SetScrollBar");

	Params::UTabAccount_C_SetScrollBar_Params Parms;

	Parms.DefaultSize = DefaultSize;
	Parms.MobileSize = MobileSize;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.SetFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonTextBlock*            Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DefaultFontSize                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MobileFontSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              TempFont                                                         (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccount_C::SetFontSize(class UCommonTextBlock* Text, int32 DefaultFontSize, int32 MobileFontSize, const struct FSlateFontInfo& TempFont, bool Temp_bool_Variable, bool CallFunc_IsMobileGame_ReturnValue, int32 K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("TabAccount_C", "SetFontSize");

	Params::UTabAccount_C_SetFontSize_Params Parms;

	Parms.Text = Text;
	Parms.DefaultFontSize = DefaultFontSize;
	Parms.MobileFontSize = MobileFontSize;
	Parms.TempFont = TempFont;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.CenterAppropriateWidget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldShowLeaderboardPrivacySettings_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDesktopPlatform_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortUINavigationManager*    CallFunc_GetUINavigationManager_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabAccount_C::CenterAppropriateWidget(bool CallFunc_IsMobileGame_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_ShouldShowLeaderboardPrivacySettings_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_IsDesktopPlatform_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, uint8 CallFunc_MakeLiteralByte_ReturnValue, class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("TabAccount_C", "CenterAppropriateWidget");

	Params::UTabAccount_C_CenterAppropriateWidget_Params Parms;

	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_ShouldShowLeaderboardPrivacySettings_ReturnValue = CallFunc_ShouldShowLeaderboardPrivacySettings_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue = CallFunc_GetUINavigationManager_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_IsDesktopPlatform_ReturnValue = CallFunc_IsDesktopPlatform_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_GetUINavigationManager_ReturnValue_1 = CallFunc_GetUINavigationManager_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.PrivacySettingsFromSelection
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMcpPrivacySettings         McpPrivacySettings                                               (Parm, OutParm, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMcpPrivacySettings         K2Node_MakeStruct_McpPrivacySettings                             (NoDestructor)

void UTabAccount_C::PrivacySettingsFromSelection(int32 A, struct FMcpPrivacySettings* McpPrivacySettings, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FMcpPrivacySettings& K2Node_MakeStruct_McpPrivacySettings)
{
	static auto Func = Class->GetFunction("TabAccount_C", "PrivacySettingsFromSelection");

	Params::UTabAccount_C_PrivacySettingsFromSelection_Params Parms;

	Parms.A = A;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_McpPrivacySettings = K2Node_MakeStruct_McpPrivacySettings;

	UObject::ProcessEvent(Func, &Parms);

	if (McpPrivacySettings != nullptr)
		*McpPrivacySettings = Parms.McpPrivacySettings;

}


// Function TabAccount.TabAccount_C.PrivacySettingsToSelection
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UTabAccount_C::PrivacySettingsToSelection(bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UFortMcpContext* CallFunc_GetContext_ReturnValue, int32 K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("TabAccount_C", "PrivacySettingsToSelection");

	Params::UTabAccount_C_PrivacySettingsToSelection_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TabAccount.TabAccount_C.OnStWContentUninstalled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              StWUninstallProgress                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccount_C::OnStWContentUninstalled(float StWUninstallProgress)
{
	static auto Func = Class->GetFunction("TabAccount_C", "OnStWContentUninstalled");

	Params::UTabAccount_C_OnStWContentUninstalled_Params Parms;

	Parms.StWUninstallProgress = StWUninstallProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.GetTencentId
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetTencentIdString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()

class FText UTabAccount_C::GetTencentId(class UFortMcpContext* CallFunc_GetContext_ReturnValue, const class FString& CallFunc_GetTencentIdString_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static auto Func = Class->GetFunction("TabAccount_C", "GetTencentId");

	Params::UTabAccount_C_GetTencentId_Params Parms;

	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetTencentIdString_ReturnValue = CallFunc_GetTencentIdString_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TabAccount.TabAccount_C.InitializeWebsiteConfiguration
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable_1                                             ()
// bool                               CallFunc_IsAccountLinkingUIURLButtonEnabled_ReturnValue          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_GetAccountLinkingUIURL_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortAccountLinkingUIConfigCallFunc_GetAccountLinkingUIConfig_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default_1                                          ()

void UTabAccount_C::InitializeWebsiteConfiguration(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool CallFunc_IsAccountLinkingUIURLButtonEnabled_ReturnValue, const class FString& CallFunc_GetAccountLinkingUIURL_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EFortAccountLinkingUIConfig CallFunc_GetAccountLinkingUIConfig_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class FText K2Node_Select_Default_1)
{
	static auto Func = Class->GetFunction("TabAccount_C", "InitializeWebsiteConfiguration");

	Params::UTabAccount_C_InitializeWebsiteConfiguration_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_IsAccountLinkingUIURLButtonEnabled_ReturnValue = CallFunc_IsAccountLinkingUIURLButtonEnabled_ReturnValue;
	Parms.CallFunc_GetAccountLinkingUIURL_ReturnValue = CallFunc_GetAccountLinkingUIURL_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetAccountLinkingUIConfig_ReturnValue = CallFunc_GetAccountLinkingUIConfig_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.Build Player Id Analytic Attribute
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortAnalyticsEventAttributeReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue                            (HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringForUniqueId_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// struct FFortAnalyticsEventAttributeCallFunc_ConstructAnalyticsAttribute_ReturnValue                 ()

struct FFortAnalyticsEventAttribute UTabAccount_C::Build_Player_Id_Analytic_Attribute(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, const class FString& CallFunc_GetDebugStringForUniqueId_ReturnValue, const struct FFortAnalyticsEventAttribute& CallFunc_ConstructAnalyticsAttribute_ReturnValue)
{
	static auto Func = Class->GetFunction("TabAccount_C", "Build Player Id Analytic Attribute");

	Params::UTabAccount_C_Build_Player_Id_Analytic_Attribute_Params Parms;

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameAccountId_ReturnValue = CallFunc_GetGameAccountId_ReturnValue;
	Parms.CallFunc_GetDebugStringForUniqueId_ReturnValue = CallFunc_GetDebugStringForUniqueId_ReturnValue;
	Parms.CallFunc_ConstructAnalyticsAttribute_ReturnValue = CallFunc_ConstructAnalyticsAttribute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TabAccount.TabAccount_C.Build Player Name Analytic Attribute
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FFortAnalyticsEventAttributeReturnValue                                                      (Parm, OutParm, ReturnParm)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue                            (HasGetValueTypeHash)
// class UFortRegisteredPlayerInfo*   CallFunc_GetPlayerInfoFromUniqueID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetPlayerName_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// struct FFortAnalyticsEventAttributeCallFunc_ConstructAnalyticsAttribute_ReturnValue                 ()

struct FFortAnalyticsEventAttribute UTabAccount_C::Build_Player_Name_Analytic_Attribute(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, class UFortRegisteredPlayerInfo* CallFunc_GetPlayerInfoFromUniqueID_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, const struct FFortAnalyticsEventAttribute& CallFunc_ConstructAnalyticsAttribute_ReturnValue)
{
	static auto Func = Class->GetFunction("TabAccount_C", "Build Player Name Analytic Attribute");

	Params::UTabAccount_C_Build_Player_Name_Analytic_Attribute_Params Parms;

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameAccountId_ReturnValue = CallFunc_GetGameAccountId_ReturnValue;
	Parms.CallFunc_GetPlayerInfoFromUniqueID_ReturnValue = CallFunc_GetPlayerInfoFromUniqueID_ReturnValue;
	Parms.CallFunc_GetPlayerName_ReturnValue = CallFunc_GetPlayerName_ReturnValue;
	Parms.CallFunc_ConstructAnalyticsAttribute_ReturnValue = CallFunc_ConstructAnalyticsAttribute_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function TabAccount.TabAccount_C.Initialize Data
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMcpContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_CanPlay_DenialReason                                    ()
// bool                               CallFunc_CanPlay_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureState     CallFunc_GetFeatureState_OutFeatureState                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIFeatureStateReasonCallFunc_GetFeatureState_OutReason                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsDesktopPlatform_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_12                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEnableNotifyWhenPlaying_ReturnValue                  (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_13                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInZone_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// uint8                              CallFunc_MakeLiteralByte_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_14                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_15                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_8                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_16                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_17                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldDisableReceiveGiftOption_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetDisablePurchaseHistoryScreen_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ShouldShowSamsungStore_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                CallFunc_LoadSamsungOptions_OutOptions                           (ZeroConstructor, ReferenceParm)
// int32                              CallFunc_LoadSamsungOptions_CurrentOptionIdx                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_9                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanLocalPlayerReceiveGifts_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FText>                K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue                             ()
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_ShouldShowLeaderboardPrivacySettings_ReturnValue        (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_18                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_1                           ()
// TArray<class FText>                K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_MakeLiteralText_ReturnValue_2                           ()
// bool                               CallFunc_IsConsolePlatform_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EChunkInstallState      CallFunc_GetOnDemandChunksInstallState_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_5                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_19                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAthena_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_10                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsXboxPlatform_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortSettingsContext*        CallFunc_GetContext_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetRotatorSettingValue_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_6                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSettingsContext*        CallFunc_GetContext_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRotatorSettingValue_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortRuntimeOptions*         CallFunc_GetRuntimeOptions_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetEnableLocalNotifications_ReturnValue                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_7                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_8                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetTencentId_ReturnValue                                ()
// bool                               CallFunc_IsTencentBuild_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_9                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerController*       K2Node_DynamicCast_AsFort_Player_Controller                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FUniqueNetIdRepl            CallFunc_GetGameAccountId_ReturnValue                            (HasGetValueTypeHash)
// class FString                      CallFunc_GetDebugStringForUniqueId_ReturnValue                   (ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_20                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           ()
// enum class ESlateVisibility        Temp_byte_Variable_21                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_11                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_10                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortAccountLinkingUIConfigCallFunc_GetAccountLinkingUIConfig_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default_11                                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccount_C::Initialize_Data(enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_3, enum class ESlateVisibility Temp_byte_Variable_4, class UFortMcpContext* CallFunc_GetContext_ReturnValue, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_1, bool Temp_bool_Variable_2, class FText CallFunc_CanPlay_DenialReason, bool CallFunc_CanPlay_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_5, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_6, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_2, enum class EFortUIFeatureState CallFunc_GetFeatureState_OutFeatureState, enum class EFortUIFeatureStateReason CallFunc_GetFeatureState_OutReason, bool Temp_bool_Variable_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_7, enum class ESlateVisibility Temp_byte_Variable_8, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_3, bool Temp_bool_Variable_4, bool CallFunc_IsDesktopPlatform_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_9, enum class ESlateVisibility Temp_byte_Variable_10, bool Temp_bool_Variable_5, enum class ESlateVisibility Temp_byte_Variable_11, enum class ESlateVisibility Temp_byte_Variable_12, bool Temp_bool_Variable_6, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_GetEnableNotifyWhenPlaying_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_13, bool Temp_bool_Variable_7, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_4, bool CallFunc_IsInZone_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_14, bool CallFunc_BooleanOR_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_15, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_8, enum class ESlateVisibility Temp_byte_Variable_16, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ESlateVisibility Temp_byte_Variable_17, bool CallFunc_BooleanAND_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_1, bool CallFunc_ShouldDisableReceiveGiftOption_ReturnValue, bool CallFunc_GetDisablePurchaseHistoryScreen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_ShouldShowSamsungStore_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_2, TArray<class FText>& CallFunc_LoadSamsungOptions_OutOptions, int32 CallFunc_LoadSamsungOptions_CurrentOptionIdx, bool Temp_bool_Variable_9, enum class ESlateVisibility K2Node_Select_Default_3, bool CallFunc_CanLocalPlayerReceiveGifts_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue, TArray<class FText>& K2Node_MakeArray_Array, class FText CallFunc_MakeLiteralText_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_ShouldShowLeaderboardPrivacySettings_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_4, enum class ESlateVisibility Temp_byte_Variable_18, class FText CallFunc_MakeLiteralText_ReturnValue_1, TArray<class FText>& K2Node_MakeArray_Array_1, class FText CallFunc_MakeLiteralText_ReturnValue_2, bool CallFunc_IsConsolePlatform_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, enum class EChunkInstallState CallFunc_GetOnDemandChunksInstallState_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility K2Node_Select_Default_5, enum class ESlateVisibility Temp_byte_Variable_19, bool CallFunc_IsAthena_ReturnValue, bool Temp_bool_Variable_10, bool CallFunc_IsXboxPlatform_ReturnValue, class UFortSettingsContext* CallFunc_GetContext_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_2, int32 CallFunc_GetRotatorSettingValue_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, bool CallFunc_IsMobileGame_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_4, enum class ESlateVisibility K2Node_Select_Default_6, class UFortSettingsContext* CallFunc_GetContext_ReturnValue_6, int32 CallFunc_GetRotatorSettingValue_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue_2, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_GetEnableLocalNotifications_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, enum class ESlateVisibility K2Node_Select_Default_7, enum class ESlateVisibility K2Node_Select_Default_8, class FText CallFunc_GetTencentId_ReturnValue, bool CallFunc_IsTencentBuild_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_9, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class AFortPlayerController* K2Node_DynamicCast_AsFort_Player_Controller, bool K2Node_DynamicCast_bSuccess, const struct FUniqueNetIdRepl& CallFunc_GetGameAccountId_ReturnValue, const class FString& CallFunc_GetDebugStringForUniqueId_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_20, class FText CallFunc_Conv_StringToText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_21, bool Temp_bool_Variable_11, enum class ESlateVisibility K2Node_Select_Default_10, enum class EFortAccountLinkingUIConfig CallFunc_GetAccountLinkingUIConfig_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, class UWidget* K2Node_Select_Default_11)
{
	static auto Func = Class->GetFunction("TabAccount_C", "Initialize Data");

	Params::UTabAccount_C_Initialize_Data_Params Parms;

	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_byte_Variable_4 = Temp_byte_Variable_4;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.CallFunc_CanPlay_DenialReason = CallFunc_CanPlay_DenialReason;
	Parms.CallFunc_CanPlay_ReturnValue = CallFunc_CanPlay_ReturnValue;
	Parms.Temp_byte_Variable_5 = Temp_byte_Variable_5;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_byte_Variable_6 = Temp_byte_Variable_6;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.CallFunc_GetFeatureState_OutFeatureState = CallFunc_GetFeatureState_OutFeatureState;
	Parms.CallFunc_GetFeatureState_OutReason = CallFunc_GetFeatureState_OutReason;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.Temp_byte_Variable_7 = Temp_byte_Variable_7;
	Parms.Temp_byte_Variable_8 = Temp_byte_Variable_8;
	Parms.CallFunc_GetContext_ReturnValue_3 = CallFunc_GetContext_ReturnValue_3;
	Parms.Temp_bool_Variable_4 = Temp_bool_Variable_4;
	Parms.CallFunc_IsDesktopPlatform_ReturnValue = CallFunc_IsDesktopPlatform_ReturnValue;
	Parms.Temp_byte_Variable_9 = Temp_byte_Variable_9;
	Parms.Temp_byte_Variable_10 = Temp_byte_Variable_10;
	Parms.Temp_bool_Variable_5 = Temp_bool_Variable_5;
	Parms.Temp_byte_Variable_11 = Temp_byte_Variable_11;
	Parms.Temp_byte_Variable_12 = Temp_byte_Variable_12;
	Parms.Temp_bool_Variable_6 = Temp_bool_Variable_6;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue = CallFunc_GetRuntimeOptions_ReturnValue;
	Parms.CallFunc_GetEnableNotifyWhenPlaying_ReturnValue = CallFunc_GetEnableNotifyWhenPlaying_ReturnValue;
	Parms.Temp_byte_Variable_13 = Temp_byte_Variable_13;
	Parms.Temp_bool_Variable_7 = Temp_bool_Variable_7;
	Parms.CallFunc_GetContext_ReturnValue_4 = CallFunc_GetContext_ReturnValue_4;
	Parms.CallFunc_IsInZone_ReturnValue = CallFunc_IsInZone_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_MakeLiteralByte_ReturnValue = CallFunc_MakeLiteralByte_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.Temp_byte_Variable_14 = Temp_byte_Variable_14;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.Temp_byte_Variable_15 = Temp_byte_Variable_15;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_8 = Temp_bool_Variable_8;
	Parms.Temp_byte_Variable_16 = Temp_byte_Variable_16;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.Temp_byte_Variable_17 = Temp_byte_Variable_17;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue_1 = CallFunc_GetRuntimeOptions_ReturnValue_1;
	Parms.CallFunc_ShouldDisableReceiveGiftOption_ReturnValue = CallFunc_ShouldDisableReceiveGiftOption_ReturnValue;
	Parms.CallFunc_GetDisablePurchaseHistoryScreen_ReturnValue = CallFunc_GetDisablePurchaseHistoryScreen_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_3 = CallFunc_Not_PreBool_ReturnValue_3;
	Parms.CallFunc_ShouldShowSamsungStore_ReturnValue = CallFunc_ShouldShowSamsungStore_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_LoadSamsungOptions_OutOptions = CallFunc_LoadSamsungOptions_OutOptions;
	Parms.CallFunc_LoadSamsungOptions_CurrentOptionIdx = CallFunc_LoadSamsungOptions_CurrentOptionIdx;
	Parms.Temp_bool_Variable_9 = Temp_bool_Variable_9;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;
	Parms.CallFunc_CanLocalPlayerReceiveGifts_ReturnValue = CallFunc_CanLocalPlayerReceiveGifts_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_MakeLiteralText_ReturnValue = CallFunc_MakeLiteralText_ReturnValue;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue_2 = CallFunc_GetRuntimeOptions_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_ShouldShowLeaderboardPrivacySettings_ReturnValue = CallFunc_ShouldShowLeaderboardPrivacySettings_ReturnValue;
	Parms.K2Node_Select_Default_4 = K2Node_Select_Default_4;
	Parms.Temp_byte_Variable_18 = Temp_byte_Variable_18;
	Parms.CallFunc_MakeLiteralText_ReturnValue_1 = CallFunc_MakeLiteralText_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_MakeLiteralText_ReturnValue_2 = CallFunc_MakeLiteralText_ReturnValue_2;
	Parms.CallFunc_IsConsolePlatform_ReturnValue = CallFunc_IsConsolePlatform_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue_1 = CallFunc_BooleanOR_ReturnValue_1;
	Parms.CallFunc_GetOnDemandChunksInstallState_ReturnValue = CallFunc_GetOnDemandChunksInstallState_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Select_Default_5 = K2Node_Select_Default_5;
	Parms.Temp_byte_Variable_19 = Temp_byte_Variable_19;
	Parms.CallFunc_IsAthena_ReturnValue = CallFunc_IsAthena_ReturnValue;
	Parms.Temp_bool_Variable_10 = Temp_bool_Variable_10;
	Parms.CallFunc_IsXboxPlatform_ReturnValue = CallFunc_IsXboxPlatform_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_5 = CallFunc_GetContext_ReturnValue_5;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetRotatorSettingValue_ReturnValue = CallFunc_GetRotatorSettingValue_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_BooleanOR_ReturnValue_2 = CallFunc_BooleanOR_ReturnValue_2;
	Parms.CallFunc_BooleanOR_ReturnValue_3 = CallFunc_BooleanOR_ReturnValue_3;
	Parms.CallFunc_IsMobileGame_ReturnValue_1 = CallFunc_IsMobileGame_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue_4 = CallFunc_BooleanOR_ReturnValue_4;
	Parms.K2Node_Select_Default_6 = K2Node_Select_Default_6;
	Parms.CallFunc_GetContext_ReturnValue_6 = CallFunc_GetContext_ReturnValue_6;
	Parms.CallFunc_GetRotatorSettingValue_ReturnValue_1 = CallFunc_GetRotatorSettingValue_ReturnValue_1;
	Parms.CallFunc_IsMobileGame_ReturnValue_2 = CallFunc_IsMobileGame_ReturnValue_2;
	Parms.CallFunc_GetRuntimeOptions_ReturnValue_3 = CallFunc_GetRuntimeOptions_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_4 = CallFunc_Not_PreBool_ReturnValue_4;
	Parms.CallFunc_GetEnableLocalNotifications_ReturnValue = CallFunc_GetEnableLocalNotifications_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_4 = CallFunc_BooleanAND_ReturnValue_4;
	Parms.CallFunc_BooleanAND_ReturnValue_5 = CallFunc_BooleanAND_ReturnValue_5;
	Parms.K2Node_Select_Default_7 = K2Node_Select_Default_7;
	Parms.K2Node_Select_Default_8 = K2Node_Select_Default_8;
	Parms.CallFunc_GetTencentId_ReturnValue = CallFunc_GetTencentId_ReturnValue;
	Parms.CallFunc_IsTencentBuild_ReturnValue = CallFunc_IsTencentBuild_ReturnValue;
	Parms.K2Node_Select_Default_9 = K2Node_Select_Default_9;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller = K2Node_DynamicCast_AsFort_Player_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGameAccountId_ReturnValue = CallFunc_GetGameAccountId_ReturnValue;
	Parms.CallFunc_GetDebugStringForUniqueId_ReturnValue = CallFunc_GetDebugStringForUniqueId_ReturnValue;
	Parms.Temp_byte_Variable_20 = Temp_byte_Variable_20;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_byte_Variable_21 = Temp_byte_Variable_21;
	Parms.Temp_bool_Variable_11 = Temp_bool_Variable_11;
	Parms.K2Node_Select_Default_10 = K2Node_Select_Default_10;
	Parms.CallFunc_GetAccountLinkingUIConfig_ReturnValue = CallFunc_GetAccountLinkingUIConfig_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_Select_Default_11 = K2Node_Select_Default_11;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.Update Data
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabAccount_C::Update_Data()
{
	static auto Func = Class->GetFunction("TabAccount_C", "Update Data");

	Params::UTabAccount_C_Update_Data_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.DialogResult_38AE683A4765B23E84C880991D01C356
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortDialogResult       Result                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        ResultName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccount_C::DialogResult_38AE683A4765B23E84C880991D01C356(enum class EFortDialogResult Result, class FName ResultName)
{
	static auto Func = Class->GetFunction("TabAccount_C", "DialogResult_38AE683A4765B23E84C880991D01C356");

	Params::UTabAccount_C_DialogResult_38AE683A4765B23E84C880991D01C356_Params Parms;

	Parms.Result = Result;
	Parms.ResultName = ResultName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.UpdateOptionsTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabAccount_C::UpdateOptionsTab()
{
	static auto Func = Class->GetFunction("TabAccount_C", "UpdateOptionsTab");

	Params::UTabAccount_C_UpdateOptionsTab_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.CenterOnTab
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UTabAccount_C::CenterOnTab()
{
	static auto Func = Class->GetFunction("TabAccount_C", "CenterOnTab");

	Params::UTabAccount_C_CenterOnTab_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTabAccount_C::Construct()
{
	static auto Func = Class->GetFunction("TabAccount_C", "Construct");

	Params::UTabAccount_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_0_OnRequestToolTipChange__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        NewTooltipText                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void UTabAccount_C::BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_0_OnRequestToolTipChange__DelegateSignature(class FText NewTooltipText)
{
	static auto Func = Class->GetFunction("TabAccount_C", "BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_0_OnRequestToolTipChange__DelegateSignature");

	Params::UTabAccount_C_BndEvt__FortTwitchLogin_K2Node_ComponentBoundEvent_0_OnRequestToolTipChange__DelegateSignature_Params Parms;

	Parms.NewTooltipText = NewTooltipText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.BndEvt__URLButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccount_C::BndEvt__URLButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("TabAccount_C", "BndEvt__URLButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature");

	Params::UTabAccount_C_BndEvt__URLButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.BndEvt__CopyCustomerIDButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccount_C::BndEvt__CopyCustomerIDButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("TabAccount_C", "BndEvt__CopyCustomerIDButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature");

	Params::UTabAccount_C_BndEvt__CopyCustomerIDButton_K2Node_ComponentBoundEvent_6_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.BndEvt__CopyEpicAccountIDButton_K2Node_ComponentBoundEvent_25_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccount_C::BndEvt__CopyEpicAccountIDButton_K2Node_ComponentBoundEvent_25_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("TabAccount_C", "BndEvt__CopyEpicAccountIDButton_K2Node_ComponentBoundEvent_25_CommonButtonClicked__DelegateSignature");

	Params::UTabAccount_C_BndEvt__CopyEpicAccountIDButton_K2Node_ComponentBoundEvent_25_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccount_C::BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("TabAccount_C", "BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature");

	Params::UTabAccount_C_BndEvt__IconTextButton_C_0_K2Node_ComponentBoundEvent_54_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.BndEvt__Button_CustomerService_K2Node_ComponentBoundEvent_108_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccount_C::BndEvt__Button_CustomerService_K2Node_ComponentBoundEvent_108_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("TabAccount_C", "BndEvt__Button_CustomerService_K2Node_ComponentBoundEvent_108_CommonButtonClicked__DelegateSignature");

	Params::UTabAccount_C_BndEvt__Button_CustomerService_K2Node_ComponentBoundEvent_108_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.BndEvt__Button_Logout_K2Node_ComponentBoundEvent_164_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccount_C::BndEvt__Button_Logout_K2Node_ComponentBoundEvent_164_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("TabAccount_C", "BndEvt__Button_Logout_K2Node_ComponentBoundEvent_164_CommonButtonClicked__DelegateSignature");

	Params::UTabAccount_C_BndEvt__Button_Logout_K2Node_ComponentBoundEvent_164_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.BndEvt__UninstallStWButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccount_C::BndEvt__UninstallStWButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("TabAccount_C", "BndEvt__UninstallStWButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature");

	Params::UTabAccount_C_BndEvt__UninstallStWButton_K2Node_ComponentBoundEvent_51_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.SetRefundRequestText
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              RefundsRemaining                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bCanRefundSomething                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UTabAccount_C::SetRefundRequestText(int32 RefundsRemaining, bool bCanRefundSomething)
{
	static auto Func = Class->GetFunction("TabAccount_C", "SetRefundRequestText");

	Params::UTabAccount_C_SetRefundRequestText_Params Parms;

	Parms.RefundsRemaining = RefundsRemaining;
	Parms.bCanRefundSomething = bCanRefundSomething;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.BndEvt__Button_RefundRequest_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccount_C::BndEvt__Button_RefundRequest_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("TabAccount_C", "BndEvt__Button_RefundRequest_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature");

	Params::UTabAccount_C_BndEvt__Button_RefundRequest_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.BndEvt__LeaderboardPrivacy_K2Node_ComponentBoundEvent_8_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccount_C::BndEvt__LeaderboardPrivacy_K2Node_ComponentBoundEvent_8_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabAccount_C", "BndEvt__LeaderboardPrivacy_K2Node_ComponentBoundEvent_8_Selection Changed__DelegateSignature");

	Params::UTabAccount_C_BndEvt__LeaderboardPrivacy_K2Node_ComponentBoundEvent_8_Selection_Changed__DelegateSignature_Params Parms;

	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.OnReadPrivacySettings
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMcpPrivacySettings         Settings                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)

void UTabAccount_C::OnReadPrivacySettings(bool bSuccess, struct FMcpPrivacySettings& Settings)
{
	static auto Func = Class->GetFunction("TabAccount_C", "OnReadPrivacySettings");

	Params::UTabAccount_C_OnReadPrivacySettings_Params Parms;

	Parms.bSuccess = bSuccess;
	Parms.Settings = Settings;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.BndEvt__ReceiveGiftToggle_K2Node_ComponentBoundEvent_0_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccount_C::BndEvt__ReceiveGiftToggle_K2Node_ComponentBoundEvent_0_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabAccount_C", "BndEvt__ReceiveGiftToggle_K2Node_ComponentBoundEvent_0_Selection Changed__DelegateSignature");

	Params::UTabAccount_C_BndEvt__ReceiveGiftToggle_K2Node_ComponentBoundEvent_0_Selection_Changed__DelegateSignature_Params Parms;

	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.BndEvt__SamsungStoreToggle_K2Node_ComponentBoundEvent_0_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccount_C::BndEvt__SamsungStoreToggle_K2Node_ComponentBoundEvent_0_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabAccount_C", "BndEvt__SamsungStoreToggle_K2Node_ComponentBoundEvent_0_Selection Changed__DelegateSignature");

	Params::UTabAccount_C_BndEvt__SamsungStoreToggle_K2Node_ComponentBoundEvent_0_Selection_Changed__DelegateSignature_Params Parms;

	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.BndEvt__PlayerSurveysToggle_K2Node_ComponentBoundEvent_4_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccount_C::BndEvt__PlayerSurveysToggle_K2Node_ComponentBoundEvent_4_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabAccount_C", "BndEvt__PlayerSurveysToggle_K2Node_ComponentBoundEvent_4_Selection Changed__DelegateSignature");

	Params::UTabAccount_C_BndEvt__PlayerSurveysToggle_K2Node_ComponentBoundEvent_4_Selection_Changed__DelegateSignature_Params Parms;

	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UTabAccount_C::Destruct()
{
	static auto Func = Class->GetFunction("TabAccount_C", "Destruct");

	Params::UTabAccount_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.BndEvt__NotifyWhenPlayingToggle_K2Node_ComponentBoundEvent_5_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccount_C::BndEvt__NotifyWhenPlayingToggle_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabAccount_C", "BndEvt__NotifyWhenPlayingToggle_K2Node_ComponentBoundEvent_5_Selection Changed__DelegateSignature");

	Params::UTabAccount_C_BndEvt__NotifyWhenPlayingToggle_K2Node_ComponentBoundEvent_5_Selection_Changed__DelegateSignature_Params Parms;

	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.BndEvt__LocalNotificationsToggle_K2Node_ComponentBoundEvent_7_Selection Changed__DelegateSignature
// (BlueprintEvent)
// Parameters:
// int32                              Selected_Index                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccount_C::BndEvt__LocalNotificationsToggle_K2Node_ComponentBoundEvent_7_Selection_Changed__DelegateSignature(int32 Selected_Index)
{
	static auto Func = Class->GetFunction("TabAccount_C", "BndEvt__LocalNotificationsToggle_K2Node_ComponentBoundEvent_7_Selection Changed__DelegateSignature");

	Params::UTabAccount_C_BndEvt__LocalNotificationsToggle_K2Node_ComponentBoundEvent_7_Selection_Changed__DelegateSignature_Params Parms;

	Parms.Selected_Index = Selected_Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TabAccount.TabAccount_C.ExecuteUbergraph_TabAccount
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class UFortSettingsContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      ()
// class UFortSettingsContext*        CallFunc_GetContext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSettingsContext*        CallFunc_GetContext_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_ComponentBoundEvent_NewTooltipText                        ()
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_7                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_ShowConfirmation_NUI*CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetAccountLinkingUIURL_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Len_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EFortDialogResult       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_6                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_5                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue                                     ()
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_ReturnValue_1                                   ()
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_4                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue_1                         (ZeroConstructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_3                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_2                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UninstallAllOnDemandChunks_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetAccurateRealTime_Seconds                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetAccurateRealTime_PartialSeconds                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_RefundsRemaining                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bCanRefundSomething                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    ()
// enum class EFortDialogResult       K2Node_CustomEvent_Result                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_ResultName                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShowWebURL_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPurchaseHistoryScreen_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index_5                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FMcpPrivacySettings         K2Node_CustomEvent_Settings                                      (ConstParm, NoDestructor)
// struct FMcpPrivacySettings         CallFunc_PrivacySettingsFromSelection_McpPrivacySettings         (NoDestructor)
// int32                              CallFunc_PrivacySettingsToSelection_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Selected_Index_4                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Conv_IntToBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index_3                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Selected_Index_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              K2Node_ComponentBoundEvent_Selected_Index_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_ComponentBoundEvent_Selected_Index                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTabAccount_C::ExecuteUbergraph_TabAccount(int32 EntryPoint, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class UFortSettingsContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_Format_ReturnValue, class UFortSettingsContext* CallFunc_GetContext_ReturnValue_1, class UFortSettingsContext* CallFunc_GetContext_ReturnValue_2, class FText K2Node_ComponentBoundEvent_NewTooltipText, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_3, class UCommonButton* K2Node_ComponentBoundEvent_Button_7, class UFortAsyncAction_ShowConfirmation_NUI* CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue, const class FString& CallFunc_GetAccountLinkingUIURL_ReturnValue, int32 CallFunc_Len_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, enum class EFortDialogResult Temp_byte_Variable, class UCommonButton* K2Node_ComponentBoundEvent_Button_6, bool K2Node_SwitchEnum_CmpSuccess, class UCommonButton* K2Node_ComponentBoundEvent_Button_5, class FName Temp_name_Variable, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class UCommonButton* K2Node_ComponentBoundEvent_Button_3, class UCommonButton* K2Node_ComponentBoundEvent_Button_2, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_4, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_UninstallAllOnDemandChunks_ReturnValue, int32 CallFunc_GetAccurateRealTime_Seconds, float CallFunc_GetAccurateRealTime_PartialSeconds, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, int32 K2Node_Event_RefundsRemaining, bool K2Node_Event_bCanRefundSomething, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, enum class EFortDialogResult K2Node_CustomEvent_Result, class FName K2Node_CustomEvent_ResultName, class UCommonButton* K2Node_ComponentBoundEvent_Button, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_5, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_ShowWebURL_ReturnValue, class UPurchaseHistoryScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, int32 K2Node_ComponentBoundEvent_Selected_Index_5, bool K2Node_CustomEvent_bSuccess, const struct FMcpPrivacySettings& K2Node_CustomEvent_Settings, const struct FMcpPrivacySettings& CallFunc_PrivacySettingsFromSelection_McpPrivacySettings, int32 CallFunc_PrivacySettingsToSelection_ReturnValue, int32 K2Node_ComponentBoundEvent_Selected_Index_4, bool CallFunc_Conv_IntToBool_ReturnValue, int32 K2Node_ComponentBoundEvent_Selected_Index_3, int32 K2Node_ComponentBoundEvent_Selected_Index_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 K2Node_ComponentBoundEvent_Selected_Index_1, int32 K2Node_ComponentBoundEvent_Selected_Index, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue_6)
{
	static auto Func = Class->GetFunction("TabAccount_C", "ExecuteUbergraph_TabAccount");

	Params::UTabAccount_C_ExecuteUbergraph_TabAccount_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_GetContext_ReturnValue_1 = CallFunc_GetContext_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue_2 = CallFunc_GetContext_ReturnValue_2;
	Parms.K2Node_ComponentBoundEvent_NewTooltipText = K2Node_ComponentBoundEvent_NewTooltipText;
	Parms.CallFunc_GetContext_ReturnValue_3 = CallFunc_GetContext_ReturnValue_3;
	Parms.K2Node_ComponentBoundEvent_Button_7 = K2Node_ComponentBoundEvent_Button_7;
	Parms.CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue = CallFunc_ShowSimpleConfirmationDialog_NUI_ReturnValue;
	Parms.CallFunc_GetAccountLinkingUIURL_ReturnValue = CallFunc_GetAccountLinkingUIURL_ReturnValue;
	Parms.CallFunc_Len_ReturnValue = CallFunc_Len_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_ComponentBoundEvent_Button_6 = K2Node_ComponentBoundEvent_Button_6;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_ComponentBoundEvent_Button_5 = K2Node_ComponentBoundEvent_Button_5;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_GetText_ReturnValue_1 = CallFunc_GetText_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button_4 = K2Node_ComponentBoundEvent_Button_4;
	Parms.CallFunc_Conv_TextToString_ReturnValue_1 = CallFunc_Conv_TextToString_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Button_3 = K2Node_ComponentBoundEvent_Button_3;
	Parms.K2Node_ComponentBoundEvent_Button_2 = K2Node_ComponentBoundEvent_Button_2;
	Parms.CallFunc_GetContext_ReturnValue_4 = CallFunc_GetContext_ReturnValue_4;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_UninstallAllOnDemandChunks_ReturnValue = CallFunc_UninstallAllOnDemandChunks_ReturnValue;
	Parms.CallFunc_GetAccurateRealTime_Seconds = CallFunc_GetAccurateRealTime_Seconds;
	Parms.CallFunc_GetAccurateRealTime_PartialSeconds = CallFunc_GetAccurateRealTime_PartialSeconds;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Event_RefundsRemaining = K2Node_Event_RefundsRemaining;
	Parms.K2Node_Event_bCanRefundSomething = K2Node_Event_bCanRefundSomething;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.K2Node_CustomEvent_Result = K2Node_CustomEvent_Result;
	Parms.K2Node_CustomEvent_ResultName = K2Node_CustomEvent_ResultName;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetContext_ReturnValue_5 = CallFunc_GetContext_ReturnValue_5;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_ShowWebURL_ReturnValue = CallFunc_ShowWebURL_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Selected_Index_5 = K2Node_ComponentBoundEvent_Selected_Index_5;
	Parms.K2Node_CustomEvent_bSuccess = K2Node_CustomEvent_bSuccess;
	Parms.K2Node_CustomEvent_Settings = K2Node_CustomEvent_Settings;
	Parms.CallFunc_PrivacySettingsFromSelection_McpPrivacySettings = CallFunc_PrivacySettingsFromSelection_McpPrivacySettings;
	Parms.CallFunc_PrivacySettingsToSelection_ReturnValue = CallFunc_PrivacySettingsToSelection_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Selected_Index_4 = K2Node_ComponentBoundEvent_Selected_Index_4;
	Parms.CallFunc_Conv_IntToBool_ReturnValue = CallFunc_Conv_IntToBool_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Selected_Index_3 = K2Node_ComponentBoundEvent_Selected_Index_3;
	Parms.K2Node_ComponentBoundEvent_Selected_Index_2 = K2Node_ComponentBoundEvent_Selected_Index_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_ComponentBoundEvent_Selected_Index_1 = K2Node_ComponentBoundEvent_Selected_Index_1;
	Parms.K2Node_ComponentBoundEvent_Selected_Index = K2Node_ComponentBoundEvent_Selected_Index;
	Parms.CallFunc_GetContext_ReturnValue_6 = CallFunc_GetContext_ReturnValue_6;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
