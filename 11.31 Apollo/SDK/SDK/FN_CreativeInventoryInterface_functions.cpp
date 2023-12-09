#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CreativeInventoryInterface.CreativeInventoryInterface_C
// (None)

class UClass* ICreativeInventoryInterface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CreativeInventoryInterface_C");

	return Clss;
}


// CreativeInventoryInterface_C CreativeInventoryInterface.Default__CreativeInventoryInterface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ICreativeInventoryInterface_C* ICreativeInventoryInterface_C::GetDefaultObj()
{
	static class ICreativeInventoryInterface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ICreativeInventoryInterface_C*>(ICreativeInventoryInterface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CreativeInventoryInterface.CreativeInventoryInterface_C.TabbedOff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ICreativeInventoryInterface_C::TabbedOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeInventoryInterface_C", "TabbedOff");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeInventoryInterface.CreativeInventoryInterface_C.InventoryClosed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ICreativeInventoryInterface_C::InventoryClosed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeInventoryInterface_C", "InventoryClosed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function CreativeInventoryInterface.CreativeInventoryInterface_C.Major Tab Changed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bToHere                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void ICreativeInventoryInterface_C::Major_Tab_Changed(bool bToHere)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeInventoryInterface_C", "Major Tab Changed");

	Params::ICreativeInventoryInterface_C_Major_Tab_Changed_Params Parms{};

	Parms.bToHere = bToHere;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CreativeInventoryInterface.CreativeInventoryInterface_C.Setup Nav
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ICreativeInventoryInterface_C::Setup_Nav()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CreativeInventoryInterface_C", "Setup Nav");



	UObject::ProcessEvent(Func, nullptr);

}

}


