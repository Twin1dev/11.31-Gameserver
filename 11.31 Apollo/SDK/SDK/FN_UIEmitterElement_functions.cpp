#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UIEmitterElement.UIEmitterElement_C
// (None)

class UClass* UUIEmitterElement_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UIEmitterElement_C");

	return Clss;
}


// UIEmitterElement_C UIEmitterElement.Default__UIEmitterElement_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUIEmitterElement_C* UUIEmitterElement_C::GetDefaultObj()
{
	static class UUIEmitterElement_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUIEmitterElement_C*>(UUIEmitterElement_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UIEmitterElement.UIEmitterElement_C.EndofLife
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIEmitterElement_C::EndofLife()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIEmitterElement_C", "EndofLife");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIEmitterElement.UIEmitterElement_C.EventDestroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIEmitterElement_C::EventDestroy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIEmitterElement_C", "EventDestroy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIEmitterElement.UIEmitterElement_C.StartAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIEmitterElement_C::StartAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIEmitterElement_C", "StartAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIEmitterElement.UIEmitterElement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUIEmitterElement_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIEmitterElement_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIEmitterElement.UIEmitterElement_C.ExecuteUbergraph_UIEmitterElement
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUIEmitterElement_C::ExecuteUbergraph_UIEmitterElement(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIEmitterElement_C", "ExecuteUbergraph_UIEmitterElement");

	Params::UUIEmitterElement_C_ExecuteUbergraph_UIEmitterElement_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_5 = CallFunc_PlayAnimation_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UIEmitterElement.UIEmitterElement_C.EmitterDeath__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIEmitterElement_C::EmitterDeath__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIEmitterElement_C", "EmitterDeath__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UIEmitterElement.UIEmitterElement_C.EmitterBirth__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIEmitterElement_C::EmitterBirth__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UIEmitterElement_C", "EmitterBirth__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


