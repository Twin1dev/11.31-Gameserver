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


// Function FrontendChallengeInfoPanelEntry.FrontendChallengeInfoPanelEntry_C.OnChallengeInfoSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFrontendChallengeInfoPanelEntry_C::OnChallengeInfoSet()
{
	static auto Func = Class->GetFunction("FrontendChallengeInfoPanelEntry_C", "OnChallengeInfoSet");

	Params::UFrontendChallengeInfoPanelEntry_C_OnChallengeInfoSet_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontendChallengeInfoPanelEntry.FrontendChallengeInfoPanelEntry_C.OnLocalPlayerMissingAssistedChallenge
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFrontendChallengeInfoPanelEntry_C::OnLocalPlayerMissingAssistedChallenge()
{
	static auto Func = Class->GetFunction("FrontendChallengeInfoPanelEntry_C", "OnLocalPlayerMissingAssistedChallenge");

	Params::UFrontendChallengeInfoPanelEntry_C_OnLocalPlayerMissingAssistedChallenge_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function FrontendChallengeInfoPanelEntry.FrontendChallengeInfoPanelEntry_C.ExecuteUbergraph_FrontendChallengeInfoPanelEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontendChallengeInfoPanelEntry_C::ExecuteUbergraph_FrontendChallengeInfoPanelEntry(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("FrontendChallengeInfoPanelEntry_C", "ExecuteUbergraph_FrontendChallengeInfoPanelEntry");

	Params::UFrontendChallengeInfoPanelEntry_C_ExecuteUbergraph_FrontendChallengeInfoPanelEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
