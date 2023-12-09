#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PurchaseUnavailable.PurchaseUnavailable_C
// (None)

class UClass* UPurchaseUnavailable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PurchaseUnavailable_C");

	return Clss;
}


// PurchaseUnavailable_C PurchaseUnavailable.Default__PurchaseUnavailable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPurchaseUnavailable_C* UPurchaseUnavailable_C::GetDefaultObj()
{
	static class UPurchaseUnavailable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPurchaseUnavailable_C*>(UPurchaseUnavailable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PurchaseUnavailable.PurchaseUnavailable_C.OnUpdateTextStyle
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        OfferDisplayName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPurchaseUnavailable_C::OnUpdateTextStyle(class FText& OfferDisplayName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PurchaseUnavailable_C", "OnUpdateTextStyle");

	Params::UPurchaseUnavailable_C_OnUpdateTextStyle_Params Parms{};

	Parms.OfferDisplayName = OfferDisplayName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PurchaseUnavailable.PurchaseUnavailable_C.ExecuteUbergraph_PurchaseUnavailable
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_OfferDisplayName                                    (ConstParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ZeroConstructor, ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UPurchaseUnavailable_C::ExecuteUbergraph_PurchaseUnavailable(int32 EntryPoint, class FText K2Node_Event_OfferDisplayName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PurchaseUnavailable_C", "ExecuteUbergraph_PurchaseUnavailable");

	Params::UPurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OfferDisplayName = K2Node_Event_OfferDisplayName;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


