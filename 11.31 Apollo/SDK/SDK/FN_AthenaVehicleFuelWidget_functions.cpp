#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass AthenaVehicleFuelWidget.AthenaVehicleFuelWidget_C
// (None)

class UClass* UAthenaVehicleFuelWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaVehicleFuelWidget_C");

	return Clss;
}


// AthenaVehicleFuelWidget_C AthenaVehicleFuelWidget.Default__AthenaVehicleFuelWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAthenaVehicleFuelWidget_C* UAthenaVehicleFuelWidget_C::GetDefaultObj()
{
	static class UAthenaVehicleFuelWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaVehicleFuelWidget_C*>(UAthenaVehicleFuelWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function AthenaVehicleFuelWidget.AthenaVehicleFuelWidget_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UAthenaVehicleFuelWidget_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaVehicleFuelWidget_C", "PreConstruct");

	Params::UAthenaVehicleFuelWidget_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaVehicleFuelWidget.AthenaVehicleFuelWidget_C.OnEnterVehicleWithFuel
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaVehicleFuelWidget_C::OnEnterVehicleWithFuel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaVehicleFuelWidget_C", "OnEnterVehicleWithFuel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaVehicleFuelWidget.AthenaVehicleFuelWidget_C.OnExitVehicleWithFuel
// (Event, Public, BlueprintEvent)
// Parameters:

void UAthenaVehicleFuelWidget_C::OnExitVehicleWithFuel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaVehicleFuelWidget_C", "OnExitVehicleWithFuel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function AthenaVehicleFuelWidget.AthenaVehicleFuelWidget_C.OnUpdateFuelPercent
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              FuelPercent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaVehicleFuelWidget_C::OnUpdateFuelPercent(float FuelPercent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaVehicleFuelWidget_C", "OnUpdateFuelPercent");

	Params::UAthenaVehicleFuelWidget_C_OnUpdateFuelPercent_Params Parms{};

	Parms.FuelPercent = FuelPercent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaVehicleFuelWidget.AthenaVehicleFuelWidget_C.OnUpdateSpeed
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              NewSpeed                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UAthenaVehicleFuelWidget_C::OnUpdateSpeed(float NewSpeed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaVehicleFuelWidget_C", "OnUpdateSpeed");

	Params::UAthenaVehicleFuelWidget_C_OnUpdateSpeed_Params Parms{};

	Parms.NewSpeed = NewSpeed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function AthenaVehicleFuelWidget.AthenaVehicleFuelWidget_C.ExecuteUbergraph_AthenaVehicleFuelWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_FuelPercent                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_Event_NewSpeed                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

void UAthenaVehicleFuelWidget_C::ExecuteUbergraph_AthenaVehicleFuelWidget(int32 EntryPoint, float K2Node_Event_FuelPercent, bool CallFunc_LessEqual_FloatFloat_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_Event_IsDesignTime, float K2Node_Event_NewSpeed, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaVehicleFuelWidget_C", "ExecuteUbergraph_AthenaVehicleFuelWidget");

	Params::UAthenaVehicleFuelWidget_C_ExecuteUbergraph_AthenaVehicleFuelWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_FuelPercent = K2Node_Event_FuelPercent;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_NewSpeed = K2Node_Event_NewSpeed;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


