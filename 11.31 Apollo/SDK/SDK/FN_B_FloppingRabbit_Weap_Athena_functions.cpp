#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C
// (Actor)

class UClass* AB_FloppingRabbit_Weap_Athena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_FloppingRabbit_Weap_Athena_C");

	return Clss;
}


// B_FloppingRabbit_Weap_Athena_C B_FloppingRabbit_Weap_Athena.Default__B_FloppingRabbit_Weap_Athena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_FloppingRabbit_Weap_Athena_C* AB_FloppingRabbit_Weap_Athena_C::GetDefaultObj()
{
	static class AB_FloppingRabbit_Weap_Athena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_FloppingRabbit_Weap_Athena_C*>(AB_FloppingRabbit_Weap_Athena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnRep_OneHandGrip
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_FloppingRabbit_Weap_Athena_C::OnRep_OneHandGrip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "OnRep_OneHandGrip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnRep_HideBobber
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_FloppingRabbit_Weap_Athena_C::OnRep_HideBobber()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "OnRep_HideBobber");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_FloppingRabbit_Weap_Athena_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_FloppingRabbit_Weap_Athena_C::K2_OnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "K2_OnUnEquip");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_FloppingRabbit_Weap_Athena_C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "OnWeaponAttached");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.ForceKillFishing
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_FloppingRabbit_Weap_Athena_C::ForceKillFishing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "ForceKillFishing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.ExecuteUbergraph_B_FloppingRabbit_Weap_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_FloppingRabbit_Weap_Athena_C::ExecuteUbergraph_B_FloppingRabbit_Weap_Athena(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "ExecuteUbergraph_B_FloppingRabbit_Weap_Athena");

	Params::AB_FloppingRabbit_Weap_Athena_C_ExecuteUbergraph_B_FloppingRabbit_Weap_Athena_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


