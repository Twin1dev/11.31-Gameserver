#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass NetDebugContainer.NetDebugContainer_C
// (None)

class UClass* UNetDebugContainer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NetDebugContainer_C");

	return Clss;
}


// NetDebugContainer_C NetDebugContainer.Default__NetDebugContainer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNetDebugContainer_C* UNetDebugContainer_C::GetDefaultObj()
{
	static class UNetDebugContainer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNetDebugContainer_C*>(UNetDebugContainer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function NetDebugContainer.NetDebugContainer_C.OnVisibilitySetEvent
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ESlateVisibility        InVisibility                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNetDebugContainer_C::OnVisibilitySetEvent(enum class ESlateVisibility InVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NetDebugContainer_C", "OnVisibilitySetEvent");

	Params::UNetDebugContainer_C_OnVisibilitySetEvent_Params Parms{};

	Parms.InVisibility = InVisibility;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NetDebugContainer.NetDebugContainer_C.ExecuteUbergraph_NetDebugContainer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Event_InVisibility                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNetDebugContainer_C::ExecuteUbergraph_NetDebugContainer(int32 EntryPoint, enum class ESlateVisibility K2Node_Event_InVisibility, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("NetDebugContainer_C", "ExecuteUbergraph_NetDebugContainer");

	Params::UNetDebugContainer_C_ExecuteUbergraph_NetDebugContainer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InVisibility = K2Node_Event_InVisibility;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


