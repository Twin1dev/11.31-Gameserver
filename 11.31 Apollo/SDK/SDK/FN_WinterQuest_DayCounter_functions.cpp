#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WinterQuest_DayCounter.WinterQuest_DayCounter_C
// (None)

class UClass* UWinterQuest_DayCounter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WinterQuest_DayCounter_C");

	return Clss;
}


// WinterQuest_DayCounter_C WinterQuest_DayCounter.Default__WinterQuest_DayCounter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWinterQuest_DayCounter_C* UWinterQuest_DayCounter_C::GetDefaultObj()
{
	static class UWinterQuest_DayCounter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWinterQuest_DayCounter_C*>(UWinterQuest_DayCounter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WinterQuest_DayCounter.WinterQuest_DayCounter_C.HandleDayCounterIntro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWinterQuest_DayCounter_C::HandleDayCounterIntro(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WinterQuest_DayCounter_C", "HandleDayCounterIntro");

	Params::UWinterQuest_DayCounter_C_HandleDayCounterIntro_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


