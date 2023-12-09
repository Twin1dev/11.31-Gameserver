#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FrontendChallengeInfoPanelEntry.FrontendChallengeInfoPanelEntry_C
// (None)

class UClass* UFrontendChallengeInfoPanelEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FrontendChallengeInfoPanelEntry_C");

	return Clss;
}


// FrontendChallengeInfoPanelEntry_C FrontendChallengeInfoPanelEntry.Default__FrontendChallengeInfoPanelEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFrontendChallengeInfoPanelEntry_C* UFrontendChallengeInfoPanelEntry_C::GetDefaultObj()
{
	static class UFrontendChallengeInfoPanelEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFrontendChallengeInfoPanelEntry_C*>(UFrontendChallengeInfoPanelEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FrontendChallengeInfoPanelEntry.FrontendChallengeInfoPanelEntry_C.OnChallengeInfoSet
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFrontendChallengeInfoPanelEntry_C::OnChallengeInfoSet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FrontendChallengeInfoPanelEntry_C", "OnChallengeInfoSet");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FrontendChallengeInfoPanelEntry.FrontendChallengeInfoPanelEntry_C.OnLocalPlayerMissingAssistedChallenge
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFrontendChallengeInfoPanelEntry_C::OnLocalPlayerMissingAssistedChallenge()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FrontendChallengeInfoPanelEntry_C", "OnLocalPlayerMissingAssistedChallenge");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FrontendChallengeInfoPanelEntry.FrontendChallengeInfoPanelEntry_C.ExecuteUbergraph_FrontendChallengeInfoPanelEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFrontendChallengeInfoPanelEntry_C::ExecuteUbergraph_FrontendChallengeInfoPanelEntry(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FrontendChallengeInfoPanelEntry_C", "ExecuteUbergraph_FrontendChallengeInfoPanelEntry");

	Params::UFrontendChallengeInfoPanelEntry_C_ExecuteUbergraph_FrontendChallengeInfoPanelEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


