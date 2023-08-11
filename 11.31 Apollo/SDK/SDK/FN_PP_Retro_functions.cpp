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


// Function PP_Retro.PP_Retro_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APP_Retro_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("PP_Retro_C", "ReceiveBeginPlay");

	Params::APP_Retro_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PP_Retro.PP_Retro_C.ExecuteUbergraph_PP_Retro
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APP_Retro_C::ExecuteUbergraph_PP_Retro(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("PP_Retro_C", "ExecuteUbergraph_PP_Retro");

	Params::APP_Retro_C_ExecuteUbergraph_PP_Retro_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
