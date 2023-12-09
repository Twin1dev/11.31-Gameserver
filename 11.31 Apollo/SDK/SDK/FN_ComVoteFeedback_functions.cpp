#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ComVoteFeedback.ComVoteFeedback_C
// (None)

class UClass* UComVoteFeedback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ComVoteFeedback_C");

	return Clss;
}


// ComVoteFeedback_C ComVoteFeedback.Default__ComVoteFeedback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UComVoteFeedback_C* UComVoteFeedback_C::GetDefaultObj()
{
	static class UComVoteFeedback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UComVoteFeedback_C*>(UComVoteFeedback_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ComVoteFeedback.ComVoteFeedback_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UComVoteFeedback_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComVoteFeedback_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ComVoteFeedback.ComVoteFeedback_C.ExecuteUbergraph_ComVoteFeedback
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)

void UComVoteFeedback_C::ExecuteUbergraph_ComVoteFeedback(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ComVoteFeedback_C", "ExecuteUbergraph_ComVoteFeedback");

	Params::UComVoteFeedback_C_ExecuteUbergraph_ComVoteFeedback_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;

	UObject::ProcessEvent(Func, &Parms);

}

}


