#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass TVPostProcessBPAthena.TVPostProcessBPAthena_C
// (Actor)

class UClass* ATVPostProcessBPAthena_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TVPostProcessBPAthena_C");

	return Clss;
}


// TVPostProcessBPAthena_C TVPostProcessBPAthena.Default__TVPostProcessBPAthena_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATVPostProcessBPAthena_C* ATVPostProcessBPAthena_C::GetDefaultObj()
{
	static class ATVPostProcessBPAthena_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATVPostProcessBPAthena_C*>(ATVPostProcessBPAthena_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.IsEnabledForCurrentSubgame
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bEnabled                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ATVPostProcessBPAthena_C::IsEnabledForCurrentSubgame(bool* bEnabled, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TVPostProcessBPAthena_C", "IsEnabledForCurrentSubgame");

	Params::ATVPostProcessBPAthena_C_IsEnabledForCurrentSubgame_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TVPostProcessBPAthena_C", "FrontEndCameraSwitchFadeAthena__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.FrontEndCameraSwitchFadeAthena__UpdateFunc
// (BlueprintEvent)
// Parameters:

void ATVPostProcessBPAthena_C::FrontEndCameraSwitchFadeAthena__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TVPostProcessBPAthena_C", "FrontEndCameraSwitchFadeAthena__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.ExecuteCameraSwitch
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBPAthena_C::ExecuteCameraSwitch()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TVPostProcessBPAthena_C", "ExecuteCameraSwitch");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.Camera_DisableEffects
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ATVPostProcessBPAthena_C::Camera_DisableEffects()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TVPostProcessBPAthena_C", "Camera_DisableEffects");



	UObject::ProcessEvent(Func, nullptr);

}


// Function TVPostProcessBPAthena.TVPostProcessBPAthena_C.ExecuteUbergraph_TVPostProcessBPAthena
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetUnpausedTimeSeconds_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ATVPostProcessBPAthena_C::ExecuteUbergraph_TVPostProcessBPAthena(int32 EntryPoint, float CallFunc_GetUnpausedTimeSeconds_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TVPostProcessBPAthena_C", "ExecuteUbergraph_TVPostProcessBPAthena");

	Params::ATVPostProcessBPAthena_C_ExecuteUbergraph_TVPostProcessBPAthena_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetUnpausedTimeSeconds_ReturnValue = CallFunc_GetUnpausedTimeSeconds_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


