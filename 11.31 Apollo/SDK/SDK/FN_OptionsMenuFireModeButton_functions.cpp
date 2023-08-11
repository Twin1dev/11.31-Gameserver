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


// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.HandleWidgetDeactivated
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonActivatablePanel*     ActivatableWidget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuFireModeButton_C::HandleWidgetDeactivated(class UCommonActivatablePanel* ActivatableWidget)
{
	static auto Func = Class->GetFunction("OptionsMenuFireModeButton_C", "HandleWidgetDeactivated");

	Params::UOptionsMenuFireModeButton_C_HandleWidgetDeactivated_Params Parms;

	Parms.ActivatableWidget = ActivatableWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.SetFireModeButtonText
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGameUserSettings*       CallFunc_GetFortGameUserSettings_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFireModeData               CallFunc_GetFireModeData_ReturnValue                             (ConstParm, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuFireModeButton_C::SetFireModeButtonText(class UFortGameUserSettings* CallFunc_GetFortGameUserSettings_ReturnValue, const struct FFireModeData& CallFunc_GetFireModeData_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("OptionsMenuFireModeButton_C", "SetFireModeButtonText");

	Params::UOptionsMenuFireModeButton_C_SetFireModeButtonText_Params Parms;

	Parms.CallFunc_GetFortGameUserSettings_ReturnValue = CallFunc_GetFortGameUserSettings_ReturnValue;
	Parms.CallFunc_GetFireModeData_ReturnValue = CallFunc_GetFireModeData_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.On_MenuAnchorSettingDescription_GetMenuContent_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWidget*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTooltip_Basic_S_C*          CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UWidget* UOptionsMenuFireModeButton_C::On_MenuAnchorSettingDescription_GetMenuContent_0(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UTooltip_Basic_S_C* CallFunc_Create_ReturnValue)
{
	static auto Func = Class->GetFunction("OptionsMenuFireModeButton_C", "On_MenuAnchorSettingDescription_GetMenuContent_0");

	Params::UOptionsMenuFireModeButton_C_On_MenuAnchorSettingDescription_GetMenuContent_0_Params Parms;

	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.Hide Tooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenuFireModeButton_C::Hide_Tooltip()
{
	static auto Func = Class->GetFunction("OptionsMenuFireModeButton_C", "Hide Tooltip");

	Params::UOptionsMenuFireModeButton_C_Hide_Tooltip_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.SetToolTipSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   DefaultSize                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   MobileSize                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuFireModeButton_C::SetToolTipSize(const struct FVector2D& DefaultSize, const struct FVector2D& MobileSize, bool CallFunc_IsMobileGame_ReturnValue, bool Temp_bool_Variable, const struct FVector2D& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("OptionsMenuFireModeButton_C", "SetToolTipSize");

	Params::UOptionsMenuFireModeButton_C_SetToolTipSize_Params Parms;

	Parms.DefaultSize = DefaultSize;
	Parms.MobileSize = MobileSize;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.ShowTooltip
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenuFireModeButton_C::ShowTooltip()
{
	static auto Func = Class->GetFunction("OptionsMenuFireModeButton_C", "ShowTooltip");

	Params::UOptionsMenuFireModeButton_C_ShowTooltip_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.SetFontSize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UCommonTextBlock*            Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              DefaultSize                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              MobileSize                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              TempFont                                                         (Edit, BlueprintVisible, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuFireModeButton_C::SetFontSize(class UCommonTextBlock* Text, int32 DefaultSize, int32 MobileSize, const struct FSlateFontInfo& TempFont, bool Temp_bool_Variable, bool CallFunc_IsMobileGame_ReturnValue, int32 K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("OptionsMenuFireModeButton_C", "SetFontSize");

	Params::UOptionsMenuFireModeButton_C_SetFontSize_Params Parms;

	Parms.Text = Text;
	Parms.DefaultSize = DefaultSize;
	Parms.MobileSize = MobileSize;
	Parms.TempFont = TempFont;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.UpdateSize
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector2D                   LargeSize                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   SmallSize                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsBROnly_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuFireModeButton_C::UpdateSize(const struct FVector2D& LargeSize, const struct FVector2D& SmallSize, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, bool CallFunc_IsBROnly_ReturnValue, const struct FVector2D& K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("OptionsMenuFireModeButton_C", "UpdateSize");

	Params::UOptionsMenuFireModeButton_C_UpdateSize_Params Parms;

	Parms.LargeSize = LargeSize;
	Parms.SmallSize = SmallSize;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_IsBROnly_ReturnValue = CallFunc_IsBROnly_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.OnComplete_A8B997BB40321F469E82A785FB369A27
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuFireModeButton_C::OnComplete_A8B997BB40321F469E82A785FB369A27(class UUserWidget* UserWidget)
{
	static auto Func = Class->GetFunction("OptionsMenuFireModeButton_C", "OnComplete_A8B997BB40321F469E82A785FB369A27");

	Params::UOptionsMenuFireModeButton_C_OnComplete_A8B997BB40321F469E82A785FB369A27_Params Parms;

	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.BP_OnItemSelectionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsSelected                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuFireModeButton_C::BP_OnItemSelectionChanged(bool bIsSelected)
{
	static auto Func = Class->GetFunction("OptionsMenuFireModeButton_C", "BP_OnItemSelectionChanged");

	Params::UOptionsMenuFireModeButton_C_BP_OnItemSelectionChanged_Params Parms;

	Parms.bIsSelected = bIsSelected;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOptionsMenuFireModeButton_C::Construct()
{
	static auto Func = Class->GetFunction("OptionsMenuFireModeButton_C", "Construct");

	Params::UOptionsMenuFireModeButton_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuFireModeButton_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("OptionsMenuFireModeButton_C", "OnMouseLeave");

	Params::UOptionsMenuFireModeButton_C_OnMouseLeave_Params Parms;

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UOptionsMenuFireModeButton_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static auto Func = Class->GetFunction("OptionsMenuFireModeButton_C", "OnMouseEnter");

	Params::UOptionsMenuFireModeButton_C_OnMouseEnter_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.OnListItemObjectSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UObject*                     ListItemObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuFireModeButton_C::OnListItemObjectSet(class UObject* ListItemObject)
{
	static auto Func = Class->GetFunction("OptionsMenuFireModeButton_C", "OnListItemObjectSet");

	Params::UOptionsMenuFireModeButton_C_OnListItemObjectSet_Params Parms;

	Parms.ListItemObject = ListItemObject;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.BP_OnItemExpansionChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bIsExpanded                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UOptionsMenuFireModeButton_C::BP_OnItemExpansionChanged(bool bIsExpanded)
{
	static auto Func = Class->GetFunction("OptionsMenuFireModeButton_C", "BP_OnItemExpansionChanged");

	Params::UOptionsMenuFireModeButton_C_BP_OnItemExpansionChanged_Params Parms;

	Parms.bIsExpanded = bIsExpanded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.CenterOnWidget
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UOptionsMenuFireModeButton_C::CenterOnWidget()
{
	static auto Func = Class->GetFunction("OptionsMenuFireModeButton_C", "CenterOnWidget");

	Params::UOptionsMenuFireModeButton_C_CenterOnWidget_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.BP_OnEntryReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UOptionsMenuFireModeButton_C::BP_OnEntryReleased()
{
	static auto Func = Class->GetFunction("OptionsMenuFireModeButton_C", "BP_OnEntryReleased");

	Params::UOptionsMenuFireModeButton_C_BP_OnEntryReleased_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuFireModeButton_C::BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("OptionsMenuFireModeButton_C", "BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature");

	Params::UOptionsMenuFireModeButton_C_BndEvt__ButtonTouchTooltip_K2Node_ComponentBoundEvent_11_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.BndEvt__ChangeFireModeButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuFireModeButton_C::BndEvt__ChangeFireModeButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static auto Func = Class->GetFunction("OptionsMenuFireModeButton_C", "BndEvt__ChangeFireModeButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature");

	Params::UOptionsMenuFireModeButton_C_BndEvt__ChangeFireModeButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature_Params Parms;

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OptionsMenuFireModeButton.OptionsMenuFireModeButton_C.ExecuteUbergraph_OptionsMenuFireModeButton
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 Temp_object_Variable                                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CreateWidgetAsync*CallFunc_CreateWidgetAsync_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUDLayoutToolFireModePanel_C*K2Node_DynamicCast_AsHUDLayout_Tool_Fire_Mode_Panel              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsSelected                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// class UObject*                     K2Node_Event_ListItemObject                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSettingInfo*            K2Node_DynamicCast_AsFort_Setting_Info                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_bIsExpanded                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_CustomEvent_UserWidget                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TextIsEmpty_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGlobalUIContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingGamepad_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOptionsMenuFireModeButton_C::ExecuteUbergraph_OptionsMenuFireModeButton(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUserWidget* Temp_object_Variable, class UFortAsyncAction_CreateWidgetAsync* CallFunc_CreateWidgetAsync_ReturnValue, class UHUDLayoutToolFireModePanel_C* K2Node_DynamicCast_AsHUDLayout_Tool_Fire_Mode_Panel, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_bIsSelected, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, class UObject* K2Node_Event_ListItemObject, class UFortSettingInfo* K2Node_DynamicCast_AsFort_Setting_Info, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_Event_bIsExpanded, class UUserWidget* K2Node_CustomEvent_UserWidget, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsMobileGame_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button_1, bool CallFunc_TextIsEmpty_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, bool CallFunc_IsMobileGame_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, bool CallFunc_TextIsEmpty_ReturnValue_1, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, float K2Node_Select_Default, enum class ESlateVisibility Temp_byte_Variable_1, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsUsingGamepad_ReturnValue, bool Temp_bool_Variable_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ESlateVisibility K2Node_Select_Default_1)
{
	static auto Func = Class->GetFunction("OptionsMenuFireModeButton_C", "ExecuteUbergraph_OptionsMenuFireModeButton");

	Params::UOptionsMenuFireModeButton_C_ExecuteUbergraph_OptionsMenuFireModeButton_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_CreateWidgetAsync_ReturnValue = CallFunc_CreateWidgetAsync_ReturnValue;
	Parms.K2Node_DynamicCast_AsHUDLayout_Tool_Fire_Mode_Panel = K2Node_DynamicCast_AsHUDLayout_Tool_Fire_Mode_Panel;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_bIsSelected = K2Node_Event_bIsSelected;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_Event_ListItemObject = K2Node_Event_ListItemObject;
	Parms.K2Node_DynamicCast_AsFort_Setting_Info = K2Node_DynamicCast_AsFort_Setting_Info;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_bIsExpanded = K2Node_Event_bIsExpanded;
	Parms.K2Node_CustomEvent_UserWidget = K2Node_CustomEvent_UserWidget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button_1 = K2Node_ComponentBoundEvent_Button_1;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_IsMobileGame_ReturnValue_1 = CallFunc_IsMobileGame_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_TextIsEmpty_ReturnValue_1 = CallFunc_TextIsEmpty_ReturnValue_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_IsUsingGamepad_ReturnValue = CallFunc_IsUsingGamepad_ReturnValue;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
