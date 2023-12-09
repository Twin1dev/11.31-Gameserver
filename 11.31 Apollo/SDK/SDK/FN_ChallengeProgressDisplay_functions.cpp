#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ChallengeProgressDisplay.ChallengeProgressDisplay_C
// (None)

class UClass* UChallengeProgressDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChallengeProgressDisplay_C");

	return Clss;
}


// ChallengeProgressDisplay_C ChallengeProgressDisplay.Default__ChallengeProgressDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UChallengeProgressDisplay_C* UChallengeProgressDisplay_C::GetDefaultObj()
{
	static class UChallengeProgressDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UChallengeProgressDisplay_C*>(UChallengeProgressDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ChallengeProgressDisplay.ChallengeProgressDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeProgressDisplay_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeProgressDisplay_C", "PreConstruct");

	Params::UChallengeProgressDisplay_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ChallengeProgressDisplay.ChallengeProgressDisplay_C.ExecuteUbergraph_ChallengeProgressDisplay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UChallengeProgressDisplay_C::ExecuteUbergraph_ChallengeProgressDisplay(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChallengeProgressDisplay_C", "ExecuteUbergraph_ChallengeProgressDisplay");

	Params::UChallengeProgressDisplay_C_ExecuteUbergraph_ChallengeProgressDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}


