#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass KillerHealthAndShield.KillerHealthAndShield_C
// (None)

class UClass* UKillerHealthAndShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KillerHealthAndShield_C");

	return Clss;
}


// KillerHealthAndShield_C KillerHealthAndShield.Default__KillerHealthAndShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKillerHealthAndShield_C* UKillerHealthAndShield_C::GetDefaultObj()
{
	static class UKillerHealthAndShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKillerHealthAndShield_C*>(UKillerHealthAndShield_C::StaticClass()->DefaultObject);

	return Default;
}


// Function KillerHealthAndShield.KillerHealthAndShield_C.Set Health And Shield
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Health_PCT                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Shield_PCT                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UKillerHealthAndShield_C::Set_Health_And_Shield(float Health_PCT, float Shield_PCT)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillerHealthAndShield_C", "Set Health And Shield");

	Params::UKillerHealthAndShield_C_Set_Health_And_Shield_Params Parms{};

	Parms.Health_PCT = Health_PCT;
	Parms.Shield_PCT = Shield_PCT;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KillerHealthAndShield.KillerHealthAndShield_C.ExecuteUbergraph_KillerHealthAndShield
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Health_PCT                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Shield_PCT                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue_1                          (None)

void UKillerHealthAndShield_C::ExecuteUbergraph_KillerHealthAndShield(int32 EntryPoint, float K2Node_CustomEvent_Health_PCT, float K2Node_CustomEvent_Shield_PCT, float CallFunc_Multiply_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, class FText CallFunc_Conv_FloatToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KillerHealthAndShield_C", "ExecuteUbergraph_KillerHealthAndShield");

	Params::UKillerHealthAndShield_C_ExecuteUbergraph_KillerHealthAndShield_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_Health_PCT = K2Node_CustomEvent_Health_PCT;
	Parms.K2Node_CustomEvent_Shield_PCT = K2Node_CustomEvent_Shield_PCT;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Conv_FloatToText_ReturnValue_1 = CallFunc_Conv_FloatToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


