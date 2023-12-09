#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass LetoBorder.LetoBorder_C
// (None)

class UClass* ULetoBorder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LetoBorder_C");

	return Clss;
}


// LetoBorder_C LetoBorder.Default__LetoBorder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULetoBorder_C* ULetoBorder_C::GetDefaultObj()
{
	static class ULetoBorder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULetoBorder_C*>(ULetoBorder_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LetoBorder.LetoBorder_C.UpdateBorderWidth
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              HalfBorderWidth                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULetoBorder_C::UpdateBorderWidth(float HalfBorderWidth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LetoBorder_C", "UpdateBorderWidth");

	Params::ULetoBorder_C_UpdateBorderWidth_Params Parms{};

	Parms.HalfBorderWidth = HalfBorderWidth;

	UObject::ProcessEvent(Func, &Parms);

}


// Function LetoBorder.LetoBorder_C.ExecuteUbergraph_LetoBorder
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_HalfBorderWidth                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMargin                     K2Node_MakeStruct_Margin                                         (ZeroConstructor, IsPlainOldData, NoDestructor)

void ULetoBorder_C::ExecuteUbergraph_LetoBorder(int32 EntryPoint, float K2Node_Event_HalfBorderWidth, const struct FMargin& K2Node_MakeStruct_Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LetoBorder_C", "ExecuteUbergraph_LetoBorder");

	Params::ULetoBorder_C_ExecuteUbergraph_LetoBorder_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_HalfBorderWidth = K2Node_Event_HalfBorderWidth;
	Parms.K2Node_MakeStruct_Margin = K2Node_MakeStruct_Margin;

	UObject::ProcessEvent(Func, &Parms);

}

}


