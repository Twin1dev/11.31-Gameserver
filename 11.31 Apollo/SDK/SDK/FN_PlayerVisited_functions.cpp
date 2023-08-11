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


// Function PlayerVisited.PlayerVisited_C.EndOfShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerVisited_C::EndOfShow()
{
	static auto Func = Class->GetFunction("PlayerVisited_C", "EndOfShow");

	Params::UPlayerVisited_C_EndOfShow_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerVisited.PlayerVisited_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerVisited_C::Construct()
{
	static auto Func = Class->GetFunction("PlayerVisited_C", "Construct");

	Params::UPlayerVisited_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerVisited.PlayerVisited_C.OnNewVisited
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        LocalizedLocationName                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bIsNamedLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerVisited_C::OnNewVisited(class FText& LocalizedLocationName, bool bIsNamedLocation)
{
	static auto Func = Class->GetFunction("PlayerVisited_C", "OnNewVisited");

	Params::UPlayerVisited_C_OnNewVisited_Params Parms;

	Parms.LocalizedLocationName = LocalizedLocationName;
	Parms.bIsNamedLocation = bIsNamedLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerVisited.PlayerVisited_C.Brief Show Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerVisited_C::Brief_Show_Finished()
{
	static auto Func = Class->GetFunction("PlayerVisited_C", "Brief Show Finished");

	Params::UPlayerVisited_C_Brief_Show_Finished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerVisited.PlayerVisited_C.OnStompFailed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerVisited_C::OnStompFailed()
{
	static auto Func = Class->GetFunction("PlayerVisited_C", "OnStompFailed");

	Params::UPlayerVisited_C_OnStompFailed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerVisited.PlayerVisited_C.OnStompedByOtherWidget
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerVisited_C::OnStompedByOtherWidget()
{
	static auto Func = Class->GetFunction("PlayerVisited_C", "OnStompedByOtherWidget");

	Params::UPlayerVisited_C_OnStompedByOtherWidget_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerVisited.PlayerVisited_C.ExecuteUbergraph_PlayerVisited
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Event_LocalizedLocationName                               (ConstParm)
// bool                               K2Node_Event_bIsNamedLocation                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerVisited_C::ExecuteUbergraph_PlayerVisited(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class FText K2Node_Event_LocalizedLocationName, bool K2Node_Event_bIsNamedLocation, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, bool CallFunc_IsAnimationPlaying_ReturnValue, int32 K2Node_Select_Default, bool CallFunc_IsAnimationPlaying_ReturnValue_1)
{
	static auto Func = Class->GetFunction("PlayerVisited_C", "ExecuteUbergraph_PlayerVisited");

	Params::UPlayerVisited_C_ExecuteUbergraph_PlayerVisited_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Event_LocalizedLocationName = K2Node_Event_LocalizedLocationName;
	Parms.K2Node_Event_bIsNamedLocation = K2Node_Event_bIsNamedLocation;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue_1 = CallFunc_IsAnimationPlaying_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
