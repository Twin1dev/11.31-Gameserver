#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaMOTDPanel.AthenaMOTDPanel_C
// (None)

class UClass* UAthenaMOTDPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaMOTDPanel_C");

	return Clss;
}


// AthenaMOTDPanel_C AthenaMOTDPanel.Default__AthenaMOTDPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaMOTDPanel_C* UAthenaMOTDPanel_C::GetDefaultObj()
{
	static class UAthenaMOTDPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaMOTDPanel_C*>(UAthenaMOTDPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaMOTDPanel.AthenaMOTDPanel_C.OnShowBackground
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMOTDPanel_C::OnShowBackground()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDPanel_C", "OnShowBackground");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMOTDPanel.AthenaMOTDPanel_C.OnHideBackground
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaMOTDPanel_C::OnHideBackground()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDPanel_C", "OnHideBackground");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMOTDPanel.AthenaMOTDPanel_C.ExecuteUbergraph_AthenaMOTDPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMOTDPanel_C::ExecuteUbergraph_AthenaMOTDPanel(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMOTDPanel_C", "ExecuteUbergraph_AthenaMOTDPanel");

	Params::UAthenaMOTDPanel_C_ExecuteUbergraph_AthenaMOTDPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


