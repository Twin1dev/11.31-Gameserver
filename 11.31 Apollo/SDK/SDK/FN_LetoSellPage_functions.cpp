#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LetoSellPage.LetoSellPage_C
// (None)

class UClass* ULetoSellPage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LetoSellPage_C");

	return Clss;
}


// LetoSellPage_C LetoSellPage.Default__LetoSellPage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULetoSellPage_C* ULetoSellPage_C::GetDefaultObj()
{
	static class ULetoSellPage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULetoSellPage_C*>(ULetoSellPage_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LetoSellPage.LetoSellPage_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULetoSellPage_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LetoSellPage_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LetoSellPage.LetoSellPage_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULetoSellPage_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LetoSellPage_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LetoSellPage.LetoSellPage_C.ExecuteUbergraph_LetoSellPage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULetoSellPage_C::ExecuteUbergraph_LetoSellPage(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LetoSellPage_C", "ExecuteUbergraph_LetoSellPage");

	Params::ULetoSellPage_C_ExecuteUbergraph_LetoSellPage_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


