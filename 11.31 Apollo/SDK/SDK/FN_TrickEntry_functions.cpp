#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass TrickEntry.TrickEntry_C
// (None)

class UClass* UTrickEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TrickEntry_C");

	return Clss;
}


// TrickEntry_C TrickEntry.Default__TrickEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTrickEntry_C* UTrickEntry_C::GetDefaultObj()
{
	static class UTrickEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UTrickEntry_C*>(UTrickEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function TrickEntry.TrickEntry_C.SetTrick
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UTrickEntry_C::SetTrick(class FText InText, class FText CallFunc_TextToUpper_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TrickEntry_C", "SetTrick");

	Params::UTrickEntry_C_SetTrick_Params Parms{};

	Parms.InText = InText;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


