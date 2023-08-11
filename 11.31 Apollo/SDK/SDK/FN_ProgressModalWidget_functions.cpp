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


// Function ProgressModalWidget.ProgressModalWidget_C.OnAnalogValueChanged
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FAnalogInputEvent           InAnalogInputEvent                                               (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply UProgressModalWidget_C::OnAnalogValueChanged(const struct FGeometry& MyGeometry, const struct FAnalogInputEvent& InAnalogInputEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("ProgressModalWidget_C", "OnAnalogValueChanged");

	Params::UProgressModalWidget_C_OnAnalogValueChanged_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InAnalogInputEvent = InAnalogInputEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ProgressModalWidget.ProgressModalWidget_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UProgressModalWidget_C::Construct()
{
	static auto Func = Class->GetFunction("ProgressModalWidget_C", "Construct");

	Params::UProgressModalWidget_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressModalWidget.ProgressModalWidget_C.HandleIntroEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UProgressModalWidget_C::HandleIntroEnded()
{
	static auto Func = Class->GetFunction("ProgressModalWidget_C", "HandleIntroEnded");

	Params::UProgressModalWidget_C_HandleIntroEnded_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressModalWidget.ProgressModalWidget_C.HandleOutroEnded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UProgressModalWidget_C::HandleOutroEnded()
{
	static auto Func = Class->GetFunction("ProgressModalWidget_C", "HandleOutroEnded");

	Params::UProgressModalWidget_C_HandleOutroEnded_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressModalWidget.ProgressModalWidget_C.OnBeginIntro
// (Event, Protected, BlueprintEvent)
// Parameters:

void UProgressModalWidget_C::OnBeginIntro()
{
	static auto Func = Class->GetFunction("ProgressModalWidget_C", "OnBeginIntro");

	Params::UProgressModalWidget_C_OnBeginIntro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressModalWidget.ProgressModalWidget_C.OnBeginOutro
// (Event, Protected, BlueprintEvent)
// Parameters:

void UProgressModalWidget_C::OnBeginOutro()
{
	static auto Func = Class->GetFunction("ProgressModalWidget_C", "OnBeginOutro");

	Params::UProgressModalWidget_C_OnBeginOutro_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressModalWidget.ProgressModalWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UProgressModalWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("ProgressModalWidget_C", "Destruct");

	Params::UProgressModalWidget_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ProgressModalWidget.ProgressModalWidget_C.ExecuteUbergraph_ProgressModalWidget
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)

void UProgressModalWidget_C::ExecuteUbergraph_ProgressModalWidget(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static auto Func = Class->GetFunction("ProgressModalWidget_C", "ExecuteUbergraph_ProgressModalWidget");

	Params::UProgressModalWidget_C_ExecuteUbergraph_ProgressModalWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
