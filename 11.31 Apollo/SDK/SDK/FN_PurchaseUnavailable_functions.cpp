#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function PurchaseUnavailable.PurchaseUnavailable_C.OnUpdateTextStyle
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        OfferDisplayName                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPurchaseUnavailable_C::OnUpdateTextStyle(class FText& OfferDisplayName)
{
	static auto Func = Class->GetFunction("PurchaseUnavailable_C", "OnUpdateTextStyle");

	Params::UPurchaseUnavailable_C_OnUpdateTextStyle_Params Parms;

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
// class FText                        CallFunc_Format_ReturnValue                                      ()

void UPurchaseUnavailable_C::ExecuteUbergraph_PurchaseUnavailable(int32 EntryPoint, class FText K2Node_Event_OfferDisplayName, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static auto Func = Class->GetFunction("PurchaseUnavailable_C", "ExecuteUbergraph_PurchaseUnavailable");

	Params::UPurchaseUnavailable_C_ExecuteUbergraph_PurchaseUnavailable_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_OfferDisplayName = K2Node_Event_OfferDisplayName;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
