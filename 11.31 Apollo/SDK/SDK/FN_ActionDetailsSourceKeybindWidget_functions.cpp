#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C
// (None)

class UClass* UActionDetailsSourceKeybindWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActionDetailsSourceKeybindWidget_C");

	return Clss;
}


// ActionDetailsSourceKeybindWidget_C ActionDetailsSourceKeybindWidget.Default__ActionDetailsSourceKeybindWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UActionDetailsSourceKeybindWidget_C* UActionDetailsSourceKeybindWidget_C::GetDefaultObj()
{
	static class UActionDetailsSourceKeybindWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UActionDetailsSourceKeybindWidget_C*>(UActionDetailsSourceKeybindWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.HandleActionSourceValueChange
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Source                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UActionDetailsSourceKeybindWidget_C::HandleActionSourceValueChange(class UObject* Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionDetailsSourceKeybindWidget_C", "HandleActionSourceValueChange");

	Params::UActionDetailsSourceKeybindWidget_C_HandleActionSourceValueChange_Params Parms{};

	Parms.Source = Source;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.BindActionSourceEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionDetailsSourceKeybindWidget_C::BindActionSourceEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionDetailsSourceKeybindWidget_C", "BindActionSourceEvents");

	Params::UActionDetailsSourceKeybindWidget_C_BindActionSourceEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.UnbindActionSourceEvents
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionDetailsSourceKeybindWidget_C::UnbindActionSourceEvents(UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionDetailsSourceKeybindWidget_C", "UnbindActionSourceEvents");

	Params::UActionDetailsSourceKeybindWidget_C_UnbindActionSourceEvents_Params Parms{};

	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.SetActionSource
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IFortGlobalActionDetailsDataSource>Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionDetailsSourceKeybindWidget_C::SetActionSource(TScriptInterface<class IFortGlobalActionDetailsDataSource> Value, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionDetailsSourceKeybindWidget_C", "SetActionSource");

	Params::UActionDetailsSourceKeybindWidget_C_SetActionSource_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue_1 = CallFunc_Conv_InterfaceToObject_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ActionDetailsSourceKeybindWidget.ActionDetailsSourceKeybindWidget_C.UpdateInputAction
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortGlobalActionDetails    ActionDetails                                                    (Edit, BlueprintVisible, NoDestructor)
// enum class EFortKeybindForcedHoldStatusTemp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortKeybindForcedHoldStatusTemp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFortGlobalActionDetails    CallFunc_GetValue_ReturnValue                                    (NoDestructor)
// enum class EFortKeybindForcedHoldStatusK2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UActionDetailsSourceKeybindWidget_C::UpdateInputAction(const struct FFortGlobalActionDetails& ActionDetails, enum class EFortKeybindForcedHoldStatus Temp_byte_Variable, enum class EFortKeybindForcedHoldStatus Temp_byte_Variable_1, bool Temp_bool_Variable, const struct FFortGlobalActionDetails& CallFunc_GetValue_ReturnValue, enum class EFortKeybindForcedHoldStatus K2Node_Select_Default, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ActionDetailsSourceKeybindWidget_C", "UpdateInputAction");

	Params::UActionDetailsSourceKeybindWidget_C_UpdateInputAction_Params Parms{};

	Parms.ActionDetails = ActionDetails;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetValue_ReturnValue = CallFunc_GetValue_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


