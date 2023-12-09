#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUD_XP_Pop_Widget.HUD_XP_Pop_Widget_C
// (None)

class UClass* UHUD_XP_Pop_Widget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_XP_Pop_Widget_C");

	return Clss;
}


// HUD_XP_Pop_Widget_C HUD_XP_Pop_Widget.Default__HUD_XP_Pop_Widget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUD_XP_Pop_Widget_C* UHUD_XP_Pop_Widget_C::GetDefaultObj()
{
	static class UHUD_XP_Pop_Widget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUD_XP_Pop_Widget_C*>(UHUD_XP_Pop_Widget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUD_XP_Pop_Widget.HUD_XP_Pop_Widget_C.UpdateXPAmount
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              NewAmount                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundCue*                   Cue                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_XP_Pop_Widget_C::UpdateXPAmount(int32 NewAmount, class USoundCue* Cue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_XP_Pop_Widget_C", "UpdateXPAmount");

	Params::UHUD_XP_Pop_Widget_C_UpdateXPAmount_Params Parms{};

	Parms.NewAmount = NewAmount;
	Parms.Cue = Cue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_XP_Pop_Widget.HUD_XP_Pop_Widget_C.UpdateXPSource
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        NewSourceText                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UHUD_XP_Pop_Widget_C::UpdateXPSource(class FText& NewSourceText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_XP_Pop_Widget_C", "UpdateXPSource");

	Params::UHUD_XP_Pop_Widget_C_UpdateXPSource_Params Parms{};

	Parms.NewSourceText = NewSourceText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_XP_Pop_Widget.HUD_XP_Pop_Widget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUD_XP_Pop_Widget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_XP_Pop_Widget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_XP_Pop_Widget.HUD_XP_Pop_Widget_C.OutroFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUD_XP_Pop_Widget_C::OutroFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_XP_Pop_Widget_C", "OutroFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_XP_Pop_Widget.HUD_XP_Pop_Widget_C.SetRestedVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUD_XP_Pop_Widget_C::SetRestedVisuals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_XP_Pop_Widget_C", "SetRestedVisuals");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_XP_Pop_Widget.HUD_XP_Pop_Widget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_XP_Pop_Widget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_XP_Pop_Widget_C", "PreConstruct");

	Params::UHUD_XP_Pop_Widget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_XP_Pop_Widget.HUD_XP_Pop_Widget_C.EventEmptySources
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUD_XP_Pop_Widget_C::EventEmptySources()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_XP_Pop_Widget_C", "EventEmptySources");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_XP_Pop_Widget.HUD_XP_Pop_Widget_C.SetSourceRestedVisuals
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UHUD_XP_Pop_Source_C*        SourceWidget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_XP_Pop_Widget_C::SetSourceRestedVisuals(class UHUD_XP_Pop_Source_C* SourceWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_XP_Pop_Widget_C", "SetSourceRestedVisuals");

	Params::UHUD_XP_Pop_Widget_C_SetSourceRestedVisuals_Params Parms{};

	Parms.SourceWidget = SourceWidget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_XP_Pop_Widget.HUD_XP_Pop_Widget_C.UpdateRestXP
// (Event, Protected, BlueprintEvent)
// Parameters:
// int32                              RestXpRemaining                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_XP_Pop_Widget_C::UpdateRestXP(int32 RestXpRemaining)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_XP_Pop_Widget_C", "UpdateRestXP");

	Params::UHUD_XP_Pop_Widget_C_UpdateRestXP_Params Parms{};

	Parms.RestXpRemaining = RestXpRemaining;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_XP_Pop_Widget.HUD_XP_Pop_Widget_C.ExecuteUbergraph_HUD_XP_Pop_Widget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_NewAmount                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundCue*                   K2Node_Event_Cue                                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_NewSourceText                                       (ConstParm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UHUD_XP_Pop_Source_C*        K2Node_CustomEvent_SourceWidget                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_2                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Array_Get_Item_3                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// class UMaterialInterface*          K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_RestXpRemaining                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UHUD_XP_Pop_Source_C*        CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class UWidget*>             CallFunc_GetAllChildren_ReturnValue                              (ZeroConstructor, ReferenceParm, ContainsInstancedReference)
// struct FLinearColor                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFontOutlineSettings        K2Node_MakeStruct_FontOutlineSettings                            (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHUD_XP_Pop_Source_C*        K2Node_DynamicCast_AsHUD_XP_Pop_Source                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFontOutlineSettings        K2Node_MakeStruct_FontOutlineSettings_1                          (NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_1                                (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFontOutlineSettings        K2Node_MakeStruct_FontOutlineSettings_2                          (NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_2                                (HasGetValueTypeHash)
// struct FFontOutlineSettings        K2Node_MakeStruct_FontOutlineSettings_3                          (NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_3                                (HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_XP_Pop_Widget_C::ExecuteUbergraph_HUD_XP_Pop_Widget(int32 EntryPoint, bool Temp_bool_Variable, int32 K2Node_Event_NewAmount, class USoundCue* K2Node_Event_Cue, class FText K2Node_Event_NewSourceText, bool CallFunc_TextIsEmpty_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, const struct FLinearColor& CallFunc_Array_Get_Item, const struct FLinearColor& CallFunc_Array_Get_Item_1, bool Temp_bool_Variable_1, int32 Temp_int_Variable, bool K2Node_Event_IsDesignTime, class UMaterialInterface* Temp_object_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UHUD_XP_Pop_Source_C* K2Node_CustomEvent_SourceWidget, const struct FLinearColor& CallFunc_Array_Get_Item_2, const struct FLinearColor& CallFunc_Array_Get_Item_3, class UMaterialInterface* Temp_object_Variable_1, const struct FLinearColor& K2Node_Select_Default, bool Temp_bool_Variable_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, class UMaterialInterface* K2Node_Select_Default_1, int32 K2Node_Event_RestXpRemaining, bool CallFunc_Greater_IntInt_ReturnValue, class UHUD_XP_Pop_Source_C* CallFunc_Create_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, class UPanelSlot* CallFunc_AddChild_ReturnValue, bool Temp_bool_Variable_3, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, const struct FLinearColor& K2Node_Select_Default_2, int32 CallFunc_Array_Length_ReturnValue, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, int32 CallFunc_Subtract_IntInt_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, class UWidget* CallFunc_GetChildAt_ReturnValue, class UHUD_XP_Pop_Source_C* K2Node_DynamicCast_AsHUD_XP_Pop_Source, bool K2Node_DynamicCast_bSuccess, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, bool CallFunc_EqualEqual_TextText_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings_2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_2, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings_3, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_3, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_XP_Pop_Widget_C", "ExecuteUbergraph_HUD_XP_Pop_Widget");

	Params::UHUD_XP_Pop_Widget_C_ExecuteUbergraph_HUD_XP_Pop_Widget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_NewAmount = K2Node_Event_NewAmount;
	Parms.K2Node_Event_Cue = K2Node_Event_Cue;
	Parms.K2Node_Event_NewSourceText = K2Node_Event_NewSourceText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue_1 = CallFunc_Conv_IntToFloat_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_SourceWidget = K2Node_CustomEvent_SourceWidget;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.K2Node_Event_RestXpRemaining = K2Node_Event_RestXpRemaining;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.Temp_bool_Variable_3 = Temp_bool_Variable_3;
	Parms.CallFunc_GetAllChildren_ReturnValue = CallFunc_GetAllChildren_ReturnValue;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_MakeStruct_FontOutlineSettings = K2Node_MakeStruct_FontOutlineSettings;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsHUD_XP_Pop_Source = K2Node_DynamicCast_AsHUD_XP_Pop_Source;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeStruct_FontOutlineSettings_1 = K2Node_MakeStruct_FontOutlineSettings_1;
	Parms.K2Node_MakeStruct_SlateFontInfo_1 = K2Node_MakeStruct_SlateFontInfo_1;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FontOutlineSettings_2 = K2Node_MakeStruct_FontOutlineSettings_2;
	Parms.K2Node_MakeStruct_SlateFontInfo_2 = K2Node_MakeStruct_SlateFontInfo_2;
	Parms.K2Node_MakeStruct_FontOutlineSettings_3 = K2Node_MakeStruct_FontOutlineSettings_3;
	Parms.K2Node_MakeStruct_SlateFontInfo_3 = K2Node_MakeStruct_SlateFontInfo_3;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default_3 = K2Node_Select_Default_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


