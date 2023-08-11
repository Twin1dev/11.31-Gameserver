#pragma once

// Dumped by Twin1dev || Dumper-8

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function UIEmitterElement.UIEmitterElement_C.EndofLife
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIEmitterElement_C::EndofLife()
{
	static auto Func = Class->GetFunction("UIEmitterElement_C", "EndofLife");

	Params::UUIEmitterElement_C_EndofLife_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UIEmitterElement.UIEmitterElement_C.EventDestroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIEmitterElement_C::EventDestroy()
{
	static auto Func = Class->GetFunction("UIEmitterElement_C", "EventDestroy");

	Params::UUIEmitterElement_C_EventDestroy_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UIEmitterElement.UIEmitterElement_C.StartAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIEmitterElement_C::StartAnim()
{
	static auto Func = Class->GetFunction("UIEmitterElement_C", "StartAnim");

	Params::UUIEmitterElement_C_StartAnim_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UIEmitterElement.UIEmitterElement_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUIEmitterElement_C::Construct()
{
	static auto Func = Class->GetFunction("UIEmitterElement_C", "Construct");

	Params::UUIEmitterElement_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

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
	static auto Func = Class->GetFunction("UIEmitterElement_C", "ExecuteUbergraph_UIEmitterElement");

	Params::UUIEmitterElement_C_ExecuteUbergraph_UIEmitterElement_Params Parms;

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
	static auto Func = Class->GetFunction("UIEmitterElement_C", "EmitterDeath__DelegateSignature");

	Params::UUIEmitterElement_C_EmitterDeath__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function UIEmitterElement.UIEmitterElement_C.EmitterBirth__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUIEmitterElement_C::EmitterBirth__DelegateSignature()
{
	static auto Func = Class->GetFunction("UIEmitterElement_C", "EmitterBirth__DelegateSignature");

	Params::UUIEmitterElement_C_EmitterBirth__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
