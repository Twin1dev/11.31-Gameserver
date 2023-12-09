#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FortAnimNotify_Interface_Interface.FortAnimNotify_Interface_Interface_C
// (None)

class UClass* IFortAnimNotify_Interface_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAnimNotify_Interface_Interface_C");

	return Clss;
}


// FortAnimNotify_Interface_Interface_C FortAnimNotify_Interface_Interface.Default__FortAnimNotify_Interface_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IFortAnimNotify_Interface_Interface_C* IFortAnimNotify_Interface_Interface_C::GetDefaultObj()
{
	static class IFortAnimNotify_Interface_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IFortAnimNotify_Interface_Interface_C*>(IFortAnimNotify_Interface_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FortAnimNotify_Interface_Interface.FortAnimNotify_Interface_Interface_C.TrailOn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IFortAnimNotify_Interface_Interface_C::TrailOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAnimNotify_Interface_Interface_C", "TrailOn");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FortAnimNotify_Interface_Interface.FortAnimNotify_Interface_Interface_C.TrailOff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IFortAnimNotify_Interface_Interface_C::TrailOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAnimNotify_Interface_Interface_C", "TrailOff");



	UObject::ProcessEvent(Func, nullptr);

}

}


