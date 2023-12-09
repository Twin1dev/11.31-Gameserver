#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaHUDSituationalFeedback.AthenaHUDSituationalFeedback_C
// (None)

class UClass* UAthenaHUDSituationalFeedback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaHUDSituationalFeedback_C");

	return Clss;
}


// AthenaHUDSituationalFeedback_C AthenaHUDSituationalFeedback.Default__AthenaHUDSituationalFeedback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaHUDSituationalFeedback_C* UAthenaHUDSituationalFeedback_C::GetDefaultObj()
{
	static class UAthenaHUDSituationalFeedback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaHUDSituationalFeedback_C*>(UAthenaHUDSituationalFeedback_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaHUDSituationalFeedback.AthenaHUDSituationalFeedback_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaHUDSituationalFeedback_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaHUDSituationalFeedback_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaHUDSituationalFeedback.AthenaHUDSituationalFeedback_C.HideFeedback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaHUDSituationalFeedback_C::HideFeedback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaHUDSituationalFeedback_C", "HideFeedback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaHUDSituationalFeedback.AthenaHUDSituationalFeedback_C.ShowFeedback
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaHUDSituationalFeedback_C::ShowFeedback()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaHUDSituationalFeedback_C", "ShowFeedback");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaHUDSituationalFeedback.AthenaHUDSituationalFeedback_C.ExecuteUbergraph_AthenaHUDSituationalFeedback
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaHUDFeedbackLine_C*    CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaHUDSituationalFeedback_C::ExecuteUbergraph_AthenaHUDSituationalFeedback(int32 EntryPoint, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UAthenaHUDFeedbackLine_C* CallFunc_Create_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaHUDSituationalFeedback_C", "ExecuteUbergraph_AthenaHUDSituationalFeedback");

	Params::UAthenaHUDSituationalFeedback_C_ExecuteUbergraph_AthenaHUDSituationalFeedback_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


