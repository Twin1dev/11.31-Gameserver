#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaRespawnTimer.AthenaRespawnTimer_C
// (None)

class UClass* UAthenaRespawnTimer_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaRespawnTimer_C");

	return Clss;
}


// AthenaRespawnTimer_C AthenaRespawnTimer.Default__AthenaRespawnTimer_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaRespawnTimer_C* UAthenaRespawnTimer_C::GetDefaultObj()
{
	static class UAthenaRespawnTimer_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaRespawnTimer_C*>(UAthenaRespawnTimer_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaRespawnTimer.AthenaRespawnTimer_C.OnTickDown
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaRespawnTimer_C::OnTickDown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaRespawnTimer_C", "OnTickDown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaRespawnTimer.AthenaRespawnTimer_C.OnTimeEnded
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaRespawnTimer_C::OnTimeEnded()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaRespawnTimer_C", "OnTimeEnded");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaRespawnTimer.AthenaRespawnTimer_C.AddExtensionWidget_BP
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UWidget*                     Widget                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaRespawnTimer_C::AddExtensionWidget_BP(class UWidget* Widget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaRespawnTimer_C", "AddExtensionWidget_BP");

	Params::UAthenaRespawnTimer_C_AddExtensionWidget_BP_Params Parms{};

	Parms.Widget = Widget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaRespawnTimer.AthenaRespawnTimer_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaRespawnTimer_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaRespawnTimer_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaRespawnTimer.AthenaRespawnTimer_C.ExecuteUbergraph_AthenaRespawnTimer
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidget*                     K2Node_Event_Widget                                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaRespawnTimer_C::ExecuteUbergraph_AthenaRespawnTimer(int32 EntryPoint, class UWidget* K2Node_Event_Widget, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaRespawnTimer_C", "ExecuteUbergraph_AthenaRespawnTimer");

	Params::UAthenaRespawnTimer_C_ExecuteUbergraph_AthenaRespawnTimer_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Widget = K2Node_Event_Widget;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


