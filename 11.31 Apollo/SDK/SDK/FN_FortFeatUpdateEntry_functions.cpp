#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FortFeatUpdateEntry.FortFeatUpdateEntry_C
// (None)

class UClass* UFortFeatUpdateEntry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortFeatUpdateEntry_C");

	return Clss;
}


// FortFeatUpdateEntry_C FortFeatUpdateEntry.Default__FortFeatUpdateEntry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortFeatUpdateEntry_C* UFortFeatUpdateEntry_C::GetDefaultObj()
{
	static class UFortFeatUpdateEntry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortFeatUpdateEntry_C*>(UFortFeatUpdateEntry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FortFeatUpdateEntry.FortFeatUpdateEntry_C.StartQuestIntro
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortFeatUpdateEntry_C::StartQuestIntro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortFeatUpdateEntry_C", "StartQuestIntro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FortFeatUpdateEntry.FortFeatUpdateEntry_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UFortFeatUpdateEntry_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortFeatUpdateEntry_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function FortFeatUpdateEntry.FortFeatUpdateEntry_C.ExecuteUbergraph_FortFeatUpdateEntry
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFortFeatUpdateEntry_C::ExecuteUbergraph_FortFeatUpdateEntry(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortFeatUpdateEntry_C", "ExecuteUbergraph_FortFeatUpdateEntry");

	Params::UFortFeatUpdateEntry_C_ExecuteUbergraph_FortFeatUpdateEntry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


