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


// Function AthenaSeasonPassLabels.AthenaSeasonPassLabels_C.HideTierLabels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonPassLabels_C::HideTierLabels(class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSeasonPassLabels_C", "HideTierLabels");

	Params::UAthenaSeasonPassLabels_C_HideTierLabels_Params Parms;

	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSeasonPassLabels.AthenaSeasonPassLabels_C.ShowTierLabels
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSeasonPassLabels_C::ShowTierLabels(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static auto Func = Class->GetFunction("AthenaSeasonPassLabels_C", "ShowTierLabels");

	Params::UAthenaSeasonPassLabels_C_ShowTierLabels_Params Parms;

	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
