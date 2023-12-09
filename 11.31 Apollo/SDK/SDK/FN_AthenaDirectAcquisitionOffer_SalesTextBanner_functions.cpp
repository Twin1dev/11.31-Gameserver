#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C
// (None)

class UClass* UAthenaDirectAcquisitionOffer_SalesTextBanner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaDirectAcquisitionOffer_SalesTextBanner_C");

	return Clss;
}


// AthenaDirectAcquisitionOffer_SalesTextBanner_C AthenaDirectAcquisitionOffer_SalesTextBanner.Default__AthenaDirectAcquisitionOffer_SalesTextBanner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaDirectAcquisitionOffer_SalesTextBanner_C* UAthenaDirectAcquisitionOffer_SalesTextBanner_C::GetDefaultObj()
{
	static class UAthenaDirectAcquisitionOffer_SalesTextBanner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaDirectAcquisitionOffer_SalesTextBanner_C*>(UAthenaDirectAcquisitionOffer_SalesTextBanner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C.Set Sales Text
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Sales_Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)

void UAthenaDirectAcquisitionOffer_SalesTextBanner_C::Set_Sales_Text(class FText Sales_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOffer_SalesTextBanner_C", "Set Sales Text");

	Params::UAthenaDirectAcquisitionOffer_SalesTextBanner_C_Set_Sales_Text_Params Parms{};

	Parms.Sales_Text = Sales_Text;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaDirectAcquisitionOffer_SalesTextBanner_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOffer_SalesTextBanner_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOffer_SalesTextBanner_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOffer_SalesTextBanner_C", "PreConstruct");

	Params::UAthenaDirectAcquisitionOffer_SalesTextBanner_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaDirectAcquisitionOffer_SalesTextBanner.AthenaDirectAcquisitionOffer_SalesTextBanner_C.ExecuteUbergraph_AthenaDirectAcquisitionOffer_SalesTextBanner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_CustomEvent_Sales_Text                                    (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaDirectAcquisitionOffer_SalesTextBanner_C::ExecuteUbergraph_AthenaDirectAcquisitionOffer_SalesTextBanner(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, float Temp_float_Variable_1, class FText K2Node_CustomEvent_Sales_Text, bool CallFunc_TextIsEmpty_ReturnValue, class FText CallFunc_TextToUpper_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float K2Node_Select_Default, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaDirectAcquisitionOffer_SalesTextBanner_C", "ExecuteUbergraph_AthenaDirectAcquisitionOffer_SalesTextBanner");

	Params::UAthenaDirectAcquisitionOffer_SalesTextBanner_C_ExecuteUbergraph_AthenaDirectAcquisitionOffer_SalesTextBanner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.K2Node_CustomEvent_Sales_Text = K2Node_CustomEvent_Sales_Text;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


