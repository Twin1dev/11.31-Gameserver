#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaChatWidget.AthenaChatWidget_C
// (None)

class UClass* UAthenaChatWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaChatWidget_C");

	return Clss;
}


// AthenaChatWidget_C AthenaChatWidget.Default__AthenaChatWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaChatWidget_C* UAthenaChatWidget_C::GetDefaultObj()
{
	static class UAthenaChatWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaChatWidget_C*>(UAthenaChatWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaChatWidget.AthenaChatWidget_C.OnEnteredChat__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnteredChat                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaChatWidget_C::OnEnteredChat__DelegateSignature(bool EnteredChat)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaChatWidget_C", "OnEnteredChat__DelegateSignature");

	Params::UAthenaChatWidget_C_OnEnteredChat__DelegateSignature_Params Parms{};

	Parms.EnteredChat = EnteredChat;

	UObject::ProcessEvent(Func, &Parms);

}

}


