#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C
// (None)

class UClass* UAthenaMOTDTeaserWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaMOTDTeaserWidget_C");

	return Clss;
}


// AthenaMOTDTeaserWidget_C AthenaMOTDTeaserWidget.Default__AthenaMOTDTeaserWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaMOTDTeaserWidget_C* UAthenaMOTDTeaserWidget_C::GetDefaultObj()
{
	static class UAthenaMOTDTeaserWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaMOTDTeaserWidget_C*>(UAthenaMOTDTeaserWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.SetDynamicColors
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                DarkColor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                LightColor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMOTDTeaserWidget_C::SetDynamicColors(const struct FLinearColor& DarkColor, const struct FLinearColor& LightColor, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "SetDynamicColors");

	Params::UAthenaMOTDTeaserWidget_C_SetDynamicColors_Params Parms{};

	Parms.DarkColor = DarkColor;
	Parms.LightColor = LightColor;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.UpdateCurDisplayedNewsVisual
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAthenaNewsEntry            CallFunc_GetNewsByIndex_ReturnValue                              (None)
// int32                              CallFunc_GetNewsCount_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_ColorToLinearColor_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMOTDTeaserWidget_C::UpdateCurDisplayedNewsVisual(bool Temp_bool_Variable, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FAthenaNewsEntry& CallFunc_GetNewsByIndex_ReturnValue, int32 CallFunc_GetNewsCount_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FLinearColor& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "UpdateCurDisplayedNewsVisual");

	Params::UAthenaMOTDTeaserWidget_C_UpdateCurDisplayedNewsVisual_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_GetNewsByIndex_ReturnValue = CallFunc_GetNewsByIndex_ReturnValue;
	Parms.CallFunc_GetNewsCount_ReturnValue = CallFunc_GetNewsCount_ReturnValue;
	Parms.CallFunc_Conv_ColorToLinearColor_ReturnValue = CallFunc_Conv_ColorToLinearColor_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_2 = CallFunc_Conv_IntToFloat_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMOTDTeaserWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "PreConstruct");

	Params::UAthenaMOTDTeaserWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMOTDTeaserWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMOTDTeaserWidget_C::BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature");

	Params::UAthenaMOTDTeaserWidget_C_BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_0_OnListEntryGeneratedDynamic__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.ScrollNextItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaMOTDTeaserWidget_C::ScrollNextItem()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "ScrollNextItem");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UUserWidget*                 Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMOTDTeaserWidget_C::BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature(class UUserWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature");

	Params::UAthenaMOTDTeaserWidget_C_BndEvt__FortAthenaMOTDTileListView_K2Node_ComponentBoundEvent_1_OnListEntryReleasedDynamic__DelegateSignature_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.HandleEntryWidgetHoveredChanged
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NewIsHovered                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaMOTDTeaserWidget_C::HandleEntryWidgetHoveredChanged(bool NewIsHovered)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "HandleEntryWidgetHoveredChanged");

	Params::UAthenaMOTDTeaserWidget_C_HandleEntryWidgetHoveredChanged_Params Parms{};

	Parms.NewIsHovered = NewIsHovered;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButton*               Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMOTDTeaserWidget_C::BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButton* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature");

	Params::UAthenaMOTDTeaserWidget_C_BndEvt__SimpleCommonButton_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.OnNewsPopulated
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaMOTDTeaserWidget_C::OnNewsPopulated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "OnNewsPopulated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMOTDTeaserWidget.AthenaMOTDTeaserWidget_C.ExecuteUbergraph_AthenaMOTDTeaserWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget_1                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaMOTDTile_C*           K2Node_DynamicCast_AsAthena_MOTDTile                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 K2Node_ComponentBoundEvent_Widget                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_NewIsHovered                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAthenaMOTDTile_C*           K2Node_DynamicCast_AsAthena_MOTDTile_1                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButton*               K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// struct FTextBlockStyle             K2Node_MakeStruct_TextBlockStyle                                 (None)

void UAthenaMOTDTeaserWidget_C::ExecuteUbergraph_AthenaMOTDTeaserWidget(int32 EntryPoint, int32 Temp_int_Variable, bool K2Node_Event_IsDesignTime, class UUserWidget* K2Node_ComponentBoundEvent_Widget_1, class UAthenaMOTDTile_C* K2Node_DynamicCast_AsAthena_MOTDTile, bool K2Node_DynamicCast_bSuccess, class UUserWidget* K2Node_ComponentBoundEvent_Widget, bool K2Node_CustomEvent_NewIsHovered, class UAthenaMOTDTile_C* K2Node_DynamicCast_AsAthena_MOTDTile_1, bool K2Node_DynamicCast_bSuccess_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UCommonButton* K2Node_ComponentBoundEvent_Button, int32 CallFunc_Max_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FTextBlockStyle& K2Node_MakeStruct_TextBlockStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDTeaserWidget_C", "ExecuteUbergraph_AthenaMOTDTeaserWidget");

	Params::UAthenaMOTDTeaserWidget_C_ExecuteUbergraph_AthenaMOTDTeaserWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_ComponentBoundEvent_Widget_1 = K2Node_ComponentBoundEvent_Widget_1;
	Parms.K2Node_DynamicCast_AsAthena_MOTDTile = K2Node_DynamicCast_AsAthena_MOTDTile;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_ComponentBoundEvent_Widget = K2Node_ComponentBoundEvent_Widget;
	Parms.K2Node_CustomEvent_NewIsHovered = K2Node_CustomEvent_NewIsHovered;
	Parms.K2Node_DynamicCast_AsAthena_MOTDTile_1 = K2Node_DynamicCast_AsAthena_MOTDTile_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.K2Node_MakeStruct_TextBlockStyle = K2Node_MakeStruct_TextBlockStyle;

	UObject::ProcessEvent(Func, &Parms);

}

}


