#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PP_Sepia.PP_Sepia_C
// (Actor)

class UClass* APP_Sepia_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PP_Sepia_C");

	return Clss;
}


// PP_Sepia_C PP_Sepia.Default__PP_Sepia_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APP_Sepia_C* APP_Sepia_C::GetDefaultObj()
{
	static class APP_Sepia_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APP_Sepia_C*>(APP_Sepia_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PP_Sepia.PP_Sepia_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APP_Sepia_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PP_Sepia_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PP_Sepia.PP_Sepia_C.ExecuteUbergraph_PP_Sepia
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APP_Sepia_C::ExecuteUbergraph_PP_Sepia(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PP_Sepia_C", "ExecuteUbergraph_PP_Sepia");

	Params::APP_Sepia_C_ExecuteUbergraph_PP_Sepia_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


