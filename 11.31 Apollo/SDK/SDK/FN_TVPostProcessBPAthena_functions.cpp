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


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.IsEnabledForCurrentSubgame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bEnabled                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATVPostProcessBPAthena_C::IsEnabledForCurrentSubgame(bool* bEnabled, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("TVPostProcessBPAthena_C", "IsEnabledForCurrentSubgame");

	Params::ATVPostProcessBPAthena_C_IsEnabledForCurrentSubgame_Params Parms;

	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;

}


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.FrontEndCameraSwitchFadeAthena__FinishedFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBPAthena_C::FrontEndCameraSwitchFadeAthena__FinishedFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBPAthena_C", "FrontEndCameraSwitchFadeAthena__FinishedFunc");

	Params::ATVPostProcessBPAthena_C_FrontEndCameraSwitchFadeAthena__FinishedFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.FrontEndCameraSwitchFadeAthena__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBPAthena_C::FrontEndCameraSwitchFadeAthena__UpdateFunc()
{
	static auto Func = Class->GetFunction("TVPostProcessBPAthena_C", "FrontEndCameraSwitchFadeAthena__UpdateFunc");

	Params::ATVPostProcessBPAthena_C_FrontEndCameraSwitchFadeAthena__UpdateFunc_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.ExecuteCameraSwitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBPAthena_C::ExecuteCameraSwitch()
{
	static auto Func = Class->GetFunction("TVPostProcessBPAthena_C", "ExecuteCameraSwitch");

	Params::ATVPostProcessBPAthena_C_ExecuteCameraSwitch_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.Camera_DisableEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBPAthena_C::Camera_DisableEffects()
{
	static auto Func = Class->GetFunction("TVPostProcessBPAthena_C", "Camera_DisableEffects");

	Params::ATVPostProcessBPAthena_C_Camera_DisableEffects_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.ExecuteUbergraph_TVPostProcessBPAthena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetUnpausedTimeSeconds_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATVPostProcessBPAthena_C::ExecuteUbergraph_TVPostProcessBPAthena(int32 EntryPoint, float CallFunc_GetUnpausedTimeSeconds_ReturnValue)
{
	static auto Func = Class->GetFunction("TVPostProcessBPAthena_C", "ExecuteUbergraph_TVPostProcessBPAthena");

	Params::ATVPostProcessBPAthena_C_ExecuteUbergraph_TVPostProcessBPAthena_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetUnpausedTimeSeconds_ReturnValue = CallFunc_GetUnpausedTimeSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
