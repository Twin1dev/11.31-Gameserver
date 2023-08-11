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


// Function TVPostProcessBP.TVPostProcessBP_C.IsEnabledForCurrentSubgame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bEnabled                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ATVPostProcessBP_C::IsEnabledForCurrentSubgame(bool* bEnabled)
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "IsEnabledForCurrentSubgame");

	Params::ATVPostProcessBP_C_IsEnabledForCurrentSubgame_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (bEnabled != nullptr)
		*bEnabled = Parms.bEnabled;

}


// Function TVPostProcessBP.TVPostProcessBP_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "UserConstructionScript");

	Params::ATVPostProcessBP_C_UserConstructionScript_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.Camera_DisableEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::Camera_DisableEffects()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "Camera_DisableEffects");

	Params::ATVPostProcessBP_C_Camera_DisableEffects_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.FrontEndCameraSwitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::FrontEndCameraSwitch()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "FrontEndCameraSwitch");

	Params::ATVPostProcessBP_C_FrontEndCameraSwitch_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.ExecuteCameraSwitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBP_C::ExecuteCameraSwitch()
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "ExecuteCameraSwitch");

	Params::ATVPostProcessBP_C_ExecuteCameraSwitch_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function TVPostProcessBP.TVPostProcessBP_C.ExecuteUbergraph_TVPostProcessBP
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEnabledForCurrentSubgame_bEnabled                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATVPostProcessBP_C::ExecuteUbergraph_TVPostProcessBP(int32 EntryPoint, bool CallFunc_IsEnabledForCurrentSubgame_bEnabled)
{
	static auto Func = Class->GetFunction("TVPostProcessBP_C", "ExecuteUbergraph_TVPostProcessBP");

	Params::ATVPostProcessBP_C_ExecuteUbergraph_TVPostProcessBP_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsEnabledForCurrentSubgame_bEnabled = CallFunc_IsEnabledForCurrentSubgame_bEnabled;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
