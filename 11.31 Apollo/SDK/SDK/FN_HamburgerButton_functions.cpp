#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass HamburgerButton.HamburgerButton_C
// (None)

class UClass* UHamburgerButton_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HamburgerButton_C");

	return Clss;
}


// HamburgerButton_C HamburgerButton.Default__HamburgerButton_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHamburgerButton_C* UHamburgerButton_C::GetDefaultObj()
{
	static class UHamburgerButton_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHamburgerButton_C*>(UHamburgerButton_C::StaticClass()->DefaultObject);

	return Default;
}


// Function HamburgerButton.HamburgerButton_C.BndEvt__MenuButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UHamburgerButton_C::BndEvt__MenuButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HamburgerButton_C", "BndEvt__MenuButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function HamburgerButton.HamburgerButton_C.ExecuteUbergraph_HamburgerButton
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UHamburgerButton_C::ExecuteUbergraph_HamburgerButton(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("HamburgerButton_C", "ExecuteUbergraph_HamburgerButton");

	Params::UHamburgerButton_C_ExecuteUbergraph_HamburgerButton_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


