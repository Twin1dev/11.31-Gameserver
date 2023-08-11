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


// Function FortAnimNotify_Interface_Interface.FortAnimNotify_Interface_Interface_C.TrailOn
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IFortAnimNotify_Interface_Interface_C::TrailOn()
{
	static auto Func = Class->GetFunction("FortAnimNotify_Interface_Interface_C", "TrailOn");

	Params::IFortAnimNotify_Interface_Interface_C_TrailOn_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortAnimNotify_Interface_Interface.FortAnimNotify_Interface_Interface_C.TrailOff
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void IFortAnimNotify_Interface_Interface_C::TrailOff()
{
	static auto Func = Class->GetFunction("FortAnimNotify_Interface_Interface_C", "TrailOff");

	Params::IFortAnimNotify_Interface_Interface_C_TrailOff_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
