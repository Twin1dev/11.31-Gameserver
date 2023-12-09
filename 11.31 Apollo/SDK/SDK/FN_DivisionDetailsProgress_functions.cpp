#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass DivisionDetailsProgress.DivisionDetailsProgress_C
// (None)

class UClass* UDivisionDetailsProgress_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DivisionDetailsProgress_C");

	return Clss;
}


// DivisionDetailsProgress_C DivisionDetailsProgress.Default__DivisionDetailsProgress_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDivisionDetailsProgress_C* UDivisionDetailsProgress_C::GetDefaultObj()
{
	static class UDivisionDetailsProgress_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDivisionDetailsProgress_C*>(UDivisionDetailsProgress_C::StaticClass()->DefaultObject);

	return Default;
}


// Function DivisionDetailsProgress.DivisionDetailsProgress_C.OnSetInProgress
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              NewPercent                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bIsInProgress                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDivisionDetailsProgress_C::OnSetInProgress(float NewPercent, bool bIsInProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DivisionDetailsProgress_C", "OnSetInProgress");

	Params::UDivisionDetailsProgress_C_OnSetInProgress_Params Parms{};

	Parms.NewPercent = NewPercent;
	Parms.bIsInProgress = bIsInProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DivisionDetailsProgress.DivisionDetailsProgress_C.ExecuteUbergraph_DivisionDetailsProgress
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_NewPercent                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bIsInProgress                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_FClamp_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDivisionDetailsProgress_C::ExecuteUbergraph_DivisionDetailsProgress(int32 EntryPoint, float K2Node_Event_NewPercent, bool K2Node_Event_bIsInProgress, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DivisionDetailsProgress_C", "ExecuteUbergraph_DivisionDetailsProgress");

	Params::UDivisionDetailsProgress_C_ExecuteUbergraph_DivisionDetailsProgress_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_NewPercent = K2Node_Event_NewPercent;
	Parms.K2Node_Event_bIsInProgress = K2Node_Event_bIsInProgress;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_FClamp_ReturnValue = CallFunc_FClamp_ReturnValue;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


