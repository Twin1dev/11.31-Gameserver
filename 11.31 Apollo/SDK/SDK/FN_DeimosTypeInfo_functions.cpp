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


// Function DeimosTypeInfo.DeimosTypeInfo_C.GetEnemyColor
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IDeimosTypeInfo_C::GetEnemyColor(struct FLinearColor* Color)
{
	static auto Func = Class->GetFunction("DeimosTypeInfo_C", "GetEnemyColor");

	Params::IDeimosTypeInfo_C_GetEnemyColor_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = Parms.Color;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
