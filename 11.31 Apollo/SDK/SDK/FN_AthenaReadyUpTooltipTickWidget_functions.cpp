#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaReadyUpTooltipTickWidget.AthenaReadyUpTooltipTickWidget_C
// (None)

class UClass* UAthenaReadyUpTooltipTickWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaReadyUpTooltipTickWidget_C");

	return Clss;
}


// AthenaReadyUpTooltipTickWidget_C AthenaReadyUpTooltipTickWidget.Default__AthenaReadyUpTooltipTickWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaReadyUpTooltipTickWidget_C* UAthenaReadyUpTooltipTickWidget_C::GetDefaultObj()
{
	static class UAthenaReadyUpTooltipTickWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaReadyUpTooltipTickWidget_C*>(UAthenaReadyUpTooltipTickWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaReadyUpTooltipTickWidget.AthenaReadyUpTooltipTickWidget_C.SetReadiness
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bIsReady                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReadyUpTooltipTickWidget_C::SetReadiness(bool bIsReady, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaReadyUpTooltipTickWidget_C", "SetReadiness");

	Params::UAthenaReadyUpTooltipTickWidget_C_SetReadiness_Params Parms{};

	Parms.bIsReady = bIsReady;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReadyUpTooltipTickWidget.AthenaReadyUpTooltipTickWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaReadyUpTooltipTickWidget_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaReadyUpTooltipTickWidget_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaReadyUpTooltipTickWidget.AthenaReadyUpTooltipTickWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaReadyUpTooltipTickWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaReadyUpTooltipTickWidget_C", "PreConstruct");

	Params::UAthenaReadyUpTooltipTickWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReadyUpTooltipTickWidget.AthenaReadyUpTooltipTickWidget_C.OnSetPartyMember
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPartyMember*            NewPartyMember                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaReadyUpTooltipTickWidget_C::OnSetPartyMember(class UFortPartyMember* NewPartyMember)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaReadyUpTooltipTickWidget_C", "OnSetPartyMember");

	Params::UAthenaReadyUpTooltipTickWidget_C_OnSetPartyMember_Params Parms{};

	Parms.NewPartyMember = NewPartyMember;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaReadyUpTooltipTickWidget.AthenaReadyUpTooltipTickWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaReadyUpTooltipTickWidget_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaReadyUpTooltipTickWidget_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaReadyUpTooltipTickWidget.AthenaReadyUpTooltipTickWidget_C.ExecuteUbergraph_AthenaReadyUpTooltipTickWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UFortPartyMember*            K2Node_Event_NewPartyMember                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UAthenaReadyUpTooltipTickWidget_C::ExecuteUbergraph_AthenaReadyUpTooltipTickWidget(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UFortPartyMember* K2Node_Event_NewPartyMember, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaReadyUpTooltipTickWidget_C", "ExecuteUbergraph_AthenaReadyUpTooltipTickWidget");

	Params::UAthenaReadyUpTooltipTickWidget_C_ExecuteUbergraph_AthenaReadyUpTooltipTickWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_NewPartyMember = K2Node_Event_NewPartyMember;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


