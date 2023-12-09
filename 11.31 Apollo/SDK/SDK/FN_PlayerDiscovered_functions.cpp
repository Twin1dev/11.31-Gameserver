#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass PlayerDiscovered.PlayerDiscovered_C
// (None)

class UClass* UPlayerDiscovered_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerDiscovered_C");

	return Clss;
}


// PlayerDiscovered_C PlayerDiscovered.Default__PlayerDiscovered_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerDiscovered_C* UPlayerDiscovered_C::GetDefaultObj()
{
	static class UPlayerDiscovered_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerDiscovered_C*>(UPlayerDiscovered_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerDiscovered.PlayerDiscovered_C.EndOfShow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerDiscovered_C::EndOfShow()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerDiscovered_C", "EndOfShow");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerDiscovered.PlayerDiscovered_C.OnNewDiscovery
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// class FText                        LocalizedLocationName                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bIsNamedLocation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerDiscovered_C::OnNewDiscovery(class FText& LocalizedLocationName, bool bIsNamedLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerDiscovered_C", "OnNewDiscovery");

	Params::UPlayerDiscovered_C_OnNewDiscovery_Params Parms{};

	Parms.LocalizedLocationName = LocalizedLocationName;
	Parms.bIsNamedLocation = bIsNamedLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerDiscovered.PlayerDiscovered_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UPlayerDiscovered_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerDiscovered_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerDiscovered.PlayerDiscovered_C.Brief Show Finished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerDiscovered_C::Brief_Show_Finished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerDiscovered_C", "Brief Show Finished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerDiscovered.PlayerDiscovered_C.OnStompFailed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerDiscovered_C::OnStompFailed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerDiscovered_C", "OnStompFailed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerDiscovered.PlayerDiscovered_C.OnStompedByOtherWidget
// (Event, Protected, BlueprintEvent)
// Parameters:

void UPlayerDiscovered_C::OnStompedByOtherWidget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerDiscovered_C", "OnStompedByOtherWidget");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerDiscovered.PlayerDiscovered_C.Play Brief Show Sound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerDiscovered_C::Play_Brief_Show_Sound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerDiscovered_C", "Play Brief Show Sound");



	UObject::ProcessEvent(Func, nullptr);

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerDiscovered_C", "ExecuteUbergraph_PlayerDiscovered");

	Params::UPlayerDiscovered_C_ExecuteUbergraph_PlayerDiscovered_Params Parms{};

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


