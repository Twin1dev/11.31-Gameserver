#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PP_Retro.PP_Retro_C
// (Actor)

class UClass* APP_Retro_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PP_Retro_C");

	return Clss;
}


// PP_Retro_C PP_Retro.Default__PP_Retro_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APP_Retro_C* APP_Retro_C::GetDefaultObj()
{
	static class APP_Retro_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APP_Retro_C*>(APP_Retro_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PP_Retro.PP_Retro_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APP_Retro_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PP_Retro_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PP_Retro.PP_Retro_C.ExecuteUbergraph_PP_Retro
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APP_Retro_C::ExecuteUbergraph_PP_Retro(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PP_Retro_C", "ExecuteUbergraph_PP_Retro");

	Params::APP_Retro_C_ExecuteUbergraph_PP_Retro_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


