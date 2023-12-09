#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StatusWidget.StatusWidget_C
// (None)

class UClass* UStatusWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatusWidget_C");

	return Clss;
}


// StatusWidget_C StatusWidget.Default__StatusWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatusWidget_C* UStatusWidget_C::GetDefaultObj()
{
	static class UStatusWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatusWidget_C*>(UStatusWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StatusWidget.StatusWidget_C.SetContinueButtonText
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        ContinueText                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UStatusWidget_C::SetContinueButtonText(class FText& ContinueText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusWidget_C", "SetContinueButtonText");

	Params::UStatusWidget_C_SetContinueButtonText_Params Parms{};

	Parms.ContinueText = ContinueText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function StatusWidget.StatusWidget_C.ExecuteUbergraph_StatusWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_ContinueText                                        (ConstParm)
// class UIconTextButton_C*           K2Node_DynamicCast_AsIcon_Text_Button                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UStatusWidget_C::ExecuteUbergraph_StatusWidget(int32 EntryPoint, class FText K2Node_Event_ContinueText, class UIconTextButton_C* K2Node_DynamicCast_AsIcon_Text_Button, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatusWidget_C", "ExecuteUbergraph_StatusWidget");

	Params::UStatusWidget_C_ExecuteUbergraph_StatusWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ContinueText = K2Node_Event_ContinueText;
	Parms.K2Node_DynamicCast_AsIcon_Text_Button = K2Node_DynamicCast_AsIcon_Text_Button;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


