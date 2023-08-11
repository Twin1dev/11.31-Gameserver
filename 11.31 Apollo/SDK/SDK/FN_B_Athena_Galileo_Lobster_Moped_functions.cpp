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


// Function B_Athena_Galileo_Lobster_Moped.B_Athena_Galileo_Lobster_Moped_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void AB_Athena_Galileo_Lobster_Moped_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("B_Athena_Galileo_Lobster_Moped_C", "UserConstructionScript");

	Params::AB_Athena_Galileo_Lobster_Moped_C_UserConstructionScript_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
