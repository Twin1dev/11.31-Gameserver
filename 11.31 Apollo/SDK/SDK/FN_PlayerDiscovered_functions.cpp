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


// Function PlayerDiscovered.PlayerDiscovered_C.EndOfShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerDiscovered_C::EndOfShow()
{
	static auto Func = Class->GetFunction("PlayerDiscovered_C", "EndOfShow");

	Params::UPlayerDiscovered_C_EndOfShow_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerDiscovered.PlayerDiscovered_C.OnNewDiscovery
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        LocalizedLocationName                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bIsNamedLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerDiscovered_C::OnNewDiscovery(class FText& LocalizedLocationName, bool bIsNamedLocation)
{
	static auto Func = Class->GetFunction("PlayerDiscovered_C", "OnNewDiscovery");

	Params::UPlayerDiscovered_C_OnNewDiscovery_Params Parms;

	Parms.LocalizedLocationName = LocalizedLocationName;
	Parms.bIsNamedLocation = bIsNamedLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerDiscovered.PlayerDiscovered_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerDiscovered_C::Construct()
{
	static auto Func = Class->GetFunction("PlayerDiscovered_C", "Construct");

	Params::UPlayerDiscovered_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerDiscovered.PlayerDiscovered_C.Brief Show Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerDiscovered_C::Brief_Show_Finished()
{
	static auto Func = Class->GetFunction("PlayerDiscovered_C", "Brief Show Finished");

	Params::UPlayerDiscovered_C_Brief_Show_Finished_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerDiscovered.PlayerDiscovered_C.OnStompFailed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerDiscovered_C::OnStompFailed()
{
	static auto Func = Class->GetFunction("PlayerDiscovered_C", "OnStompFailed");

	Params::UPlayerDiscovered_C_OnStompFailed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerDiscovered.PlayerDiscovered_C.OnStompedByOtherWidget
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerDiscovered_C::OnStompedByOtherWidget()
{
	static auto Func = Class->GetFunction("PlayerDiscovered_C", "OnStompedByOtherWidget");

	Params::UPlayerDiscovered_C_OnStompedByOtherWidget_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerDiscovered.PlayerDiscovered_C.Play Brief Show Sound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerDiscovered_C::Play_Brief_Show_Sound()
{
	static auto Func = Class->GetFunction("PlayerDiscovered_C", "Play Brief Show Sound");

	Params::UPlayerDiscovered_C_Play_Brief_Show_Sound_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerDiscovered.PlayerDiscovered_C.ExecuteUbergraph_PlayerDiscovered
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        K2Node_Event_LocalizedLocationName                               (ConstParm)
// bool                               K2Node_Event_bIsNamedLocation                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsMobileGame_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FWidgetTransform            K2Node_MakeStruct_WidgetTransform                                (NoDestructor)

void UPlayerDiscovered_C::ExecuteUbergraph_PlayerDiscovered(int32 EntryPoint, bool Temp_bool_Variable, class FText K2Node_Event_LocalizedLocationName, bool K2Node_Event_bIsNamedLocation, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable_1, int32 K2Node_Select_Default, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform)
{
	static auto Func = Class->GetFunction("PlayerDiscovered_C", "ExecuteUbergraph_PlayerDiscovered");

	Params::UPlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Event_LocalizedLocationName = K2Node_Event_LocalizedLocationName;
	Parms.K2Node_Event_bIsNamedLocation = K2Node_Event_bIsNamedLocation;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsMobileGame_ReturnValue = CallFunc_IsMobileGame_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MakeStruct_WidgetTransform = K2Node_MakeStruct_WidgetTransform;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
