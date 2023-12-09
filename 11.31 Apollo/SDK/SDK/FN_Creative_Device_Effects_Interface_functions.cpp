#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Creative_Device_Effects_Interface.Creative_Device_Effects_Interface_C
// (None)

class UClass* ICreative_Device_Effects_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Creative_Device_Effects_Interface_C");

	return Clss;
}


// Creative_Device_Effects_Interface_C Creative_Device_Effects_Interface.Default__Creative_Device_Effects_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ICreative_Device_Effects_Interface_C* ICreative_Device_Effects_Interface_C::GetDefaultObj()
{
	static class ICreative_Device_Effects_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ICreative_Device_Effects_Interface_C*>(ICreative_Device_Effects_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Creative_Device_Effects_Interface.Creative_Device_Effects_Interface_C.Get Effect Color Index
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECreativeColorSetType   Color_Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Color_Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ICreative_Device_Effects_Interface_C::Get_Effect_Color_Index(enum class ECreativeColorSetType* Color_Type, int32* Color_Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Creative_Device_Effects_Interface_C", "Get Effect Color Index");

	Params::ICreative_Device_Effects_Interface_C_Get_Effect_Color_Index_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Color_Type != nullptr)
		*Color_Type = Parms.Color_Type;

	if (Color_Index != nullptr)
		*Color_Index = Parms.Color_Index;

}

}


