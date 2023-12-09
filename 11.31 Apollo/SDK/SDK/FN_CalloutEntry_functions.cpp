#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass CalloutEntry.CalloutEntry_C
// (None)

class UClass* UCalloutEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CalloutEntry_C");

	return Clss;
}


// CalloutEntry_C CalloutEntry.Default__CalloutEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCalloutEntry_C* UCalloutEntry_C::GetDefaultObj()
{
	static class UCalloutEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCalloutEntry_C*>(UCalloutEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CalloutEntry.CalloutEntry_C.SetCallout
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InText                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class FText                        CallFunc_TextToUpper_ReturnValue                                 (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCalloutEntry_C::SetCallout(class FText InText, class FText CallFunc_TextToUpper_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CalloutEntry_C", "SetCallout");

	Params::UCalloutEntry_C_SetCallout_Params Parms{};

	Parms.InText = InText;
	Parms.CallFunc_TextToUpper_ReturnValue = CallFunc_TextToUpper_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


