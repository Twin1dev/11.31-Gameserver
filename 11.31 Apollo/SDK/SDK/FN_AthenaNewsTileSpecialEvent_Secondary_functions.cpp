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


// Function AthenaNewsTileSpecialEvent_Secondary.AthenaNewsTileSpecialEvent_Secondary_C.PlayIntroAnim
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNewsTileSpecialEvent_Secondary_C::PlayIntroAnim()
{
	static auto Func = Class->GetFunction("AthenaNewsTileSpecialEvent_Secondary_C", "PlayIntroAnim");

	Params::UAthenaNewsTileSpecialEvent_Secondary_C_PlayIntroAnim_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaNewsTileSpecialEvent_Secondary.AthenaNewsTileSpecialEvent_Secondary_C.SetDefaultImage
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaNewsTileSpecialEvent_Secondary_C::SetDefaultImage()
{
	static auto Func = Class->GetFunction("AthenaNewsTileSpecialEvent_Secondary_C", "SetDefaultImage");

	Params::UAthenaNewsTileSpecialEvent_Secondary_C_SetDefaultImage_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaNewsTileSpecialEvent_Secondary.AthenaNewsTileSpecialEvent_Secondary_C.ExecuteUbergraph_AthenaNewsTileSpecialEvent_Secondary
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaNewsTileSpecialEvent_Secondary_C::ExecuteUbergraph_AthenaNewsTileSpecialEvent_Secondary(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaNewsTileSpecialEvent_Secondary_C", "ExecuteUbergraph_AthenaNewsTileSpecialEvent_Secondary");

	Params::UAthenaNewsTileSpecialEvent_Secondary_C_ExecuteUbergraph_AthenaNewsTileSpecialEvent_Secondary_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
