#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaWatcherEye.AthenaWatcherEye_C
// (None)

class UClass* UAthenaWatcherEye_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaWatcherEye_C");

	return Clss;
}


// AthenaWatcherEye_C AthenaWatcherEye.Default__AthenaWatcherEye_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaWatcherEye_C* UAthenaWatcherEye_C::GetDefaultObj()
{
	static class UAthenaWatcherEye_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaWatcherEye_C*>(UAthenaWatcherEye_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaWatcherEye.AthenaWatcherEye_C.SpectatorAdded_Watcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaWatcherEye_C::SpectatorAdded_Watcher()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaWatcherEye_C", "SpectatorAdded_Watcher");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaWatcherEye.AthenaWatcherEye_C.Hide_Watcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaWatcherEye_C::Hide_Watcher()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaWatcherEye_C", "Hide_Watcher");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaWatcherEye.AthenaWatcherEye_C.Show_Watcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaWatcherEye_C::Show_Watcher()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaWatcherEye_C", "Show_Watcher");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaWatcherEye.AthenaWatcherEye_C.End_Watcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaWatcherEye_C::End_Watcher()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaWatcherEye_C", "End_Watcher");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaWatcherEye.AthenaWatcherEye_C.SpectatorRemoved_Watcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaWatcherEye_C::SpectatorRemoved_Watcher()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaWatcherEye_C", "SpectatorRemoved_Watcher");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaWatcherEye.AthenaWatcherEye_C.Begin_Watcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ManySpectatorsJoining                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaWatcherEye_C::Begin_Watcher(bool ManySpectatorsJoining)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaWatcherEye_C", "Begin_Watcher");

	Params::UAthenaWatcherEye_C_Begin_Watcher_Params Parms{};

	Parms.ManySpectatorsJoining = ManySpectatorsJoining;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaWatcherEye.AthenaWatcherEye_C.ManySpectatorsAdded_Watcher
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UAthenaWatcherEye_C::ManySpectatorsAdded_Watcher()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaWatcherEye_C", "ManySpectatorsAdded_Watcher");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaWatcherEye.AthenaWatcherEye_C.ExecuteUbergraph_AthenaWatcherEye
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// UDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsAnyAnimationPlaying_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetEndTime_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetEndTime_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnyAnimationPlaying_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnyAnimationPlaying_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_ManySpectatorsJoining                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsAnyAnimationPlaying_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetAnimation*            K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UWidgetAnimation*            K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_5                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaWatcherEye_C::ExecuteUbergraph_AthenaWatcherEye(int32 EntryPoint, bool Temp_bool_Variable, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsAnyAnimationPlaying_ReturnValue, float CallFunc_GetEndTime_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_GetEndTime_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsAnyAnimationPlaying_ReturnValue_1, bool CallFunc_IsAnyAnimationPlaying_ReturnValue_2, bool K2Node_CustomEvent_ManySpectatorsJoining, bool CallFunc_IsAnyAnimationPlaying_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool Temp_bool_Variable_1, class UWidgetAnimation* K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, float CallFunc_RandomFloatInRange_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UWidgetAnimation* K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaWatcherEye_C", "ExecuteUbergraph_AthenaWatcherEye");

	Params::UAthenaWatcherEye_C_ExecuteUbergraph_AthenaWatcherEye_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_IsAnyAnimationPlaying_ReturnValue = CallFunc_IsAnyAnimationPlaying_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue = CallFunc_GetEndTime_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_GetEndTime_ReturnValue_1 = CallFunc_GetEndTime_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_IsAnyAnimationPlaying_ReturnValue_1 = CallFunc_IsAnyAnimationPlaying_ReturnValue_1;
	Parms.CallFunc_IsAnyAnimationPlaying_ReturnValue_2 = CallFunc_IsAnyAnimationPlaying_ReturnValue_2;
	Parms.K2Node_CustomEvent_ManySpectatorsJoining = K2Node_CustomEvent_ManySpectatorsJoining;
	Parms.CallFunc_IsAnyAnimationPlaying_ReturnValue_3 = CallFunc_IsAnyAnimationPlaying_ReturnValue_3;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_5 = CallFunc_PlayAnimation_ReturnValue_5;

	UObject::ProcessEvent(Func, &Parms);

}

}


