#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_CameraRainDrops_03.B_CameraRainDrops_03_C
// (Actor)

class UClass* AB_CameraRainDrops_03_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_CameraRainDrops_03_C");

	return Clss;
}


// B_CameraRainDrops_03_C B_CameraRainDrops_03.Default__B_CameraRainDrops_03_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AB_CameraRainDrops_03_C* AB_CameraRainDrops_03_C::GetDefaultObj()
{
	static class AB_CameraRainDrops_03_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AB_CameraRainDrops_03_C*>(AB_CameraRainDrops_03_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.Alpha__FinishedFunc
// (BlueprintEvent)
// Parameters:

void AB_CameraRainDrops_03_C::Alpha__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraRainDrops_03_C", "Alpha__FinishedFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.Alpha__UpdateFunc
// (BlueprintEvent)
// Parameters:

void AB_CameraRainDrops_03_C::Alpha__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraRainDrops_03_C", "Alpha__UpdateFunc");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AB_CameraRainDrops_03_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraRainDrops_03_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function B_CameraRainDrops_03.B_CameraRainDrops_03_C.ExecuteUbergraph_B_CameraRainDrops_03
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRenderingDetailMode_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void AB_CameraRainDrops_03_C::ExecuteUbergraph_B_CameraRainDrops_03(int32 EntryPoint, int32 CallFunc_GetRenderingDetailMode_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_CameraRainDrops_03_C", "ExecuteUbergraph_B_CameraRainDrops_03");

	Params::AB_CameraRainDrops_03_C_ExecuteUbergraph_B_CameraRainDrops_03_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetRenderingDetailMode_ReturnValue = CallFunc_GetRenderingDetailMode_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


