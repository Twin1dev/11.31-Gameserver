#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HUD_XP_Feed_Entry.HUD_XP_Feed_Entry_C
// (None)

class UClass* UHUD_XP_Feed_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HUD_XP_Feed_Entry_C");

	return Clss;
}


// HUD_XP_Feed_Entry_C HUD_XP_Feed_Entry.Default__HUD_XP_Feed_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHUD_XP_Feed_Entry_C* UHUD_XP_Feed_Entry_C::GetDefaultObj()
{
	static class UHUD_XP_Feed_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHUD_XP_Feed_Entry_C*>(UHUD_XP_Feed_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HUD_XP_Feed_Entry.HUD_XP_Feed_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UHUD_XP_Feed_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_XP_Feed_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_XP_Feed_Entry.HUD_XP_Feed_Entry_C.OpenWidget
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// int32                              XpValue                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        DisplayName                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bIsRested                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UHUD_XP_Feed_Entry_C::OpenWidget(int32& XpValue, class FText& DisplayName, bool bIsRested)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_XP_Feed_Entry_C", "OpenWidget");

	Params::UHUD_XP_Feed_Entry_C_OpenWidget_Params Parms{};

	Parms.XpValue = XpValue;
	Parms.DisplayName = DisplayName;
	Parms.bIsRested = bIsRested;

	UObject::ProcessEvent(Func, &Parms);

}


// Function HUD_XP_Feed_Entry.HUD_XP_Feed_Entry_C.On Scale Out Done
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUD_XP_Feed_Entry_C::On_Scale_Out_Done()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_XP_Feed_Entry_C", "On Scale Out Done");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_XP_Feed_Entry.HUD_XP_Feed_Entry_C.EventOutro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UHUD_XP_Feed_Entry_C::EventOutro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_XP_Feed_Entry_C", "EventOutro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_XP_Feed_Entry.HUD_XP_Feed_Entry_C.PlayFastOutro
// (Event, Public, BlueprintEvent)
// Parameters:

void UHUD_XP_Feed_Entry_C::PlayFastOutro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_XP_Feed_Entry_C", "PlayFastOutro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HUD_XP_Feed_Entry.HUD_XP_Feed_Entry_C.ExecuteUbergraph_HUD_XP_Feed_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_XpValue                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_DisplayName                                         (ConstParm)
// bool                               K2Node_Event_bIsRested                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFontOutlineSettings        K2Node_MakeStruct_FontOutlineSettings                            (NoDestructor, HasGetValueTypeHash)
// struct FFontOutlineSettings        K2Node_MakeStruct_FontOutlineSettings_1                          (NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo                                  (HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_1                                (HasGetValueTypeHash)
// struct FFontOutlineSettings        K2Node_MakeStruct_FontOutlineSettings_2                          (NoDestructor, HasGetValueTypeHash)
// struct FFontOutlineSettings        K2Node_MakeStruct_FontOutlineSettings_3                          (NoDestructor, HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_2                                (HasGetValueTypeHash)
// struct FSlateFontInfo              K2Node_MakeStruct_SlateFontInfo_3                                (HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHUD_XP_Feed_Entry_C::ExecuteUbergraph_HUD_XP_Feed_Entry(int32 EntryPoint, class UMaterialInterface* Temp_object_Variable, class UMaterialInterface* Temp_object_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 K2Node_Event_XpValue, class FText K2Node_Event_DisplayName, bool K2Node_Event_bIsRested, enum class ESlateVisibility K2Node_Select_Default, class UMaterialInterface* K2Node_Select_Default_1, float CallFunc_Conv_IntToFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& K2Node_Select_Default_2, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings_2, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings_3, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_2, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HUD_XP_Feed_Entry_C", "ExecuteUbergraph_HUD_XP_Feed_Entry");

	Params::UHUD_XP_Feed_Entry_C_ExecuteUbergraph_HUD_XP_Feed_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.K2Node_Event_XpValue = K2Node_Event_XpValue;
	Parms.K2Node_Event_DisplayName = K2Node_Event_DisplayName;
	Parms.K2Node_Event_bIsRested = K2Node_Event_bIsRested;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.K2Node_MakeStruct_FontOutlineSettings = K2Node_MakeStruct_FontOutlineSettings;
	Parms.K2Node_MakeStruct_FontOutlineSettings_1 = K2Node_MakeStruct_FontOutlineSettings_1;
	Parms.K2Node_MakeStruct_SlateFontInfo = K2Node_MakeStruct_SlateFontInfo;
	Parms.K2Node_MakeStruct_SlateFontInfo_1 = K2Node_MakeStruct_SlateFontInfo_1;
	Parms.K2Node_MakeStruct_FontOutlineSettings_2 = K2Node_MakeStruct_FontOutlineSettings_2;
	Parms.K2Node_MakeStruct_FontOutlineSettings_3 = K2Node_MakeStruct_FontOutlineSettings_3;
	Parms.K2Node_MakeStruct_SlateFontInfo_2 = K2Node_MakeStruct_SlateFontInfo_2;
	Parms.K2Node_MakeStruct_SlateFontInfo_3 = K2Node_MakeStruct_SlateFontInfo_3;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


