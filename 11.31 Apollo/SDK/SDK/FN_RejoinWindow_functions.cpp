#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass RejoinWindow.RejoinWindow_C
// (None)

class UClass* URejoinWindow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RejoinWindow_C");

	return Clss;
}


// RejoinWindow_C RejoinWindow.Default__RejoinWindow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URejoinWindow_C* URejoinWindow_C::GetDefaultObj()
{
	static class URejoinWindow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URejoinWindow_C*>(URejoinWindow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function RejoinWindow.RejoinWindow_C.OnRequestRejoinRetry__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void URejoinWindow_C::OnRequestRejoinRetry__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RejoinWindow_C", "OnRequestRejoinRetry__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function RejoinWindow.RejoinWindow_C.OnRequestAbandon__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void URejoinWindow_C::OnRequestAbandon__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("RejoinWindow_C", "OnRequestAbandon__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


