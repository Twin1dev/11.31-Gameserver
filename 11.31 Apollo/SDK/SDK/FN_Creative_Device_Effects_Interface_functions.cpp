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


// Function Creative_Device_Effects_Interface.Creative_Device_Effects_Interface_C.Get Effect Color Index
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECreativeColorSetType   Color_Type                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Color_Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ICreative_Device_Effects_Interface_C::Get_Effect_Color_Index(enum class ECreativeColorSetType* Color_Type, int32* Color_Index)
{
	static auto Func = Class->GetFunction("Creative_Device_Effects_Interface_C", "Get Effect Color Index");

	Params::ICreative_Device_Effects_Interface_C_Get_Effect_Color_Index_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (Color_Type != nullptr)
		*Color_Type = Parms.Color_Type;

	if (Color_Index != nullptr)
		*Color_Index = Parms.Color_Index;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
