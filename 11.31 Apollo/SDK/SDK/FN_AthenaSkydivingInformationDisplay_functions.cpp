#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaSkydivingInformationDisplay.AthenaSkydivingInformationDisplay_C
// (None)

class UClass* UAthenaSkydivingInformationDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaSkydivingInformationDisplay_C");

	return Clss;
}


// AthenaSkydivingInformationDisplay_C AthenaSkydivingInformationDisplay.Default__AthenaSkydivingInformationDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaSkydivingInformationDisplay_C* UAthenaSkydivingInformationDisplay_C::GetDefaultObj()
{
	static class UAthenaSkydivingInformationDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaSkydivingInformationDisplay_C*>(UAthenaSkydivingInformationDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaSkydivingInformationDisplay.AthenaSkydivingInformationDisplay_C.OnNewAltitude
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              NewAltitude                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSkydivingInformationDisplay_C::OnNewAltitude(float NewAltitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSkydivingInformationDisplay_C", "OnNewAltitude");

	Params::UAthenaSkydivingInformationDisplay_C_OnNewAltitude_Params Parms{};

	Parms.NewAltitude = NewAltitude;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSkydivingInformationDisplay.AthenaSkydivingInformationDisplay_C.OnNewDuration
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              NewDuration                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSkydivingInformationDisplay_C::OnNewDuration(float NewDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSkydivingInformationDisplay_C", "OnNewDuration");

	Params::UAthenaSkydivingInformationDisplay_C_OnNewDuration_Params Parms{};

	Parms.NewDuration = NewDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSkydivingInformationDisplay.AthenaSkydivingInformationDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaSkydivingInformationDisplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSkydivingInformationDisplay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSkydivingInformationDisplay.AthenaSkydivingInformationDisplay_C.OnStartSkydive
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSkydivingInformationDisplay_C::OnStartSkydive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSkydivingInformationDisplay_C", "OnStartSkydive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSkydivingInformationDisplay.AthenaSkydivingInformationDisplay_C.OnExitSkydive
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSkydivingInformationDisplay_C::OnExitSkydive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSkydivingInformationDisplay_C", "OnExitSkydive");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSkydivingInformationDisplay.AthenaSkydivingInformationDisplay_C.OnNewCurrentAltitude
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              NewCurrentAltitude                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSkydivingInformationDisplay_C::OnNewCurrentAltitude(float NewCurrentAltitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSkydivingInformationDisplay_C", "OnNewCurrentAltitude");

	Params::UAthenaSkydivingInformationDisplay_C_OnNewCurrentAltitude_Params Parms{};

	Parms.NewCurrentAltitude = NewCurrentAltitude;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSkydivingInformationDisplay.AthenaSkydivingInformationDisplay_C.OnNewNormalizedGroundAltitude
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              NormalizedGroundAltitude                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSkydivingInformationDisplay_C::OnNewNormalizedGroundAltitude(float NormalizedGroundAltitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSkydivingInformationDisplay_C", "OnNewNormalizedGroundAltitude");

	Params::UAthenaSkydivingInformationDisplay_C_OnNewNormalizedGroundAltitude_Params Parms{};

	Parms.NormalizedGroundAltitude = NormalizedGroundAltitude;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSkydivingInformationDisplay.AthenaSkydivingInformationDisplay_C.OnNewNormalizedOpeningAltitude
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              NormalizedOpeningAltitude                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSkydivingInformationDisplay_C::OnNewNormalizedOpeningAltitude(float NormalizedOpeningAltitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSkydivingInformationDisplay_C", "OnNewNormalizedOpeningAltitude");

	Params::UAthenaSkydivingInformationDisplay_C_OnNewNormalizedOpeningAltitude_Params Parms{};

	Parms.NormalizedOpeningAltitude = NormalizedOpeningAltitude;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSkydivingInformationDisplay.AthenaSkydivingInformationDisplay_C.OnNewNormalizedPlayerAltitude
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              NormalizedPlayerAltitude                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSkydivingInformationDisplay_C::OnNewNormalizedPlayerAltitude(float NormalizedPlayerAltitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSkydivingInformationDisplay_C", "OnNewNormalizedPlayerAltitude");

	Params::UAthenaSkydivingInformationDisplay_C_OnNewNormalizedPlayerAltitude_Params Parms{};

	Parms.NormalizedPlayerAltitude = NormalizedPlayerAltitude;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSkydivingInformationDisplay.AthenaSkydivingInformationDisplay_C.OnNewVerticalSpeed
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              NewVerticalSpeed                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSkydivingInformationDisplay_C::OnNewVerticalSpeed(float NewVerticalSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSkydivingInformationDisplay_C", "OnNewVerticalSpeed");

	Params::UAthenaSkydivingInformationDisplay_C_OnNewVerticalSpeed_Params Parms{};

	Parms.NewVerticalSpeed = NewVerticalSpeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSkydivingInformationDisplay.AthenaSkydivingInformationDisplay_C.OnEnterGlider
// (Event, Protected, BlueprintEvent)
// Parameters:

void UAthenaSkydivingInformationDisplay_C::OnEnterGlider()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSkydivingInformationDisplay_C", "OnEnterGlider");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaSkydivingInformationDisplay.AthenaSkydivingInformationDisplay_C.OnNewHorizontalSpeed
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              NewHorizontalSpeed                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSkydivingInformationDisplay_C::OnNewHorizontalSpeed(float NewHorizontalSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSkydivingInformationDisplay_C", "OnNewHorizontalSpeed");

	Params::UAthenaSkydivingInformationDisplay_C_OnNewHorizontalSpeed_Params Parms{};

	Parms.NewHorizontalSpeed = NewHorizontalSpeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaSkydivingInformationDisplay.AthenaSkydivingInformationDisplay_C.ExecuteUbergraph_AthenaSkydivingInformationDisplay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_NewAltitude                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_NewDuration                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_NewCurrentAltitude                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_NormalizedGroundAltitude                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_NormalizedOpeningAltitude                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_NormalizedPlayerAltitude                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_NewVerticalSpeed                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_FloatFloat_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_NewHorizontalSpeed                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              Temp_float_Variable_4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp_float_Variable_5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Select_Default_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaSkydivingInformationDisplay_C::ExecuteUbergraph_AthenaSkydivingInformationDisplay(int32 EntryPoint, float Temp_float_Variable, bool Temp_bool_Variable, float Temp_float_Variable_1, float Temp_float_Variable_2, float K2Node_Event_NewAltitude, float K2Node_Event_NewDuration, float CallFunc_Divide_FloatFloat_ReturnValue, float K2Node_Event_NewCurrentAltitude, float CallFunc_Divide_FloatFloat_ReturnValue_1, float K2Node_Event_NormalizedGroundAltitude, float CallFunc_Subtract_FloatFloat_ReturnValue, float K2Node_Event_NormalizedOpeningAltitude, float K2Node_Event_NormalizedPlayerAltitude, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float K2Node_Event_NewVerticalSpeed, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float K2Node_Select_Default, bool CallFunc_Greater_FloatFloat_ReturnValue_2, float K2Node_Event_NewHorizontalSpeed, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, float Temp_float_Variable_3, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool Temp_bool_Variable_1, float Temp_float_Variable_4, float K2Node_Select_Default_1, float Temp_float_Variable_5, bool Temp_bool_Variable_2, float K2Node_Select_Default_2, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaSkydivingInformationDisplay_C", "ExecuteUbergraph_AthenaSkydivingInformationDisplay");

	Params::UAthenaSkydivingInformationDisplay_C_ExecuteUbergraph_AthenaSkydivingInformationDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_float_Variable = Temp_float_Variable;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_float_Variable_1 = Temp_float_Variable_1;
	Parms.Temp_float_Variable_2 = Temp_float_Variable_2;
	Parms.K2Node_Event_NewAltitude = K2Node_Event_NewAltitude;
	Parms.K2Node_Event_NewDuration = K2Node_Event_NewDuration;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.K2Node_Event_NewCurrentAltitude = K2Node_Event_NewCurrentAltitude;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.K2Node_Event_NormalizedGroundAltitude = K2Node_Event_NormalizedGroundAltitude;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.K2Node_Event_NormalizedOpeningAltitude = K2Node_Event_NormalizedOpeningAltitude;
	Parms.K2Node_Event_NormalizedPlayerAltitude = K2Node_Event_NormalizedPlayerAltitude;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_2 = CallFunc_Subtract_FloatFloat_ReturnValue_2;
	Parms.K2Node_Event_NewVerticalSpeed = K2Node_Event_NewVerticalSpeed;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue = CallFunc_Greater_FloatFloat_ReturnValue;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_1 = CallFunc_Greater_FloatFloat_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Greater_FloatFloat_ReturnValue_2 = CallFunc_Greater_FloatFloat_ReturnValue_2;
	Parms.K2Node_Event_NewHorizontalSpeed = K2Node_Event_NewHorizontalSpeed;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.Temp_float_Variable_3 = Temp_float_Variable_3;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_1 = CallFunc_GetDynamicMaterial_ReturnValue_1;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.Temp_float_Variable_4 = Temp_float_Variable_4;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.Temp_float_Variable_5 = Temp_float_Variable_5;
	Parms.Temp_bool_Variable_2 = Temp_bool_Variable_2;
	Parms.K2Node_Select_Default_2 = K2Node_Select_Default_2;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue_2 = CallFunc_GetDynamicMaterial_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}


