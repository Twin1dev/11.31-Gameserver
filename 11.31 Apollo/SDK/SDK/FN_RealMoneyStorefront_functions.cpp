#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RealMoneyStorefront.RealMoneyStorefront_C
// (None)

class UClass* URealMoneyStorefront_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RealMoneyStorefront_C");

	return Clss;
}


// RealMoneyStorefront_C RealMoneyStorefront.Default__RealMoneyStorefront_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URealMoneyStorefront_C* URealMoneyStorefront_C::GetDefaultObj()
{
	static class URealMoneyStorefront_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URealMoneyStorefront_C*>(URealMoneyStorefront_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RealMoneyStorefront.RealMoneyStorefront_C.OnSectionEstablished
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bEmptySection                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void URealMoneyStorefront_C::OnSectionEstablished(bool bEmptySection)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RealMoneyStorefront_C", "OnSectionEstablished");

	Params::URealMoneyStorefront_C_OnSectionEstablished_Params Parms{};

	Parms.bEmptySection = bEmptySection;

	UObject::ProcessEvent(Func, &Parms);

}


// Function RealMoneyStorefront.RealMoneyStorefront_C.ExecuteUbergraph_RealMoneyStorefront
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bEmptySection                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidget*                     K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void URealMoneyStorefront_C::ExecuteUbergraph_RealMoneyStorefront(int32 EntryPoint, bool K2Node_Event_bEmptySection, bool Temp_bool_Variable, class UWidget* K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RealMoneyStorefront_C", "ExecuteUbergraph_RealMoneyStorefront");

	Params::URealMoneyStorefront_C_ExecuteUbergraph_RealMoneyStorefront_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_bEmptySection = K2Node_Event_bEmptySection;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}


