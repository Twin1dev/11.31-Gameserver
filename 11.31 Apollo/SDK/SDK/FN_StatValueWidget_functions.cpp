#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StatValueWidget.StatValueWidget_C
// (None)

class UClass* UStatValueWidget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StatValueWidget_C");

	return Clss;
}


// StatValueWidget_C StatValueWidget.Default__StatValueWidget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStatValueWidget_C* UStatValueWidget_C::GetDefaultObj()
{
	static class UStatValueWidget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStatValueWidget_C*>(UStatValueWidget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StatValueWidget.StatValueWidget_C.OnStatChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UStatValueWidget_C::OnStatChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatValueWidget_C", "OnStatChanged");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StatValueWidget.StatValueWidget_C.ExecuteUbergraph_StatValueWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaBaseStatView*         CallFunc_GetBaseStatView_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFortUIStatStyle            CallFunc_GetStatStyle_ReturnValue                                (ConstParm)
// float                              CallFunc_GetStat_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStatValueWidget_C::ExecuteUbergraph_StatValueWidget(int32 EntryPoint, class UAthenaBaseStatView* CallFunc_GetBaseStatView_ReturnValue, const struct FFortUIStatStyle& CallFunc_GetStatStyle_ReturnValue, float CallFunc_GetStat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StatValueWidget_C", "ExecuteUbergraph_StatValueWidget");

	Params::UStatValueWidget_C_ExecuteUbergraph_StatValueWidget_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetBaseStatView_ReturnValue = CallFunc_GetBaseStatView_ReturnValue;
	Parms.CallFunc_GetStatStyle_ReturnValue = CallFunc_GetStatStyle_ReturnValue;
	Parms.CallFunc_GetStat_ReturnValue = CallFunc_GetStat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


