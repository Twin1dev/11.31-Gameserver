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


// Function Prj_Athena_FrenchYedoc_JWUnfriendly.Prj_Athena_FrenchYedoc_JWUnfriendly_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void APrj_Athena_FrenchYedoc_JWUnfriendly_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("Prj_Athena_FrenchYedoc_JWUnfriendly_C", "ReceiveBeginPlay");

	Params::APrj_Athena_FrenchYedoc_JWUnfriendly_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Prj_Athena_FrenchYedoc_JWUnfriendly.Prj_Athena_FrenchYedoc_JWUnfriendly_C.ExecuteUbergraph_Prj_Athena_FrenchYedoc_JWUnfriendly
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void APrj_Athena_FrenchYedoc_JWUnfriendly_C::ExecuteUbergraph_Prj_Athena_FrenchYedoc_JWUnfriendly(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue)
{
	static auto Func = Class->GetFunction("Prj_Athena_FrenchYedoc_JWUnfriendly_C", "ExecuteUbergraph_Prj_Athena_FrenchYedoc_JWUnfriendly");

	Params::APrj_Athena_FrenchYedoc_JWUnfriendly_C_ExecuteUbergraph_Prj_Athena_FrenchYedoc_JWUnfriendly_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
