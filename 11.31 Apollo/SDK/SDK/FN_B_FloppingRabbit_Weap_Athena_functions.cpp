#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnRep_OneHandGrip
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_FloppingRabbit_Weap_Athena_C::OnRep_OneHandGrip()
{
	static auto Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "OnRep_OneHandGrip");

	Params::AB_FloppingRabbit_Weap_Athena_C_OnRep_OneHandGrip_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnRep_HideBobber
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_FloppingRabbit_Weap_Athena_C::OnRep_HideBobber()
{
	static auto Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "OnRep_HideBobber");

	Params::AB_FloppingRabbit_Weap_Athena_C_OnRep_HideBobber_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_FloppingRabbit_Weap_Athena_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "ReceiveBeginPlay");

	Params::AB_FloppingRabbit_Weap_Athena_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_FloppingRabbit_Weap_Athena_C::K2_OnUnEquip()
{
	static auto Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "K2_OnUnEquip");

	Params::AB_FloppingRabbit_Weap_Athena_C_K2_OnUnEquip_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void AB_FloppingRabbit_Weap_Athena_C::OnWeaponAttached()
{
	static auto Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "OnWeaponAttached");

	Params::AB_FloppingRabbit_Weap_Athena_C_OnWeaponAttached_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.ForceKillFishing
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_FloppingRabbit_Weap_Athena_C::ForceKillFishing()
{
	static auto Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "ForceKillFishing");

	Params::AB_FloppingRabbit_Weap_Athena_C_ForceKillFishing_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_FloppingRabbit_Weap_Athena.B_FloppingRabbit_Weap_Athena_C.ExecuteUbergraph_B_FloppingRabbit_Weap_Athena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_FloppingRabbit_Weap_Athena_C::ExecuteUbergraph_B_FloppingRabbit_Weap_Athena(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("B_FloppingRabbit_Weap_Athena_C", "ExecuteUbergraph_B_FloppingRabbit_Weap_Athena");

	Params::AB_FloppingRabbit_Weap_Athena_C_ExecuteUbergraph_B_FloppingRabbit_Weap_Athena_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
