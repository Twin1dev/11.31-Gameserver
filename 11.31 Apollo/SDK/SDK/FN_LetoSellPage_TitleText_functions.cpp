#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LetoSellPage_TitleText.LetoSellPage_TitleText_C
// (None)

class UClass* ULetoSellPage_TitleText_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LetoSellPage_TitleText_C");

	return Clss;
}


// LetoSellPage_TitleText_C LetoSellPage_TitleText.Default__LetoSellPage_TitleText_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULetoSellPage_TitleText_C* ULetoSellPage_TitleText_C::GetDefaultObj()
{
	static class ULetoSellPage_TitleText_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULetoSellPage_TitleText_C*>(ULetoSellPage_TitleText_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LetoSellPage_TitleText.LetoSellPage_TitleText_C.ExecuteUbergraph_LetoSellPage_TitleText
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULetoSellPage_TitleText_C::ExecuteUbergraph_LetoSellPage_TitleText(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LetoSellPage_TitleText_C", "ExecuteUbergraph_LetoSellPage_TitleText");

	Params::ULetoSellPage_TitleText_C_ExecuteUbergraph_LetoSellPage_TitleText_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


