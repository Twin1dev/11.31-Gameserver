#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaMinimapContainer.AthenaMinimapContainer_C
// (None)

class UClass* UAthenaMinimapContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaMinimapContainer_C");

	return Clss;
}


// AthenaMinimapContainer_C AthenaMinimapContainer.Default__AthenaMinimapContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaMinimapContainer_C* UAthenaMinimapContainer_C::GetDefaultObj()
{
	static class UAthenaMinimapContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaMinimapContainer_C*>(UAthenaMinimapContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaMinimapContainer.AthenaMinimapContainer_C.BndEvt__Button_Map_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAthenaMinimapContainer_C::BndEvt__Button_Map_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMinimapContainer_C", "BndEvt__Button_Map_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaMinimapContainer.AthenaMinimapContainer_C.ExecuteUbergraph_AthenaMinimapContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaMinimapContainer_C::ExecuteUbergraph_AthenaMinimapContainer(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaMinimapContainer_C", "ExecuteUbergraph_AthenaMinimapContainer");

	Params::UAthenaMinimapContainer_C_ExecuteUbergraph_AthenaMinimapContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


