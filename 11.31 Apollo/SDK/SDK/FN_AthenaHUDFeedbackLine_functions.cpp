#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaHUDFeedbackLine.AthenaHUDFeedbackLine_C
// (None)

class UClass* UAthenaHUDFeedbackLine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaHUDFeedbackLine_C");

	return Clss;
}


// AthenaHUDFeedbackLine_C AthenaHUDFeedbackLine.Default__AthenaHUDFeedbackLine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaHUDFeedbackLine_C* UAthenaHUDFeedbackLine_C::GetDefaultObj()
{
	static class UAthenaHUDFeedbackLine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaHUDFeedbackLine_C*>(UAthenaHUDFeedbackLine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaHUDFeedbackLine.AthenaHUDFeedbackLine_C.Event_DangerPulse
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              AnimSpeed                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUDFeedbackLine_C::Event_DangerPulse(bool Enable, float AnimSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaHUDFeedbackLine_C", "Event_DangerPulse");

	Params::UAthenaHUDFeedbackLine_C_Event_DangerPulse_Params Parms{};

	Parms.Enable = Enable;
	Parms.AnimSpeed = AnimSpeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaHUDFeedbackLine.AthenaHUDFeedbackLine_C.ExecuteUbergraph_AthenaHUDFeedbackLine
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enable                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_AnimSpeed                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUDFeedbackLine_C::ExecuteUbergraph_AthenaHUDFeedbackLine(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, bool K2Node_CustomEvent_Enable, float K2Node_CustomEvent_AnimSpeed, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaHUDFeedbackLine_C", "ExecuteUbergraph_AthenaHUDFeedbackLine");

	Params::UAthenaHUDFeedbackLine_C_ExecuteUbergraph_AthenaHUDFeedbackLine_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CustomEvent_Enable = K2Node_CustomEvent_Enable;
	Parms.K2Node_CustomEvent_AnimSpeed = K2Node_CustomEvent_AnimSpeed;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


