#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass GlobalActionKeybindWidget.GlobalActionKeybindWidget_C
// (None)

class UClass* UGlobalActionKeybindWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GlobalActionKeybindWidget_C");

	return Clss;
}


// GlobalActionKeybindWidget_C GlobalActionKeybindWidget.Default__GlobalActionKeybindWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGlobalActionKeybindWidget_C* UGlobalActionKeybindWidget_C::GetDefaultObj()
{
	static class UGlobalActionKeybindWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGlobalActionKeybindWidget_C*>(UGlobalActionKeybindWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.PropagateActionDetailsContext
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGlobalActionKeybindWidget_C::PropagateActionDetailsContext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalActionKeybindWidget_C", "PropagateActionDetailsContext");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.SetActionDetailsContext
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortGlobalActionDetailsFunctionContextValue                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UGlobalActionKeybindWidget_C::SetActionDetailsContext(const struct FFortGlobalActionDetailsFunctionContext& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalActionKeybindWidget_C", "SetActionDetailsContext");

	Params::UGlobalActionKeybindWidget_C_SetActionDetailsContext_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.SetGlobalAction
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortGlobalAction       Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGlobalActionKeybindWidget_C::SetGlobalAction(enum class EFortGlobalAction Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalActionKeybindWidget_C", "SetGlobalAction");

	Params::UGlobalActionKeybindWidget_C_SetGlobalAction_Params Parms{};

	Parms.Value = Value;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.PropagateGlobalAction
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UGlobalActionKeybindWidget_C::PropagateGlobalAction()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalActionKeybindWidget_C", "PropagateGlobalAction");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UGlobalActionKeybindWidget_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalActionKeybindWidget_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function GlobalActionKeybindWidget.GlobalActionKeybindWidget_C.ExecuteUbergraph_GlobalActionKeybindWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortGlobalActionDetailsFunctionContextTemp_struct_Variable                                             (ConstParm, NoDestructor)
// class UFortStandardGlobalActionDetailsDataSource*CallFunc_ConstructWithDefaultContexts_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IFortGlobalActionDetailsDataSource>CallFunc_SetActionSource_Value_CastInput                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void UGlobalActionKeybindWidget_C::ExecuteUbergraph_GlobalActionKeybindWidget(int32 EntryPoint, const struct FFortGlobalActionDetailsFunctionContext& Temp_struct_Variable, class UFortStandardGlobalActionDetailsDataSource* CallFunc_ConstructWithDefaultContexts_ReturnValue, TScriptInterface<class IFortGlobalActionDetailsDataSource> CallFunc_SetActionSource_Value_CastInput)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("GlobalActionKeybindWidget_C", "ExecuteUbergraph_GlobalActionKeybindWidget");

	Params::UGlobalActionKeybindWidget_C_ExecuteUbergraph_GlobalActionKeybindWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_ConstructWithDefaultContexts_ReturnValue = CallFunc_ConstructWithDefaultContexts_ReturnValue;
	Parms.CallFunc_SetActionSource_Value_CastInput = CallFunc_SetActionSource_Value_CastInput;

	UObject::ProcessEvent(Func, &Parms);

}

}


