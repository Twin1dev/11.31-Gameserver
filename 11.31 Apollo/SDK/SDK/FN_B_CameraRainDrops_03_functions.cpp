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


// Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.Alpha__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_CameraRainDrops_03_C::Alpha__FinishedFunc()
{
	static auto Func = Class->GetFunction("B_CameraRainDrops_03_C", "Alpha__FinishedFunc");

	Params::AB_CameraRainDrops_03_C_Alpha__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.Alpha__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_CameraRainDrops_03_C::Alpha__UpdateFunc()
{
	static auto Func = Class->GetFunction("B_CameraRainDrops_03_C", "Alpha__UpdateFunc");

	Params::AB_CameraRainDrops_03_C_Alpha__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_CameraRainDrops_03_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_CameraRainDrops_03_C", "ReceiveBeginPlay");

	Params::AB_CameraRainDrops_03_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.ExecuteUbergraph_B_CameraRainDrops_03
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRenderingDetailMode_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CameraRainDrops_03_C::ExecuteUbergraph_B_CameraRainDrops_03(int32 EntryPoint, int32 CallFunc_GetRenderingDetailMode_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("B_CameraRainDrops_03_C", "ExecuteUbergraph_B_CameraRainDrops_03");

	Params::AB_CameraRainDrops_03_C_ExecuteUbergraph_B_CameraRainDrops_03_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRenderingDetailMode_ReturnValue = CallFunc_GetRenderingDetailMode_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
