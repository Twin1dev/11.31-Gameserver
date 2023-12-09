#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass InGameChallengesPanel.InGameChallengesPanel_C
// (None)

class UClass* UInGameChallengesPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("InGameChallengesPanel_C");

	return Clss;
}


// InGameChallengesPanel_C InGameChallengesPanel.Default__InGameChallengesPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UInGameChallengesPanel_C* UInGameChallengesPanel_C::GetDefaultObj()
{
	static class UInGameChallengesPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UInGameChallengesPanel_C*>(UInGameChallengesPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function InGameChallengesPanel.InGameChallengesPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UInGameChallengesPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InGameChallengesPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function InGameChallengesPanel.InGameChallengesPanel_C.ExecuteUbergraph_InGameChallengesPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UInGameChallengesPanel_C::ExecuteUbergraph_InGameChallengesPanel(int32 EntryPoint, bool CallFunc_IsMobileGame_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("InGameChallengesPanel_C", "ExecuteUbergraph_InGameChallengesPanel");

	Params::UInGameChallengesPanel_C_ExecuteUbergraph_InGameChallengesPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


