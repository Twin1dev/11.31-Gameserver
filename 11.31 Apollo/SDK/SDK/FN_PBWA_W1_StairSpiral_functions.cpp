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


// Function PBWA_W1_StairSpiral.PBWA_W1_StairSpiral_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void APBWA_W1_StairSpiral_C::UserConstructionScript()
{
	static auto Func = Class->GetFunction("PBWA_W1_StairSpiral_C", "UserConstructionScript");

	Params::APBWA_W1_StairSpiral_C_UserConstructionScript_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
