#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Violator_ActivityInfo.Violator_ActivityInfo_C
// (None)

class UClass* UViolator_ActivityInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Violator_ActivityInfo_C");

	return Clss;
}


// Violator_ActivityInfo_C Violator_ActivityInfo.Default__Violator_ActivityInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UViolator_ActivityInfo_C* UViolator_ActivityInfo_C::GetDefaultObj()
{
	static class UViolator_ActivityInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UViolator_ActivityInfo_C*>(UViolator_ActivityInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Violator_ActivityInfo.Violator_ActivityInfo_C.Create Backplate MIDs
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UViolator_ActivityInfo_C::Create_Backplate_MIDs(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Violator_ActivityInfo_C", "Create Backplate MIDs");

	Params::UViolator_ActivityInfo_C_Create_Backplate_MIDs_Params Parms{};

	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Violator_ActivityInfo.Violator_ActivityInfo_C.HandleStyling-TextCallout
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_Large_Display                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UViolator_ActivityInfo_C::HandleStylingMinusTextCallout(bool Is_Large_Display, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Violator_ActivityInfo_C", "HandleStyling-TextCallout");

	Params::UViolator_ActivityInfo_C_HandleStylingMinusTextCallout_Params Parms{};

	Parms.Is_Large_Display = Is_Large_Display;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue_1 = CallFunc_MakeLiteralFloat_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue_2 = CallFunc_MakeLiteralFloat_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Violator_ActivityInfo.Violator_ActivityInfo_C.HandleStyling-Timer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Is_Large_Display                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UViolator_ActivityInfo_C::HandleStylingMinusTimer(bool Is_Large_Display, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_MakeLiteralFloat_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Violator_ActivityInfo_C", "HandleStyling-Timer");

	Params::UViolator_ActivityInfo_C_HandleStylingMinusTimer_Params Parms{};

	Parms.Is_Large_Display = Is_Large_Display;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue_1 = CallFunc_MakeLiteralFloat_ReturnValue_1;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue_2 = CallFunc_MakeLiteralFloat_ReturnValue_2;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Violator_ActivityInfo.Violator_ActivityInfo_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UViolator_ActivityInfo_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Violator_ActivityInfo_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Violator_ActivityInfo.Violator_ActivityInfo_C.OnChallengeSet
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FTimerDisplayData           DisplayStyle                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UViolator_ActivityInfo_C::OnChallengeSet(struct FTimerDisplayData& DisplayStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Violator_ActivityInfo_C", "OnChallengeSet");

	Params::UViolator_ActivityInfo_C_OnChallengeSet_Params Parms{};

	Parms.DisplayStyle = DisplayStyle;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Violator_ActivityInfo.Violator_ActivityInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UViolator_ActivityInfo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Violator_ActivityInfo_C", "PreConstruct");

	Params::UViolator_ActivityInfo_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Violator_ActivityInfo.Violator_ActivityInfo_C.ExecuteUbergraph_Violator_ActivityInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerDisplayData           K2Node_Event_DisplayStyle                                        (ConstParm)

void UViolator_ActivityInfo_C::ExecuteUbergraph_Violator_ActivityInfo(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FTimerDisplayData& K2Node_Event_DisplayStyle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Violator_ActivityInfo_C", "ExecuteUbergraph_Violator_ActivityInfo");

	Params::UViolator_ActivityInfo_C_ExecuteUbergraph_Violator_ActivityInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_DisplayStyle = K2Node_Event_DisplayStyle;

	UObject::ProcessEvent(Func, &Parms);

}

}


