#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LevelUpVisuals.LevelUpVisuals_C
// (None)

class UClass* ULevelUpVisuals_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelUpVisuals_C");

	return Clss;
}


// LevelUpVisuals_C LevelUpVisuals.Default__LevelUpVisuals_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULevelUpVisuals_C* ULevelUpVisuals_C::GetDefaultObj()
{
	static class ULevelUpVisuals_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelUpVisuals_C*>(ULevelUpVisuals_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LevelUpVisuals.LevelUpVisuals_C.Post100LayeredAnim
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULevelUpVisuals_C::Post100LayeredAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelUpVisuals_C", "Post100LayeredAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LevelUpVisuals.LevelUpVisuals_C.ToggleText
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULevelUpVisuals_C::ToggleText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelUpVisuals_C", "ToggleText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LevelUpVisuals.LevelUpVisuals_C.FireLevelReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULevelUpVisuals_C::FireLevelReward()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelUpVisuals_C", "FireLevelReward");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LevelUpVisuals.LevelUpVisuals_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULevelUpVisuals_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelUpVisuals_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LevelUpVisuals.LevelUpVisuals_C.EventStartAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULevelUpVisuals_C::EventStartAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelUpVisuals_C", "EventStartAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LevelUpVisuals.LevelUpVisuals_C.EventIntroAnimComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULevelUpVisuals_C::EventIntroAnimComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelUpVisuals_C", "EventIntroAnimComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LevelUpVisuals.LevelUpVisuals_C.EventComplete
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULevelUpVisuals_C::EventComplete()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelUpVisuals_C", "EventComplete");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LevelUpVisuals.LevelUpVisuals_C.Play XP Intro Sound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULevelUpVisuals_C::Play_XP_Intro_Sound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelUpVisuals_C", "Play XP Intro Sound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LevelUpVisuals.LevelUpVisuals_C.EventLayeredPrestige
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULevelUpVisuals_C::EventLayeredPrestige()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelUpVisuals_C", "EventLayeredPrestige");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LevelUpVisuals.LevelUpVisuals_C.ExecuteUbergraph_LevelUpVisuals
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class USoundBase*                  Temp_object_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  Temp_object_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundBase*                  K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULevelUpVisuals_C::ExecuteUbergraph_LevelUpVisuals(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_Variable, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelUpVisuals_C", "ExecuteUbergraph_LevelUpVisuals");

	Params::ULevelUpVisuals_C_ExecuteUbergraph_LevelUpVisuals_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LevelUpVisuals.LevelUpVisuals_C.DispatchShowReward__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULevelUpVisuals_C::DispatchShowReward__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelUpVisuals_C", "DispatchShowReward__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function LevelUpVisuals.LevelUpVisuals_C.DispatchComplete__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULevelUpVisuals_C::DispatchComplete__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LevelUpVisuals_C", "DispatchComplete__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


