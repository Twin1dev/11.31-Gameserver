#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass MatchXPDetailsEntry.MatchXPDetailsEntry_C
// (None)

class UClass* UMatchXPDetailsEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MatchXPDetailsEntry_C");

	return Clss;
}


// MatchXPDetailsEntry_C MatchXPDetailsEntry.Default__MatchXPDetailsEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMatchXPDetailsEntry_C* UMatchXPDetailsEntry_C::GetDefaultObj()
{
	static class UMatchXPDetailsEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMatchXPDetailsEntry_C*>(UMatchXPDetailsEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function MatchXPDetailsEntry.MatchXPDetailsEntry_C.OnLoaded_600FCFEB457CB32513DFB08FFE932A22
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPDetailsEntry_C::OnLoaded_600FCFEB457CB32513DFB08FFE932A22(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPDetailsEntry_C", "OnLoaded_600FCFEB457CB32513DFB08FFE932A22");

	Params::UMatchXPDetailsEntry_C_OnLoaded_600FCFEB457CB32513DFB08FFE932A22_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPDetailsEntry.MatchXPDetailsEntry_C.SetCount
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Count                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPDetailsEntry_C::SetCount(int32 Count)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPDetailsEntry_C", "SetCount");

	Params::UMatchXPDetailsEntry_C_SetCount_Params Parms{};

	Parms.Count = Count;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPDetailsEntry.MatchXPDetailsEntry_C.SetIcon
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortAccoladeItemDefinition* ItemDef                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMatchXPDetailsEntry_C::SetIcon(class UFortAccoladeItemDefinition* ItemDef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPDetailsEntry_C", "SetIcon");

	Params::UMatchXPDetailsEntry_C_SetIcon_Params Parms{};

	Parms.ItemDef = ItemDef;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPDetailsEntry.MatchXPDetailsEntry_C.SetSource
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        SourceText                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMatchXPDetailsEntry_C::SetSource(class FText& SourceText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPDetailsEntry_C", "SetSource");

	Params::UMatchXPDetailsEntry_C_SetSource_Params Parms{};

	Parms.SourceText = SourceText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPDetailsEntry.MatchXPDetailsEntry_C.SetTitle
// (Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        TitleText                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UMatchXPDetailsEntry_C::SetTitle(class FText& TitleText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPDetailsEntry_C", "SetTitle");

	Params::UMatchXPDetailsEntry_C_SetTitle_Params Parms{};

	Parms.TitleText = TitleText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPDetailsEntry.MatchXPDetailsEntry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMatchXPDetailsEntry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPDetailsEntry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function MatchXPDetailsEntry.MatchXPDetailsEntry_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMatchXPDetailsEntry_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPDetailsEntry_C", "PreConstruct");

	Params::UMatchXPDetailsEntry_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MatchXPDetailsEntry.MatchXPDetailsEntry_C.ExecuteUbergraph_MatchXPDetailsEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomInteger_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Event_Count                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAccoladeItemDefinition* K2Node_Event_ItemDef                                             (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetLargePreviewImage_ReturnValue                        (HasGetValueTypeHash)
// enum class EFortAccoladeType       CallFunc_GetAccoladeType_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_SourceText                                          (ConstParm)
// class FText                        K2Node_Event_TitleText                                           (ConstParm)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_RandomInteger_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RandomBool_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UMatchXPDetailsEntry_C::ExecuteUbergraph_MatchXPDetailsEntry(int32 EntryPoint, int32 CallFunc_RandomInteger_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, int32 K2Node_Event_Count, class UFortAccoladeItemDefinition* K2Node_Event_ItemDef, class FText CallFunc_Conv_IntToText_ReturnValue, TSoftObjectPtr<class UTexture2D> CallFunc_GetLargePreviewImage_ReturnValue, enum class EFortAccoladeType CallFunc_GetAccoladeType_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class FText K2Node_Event_SourceText, class FText K2Node_Event_TitleText, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_IsDesignTime, int32 CallFunc_RandomInteger_ReturnValue_1, bool CallFunc_RandomBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MatchXPDetailsEntry_C", "ExecuteUbergraph_MatchXPDetailsEntry");

	Params::UMatchXPDetailsEntry_C_ExecuteUbergraph_MatchXPDetailsEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomInteger_ReturnValue = CallFunc_RandomInteger_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_Count = K2Node_Event_Count;
	Parms.K2Node_Event_ItemDef = K2Node_Event_ItemDef;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;
	Parms.CallFunc_GetLargePreviewImage_ReturnValue = CallFunc_GetLargePreviewImage_ReturnValue;
	Parms.CallFunc_GetAccoladeType_ReturnValue = CallFunc_GetAccoladeType_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_SourceText = K2Node_Event_SourceText;
	Parms.K2Node_Event_TitleText = K2Node_Event_TitleText;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_RandomInteger_ReturnValue_1 = CallFunc_RandomInteger_ReturnValue_1;
	Parms.CallFunc_RandomBool_ReturnValue = CallFunc_RandomBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


