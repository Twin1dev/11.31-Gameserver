#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass EventRegionLockMessage.EventRegionLockMessage_C
// (None)

class UClass* UEventRegionLockMessage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EventRegionLockMessage_C");

	return Clss;
}


// EventRegionLockMessage_C EventRegionLockMessage.Default__EventRegionLockMessage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEventRegionLockMessage_C* UEventRegionLockMessage_C::GetDefaultObj()
{
	static class UEventRegionLockMessage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEventRegionLockMessage_C*>(UEventRegionLockMessage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function EventRegionLockMessage.EventRegionLockMessage_C.RefreshDataBP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UEventRegionLockMessage_C::RefreshDataBP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventRegionLockMessage_C", "RefreshDataBP");



	UObject::ProcessEvent(Func, nullptr);

}


// Function EventRegionLockMessage.EventRegionLockMessage_C.ExecuteUbergraph_EventRegionLockMessage
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetCurrentRegionName_ReturnValue                        (None)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_TextToUpper_ReturnValue_1                               (None)
// class FText                        CallFunc_TextToUpper_ReturnValue_2                               (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_2                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_3                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)

void UEventRegionLockMessage_C::ExecuteUbergraph_EventRegionLockMessage(int32 EntryPoint, class FText CallFunc_GetCurrentRegionName_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_TextToUpper_ReturnValue_1, class FText CallFunc_TextToUpper_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EventRegionLockMessage_C", "ExecuteUbergraph_EventRegionLockMessage");

	Params::UEventRegionLockMessage_C_ExecuteUbergraph_EventRegionLockMessage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetCurrentRegionName_ReturnValue = CallFunc_GetCurrentRegionName_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_TextToUpper_ReturnValue_1 = CallFunc_TextToUpper_ReturnValue_1;
	Parms.CallFunc_TextToUpper_ReturnValue_2 = CallFunc_TextToUpper_ReturnValue_2;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeStruct_FormatArgumentData_2 = K2Node_MakeStruct_FormatArgumentData_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_3 = K2Node_MakeStruct_FormatArgumentData_3;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


