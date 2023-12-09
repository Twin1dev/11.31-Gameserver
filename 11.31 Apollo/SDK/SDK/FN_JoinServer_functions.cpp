#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass JoinServer.JoinServer_C
// (None)

class UClass* UJoinServer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JoinServer_C");

	return Clss;
}


// JoinServer_C JoinServer.Default__JoinServer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UJoinServer_C* UJoinServer_C::GetDefaultObj()
{
	static class UJoinServer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UJoinServer_C*>(UJoinServer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function JoinServer.JoinServer_C.OnEnterState
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortUIState            PreviousUIState                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::OnEnterState(enum class EFortUIState PreviousUIState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JoinServer_C", "OnEnterState");

	Params::UJoinServer_C_OnEnterState_Params Parms{};

	Parms.PreviousUIState = PreviousUIState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JoinServer.JoinServer_C.OnShowTutorialDialog
// (Event, Protected, BlueprintEvent)
// Parameters:

void UJoinServer_C::OnShowTutorialDialog()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JoinServer_C", "OnShowTutorialDialog");



	UObject::ProcessEvent(Func, nullptr);

}


// Function JoinServer.JoinServer_C.ExecuteUbergraph_JoinServer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortUIState            K2Node_Event_PreviousUIState                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinServer_C::ExecuteUbergraph_JoinServer(int32 EntryPoint, enum class EFortUIState K2Node_Event_PreviousUIState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("JoinServer_C", "ExecuteUbergraph_JoinServer");

	Params::UJoinServer_C_ExecuteUbergraph_JoinServer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_PreviousUIState = K2Node_Event_PreviousUIState;

	UObject::ProcessEvent(Func, &Parms);

}

}


