#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PP_Spooky.PP_Spooky_C
// (Actor)

class UClass* APP_Spooky_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PP_Spooky_C");

	return Clss;
}


// PP_Spooky_C PP_Spooky.Default__PP_Spooky_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class APP_Spooky_C* APP_Spooky_C::GetDefaultObj()
{
	static class APP_Spooky_C* Default = nullptr;

	if (!Default)
		Default = static_cast<APP_Spooky_C*>(APP_Spooky_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PP_Spooky.PP_Spooky_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APP_Spooky_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PP_Spooky_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PP_Spooky.PP_Spooky_C.ExecuteUbergraph_PP_Spooky
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void APP_Spooky_C::ExecuteUbergraph_PP_Spooky(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PP_Spooky_C", "ExecuteUbergraph_PP_Spooky");

	Params::APP_Spooky_C_ExecuteUbergraph_PP_Spooky_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


