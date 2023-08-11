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


// Function B_CameraLens_Drown_Damage.B_CameraLens_Drown_Damage_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_CameraLens_Drown_Damage_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_CameraLens_Drown_Damage_C", "ReceiveBeginPlay");

	Params::AB_CameraLens_Drown_Damage_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CameraLens_Drown_Damage.B_CameraLens_Drown_Damage_C.ExecuteUbergraph_B_CameraLens_Drown_Damage
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AB_CameraLens_Drown_Damage_C::ExecuteUbergraph_B_CameraLens_Drown_Damage(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("B_CameraLens_Drown_Damage_C", "ExecuteUbergraph_B_CameraLens_Drown_Damage");

	Params::AB_CameraLens_Drown_Damage_C_ExecuteUbergraph_B_CameraLens_Drown_Damage_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
