#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ReadyUpScreenWidget.ReadyUpScreenWidget_C
// (None)

class UClass* UReadyUpScreenWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ReadyUpScreenWidget_C");

	return Clss;
}


// ReadyUpScreenWidget_C ReadyUpScreenWidget.Default__ReadyUpScreenWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UReadyUpScreenWidget_C* UReadyUpScreenWidget_C::GetDefaultObj()
{
	static class UReadyUpScreenWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UReadyUpScreenWidget_C*>(UReadyUpScreenWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ReadyUpScreenWidget.ReadyUpScreenWidget_C.GetWantsToShowContent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NativeShouldShowReadyUpScreen_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UReadyUpScreenWidget_C::GetWantsToShowContent(bool CallFunc_NativeShouldShowReadyUpScreen_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReadyUpScreenWidget_C", "GetWantsToShowContent");

	Params::UReadyUpScreenWidget_C_GetWantsToShowContent_Params Parms{};

	Parms.CallFunc_NativeShouldShowReadyUpScreen_ReturnValue = CallFunc_NativeShouldShowReadyUpScreen_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReadyUpScreenWidget.ReadyUpScreenWidget_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UReadyUpScreenWidget_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReadyUpScreenWidget_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ReadyUpScreenWidget.ReadyUpScreenWidget_C.ExecuteUbergraph_ReadyUpScreenWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReadyUpScreenWidget_C::ExecuteUbergraph_ReadyUpScreenWidget(int32 EntryPoint, class UFortHUDContext* CallFunc_GetContext_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ReadyUpScreenWidget_C", "ExecuteUbergraph_ReadyUpScreenWidget");

	Params::UReadyUpScreenWidget_C_ExecuteUbergraph_ReadyUpScreenWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


